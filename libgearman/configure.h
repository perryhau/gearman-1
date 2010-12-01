/* Gearman
 * Copyright (C) 2010 Brian Aker
 * All rights reserved.
 *
 * Use and distribution licensed under the BSD license.  See
 * the COPYING file in the parent directory for full text.
 *
 * Summary: Autogenerated file for configure bits.
 *
 */

#ifndef __GEARMAN_CONFIGURE_H__
#define __GEARMAN_CONFIGURE_H__

#ifdef __cplusplus
extern "C" {
#endif

#define LIBGEARMAN_OPTIMIZE_BITFIELD 1

#if LIBGEARMAN_OPTIMIZE_BITFIELD == 1
#define LIBGEARMAN_BITFIELD :1
#else
#define LIBGEARMAN_BITFIELD
#endif

#define LIBGEARMAN_VERSION_STRING "0.14"
#define LIBGEARMAN_VERSION_HEX 0x00014000

#ifdef __cplusplus
}
#endif

#endif /* __GEARMAN_CONFIGURE_H__ */
