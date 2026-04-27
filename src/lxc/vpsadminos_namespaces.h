/* SPDX-License-Identifier: LGPL-2.1+ */

#ifndef __LXC_VPSADMINOS_NAMESPACES_H
#define __LXC_VPSADMINOS_NAMESPACES_H

#include "config.h"

#include <stdint.h>

#if defined(__has_include)
#if __has_include(<linux/lsm.h>)
#include <linux/lsm.h>
#endif
#else
#include <linux/lsm.h>
#endif

/*
 * The vpsAdminOS 6.18 namespace requests are intentionally usable with older
 * userspace headers. Runtime support is still detected by the syscall result.
 */
#ifndef LSM_ID_UNDEF
struct lsm_ctx {
	uint64_t id;
	uint64_t flags;
	uint64_t len;
	uint64_t ctx_len;
	uint8_t ctx[];
};

#define LSM_ID_UNDEF		0
#endif

#ifndef LSM_ID_SELINUX
#define LSM_ID_SELINUX		101
#endif

#ifndef LSM_ID_APPARMOR
#define LSM_ID_APPARMOR		104
#endif

#ifndef LSM_ATTR_UNSHARE
#define LSM_ATTR_UNSHARE	106
#endif

#ifndef SYSLOG_ACTION_NEW_TRACING_NS
#define SYSLOG_ACTION_NEW_TRACING_NS	12
#endif

#endif /* __LXC_VPSADMINOS_NAMESPACES_H */
