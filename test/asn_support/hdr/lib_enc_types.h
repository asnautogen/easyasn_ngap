/*
 *  Author:
 *    EasyAsn Team <easyasn@sina.com>
 *  Copyright Notice:
 *    The information contained herein is confidential and the property of
 *    the author and is supplied without liability for errors or omissions.
 *    No part may be reproduced, disclosed or used except as authorized by
 *    contract or other written permission. The copyright and the foregoing
 *    restriction on reproduction and use extend to all media in which the
 *    information may be embodied.
 *  Communication And Support:
 *    For any extended use or support, please contact the author via email.
 */

#ifndef _TST_TYPES_HDR_
#define _TST_TYPES_HDR_

#include <stdio.h>
#include <memory.h>
#include <stdlib.h>
#include "basic_types.h"

/* ENUMERATED RETURN CODES - */
#define APER_ENC_ENUM_SUCCESS_C                  (0)
#define APER_ERR_ENC_ENUM_RANGE_VIOLATION_127_C  (-1)
#define APER_ERR_ENC_ENUM_RANGE_VIOLATION_LAST_C (-2)
#define APER_ERR_ENC_ENUM_RUN_OUT_OF_BUFFER_C    (-3)

int APER_Enc_Basic_Enum_Fixed(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
						int enum_nbr_bits, int enum_ext_value, int code_value, int octet_aligned);

int APER_Enc_Basic_Enum_Ext(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
						int enum_nbr_bits, int enum_ext_value, int code_value, int octet_aligned);

/* INTEGER */
#define APER_ERR_ENC_INT_RANGE_VIOLATION (-11)
#define APER_ERR_ENC_INT_RANGE_VIOLATION_LAST  (-12)
#define APER_ERR_ENC_INT_RUN_OUT_OF_BUFFER_C  (-13)
#define APER_ENC_ENC_INT_SUCCESS_C 0

int APER_Enc_SINT_VB0(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int range_low, int range_high, int nbr_bits, int value_to_encode, int octet_aligned);

int APER_Enc_SINT_VB1(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int range_low, int range_high, int value_to_encode, int octet_aligned);

int APER_Enc_SINT_VB2(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int range_low, int range_high, int value_to_encode, int octet_aligned);

int APER_Enc_SINT_VB3orMore(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int64 range_low, int64 range_high, int64 value_to_encode, int octet_aligned);

int APER_Enc_SINT_Unconstrained(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int64 value_to_encode, int octet_aligned);

int APER_Enc_UINT_VB0(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		unsigned int range_low, unsigned int range_high, int nbr_bits, unsigned int value_to_encode, int octet_aligned);

int APER_Enc_UINT_VB1(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		unsigned int range_low, unsigned int range_high, unsigned int value_to_encode, int octet_aligned);

int APER_Enc_UINT_VB2(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		unsigned int range_low, unsigned int range_high, unsigned int value_to_encode, int octet_aligned);

int APER_Enc_UINT_VB3orMore(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		uint64 range_low, uint64 range_high, uint64 value_to_encode, int octet_aligned);

int APER_Enc_SINT_Ext(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int64 range_low, int64 range_high, int nbr_bits, int64 value_to_encode, int octet_aligned);

#define APER_ERR_ENC_BITSTR_SIZE_VIOLATION (-21)
#define APER_ERR_ENC_BITSTR_RANGE_VIOLATION_LAST  (-22)
#define APER_ENC_ENC_BITSTR_SUCCESS_C 0
#define APER_ERR_ENC_BITSTR_LEN_VIOLATION (-23)
#define APER_ERR_ENC_BITSTR_BUFFER_TOO_SHORT (-24)
#define APER_ERR_ENC_BITSTR_TOO_LONG_C       (-25)
#define MAX_BIT_STRING_LEN (16384)

int APER_ENC_BITSTR_AS_INTEGER_FIXED(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int size_fix, unsigned int value_to_encode, int octet_aligned);
		
int APER_ENC_BITSTR_AS_ARRAY_FIXED_EXT(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int size_low, int value_bits_len, unsigned char* value_to_encode, int octet_aligned);
		
int APER_ENC_BITSTR_AS_ARRAY_VAR_EXT(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int size_low, int size_high, int nbr_bits, int value_bits_len, unsigned char* value_to_encode, int octet_aligned);

int APER_ENC_BITSTR_AS_INTEGER_VAR(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int size_low, int size_high, int nbr_bits, int value_bits_len, unsigned int value_to_encode, int octet_aligned);

int APER_ENC_BITSTR_AS_ARRAY_VAR(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int size_low, int size_high, int nbr_bits_ind, int value_bits_len, unsigned char * value_to_encode, int octet_aligned);

int APER_ENC_BITSTR_AS_ARRAY_FIXED(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int size_fix, unsigned char * value_to_encode, int octet_aligned);

#define APER_ERR_ENC_OCTSTR_BUFFER_TOO_SHORT (-31)
#define APER_ERR_ENC_OCTSTR_SIZE_VIOLATION   (-32)
#define APER_ERR_ENC_OCTSTR_SUCCESS_C         0

//  case 1 range_high=1
int APER_ENC_OCTSTR_AS_INTEGER_FIXED_VB1(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		unsigned int value_to_encode, int octet_aligned);

