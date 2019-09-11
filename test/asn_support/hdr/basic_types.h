/*
 *  Author:
 *    Charlie Zhuo <emailto:deskzhcc@sina.com>
 *  Copyright Notice:
 *    The information contained herein is confidential and the property of
 *    the author and is supplied without liability for errors or omissions.
 *    No part may be reproduced, disclosed or used except as authorized by
 *    contract or other written permission. The copyright and the foregoing
 *    restriction on reproduction and use extend to all media in which the
 *    information may be embodied.
 *  Communication And Support:
 *    For any extended use or support, please contact the author via email:
 *     deskzhcc@sina.com
 */
#include <stdint.h>

#ifndef _BASIC_DATA_TYPES_
#define _BASIC_DATA_TYPES_

/* Change the root size of int based on your target platform */
#define SIZE_OF_INT 4

typedef unsigned char uint8;
typedef unsigned char byte;
typedef char int8;

#if (SIZE_OF_INT==4)
typedef unsigned long uint64;
typedef long int64;
//typedef uint64_t uint64;
//typedef int64_t int64;
#else
typedef unsigned int int64;
typedef int int64;
#endif

#define offsetof(s,m) (size_t)&(((s *)0)->m)

#endif /*_BASIC_DATA_TYPES_*/
