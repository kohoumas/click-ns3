/* include/click/config-linuxmodule.h.  Generated from config-linuxmodule.h.in by configure.  */
/* Process this file with configure to produce config-linuxmodule.h. -*- mode: c -*- */
#ifndef CLICK_CONFIG_LINUXMODULE_H
#define CLICK_CONFIG_LINUXMODULE_H

/* Define if Click should use an adaptive scheduler to share the CPU(s) more
   fairly with the kernel. */
/* #undef HAVE_ADAPTIVE_SCHEDULER */

/* Define if the AUTOCONF_INCLUDED symbol should be checked. */
/* #undef HAVE_CHECK_AUTOCONF_INCLUDED */

/* Define if your Linux kernel has Click extensions. */
/* #undef HAVE_CLICK_KERNEL */

/* Define if your Linux kernel has Click transmit notification extensions. */
/* #undef HAVE_CLICK_KERNEL_TX_NOTIFY */

/* Define if fast checksum functions available. */
#define HAVE_FAST_CHECKSUM 1

/* Define if 'int64_t' is typedefed to 'long' in linuxmodule. */
/* #undef HAVE_INT64_IS_LONG_LINUXMODULE */

/* Define if 'int64_t' is typedefed to 'long long' in linuxmodule. */
/* #undef HAVE_INT64_IS_LONG_LONG_LINUXMODULE */

/* Define to enable assertion checking. Failed assertions will print a message
   and optionally stop the router. */
/* #undef HAVE_KERNEL_ASSERT */

/* Define if you have the <asm/alternative.h> header file. */
/* #undef HAVE_LINUX_ASM_ALTERNATIVE_H */

/* Define if you have the <asm/system.h> header file. */
/* #undef HAVE_LINUX_ASM_SYSTEM_H */

/* Define if your Linux kernel architecture defines atomic_add_return. */
/* #undef HAVE_LINUX_ATOMIC_ADD_RETURN */

/* Define if your Linux kernel architecture defines atomic_set_mask. */
/* #undef HAVE_LINUX_ATOMIC_SET_MASK */

/* Define if your Linux kernel has files_lock. */
/* #undef HAVE_LINUX_FILES_LOCK */

/* Define if your Linux kernel has files_lglock. */
/* #undef HAVE_LINUX_FILES_LGLOCK */

/* Define if your Linux kernel has dev_ioctl. */
/* #undef HAVE_LINUX_DEV_IOCTL */

/* Define if your Linux kernel has devinet_ioctl. */
/* #undef HAVE_LINUX_DEVINET_IOCTL */

/* Define if your Linux kernel has inet_ctl_sock_create. */
/* #undef HAVE_LINUX_INET_CTL_SOCK_CREATE */

/* Define if your Linux kernel has inet_ioctl. */
/* #undef HAVE_LINUX_INET_IOCTL */

/* Define if you have the <linux/ktime.h> header file. */
/* #undef HAVE_LINUX_KTIME_H */

/* Define if your Linux kernel has polling extensions. */
/* #undef HAVE_LINUX_POLLING */

/* Define if your Linux kernel has read_net_skbcount. */
/* #undef HAVE_LINUX_READ_NET_SKBCOUNT */

/* Define if your Linux kernel has sb_lock. */
/* #undef HAVE_LINUX_SB_LOCK */

/* Define if 'struct skb_shared_info' has a 'gso_size' member. */
/* #undef HAVE_LINUX_SKB_SHINFO_GSO_SIZE */

/* Define if 'struct skb_shared_info' has an 'ip6_frag_id' member. */
/* #undef HAVE_LINUX_SKB_SHINFO_IP6_FRAG_ID */

/* Define if 'struct skb_shared_info' has a 'tso_size' member. */
/* #undef HAVE_LINUX_SKB_SHINFO_TSO_SIZE */

/* Define if 'struct skb_shared_info' has a 'ufo_size' member. */
/* #undef HAVE_LINUX_SKB_SHINFO_UFO_SIZE */

/* Define if 'struct sk_buff' has an 'fclone' member. */
/* #undef HAVE_LINUX_SKBUFF_FCLONE */

/* Define if 'struct sk_buff' has a 'security' member. */
/* #undef HAVE_LINUX_SKBUFF_SECURITY */

/* Define if your Linux kernel exposes strlen. */
/* #undef HAVE_LINUX_STRLEN_EXPOSED */

/* Define if your Linux kernel has tulip_interrupt_hook. */
/* #undef HAVE_LINUX_TULIP_INTERRUPT_HOOK */

/* Define if the Click linuxmodule is compiled for a 2.6 kernel. */
/* #undef HAVE_LINUXMODULE_2_6 */

/* Define if the linuxmodule driver might run multiple threads. */
/* #undef HAVE_LINUXMODULE_MULTITHREAD */

/* Define if you have the net_enable_timestamp function. */
/* #undef HAVE_NET_ENABLE_TIMESTAMP */

/* Define if you have the netdev_get_tx_queue function. */
/* #undef HAVE_NETDEV_GET_TX_QUEUE */

/* Define if you have the netdev_uses_dsa_tags function. */
/* #undef HAVE_NETDEV_USES_DSA_TAGS */