//  case 1 range_high=2		
int APER_ENC_OCTSTR_AS_INTEGER_FIXED_VB2(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		unsigned int value_to_encode, int octet_aligned);

//  case 1 range_high=3
int APER_ENC_OCTSTR_AS_INTEGER_FIXED_VB3(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		unsigned int value_to_encode, int octet_aligned);

//  case 1 range_high=4
int APER_ENC_OCTSTR_AS_INTEGER_FIXED_VB4(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		unsigned int value_to_encode, int octet_aligned);

// case 2
int APER_ENC_OCTSTR_AS_ARRAY_FIXED(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int value_len, unsigned char* value_to_encode, int octet_aligned);

// case 3
int APER_ENC_OCTSTR_AS_FIXED_EXT(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int size_def, int value_len, unsigned char* value_to_encode, int octet_aligned);

// case 4
int APER_ENC_OCTSTR_AS_VAR_EXT(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int size_low, int size_high, int nbr_bits_ind, int value_len, unsigned char* value_to_encode, int octet_aligned);				

// case 5
int APER_ENC_OCTSTR_AS_INT_VAR(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int size_low, int size_high, int nbr_bits_ind, int value_len, unsigned int value_to_encode, int octet_aligned);

// case 6 
int APER_ENC_OCTSTR_AS_ARRAY_VAR(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int size_low, int size_high, int nbr_bits_ind, int value_len, unsigned char* value_to_encode,
		int octet_aligned);

int APER_ENC_OCTSTR_AS_OPEN_ARRAY(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int value_len, unsigned char* value_to_encode, int octet_aligned);


int APER_ENC_PREAMBLE(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int nbr_bits_ind, unsigned int preamble_value);

int APER_Enc_Basic_Boolean(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		unsigned char value, int octet_aligned);

/* CHOICE RETURN CODE */
#define APER_ERR_ENC_CHOICE_SUCCESS_C 0
#define APER_ERR_ENC_CHOICE_INDEX_VIOLATION_C (-41)

int APER_ENC_OBJECT_ID(unsigned char *buff, int buff_len, int *byte_index, int *bit_index, int oid_len, unsigned int *subids);
#define APER_ERR_ENC_OID_BUFFER_TOO_SHORT_C (-51)
#define APER_ERR_ENC_OID_TOO_SHORT_C (-52)
#define APER_ERR_ENC_OID_NULL_C      (-53)

int RightShiftOctets(unsigned char *buff, int buff_len, int start, int end, int step);
int WriteLengthIndicator(unsigned char *buff, int buff_len, int len_pos, int *buff_index, int bit_index);
int WriteItemLengthInd  (unsigned char *buff, int buff_len, int len_pos, int *byte_index, int *bit_index);
#define APER_ERR_ENC_PREAMBLE_BUFFER_TOO_SHORT (-51)
#define APER_ERR_ENC_LENGTH_BUFFER_TOO_SHORT   (-61)
#define APER_ERR_ENC_CLSINST_LENGTH_BUFFER_TOO_SHORT   (-62)

#define CHECK_ENC_BUFFER_LENGTH(index, size, len, retcode) \
	if (index + size >= len) return retcode;


//#define CHECK_ENC_BUFFER_LENGTH(index, size, len, retcode) 

#define APER_ENC_CLSINST_ITEM_HDR(id, critic)\
    if (local_bit_index != 8) {local_bit_index = 8; local_byte_index += 1;}\
    if (local_byte_index + 5 > buff_len) return APER_ERR_ENC_CLSINST_LENGTH_BUFFER_TOO_SHORT;\
    buff[local_byte_index++] = id >> 8;\
    buff[local_byte_index++] = id & 0xff;\
    buff[local_byte_index++] = critic << 6;

#ifdef KEEP_UPER
int UPER_Enc_UINT_VBX(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		unsigned int range_low, unsigned int range_high, int nbr_bits, unsigned int value_to_encode);

int UPER_ENC_OCTSTR_AS_OPEN_ARRAY(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int value_len, unsigned char* value_to_encode);

int UPER_ENC_OCTSTR_AS_INTEGER_FIXED_VBX(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		unsigned int value_to_encode, int nbr_bytes);

int UPER_ENC_OCTSTR_AS_ARRAY_VAR(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int size_low, int size_high, int nbr_bits_ind, int value_len, unsigned char* value_to_encode);

int UPER_ENC_BITSTR_AS_ARRAY_VAR(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int size_low, int size_high, int nbr_bits_ind, int value_bits_len, unsigned char * value_to_encode);
int UPER_ENC_BITSTR_AS_ARRAY_OPEN(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		                          int value_bits_len, unsigned char * value_to_encode);

int UPER_ENC_BITSTR_AS_INTEGER_FIXED(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int size_fix, unsigned int value_to_encode);

int UPER_ENC_BITSTR_AS_ARRAY_FIXED(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int size_fix, unsigned char * value_to_encode);

int UPER_Enc_UINT64(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		uint64 range_low, uint64 range_high, int nbr_bits, uint64 value_to_encode);

int UPER_Enc_SINT_VBX(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		 int range_low,  int range_high, int nbr_bits,  int value_to_encode);

#endif

#endif
