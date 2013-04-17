#ifndef CLICK_SRForwarder_HH
#define CLICK_SRForwarder_HH
#include <click/element.hh>
#include <click/glue.hh>
#include <click/timer.hh>
#include <click/ipaddress.hh>
#include <click/etheraddress.hh>
#include <elements/wifi/linktable.hh>
#include <click/vector.hh>
#include <elements/wifi/path.hh>
CLICK_DECLS

/*
=c

SRForwarder(ETHERTYPE, IP, ETH, ARPTable element, LT LinkTable element
    [ETT element], [METRIC GridGenericMetric] )

=s Wifi, Wireless Routing

Forwards source-routed packets.

=d
DSR-inspired ad-hoc routing protocol.
Input 0: packets that I receive off the wire
Output 0: Outgoing ethernet packets that I forward
Output 1: packets that were addressed to me.


Normally used in conjuction with ETT element

 */


class SRForwarder : public Element {
 public:
  
  SRForwarder();
  ~SRForwarder();
  
  const char *class_name() const		{ return "SRForwarder"; }
  const char *port_count() const		{ return "1/2"; }
  const char *processing() const		{ return PUSH; }
  int initialize(ErrorHandler *);
  int configure(Vector<String> &conf, ErrorHandler *errh);

  /* handler stuff */
  void add_handlers();

  static String static_print_stats(Element *e, void *);
  String print_stats();
  static String static_print_routes(Element *e, void *);
  String print_routes();

  void push(int, Packet *);
  
  Packet *encap(Packet *, Vector<IPAddress>, int flags);
  IPAddress ip() { return _ip; }
private:

  IPAddress _ip;    // My IP address.
  EtherAddress _eth; // My ethernet address.
  uint16_t _et;     // This protocol's ethertype
  // Statistics for handlers.
  int _datas;
  int _databytes;

  EtherAddress _bcast;

  class LinkTable *_link_table;
  class ARPTable *_arp_table;
  
  class PathInfo {
  public:
    Path _p;
    int _seq;
    void reset() { _seq = 0; }
    PathInfo() :  _p() { reset(); }
    PathInfo(Path p) :  _p(p)  { reset(); }
  };
  typedef HashMap<Path, PathInfo> PathTable;
  PathTable _paths;
  
  bool update_link(IPAddress from, IPAddress to, 
		   uint32_t seq, uint32_t age, uint32_t metric);
};


CLICK_ENDDECLS
#endif