/* Define if you have the netdev_uses_trailer_tags function. */
/* #undef HAVE_NETDEV_USES_TRAILER_TAGS */

/* Define if your Linux kernel has netdev_rx_handler_register. */
/* #undef HAVE_LINUX_NETDEV_RX_HANDLER_REGISTER */

/* Define if netif_receive_skb takes 3 arguments. */
/* #undef HAVE_NETIF_RECEIVE_SKB_EXTENDED */

/* Define if you have the netif_tx_lock function. */
/* #undef HAVE_NETIF_TX_LOCK */

/* Define if you have the netif_tx_queue_frozen function. */
/* #undef HAVE_NETIF_TX_QUEUE_FROZEN */

/* Define if you have the skb_dst_drop function. */
/* #undef HAVE_SKB_DST_DROP */

/* Define if you have the skb_linearize function. */
/* #undef HAVE_SKB_LINEARIZE */

/* Define if you have the skb_recycle function. */
/* #undef HAVE_SKB_RECYCLE */

/* Define if you have the strnlen function. */
#define HAVE_STRNLEN 1

/* Define to 1 if Linux defines the type 'uintptr_t'. */
/* #undef HAVE_UINTPTR_T_LINUXMODULE */

/* The size of a `click_jiffies_t', as computed by sizeof. */
#define SIZEOF_CLICK_JIFFIES_T SIZEOF_LONG

/* Define HAVE_INT64_IS_LONG based on HAVE_INT64_IS_LONG_LINUXMODULE. */
#ifdef HAVE_INT64_IS_LONG_LINUXMODULE
# define HAVE_INT64_IS_LONG HAVE_INT64_IS_LONG_LINUXMODULE
#endif

/* Define HAVE_INT64_IS_LONG_LONG based on HAVE_INT64_IS_LONG_LONG_LINUXMODULE. */
#if defined(HAVE_LONG_LONG) && HAVE_LONG_LONG && defined(HAVE_INT64_IS_LONG_LONG_LINUXMODULE)
# define HAVE_INT64_IS_LONG_LONG HAVE_INT64_IS_LONG_LONG_LINUXMODULE
#endif

/* Define HAVE_MULTITHREAD based on HAVE_LINUXMODULE_MULTITHREAD. */
#ifdef HAVE_LINUXMODULE_MULTITHREAD
# define HAVE_MULTITHREAD HAVE_LINUXMODULE_MULTITHREAD
#endif

/* Define if fast checksum functions require correct alignment. */
#ifndef __i386__
# define FAST_CHECKSUM_ALIGNED 1
#endif

/* Below here only for normal Click compiles. */
#ifndef CLICK_CONFIG_LINUXMODULE_SYMBOLS_ONLY

/* Define stuff under a Linux module. */
#ifndef __linux__
# error "I must be compiled on a Linux machine"
#endif
#define __KERNEL__ 1
#define MODULE 1

/* Include Linux configuration and type definitions. */
#if HAVE_CHECK_AUTOCONF_INCLUDED && !defined(AUTOCONF_INCLUDED)
# include <linux/autoconf.h>
#endif
#include <linux/version.h>
#ifdef __cplusplus
# include <click/cxxprotect.h>
# include <asm/types.h>
# include <linux/types.h>
# include <click/cxxunprotect.h>
#else
# include <asm/types.h>
# include <linux/types.h>
#endif
typedef ptrdiff_t intptr_t;
#if !HAVE_UINTPTR_T_LINUXMODULE
typedef unsigned long uintptr_t;
#endif

/* Define KBUILD symbols. */
#if !defined(KBUILD_STR) && HAVE_LINUXMODULE_2_6
# define KBUILD_STR(s)		#s
# define KBUILD_BASENAME	KBUILD_STR(click)
# define KBUILD_MODNAME		KBUILD_STR(click)
#endif

#ifdef __cplusplus

/* Declare operator new. */
void *operator new(size_t) throw ();
void *operator new[](size_t) throw ();

/* Provide placement new. */
inline void *operator new(size_t, void *v) { return v; }
#define HAVE_PLACEMENT_NEW 1

/* Define macros that surround Click declarations. */
#define CLICK_DECLS		/* */
#define CLICK_ENDDECLS		/* */
#define CLICK_USING_DECLS	/* */
#define CLICK_NAME(name)	::name

/* Fix incompatibilities between some Linux versions and Click/C++. */
#include <click/fixconfig.h>

#endif /* __cplusplus */

/* Define assert macro. */
# ifdef __cplusplus
extern "C" {
# endif
void click_assert_failed(const char *file, int line, const char *problem_text);
# ifdef __cplusplus
}
# endif

#ifdef HAVE_KERNEL_ASSERT
# define assert(x)	((x) ? (void)0 : click_assert_failed(__FILE__, __LINE__, #x))
#else
# define assert(x)	/* nada */
#endif

/* Some architectures do not have builtin integer functions in kernel. */
#if defined(__MIPSEL__) || defined(__MIPSEB__)
# define HAVE_NO_INTEGER_BUILTINS 1
#endif

#endif /* CLICK_CONFIG_LINUXMODULE_SYMBOLS_ONLY */
#endif /* CLICK_CONFIG_LINUXMODULE_H */
