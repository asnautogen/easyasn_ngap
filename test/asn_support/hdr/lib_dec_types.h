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

#ifndef _DEC_TYPES_HDR_
#define _DEC_TYPES_HDR_

#include <stdio.h>
#include <memory.h>
#include <stdlib.h>
#include "basic_types.h"

/* ENUMERATED RETURN CODES - */
#define APER_DEC_ENUM_SUCCESS_C                 (0)
#define APER_ERR_DEC_ENUM_RANGE_VIOLATION_127_C (-101)
#define APER_ERR_DEC_ENUM_RANGE_VIOLATION_LAST  (-102)
#define APER_ERR_DEC_ENUM_BUFF_TOO_SHORT_C      (-103)

int APER_Dec_Basic_Enum_U8(uint8 *buff, int buff_len, int *byte_index, int *bit_index,
						int enum_nbr_bits, int enum_extensible, int enum_ext_value, unsigned char *enum_decoded);

int APER_Dec_Basic_Enum_U16(uint8 *buff, int buff_len, int *byte_index, int *bit_index,
						int enum_nbr_bits, int enum_extensible, int enum_ext_value, unsigned short *enum_decoded);

int APER_Dec_Basic_Enum_U32(uint8 *buff, int buff_len, int *byte_index, int *bit_index,
						int enum_nbr_bits, int enum_extensible, int enum_ext_value, unsigned int *enum_decoded);

/* INTEGER */
#define APER_ERR_DEC_INT_RANGE_VIOLATION_C     (-111)
#define APER_ERR_DEC_INT_RANGE_VIOLATION_LAST  (-112)
#define APER_ERR_DEC_INT_BUFF_TOO_SHORT_C      (-113)
#define APER_ENC_ENC_INT_SUCCESS_C 0

int APER_Dec_SINT_Unconstrained(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int64 *value, int octet_aligned);

int APER_Dec_Basic_Integer_U32(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		unsigned int range_low, unsigned int range_high, int nbr_bits, int extensible, unsigned int *value_decoded);

int APER_Dec_Basic_Integer_S32(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int range_low, int range_high, int nbr_bits, int extensible, int * value_decoded);

int APER_Dec_Basic_Integer_U64(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		uint64 range_low, uint64 range_high, int nbr_bits, int extensible, uint64* value_decoded);



#define APER_ERR_DEC_BITSTR_SIZE_VIOLATION_C     (-121)
#define APER_ERR_DEC_BITSTR_RANGE_VIOLATION_LAST (-122)
#define APER_ERR_DEC_BITSTR_SUCCESS_C 0
#define APER_ERR_DEC_BITSTR_LEN_VIOLATION_C      (-123)
#define APER_ERR_DEC_BITSTR_BUFFER_TOO_SHORT_C   (-124)

int APER_DEC_BITSTR_AS_INTEGER_FIXED_U8(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int size_fix, unsigned char *value_decoded);

int APER_DEC_BITSTR_AS_INTEGER_FIXED_U16(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int size_fix, unsigned short *value_decoded);

int APER_DEC_BITSTR_AS_INTEGER_FIXED_U32(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int size_fix, unsigned int *value_decoded);

int APER_DEC_BITSTR_AS_ARRAY_FIXED(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int size_fix, unsigned char * value_decoded);

int APER_DEC_BITSTR_AS_ARRAY_EXT(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int size_low, int size_high, int nbr_bits, int* value_bits_len, unsigned char* value_decoded);

int APER_DEC_BITSTR_AS_INTEGER_VAR(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int size_low, int size_high, int nbr_bits, int* value_bits_len, unsigned int *value_decoded);

int APER_DEC_BITSTR_AS_ARRAY_VAR(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int size_low, int size_high, int nbr_bits_ind, int *value_bits_len, unsigned char * value_decoded);



#define APER_ERR_DEC_OCTSTR_BUFFER_TOO_SHORT_C (-131)
#define APER_ERR_DEC_OCTSTR_SIZE_VIOLATION_C   (-132)
#define APER_ERR_DEC_OCTSTR_SIZE_INCCORRECT_C  (-133)

#define APER_ERR_DEC_OCTSTR_SUCCESS_C          0

int APER_DEC_OCTSTR_AS_INTEGER_FIXED(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int size_def, unsigned int *value_decoded);

int APER_DEC_OCTSTR_AS_ARRAY_FIXED(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int size_def, unsigned char* value_decoded);

int APER_DEC_OCTSTR_AS_FIXED_EXT(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int size_def, int *value_len, unsigned char* value_decoded);

