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

#ifndef HDR_LIB_SUPPORT_APER_H_
#define HDR_LIB_SUPPORT_APER_H_

#include <string.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

#define TEST_BUFF_LEN 4000

void CompareBuffers(unsigned char *buff1, unsigned char *buff2, int length, FILE *fp);
void PrintBuffer(unsigned char *buff, int len_ret);
void PrintBufferToFile(FILE *fp, unsigned char *buff, int len_ret);
int AsnAperPrintAt(FILE *fp, int prev, int at, char *str, ...) ;
void AsnAperPrint(FILE *fp, char *str, ...);

#if _WIN32
 typedef unsigned int TimeStamp_t;
#else
 typedef struct timeval TimeStamp_t;
#endif

void GetTimeStamp(void *timestamp);

void DISPLAY_TIME_INFO(int len, const char *info, TimeStamp_t enc_s,
					   TimeStamp_t enc_e,
					   TimeStamp_t dec_s,
					   TimeStamp_t dec_e,
					   FILE *fp);

#endif /* HDR_LIB_SUPPORT_APER_H_ */
