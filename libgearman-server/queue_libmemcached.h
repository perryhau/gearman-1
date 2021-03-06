/* Gearman server and library
 * Copyright (C) 2008 Brian Aker, Eric Day
 * All rights reserved.
 *
 * Use and distribution licensed under the BSD license.  See
 * the COPYING file in the parent directory for full text.
 */

/**
 * @file
 * @brief libmemcached Queue Storage Declarations
 */

#ifndef __GEARMAN_SERVER_QUEUE_LIBMEMCACHED_H__
#define __GEARMAN_SERVER_QUEUE_LIBMEMCACHED_H__

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup gearman_queue_libmemcached libmemcached Queue Storage Declarations
 * @ingroup gearman_server_queue
 * @{
 */

/**
 * Get module configuration options.
 */
GEARMAN_API
gearman_return_t gearman_server_queue_libmemcached_conf(gearman_conf_st *conf);

/**
 * Initialize the queue.
 */
GEARMAN_API
gearman_return_t
gearman_server_queue_libmemcached_init(gearman_server_st *server,
                                       gearman_conf_st *conf);

/**
 * De-initialize the queue.
 */
GEARMAN_API
gearman_return_t
gearman_server_queue_libmemcached_deinit(gearman_server_st *server);

/**
 * Initialize the queue for a gearmand object.
 */
GEARMAN_API
gearman_return_t gearmand_queue_libmemcached_init(gearmand_st *gearmand,
                                                  gearman_conf_st *conf);

/**
 * De-initialize the queue for a gearmand object.
 */
GEARMAN_API
gearman_return_t gearmand_queue_libmemcached_deinit(gearmand_st *gearmand);

/** @} */

#ifdef __cplusplus
}
#endif

#endif /* __GEARMAN_SERVER_QUEUE_LIBMEMCACHED_H__ */
