/* This work is licensed under a Creative Commons CCZero 1.0 Universal License.
 * See http://creativecommons.org/publicdomain/zero/1.0/ for more information.
 *
 *    Copyright 2016-2017 (c) Julius Pfrommer, Fraunhofer IOSB
 *    Copyright 2017-2018 (c) Stefan Profanter, fortiss GmbH
 *    Copyright 2018 (c) Jose Cabral, fortiss GmbH
 */

#ifdef UA_ARCHITECTURE_FREERTOSLWIP

#ifndef PLUGINS_ARCH_FREERTOSLWIP_UA_ARCHITECTURE_H_
#define PLUGINS_ARCH_FREERTOSLWIP_UA_ARCHITECTURE_H_

#include "ua_lwip.h"
#include "ua_freeRTOS.h"

#if UA_MULTITHREADING >= 100
#error Multithreading unsupported
#else
#define UA_LOCK_TYPE(mutexName)
#define UA_LOCK_TYPE_POINTER(mutexName)
#define UA_LOCK_INIT(mutexName)
#define UA_LOCK_DESTROY(mutexName)
#define UA_LOCK(mutexName)
#define UA_UNLOCK(mutexName)
#define UA_LOCK_ASSERT(mutexName, num)
#endif

#include <open62541/architecture_functions.h>

#endif /* PLUGINS_ARCH_FREERTOSLWIP_UA_ARCHITECTURE_H_ */

#endif /* UA_ARCHITECTURE_FREERTOSLWIP */