int APER_DEC_OCTSTR_AS_VAR_EXT(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int size_low, int size_high, int nbr_bits_ind, int *value_len, unsigned char* value_decoded);

int APER_DEC_OCTSTR_AS_INT_VAR(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int size_low, int size_high, int nbr_bits_ind, int *value_len, unsigned int *value_decoded);

int APER_DEC_OCTSTR_AS_ARRAY_VAR(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int size_low, int size_high, int nbr_bits_ind, int *value_len, unsigned char* value_decoded);

int APER_DEC_OCTSTR_AS_OPEN_ARRAY(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int *value_len, unsigned char* value_decoded);

int APER_DEC_PREAMBLE(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int nbr_bits_ind, unsigned int *preamble_value);

int APER_Dec_Basic_Boolean(unsigned char *buff, int buff_len, int *byte_index, int *bit_index, unsigned char *value);

/* CHOICE RETURN CODE */
#define APER_ERR_DEC_CHOICE_SUCCESS_C 0
#define APER_ERR_DEC_CHOICE_BUFF_TOO_SHORT_C (-141)
#define APER_ERR_DEC_CHOICE_INDEX_VIOLATION_C (-142)

int APER_DEC_Open_Length(unsigned char *buff, int buff_len, int *byte_index, int *bit_index, int *open_len);
/* SEQ RETURN CODES */
#define APER_ERR_DEC_SEQ_BUFF_TOO_SHORT_C   (-151)
#define APER_ERR_DEC_SEQ_MAN_EXT_MISSING_C  (-152)
#define APER_ERR_DEC_SEQ_MAN_EXT_TOO_MANY_C (-153)

/* CLASS INSTANCE RETURN CODES */
#define APER_ERR_DEC_CLSINST_BUFF_TOOSHORT_C            (-160)
#define APER_ERR_DEC_CLSINST_INC_CRITIC_C               (-161)
#define APER_ERR_DEC_CLSINST_MAND_IE_MISSING_C          (-162)
#define APER_ERR_DEC_CLSINST_DUPLICATE_IE_C             (-163)
#define APER_ERR_DEC_CLSINST_WRONG_ORDER_C              (-164)
#define APER_ERR_DEC_CLSINST_REJECT_IE_NOT_COMPREHEND_C (-165)
#define APER_ERR_DEC_CLSINST_NOTIFY_IE_NOT_COMPREHEND_C (-166)
#define APER_ERR_DEC_CLSINST_IGNORE_IE_NOT_COMPREHEND_C (-167)

int APER_DEC_OBJECT_ID(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int *oid_len, unsigned int *subids);
#define APER_ERR_DEC_OID_BUFFER_TOO_SHORT_C   (-171)
#define APER_ERR_DEC_OID_ARRAY_NULL_C    (-172)
#define APER_ERR_DEC_OID_LEN_NULL_C      (-173)

#ifdef KEEP_UPER
int UPER_DEC_Open_Length(unsigned char *buff, int buff_len, int *byte_index, int *bit_index, int *open_len);

int UPER_DEC_OCTSTR_AS_OPEN_ARRAY(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int *value_len, unsigned char* value_decoded);

int UPER_DEC_OCTSTR_AS_ARRAY_VAR(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int size_low, int size_high, int nbr_bits_ind, int *value_len, unsigned char* value_decoded);

int UPER_Dec_Basic_Integer_U32(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		unsigned int range_low, unsigned int range_high, int nbr_bits, unsigned int * value_decoded);

int UPER_Dec_Basic_Integer_S32(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		 int range_low,  int range_high, int nbr_bits, int * value_decoded);

int UPER_Dec_Basic_Integer_U64(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		uint64 range_low, uint64 range_high, int nbr_bits, uint64 * value_decoded);

int UPER_DEC_OCTSTR_AS_INTEGER_FIXED(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int size_def, unsigned int * value_decoded);

int UPER_DEC_BITSTR_AS_ARRAY_VAR(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int size_low, int size_high, int nbr_bits_ind, int *value_bits_len, unsigned char * value_decoded);

int UPER_DEC_BITSTR_AS_ARRAY_OPEN(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		                          int *value_bits_len, unsigned char * value_decoded);

int UPER_DEC_BITSTR_AS_INTEGER_FIXED_U32(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int size_fix, unsigned int * value_decoded);

int UPER_DEC_BITSTR_AS_ARRAY_FIXED(unsigned char *buff, int buff_len, int *byte_index, int *bit_index,
		int size_fix, unsigned char * value_decoded);

#endif

#endif
