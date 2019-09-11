/*
  Source automatically generated on Fri Sep  6 05:29:26 2019 by lib_asn_aper_x86_64.
  Inputs:
   - ASN Class file:     ./ngap_asn/ngap-class-0.8.0.asn
   - ASN Constants file: ./ngap_asn/ngap-const-0.8.0.asn
   - ASN Main file:      ./ngap_asn/ngap-main-1.0.0.asn

  Author: EasyAsn Team

  Communication And Support:
    For any extended use or support, please contact the author via email:
      easyasn@sina.com
    Or join EasyAsn at:
      QQ: 3115974651
*/

#include "../asn_support/hdr/lib_dec_types.h"
#include "LTE_NGAP_Dec.h"
#include "LTE_NGAP_IE.h"


/* GTPTunnel - Sequence Format 2 */
int LTE_APER_Dec_GTPTunnel(GTPTunnel_t *seq, byte *buff, int buff_len, int *buff_index, int *bit_pos) {
   int local_byte_index  = (*buff_index);
   int local_bit_index   = (*bit_pos);
   int len_ret           = 0;
   unsigned int preamble_len = 2;
   unsigned int preamble_val = 0;
   unsigned int ext_bit_val  = 0;

   int ext_len_item = 0;
   unsigned int ext_preamble_len  = 0;
   unsigned int ext_preamble_val  = 0;
   int ext_preamble_items= 0;
   int ext_preamble_mask = 0;

   /* Read Sequence Preamble Info */
   len_ret = APER_DEC_PREAMBLE(buff, buff_len, &local_byte_index, &local_bit_index, preamble_len, &preamble_val);
   if (len_ret < 0) return len_ret;

   ext_bit_val = preamble_val >> 1;

   /* Decode transportLayerAddress of type BIT STRING */
   seq->transportLayerAddress.len_bits = MAX_BITSTRING_WITH_EXT_SIZE * 8;
   len_ret = APER_DEC_BITSTR_AS_ARRAY_EXT(buff, buff_len, &local_byte_index, &local_bit_index,
                                          1, 160, 8, &(seq->transportLayerAddress.len_bits), seq->transportLayerAddress.cont_bits);
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = transportLayerAddress\n", len_ret, __FUNCTION__);
     return len_ret;
   }

   /* Decode gTP_TEID of type OCTET STRING */
   len_ret = APER_DEC_OCTSTR_AS_INTEGER_FIXED(buff, buff_len, &local_byte_index, &local_bit_index,
                                              4, &(seq->gTP_TEID));
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = gTP-TEID\n", len_ret, __FUNCTION__);
     return len_ret;
   }

   if (ext_bit_val) {
      /* Read extension preamble length */
      len_ret = APER_Dec_Basic_Integer_U32(buff, buff_len, &local_byte_index, &local_bit_index,
                                       0, 127, 7, 0, &ext_preamble_len);
      if (len_ret < 0) return len_ret;
      if (ext_preamble_len < 0 || ext_preamble_len > 10) return APER_ERR_DEC_SEQ_MAN_EXT_TOO_MANY_C;
      ext_preamble_items = ext_preamble_len++;

      len_ret = APER_DEC_PREAMBLE(buff, buff_len, &local_byte_index, &local_bit_index, ext_preamble_len, &ext_preamble_val);
      if (len_ret < 0) return len_ret;

      /* Skip unsupported extensions */
      while (ext_preamble_items > 0) {
         ext_preamble_items --;
         ext_preamble_mask = 1 << ext_preamble_items;
         if (ext_preamble_val & ext_preamble_mask) {
            len_ret = APER_DEC_Open_Length(buff, buff_len, &local_byte_index, &local_bit_index, &ext_len_item);
            if (len_ret < 0) return APER_ERR_DEC_SEQ_BUFF_TOO_SHORT_C;
            local_byte_index += ext_len_item;
         }
      }
   }

   len_ret = local_byte_index - (*buff_index);
   if (local_bit_index != 8) len_ret += 1;
   (*buff_index) = local_byte_index;
   (*bit_pos)    = local_bit_index;

   return len_ret;
}


/* UPTransportLayerInformation - Choice Decoder */
int LTE_APER_Dec_UPTransportLayerInformation(UPTransportLayerInformation_t *pch, byte *buff, int buff_len, int *buff_index, int *bit_pos) {
   int local_byte_index  = (*buff_index);
   int local_bit_index   = (*bit_pos);
   int len_ret           = 0;
   unsigned int choice_index = 0;
   unsigned int Ext_bit      = 0;
   int Ext_len      = 0;
   int Ext_open_len = 0;

   /* Read Extension Bit */
   len_ret = APER_DEC_PREAMBLE(buff, buff_len, &local_byte_index, &local_bit_index, 1, &Ext_bit);
   if (len_ret < 0) return len_ret;

   if (Ext_bit) {
      /* Read Choice Index */
      len_ret = APER_DEC_PREAMBLE(buff, buff_len, &local_byte_index, &local_bit_index, 7, &choice_index);
      if (len_ret < 0) return len_ret;

      choice_index += UPTRANSPORTLAYERINFORMATION_CHOICE_EXT;
      len_ret = APER_DEC_Open_Length(buff, buff_len, &local_byte_index, &local_bit_index, &Ext_open_len);
      if (len_ret < 0) return APER_ERR_DEC_CHOICE_BUFF_TOO_SHORT_C;
   }
   else {
      /* ONLY ONE choice, do nothing. */
   }
   if (choice_index > UPTRANSPORTLAYERINFORMATION_CHOICE_LAST) {
      /* Unknown Choice: ignore it and return */
      len_ret = APER_DEC_Open_Length(buff, buff_len, &local_byte_index, &local_bit_index, &Ext_len);
      if (len_ret < 0) return APER_ERR_DEC_CHOICE_BUFF_TOO_SHORT_C;
      local_byte_index += Ext_len;
   }
   else { /* Decode choice */
      pch->Choice_Index = choice_index;
      switch (pch->Choice_Index) {
         case UPTRANSPORTLAYERINFORMATION_CHOICE_GTPTUNNEL:
            /* Decode gTPTunnel of type SEQUENCE */
            len_ret = LTE_APER_Dec_GTPTunnel(&(pch->Choices.gTPTunnel), buff, buff_len, &local_byte_index, &local_bit_index);
            break;
      }
      if (len_ret < 0) return len_ret;
   }
   if (Ext_bit && local_bit_index != 8) {
      /* Close decoding of open type */
      local_bit_index = 8;
      local_byte_index += 1;
   }
   len_ret = local_byte_index - (*buff_index);
   if (local_bit_index != 8) len_ret += 1;
   (*buff_index) = local_byte_index;
   (*bit_pos)    = local_bit_index;

   return len_ret;
}


/* SecurityResult - Sequence Format 2 */
int LTE_APER_Dec_SecurityResult(SecurityResult_t *seq, byte *buff, int buff_len, int *buff_index, int *bit_pos) {
   int local_byte_index  = (*buff_index);
   int local_bit_index   = (*bit_pos);
   int len_ret           = 0;
   unsigned int preamble_len = 2;
   unsigned int preamble_val = 0;
   unsigned int ext_bit_val  = 0;

   int ext_len_item = 0;
   unsigned int ext_preamble_len  = 0;
   unsigned int ext_preamble_val  = 0;
   int ext_preamble_items= 0;
   int ext_preamble_mask = 0;

   /* Read Sequence Preamble Info */
   len_ret = APER_DEC_PREAMBLE(buff, buff_len, &local_byte_index, &local_bit_index, preamble_len, &preamble_val);
   if (len_ret < 0) return len_ret;

   ext_bit_val = preamble_val >> 1;

   /* Decode integrityProtectionResult of type ENUMERATED */
   len_ret = APER_Dec_Basic_Enum_U32(buff, buff_len, &local_byte_index, &local_bit_index,
                                  1, 1, INTEGRITYPROTECTIONRESULT_EXT_START, &(seq->integrityProtectionResult));
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = integrityProtectionResult\n", len_ret, __FUNCTION__);
     return len_ret;
   }

   /* Decode confidentialityProtectionResult of type ENUMERATED */
   len_ret = APER_Dec_Basic_Enum_U32(buff, buff_len, &local_byte_index, &local_bit_index,
                                  1, 1, CONFIDENTIALITYPROTECTIONRESULT_EXT_START, &(seq->confidentialityProtectionResult));
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = confidentialityProtectionResult\n", len_ret, __FUNCTION__);
     return len_ret;
   }

   if (ext_bit_val) {
      /* Read extension preamble length */
      len_ret = APER_Dec_Basic_Integer_U32(buff, buff_len, &local_byte_index, &local_bit_index,
                                       0, 127, 7, 0, &ext_preamble_len);
      if (len_ret < 0) return len_ret;
      if (ext_preamble_len < 0 || ext_preamble_len > 10) return APER_ERR_DEC_SEQ_MAN_EXT_TOO_MANY_C;
      ext_preamble_items = ext_preamble_len++;

      len_ret = APER_DEC_PREAMBLE(buff, buff_len, &local_byte_index, &local_bit_index, ext_preamble_len, &ext_preamble_val);
      if (len_ret < 0) return len_ret;

      /* Skip unsupported extensions */
      while (ext_preamble_items > 0) {
         ext_preamble_items --;
         ext_preamble_mask = 1 << ext_preamble_items;
         if (ext_preamble_val & ext_preamble_mask) {
            len_ret = APER_DEC_Open_Length(buff, buff_len, &local_byte_index, &local_bit_index, &ext_len_item);
            if (len_ret < 0) return APER_ERR_DEC_SEQ_BUFF_TOO_SHORT_C;
            local_byte_index += ext_len_item;
         }
      }
   }

   len_ret = local_byte_index - (*buff_index);
   if (local_bit_index != 8) len_ret += 1;
   (*buff_index) = local_byte_index;
   (*bit_pos)    = local_bit_index;

   return len_ret;
}


/* QosFlowSetupResponseItemHOReqAck - Sequence Format 2 */
int LTE_APER_Dec_QosFlowSetupResponseItemHOReqAck(QosFlowSetupResponseItemHOReqAck_t *seq, byte *buff, int buff_len, int *buff_index, int *bit_pos) {
   int local_byte_index  = (*buff_index);
   int local_bit_index   = (*bit_pos);
   int len_ret           = 0;
   unsigned int preamble_len = 3;
   unsigned int preamble_val = 0;
   unsigned int ext_bit_val  = 0;

   int ext_len_item = 0;
   unsigned int ext_preamble_len  = 0;
   unsigned int ext_preamble_val  = 0;
   int ext_preamble_items= 0;
   int ext_preamble_mask = 0;

   /* Read Sequence Preamble Info */
   len_ret = APER_DEC_PREAMBLE(buff, buff_len, &local_byte_index, &local_bit_index, preamble_len, &preamble_val);
   if (len_ret < 0) return len_ret;

   ext_bit_val = preamble_val >> 2;
   if (preamble_val & (1 << 1)) seq->dataForwardingAccepted_Present = 1;

   /* Decode qosFlowIndicator of type INTEGER */
   len_ret = APER_Dec_Basic_Integer_U32(buff, buff_len, &local_byte_index, &local_bit_index,
                                        0, 63, 6, 1, &(seq->qosFlowIndicator));
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = qosFlowIndicator\n", len_ret, __FUNCTION__);
     return len_ret;
   }

   if (seq->dataForwardingAccepted_Present) {
      /* Decode dataForwardingAccepted of type ENUMERATED */
      len_ret = APER_Dec_Basic_Enum_U32(buff, buff_len, &local_byte_index, &local_bit_index,
                                     1, 1, DATAFORWARDINGACCEPTED_EXT_START, &(seq->dataForwardingAccepted));
      if (len_ret < 0) {
        printf("ret = %d, function = %s, IE = dataForwardingAccepted\n", len_ret, __FUNCTION__);
        return len_ret;
      }
   }

   if (ext_bit_val) {
      /* Read extension preamble length */
      len_ret = APER_Dec_Basic_Integer_U32(buff, buff_len, &local_byte_index, &local_bit_index,
                                       0, 127, 7, 0, &ext_preamble_len);
      if (len_ret < 0) return len_ret;
      if (ext_preamble_len < 0 || ext_preamble_len > 10) return APER_ERR_DEC_SEQ_MAN_EXT_TOO_MANY_C;
      ext_preamble_items = ext_preamble_len++;

      len_ret = APER_DEC_PREAMBLE(buff, buff_len, &local_byte_index, &local_bit_index, ext_preamble_len, &ext_preamble_val);
      if (len_ret < 0) return len_ret;

      /* Skip unsupported extensions */
      while (ext_preamble_items > 0) {
         ext_preamble_items --;
         ext_preamble_mask = 1 << ext_preamble_items;
         if (ext_preamble_val & ext_preamble_mask) {
            len_ret = APER_DEC_Open_Length(buff, buff_len, &local_byte_index, &local_bit_index, &ext_len_item);
            if (len_ret < 0) return APER_ERR_DEC_SEQ_BUFF_TOO_SHORT_C;
            local_byte_index += ext_len_item;
         }
      }
   }

   len_ret = local_byte_index - (*buff_index);
   if (local_bit_index != 8) len_ret += 1;
   (*buff_index) = local_byte_index;
   (*bit_pos)    = local_bit_index;

   return len_ret;
}


/* QosFlowSetupResponseListHOReqAck - Sequence Of QosFlowSetupResponseItemHOReqAck */
int LTE_APER_Dec_QosFlowSetupResponseListHOReqAck(QosFlowSetupResponseListHOReqAck_t *seqOf, byte *buff, int buff_len, int *buff_index, int *bit_pos) {
   int local_byte_index  = (*buff_index);
   int local_bit_index   = (*bit_pos);
   int len_ret           = 0;
   int inst_index        = 0;

   /* Decode Sequence Of Preamble */
   len_ret = APER_Dec_Basic_Integer_S32(buff, buff_len, &local_byte_index, &local_bit_index, 
                                    1, 64, 6, 0, &(seqOf->nbrInstances));
   if (len_ret < 0) return len_ret;

   /* Apply Max item optimization for decoding */
   if (seqOf->nbrInstances > 4) seqOf->nbrInstances = 4;

   if(seqOf->nbrInstances != 0) {
      for (inst_index = 0; inst_index < seqOf->nbrInstances; inst_index++) {
         /* Decode QosFlowSetupResponseItemHOReqAck_t of type SEQUENCE */
         len_ret = LTE_APER_Dec_QosFlowSetupResponseItemHOReqAck(&(seqOf->QosFlowSetupResponseItemHOReqAck[inst_index]), buff, buff_len, &local_byte_index, &local_bit_index);
         if (len_ret < 0) return len_ret;
      }
   }

   len_ret = local_byte_index - (*buff_index);
   if (local_bit_index != 8) len_ret += 1;
   (*buff_index) = local_byte_index;
   (*bit_pos)    = local_bit_index;

   return len_ret;
}


/* Cause - Choice Decoder */
int LTE_APER_Dec_Cause(Cause_t *pch, byte *buff, int buff_len, int *buff_index, int *bit_pos) {
   int local_byte_index  = (*buff_index);
   int local_bit_index   = (*bit_pos);
   int len_ret           = 0;
   unsigned int choice_index = 0;
   unsigned int Ext_bit      = 0;
   int Ext_len      = 0;
   int Ext_open_len = 0;

   /* Read Extension Bit */
   len_ret = APER_DEC_PREAMBLE(buff, buff_len, &local_byte_index, &local_bit_index, 1, &Ext_bit);
   if (len_ret < 0) return len_ret;

   if (Ext_bit) {
      /* Read Choice Index */
      len_ret = APER_DEC_PREAMBLE(buff, buff_len, &local_byte_index, &local_bit_index, 7, &choice_index);
      if (len_ret < 0) return len_ret;

      choice_index += CAUSE_CHOICE_EXT;
      len_ret = APER_DEC_Open_Length(buff, buff_len, &local_byte_index, &local_bit_index, &Ext_open_len);
      if (len_ret < 0) return APER_ERR_DEC_CHOICE_BUFF_TOO_SHORT_C;
   }
   else {
      len_ret = APER_DEC_PREAMBLE(buff, buff_len, &local_byte_index, &local_bit_index, 3, &choice_index);
      if (len_ret < 0) return len_ret;
   }
   if (choice_index > CAUSE_CHOICE_LAST) {
      /* Unknown Choice: ignore it and return */
      len_ret = APER_DEC_Open_Length(buff, buff_len, &local_byte_index, &local_bit_index, &Ext_len);
      if (len_ret < 0) return APER_ERR_DEC_CHOICE_BUFF_TOO_SHORT_C;
      local_byte_index += Ext_len;
   }
   else { /* Decode choice */
      pch->Choice_Index = choice_index;
      switch (pch->Choice_Index) {
         case CAUSE_CHOICE_RADIONETWORK:
            /* Decode radioNetwork of type ENUMERATED */
            len_ret = APER_Dec_Basic_Enum_U32(buff, buff_len, &local_byte_index, &local_bit_index,
                                           6, 1, CAUSERADIONETWORK_EXT_START, &(pch->Choices.radioNetwork));
            break;
         case CAUSE_CHOICE_TRANSPORT:
            /* Decode transport of type ENUMERATED */
            len_ret = APER_Dec_Basic_Enum_U32(buff, buff_len, &local_byte_index, &local_bit_index,
                                           1, 1, CAUSETRANSPORT_EXT_START, &(pch->Choices.transport));
            break;
         case CAUSE_CHOICE_NAS:
            /* Decode nas of type ENUMERATED */
            len_ret = APER_Dec_Basic_Enum_U32(buff, buff_len, &local_byte_index, &local_bit_index,
                                           2, 1, CAUSENAS_EXT_START, &(pch->Choices.nas));
            break;
         case CAUSE_CHOICE_PROTOCOL:
            /* Decode protocol of type ENUMERATED */
            len_ret = APER_Dec_Basic_Enum_U32(buff, buff_len, &local_byte_index, &local_bit_index,
                                           3, 1, CAUSEPROTOCOL_EXT_START, &(pch->Choices.protocol));
            break;
         case CAUSE_CHOICE_MISC:
            /* Decode misc of type ENUMERATED */
            len_ret = APER_Dec_Basic_Enum_U32(buff, buff_len, &local_byte_index, &local_bit_index,
                                           3, 1, CAUSEMISC_EXT_START, &(pch->Choices.misc));
            break;
      }
      if (len_ret < 0) return len_ret;
   }
   if (Ext_bit && local_bit_index != 8) {
      /* Close decoding of open type */
      local_bit_index = 8;
      local_byte_index += 1;
   }
   len_ret = local_byte_index - (*buff_index);
   if (local_bit_index != 8) len_ret += 1;
   (*buff_index) = local_byte_index;
   (*bit_pos)    = local_bit_index;

   return len_ret;
}


/* QosFlowItem - Sequence Format 2 */
int LTE_APER_Dec_QosFlowItem(QosFlowItem_t *seq, byte *buff, int buff_len, int *buff_index, int *bit_pos) {
   int local_byte_index  = (*buff_index);
   int local_bit_index   = (*bit_pos);
   int len_ret           = 0;
   unsigned int preamble_len = 2;
   unsigned int preamble_val = 0;
   unsigned int ext_bit_val  = 0;

   int ext_len_item = 0;
   unsigned int ext_preamble_len  = 0;
   unsigned int ext_preamble_val  = 0;
   int ext_preamble_items= 0;
   int ext_preamble_mask = 0;

   /* Read Sequence Preamble Info */
   len_ret = APER_DEC_PREAMBLE(buff, buff_len, &local_byte_index, &local_bit_index, preamble_len, &preamble_val);
   if (len_ret < 0) return len_ret;

   ext_bit_val = preamble_val >> 1;

   /* Decode qosFlowIndicator of type INTEGER */
   len_ret = APER_Dec_Basic_Integer_U32(buff, buff_len, &local_byte_index, &local_bit_index,
                                        0, 63, 6, 1, &(seq->qosFlowIndicator));
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = qosFlowIndicator\n", len_ret, __FUNCTION__);
     return len_ret;
   }

   /* Decode cause of type CHOICE */
   len_ret = LTE_APER_Dec_Cause(&(seq->cause), buff, buff_len, &local_byte_index, &local_bit_index);
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = cause\n", len_ret, __FUNCTION__);
     return len_ret;
   }

   if (ext_bit_val) {
      /* Read extension preamble length */
      len_ret = APER_Dec_Basic_Integer_U32(buff, buff_len, &local_byte_index, &local_bit_index,
                                       0, 127, 7, 0, &ext_preamble_len);
      if (len_ret < 0) return len_ret;
      if (ext_preamble_len < 0 || ext_preamble_len > 10) return APER_ERR_DEC_SEQ_MAN_EXT_TOO_MANY_C;
      ext_preamble_items = ext_preamble_len++;

      len_ret = APER_DEC_PREAMBLE(buff, buff_len, &local_byte_index, &local_bit_index, ext_preamble_len, &ext_preamble_val);
      if (len_ret < 0) return len_ret;

      /* Skip unsupported extensions */
      while (ext_preamble_items > 0) {
         ext_preamble_items --;
         ext_preamble_mask = 1 << ext_preamble_items;
         if (ext_preamble_val & ext_preamble_mask) {
            len_ret = APER_DEC_Open_Length(buff, buff_len, &local_byte_index, &local_bit_index, &ext_len_item);
            if (len_ret < 0) return APER_ERR_DEC_SEQ_BUFF_TOO_SHORT_C;
            local_byte_index += ext_len_item;
         }
      }
   }

   len_ret = local_byte_index - (*buff_index);
   if (local_bit_index != 8) len_ret += 1;
   (*buff_index) = local_byte_index;
   (*bit_pos)    = local_bit_index;

   return len_ret;
}


/* QosFlowList - Sequence Of QosFlowItem */
int LTE_APER_Dec_QosFlowList(QosFlowList_t *seqOf, byte *buff, int buff_len, int *buff_index, int *bit_pos) {
   int local_byte_index  = (*buff_index);
   int local_bit_index   = (*bit_pos);
   int len_ret           = 0;
   int inst_index        = 0;

   /* Decode Sequence Of Preamble */
   len_ret = APER_Dec_Basic_Integer_S32(buff, buff_len, &local_byte_index, &local_bit_index, 
                                    1, 64, 6, 0, &(seqOf->nbrInstances));
   if (len_ret < 0) return len_ret;

   /* Apply Max item optimization for decoding */
   if (seqOf->nbrInstances > 4) seqOf->nbrInstances = 4;

   if(seqOf->nbrInstances != 0) {
      for (inst_index = 0; inst_index < seqOf->nbrInstances; inst_index++) {
         /* Decode QosFlowItem_t of type SEQUENCE */
         len_ret = LTE_APER_Dec_QosFlowItem(&(seqOf->QosFlowItem[inst_index]), buff, buff_len, &local_byte_index, &local_bit_index);
         if (len_ret < 0) return len_ret;
      }
   }

   len_ret = local_byte_index - (*buff_index);
   if (local_bit_index != 8) len_ret += 1;
   (*buff_index) = local_byte_index;
   (*bit_pos)    = local_bit_index;

   return len_ret;
}


/* DataForwardingResponseDRBItem - Sequence Format 2 */
int LTE_APER_Dec_DataForwardingResponseDRBItem(DataForwardingResponseDRBItem_t *seq, byte *buff, int buff_len, int *buff_index, int *bit_pos) {
   int local_byte_index  = (*buff_index);
   int local_bit_index   = (*bit_pos);
   int len_ret           = 0;
   unsigned int preamble_len = 4;
   unsigned int preamble_val = 0;
   unsigned int ext_bit_val  = 0;

   int ext_len_item = 0;
   unsigned int ext_preamble_len  = 0;
   unsigned int ext_preamble_val  = 0;
   int ext_preamble_items= 0;
   int ext_preamble_mask = 0;

   /* Read Sequence Preamble Info */
   len_ret = APER_DEC_PREAMBLE(buff, buff_len, &local_byte_index, &local_bit_index, preamble_len, &preamble_val);
   if (len_ret < 0) return len_ret;

   ext_bit_val = preamble_val >> 3;
   if (preamble_val & (1 << 2)) seq->dLForwardingUP_TNLInformation_Present = 1;
   if (preamble_val & (1 << 1)) seq->uLForwardingUP_TNLInformation_Present = 1;

   /* Decode dRB-ID of type INTEGER */
   len_ret = APER_Dec_Basic_Integer_U32(buff, buff_len, &local_byte_index, &local_bit_index,
                                        1, 32, 5, 1, &(seq->dRB_ID));
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = dRB-ID\n", len_ret, __FUNCTION__);
     return len_ret;
   }

   if (seq->dLForwardingUP_TNLInformation_Present) {
      /* Decode dLForwardingUP-TNLInformation of type CHOICE */
      len_ret = LTE_APER_Dec_UPTransportLayerInformation(&(seq->dLForwardingUP_TNLInformation), buff, buff_len, &local_byte_index, &local_bit_index);
      if (len_ret < 0) {
        printf("ret = %d, function = %s, IE = dLForwardingUP-TNLInformation\n", len_ret, __FUNCTION__);
        return len_ret;
      }
   }

   if (seq->uLForwardingUP_TNLInformation_Present) {
      /* Decode uLForwardingUP-TNLInformation of type CHOICE */
      len_ret = LTE_APER_Dec_UPTransportLayerInformation(&(seq->uLForwardingUP_TNLInformation), buff, buff_len, &local_byte_index, &local_bit_index);
      if (len_ret < 0) {
        printf("ret = %d, function = %s, IE = uLForwardingUP-TNLInformation\n", len_ret, __FUNCTION__);
        return len_ret;
      }
   }

   if (ext_bit_val) {
      /* Read extension preamble length */
      len_ret = APER_Dec_Basic_Integer_U32(buff, buff_len, &local_byte_index, &local_bit_index,
                                       0, 127, 7, 0, &ext_preamble_len);
      if (len_ret < 0) return len_ret;
      if (ext_preamble_len < 0 || ext_preamble_len > 10) return APER_ERR_DEC_SEQ_MAN_EXT_TOO_MANY_C;
      ext_preamble_items = ext_preamble_len++;

      len_ret = APER_DEC_PREAMBLE(buff, buff_len, &local_byte_index, &local_bit_index, ext_preamble_len, &ext_preamble_val);
      if (len_ret < 0) return len_ret;

      /* Skip unsupported extensions */
      while (ext_preamble_items > 0) {
         ext_preamble_items --;
         ext_preamble_mask = 1 << ext_preamble_items;
         if (ext_preamble_val & ext_preamble_mask) {
            len_ret = APER_DEC_Open_Length(buff, buff_len, &local_byte_index, &local_bit_index, &ext_len_item);
            if (len_ret < 0) return APER_ERR_DEC_SEQ_BUFF_TOO_SHORT_C;
            local_byte_index += ext_len_item;
         }
      }
   }

   len_ret = local_byte_index - (*buff_index);
   if (local_bit_index != 8) len_ret += 1;
   (*buff_index) = local_byte_index;
   (*bit_pos)    = local_bit_index;

   return len_ret;
}


/* DataForwardingResponseDRBList - Sequence Of DataForwardingResponseDRBItem */
int LTE_APER_Dec_DataForwardingResponseDRBList(DataForwardingResponseDRBList_t *seqOf, byte *buff, int buff_len, int *buff_index, int *bit_pos) {
   int local_byte_index  = (*buff_index);
   int local_bit_index   = (*bit_pos);
   int len_ret           = 0;
   int inst_index        = 0;

   /* Decode Sequence Of Preamble */
   len_ret = APER_Dec_Basic_Integer_S32(buff, buff_len, &local_byte_index, &local_bit_index, 
                                    1, 32, 5, 0, &(seqOf->nbrInstances));
   if (len_ret < 0) return len_ret;

   /* Apply Max item optimization for decoding */
   if (seqOf->nbrInstances > 4) seqOf->nbrInstances = 4;

   if(seqOf->nbrInstances != 0) {
      for (inst_index = 0; inst_index < seqOf->nbrInstances; inst_index++) {
         /* Decode DataForwardingResponseDRBItem_t of type SEQUENCE */
         len_ret = LTE_APER_Dec_DataForwardingResponseDRBItem(&(seqOf->DataForwardingResponseDRBItem[inst_index]), buff, buff_len, &local_byte_index, &local_bit_index);
         if (len_ret < 0) return len_ret;
      }
   }

   len_ret = local_byte_index - (*buff_index);
   if (local_bit_index != 8) len_ret += 1;
   (*buff_index) = local_byte_index;
   (*bit_pos)    = local_bit_index;

   return len_ret;
}


/* HandoverRequestAcknowledgeTransfer - Sequence Format 2 */
int LTE_APER_Dec_HandoverRequestAcknowledgeTransfer(HandoverRequestAcknowledgeTransfer_t *seq, byte *buff, int buff_len, int *buff_index, int *bit_pos) {
   int local_byte_index  = (*buff_index);
   int local_bit_index   = (*bit_pos);
   int len_ret           = 0;
   unsigned int preamble_len = 6;
   unsigned int preamble_val = 0;
   unsigned int ext_bit_val  = 0;

   int ext_len_item = 0;
   unsigned int ext_preamble_len  = 0;
   unsigned int ext_preamble_val  = 0;
   int ext_preamble_items= 0;
   int ext_preamble_mask = 0;

   /* Read Sequence Preamble Info */
   len_ret = APER_DEC_PREAMBLE(buff, buff_len, &local_byte_index, &local_bit_index, preamble_len, &preamble_val);
   if (len_ret < 0) return len_ret;

   ext_bit_val = preamble_val >> 5;
   if (preamble_val & (1 << 4)) seq->dLForwardingUP_TNLInformation_Present = 1;
   if (preamble_val & (1 << 3)) seq->securityResult_Present = 1;
   if (preamble_val & (1 << 2)) seq->qosFlowFailedToSetupList_Present = 1;
   if (preamble_val & (1 << 1)) seq->dataForwardingResponseDRBList_Present = 1;

   /* Decode dL-NGU-UP-TNLInformation of type CHOICE */
   len_ret = LTE_APER_Dec_UPTransportLayerInformation(&(seq->dL_NGU_UP_TNLInformation), buff, buff_len, &local_byte_index, &local_bit_index);
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = dL-NGU-UP-TNLInformation\n", len_ret, __FUNCTION__);
     return len_ret;
   }

   if (seq->dLForwardingUP_TNLInformation_Present) {
      /* Decode dLForwardingUP-TNLInformation of type CHOICE */
      len_ret = LTE_APER_Dec_UPTransportLayerInformation(&(seq->dLForwardingUP_TNLInformation), buff, buff_len, &local_byte_index, &local_bit_index);
      if (len_ret < 0) {
        printf("ret = %d, function = %s, IE = dLForwardingUP-TNLInformation\n", len_ret, __FUNCTION__);
        return len_ret;
      }
   }

   if (seq->securityResult_Present) {
      /* Decode securityResult of type SEQUENCE */
      len_ret = LTE_APER_Dec_SecurityResult(&(seq->securityResult), buff, buff_len, &local_byte_index, &local_bit_index);
      if (len_ret < 0) {
        printf("ret = %d, function = %s, IE = securityResult\n", len_ret, __FUNCTION__);
        return len_ret;
      }
   }

   /* Decode qosFlowSetupResponseList of type SEQUENCE OF */
   len_ret = LTE_APER_Dec_QosFlowSetupResponseListHOReqAck(&(seq->qosFlowSetupResponseList), buff, buff_len, &local_byte_index, &local_bit_index);
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = qosFlowSetupResponseList\n", len_ret, __FUNCTION__);
     return len_ret;
   }

   if (seq->qosFlowFailedToSetupList_Present) {
      /* Decode qosFlowFailedToSetupList of type SEQUENCE OF */
      len_ret = LTE_APER_Dec_QosFlowList(&(seq->qosFlowFailedToSetupList), buff, buff_len, &local_byte_index, &local_bit_index);
      if (len_ret < 0) {
        printf("ret = %d, function = %s, IE = qosFlowFailedToSetupList\n", len_ret, __FUNCTION__);
        return len_ret;
      }
   }

   if (seq->dataForwardingResponseDRBList_Present) {
      /* Decode dataForwardingResponseDRBList of type SEQUENCE OF */
      len_ret = LTE_APER_Dec_DataForwardingResponseDRBList(&(seq->dataForwardingResponseDRBList), buff, buff_len, &local_byte_index, &local_bit_index);
      if (len_ret < 0) {
        printf("ret = %d, function = %s, IE = dataForwardingResponseDRBList\n", len_ret, __FUNCTION__);
        return len_ret;
      }
   }

   if (ext_bit_val) {
      /* Read extension preamble length */
      len_ret = APER_Dec_Basic_Integer_U32(buff, buff_len, &local_byte_index, &local_bit_index,
                                       0, 127, 7, 0, &ext_preamble_len);
      if (len_ret < 0) return len_ret;
      if (ext_preamble_len < 0 || ext_preamble_len > 10) return APER_ERR_DEC_SEQ_MAN_EXT_TOO_MANY_C;
      ext_preamble_items = ext_preamble_len++;

      len_ret = APER_DEC_PREAMBLE(buff, buff_len, &local_byte_index, &local_bit_index, ext_preamble_len, &ext_preamble_val);
      if (len_ret < 0) return len_ret;

      /* Skip unsupported extensions */
      while (ext_preamble_items > 0) {
         ext_preamble_items --;
         ext_preamble_mask = 1 << ext_preamble_items;
         if (ext_preamble_val & ext_preamble_mask) {
            len_ret = APER_DEC_Open_Length(buff, buff_len, &local_byte_index, &local_bit_index, &ext_len_item);
            if (len_ret < 0) return APER_ERR_DEC_SEQ_BUFF_TOO_SHORT_C;
            local_byte_index += ext_len_item;
         }
      }
   }

   len_ret = local_byte_index - (*buff_index);
   if (local_bit_index != 8) len_ret += 1;
   (*buff_index) = local_byte_index;
   (*bit_pos)    = local_bit_index;

   return len_ret;
}


/* PDUSessionResourceAdmittedItem - Sequence Format 2 */
int LTE_APER_Dec_PDUSessionResourceAdmittedItem(PDUSessionResourceAdmittedItem_t *seq, byte *buff, int buff_len, int *buff_index, int *bit_pos) {
   int local_byte_index  = (*buff_index);
   int local_bit_index   = (*bit_pos);
   int len_ret           = 0;
   unsigned int preamble_len = 2;
   unsigned int preamble_val = 0;
   unsigned int ext_bit_val  = 0;

   int ext_len_item = 0;
   unsigned int ext_preamble_len  = 0;
   unsigned int ext_preamble_val  = 0;
   int ext_preamble_items= 0;
   int ext_preamble_mask = 0;

   int ctner_len = 0;

   /* Read Sequence Preamble Info */
   len_ret = APER_DEC_PREAMBLE(buff, buff_len, &local_byte_index, &local_bit_index, preamble_len, &preamble_val);
   if (len_ret < 0) return len_ret;

   ext_bit_val = preamble_val >> 1;

   /* Decode pDUSessionID of type INTEGER */
   len_ret = APER_Dec_Basic_Integer_U32(buff, buff_len, &local_byte_index, &local_bit_index,
                                        0, 255, 8, 0, &(seq->pDUSessionID));
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = pDUSessionID\n", len_ret, __FUNCTION__);
     return len_ret;
   }

   /* Read OCTET Container length for handoverRequestAcknowledgeTransfer */
   len_ret = APER_DEC_Open_Length(buff, buff_len, &local_byte_index, &local_bit_index, &ctner_len);
   if (len_ret < 0) {
      printf("ret = %d (%s.APER_DEC_Open_Length()\n", len_ret, __FUNCTION__);
      return len_ret;
   }
   /* Decode handoverRequestAcknowledgeTransfer of type SEQUENCE */
   len_ret = LTE_APER_Dec_HandoverRequestAcknowledgeTransfer(&(seq->handoverRequestAcknowledgeTransfer), buff, buff_len, &local_byte_index, &local_bit_index);
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = handoverRequestAcknowledgeTransfer\n", len_ret, __FUNCTION__);
     return len_ret;
   }

   if (ext_bit_val) {
      /* Read extension preamble length */
      len_ret = APER_Dec_Basic_Integer_U32(buff, buff_len, &local_byte_index, &local_bit_index,
                                       0, 127, 7, 0, &ext_preamble_len);
      if (len_ret < 0) return len_ret;
      if (ext_preamble_len < 0 || ext_preamble_len > 10) return APER_ERR_DEC_SEQ_MAN_EXT_TOO_MANY_C;
      ext_preamble_items = ext_preamble_len++;

      len_ret = APER_DEC_PREAMBLE(buff, buff_len, &local_byte_index, &local_bit_index, ext_preamble_len, &ext_preamble_val);
      if (len_ret < 0) return len_ret;

      /* Skip unsupported extensions */
      while (ext_preamble_items > 0) {
         ext_preamble_items --;
         ext_preamble_mask = 1 << ext_preamble_items;
         if (ext_preamble_val & ext_preamble_mask) {
            len_ret = APER_DEC_Open_Length(buff, buff_len, &local_byte_index, &local_bit_index, &ext_len_item);
            if (len_ret < 0) return APER_ERR_DEC_SEQ_BUFF_TOO_SHORT_C;
            local_byte_index += ext_len_item;
         }
      }
   }

   len_ret = local_byte_index - (*buff_index);
   if (local_bit_index != 8) len_ret += 1;
   (*buff_index) = local_byte_index;
   (*bit_pos)    = local_bit_index;

   return len_ret;
}


/* PDUSessionResourceAdmittedItemIEs - Class Instance Decoding */
int LTE_APER_Dec_PDUSessionResourceAdmittedItemIEs(PDUSessionResourceAdmittedItemIEs_t *clsInst, byte *buff, int buff_len, int *buff_index, int *bit_pos) {
   int local_byte_index  = (*buff_index);
   int local_bit_index   = (*bit_pos);
   int len_ret           = 0;
   unsigned char IE_Order[1];
   int len_of_item       = 0;
   int end_of_item       = 0;
   int accepted_index    = 1; /* 1..nbrItems */
   unsigned int  id;
   unsigned char  criticality;
   memset(IE_Order, 0x00, 1); /* Init to 0 indicating IE not received */
   /* WARNING: Constraint type is not resolved  */
   /* Decode ID of type INTEGER */
   len_ret = APER_Dec_Basic_Integer_U32(buff, buff_len, &local_byte_index, &local_bit_index,
                                        0, 65535, 16, 0, &(id));
   if (len_ret < 0) return len_ret;

   /* Decode CRITICALITY of type ENUMERATED */
   len_ret = APER_Dec_Basic_Enum_U8(buff, buff_len, &local_byte_index, &local_bit_index,
                                  2, 0, CRITICALITY_NOTIFY, &(criticality));
   if (len_ret < 0) return len_ret;

   /* Read length of Instance Value */
   len_ret = APER_DEC_Open_Length(buff, buff_len, &local_byte_index, &local_bit_index, &len_of_item);
   if (len_ret < 0) return APER_ERR_DEC_CLSINST_BUFF_TOOSHORT_C;
   end_of_item = local_byte_index + len_of_item;

   switch (id) {
      /* Decode Sub-Item PDUSessionResourceAdmittedItem */
      case ID_PDUSESSIONRESOURCEADMITTEDITEM:
         if (CRITICALITY_IGNORE != criticality) return APER_ERR_DEC_CLSINST_INC_CRITIC_C;
         if (IE_Order[0] != 0) return APER_ERR_DEC_CLSINST_DUPLICATE_IE_C;
         IE_Order[0] = accepted_index++;
         /* Decode TYPE of type SEQUENCE */
         len_ret = LTE_APER_Dec_PDUSessionResourceAdmittedItem(&(clsInst->PDUSessionResourceAdmittedItem), buff, end_of_item, &local_byte_index, &local_bit_index);
         break;
      default:
         /* Ignore or return for unsupported IEI based on received Criticality */
         if (CRITICALITY_REJECT == criticality) return APER_ERR_DEC_CLSINST_REJECT_IE_NOT_COMPREHEND_C;
         else { /* Ignore and continue */
            local_byte_index = end_of_item;
         }
         break;
   }
   if (len_ret < 0) return len_ret;


   /* Mark presence for optional items */
   if (IE_Order[0] != 0) clsInst->PDUSessionResourceAdmittedItem_Present = 1;

   len_ret = local_byte_index - (*buff_index);
   if (local_bit_index != 8) len_ret += 1;
   (*buff_index) = local_byte_index;
   (*bit_pos)    = local_bit_index;

   return len_ret;
}

/* PDUSessionResourceAdmittedList - Sequence Of PDUSessionResourceAdmittedItemIEs */
int LTE_APER_Dec_PDUSessionResourceAdmittedList(PDUSessionResourceAdmittedList_t *seqOf, byte *buff, int buff_len, int *buff_index, int *bit_pos) {
   int local_byte_index  = (*buff_index);
   int local_bit_index   = (*bit_pos);
   int len_ret           = 0;
   int inst_index        = 0;

   /* Decode Sequence Of Preamble */
   len_ret = APER_Dec_Basic_Integer_S32(buff, buff_len, &local_byte_index, &local_bit_index, 
                                    1, 256, 8, 0, &(seqOf->nbrInstances));
   if (len_ret < 0) return len_ret;

   /* Apply Max item optimization for decoding */
   if (seqOf->nbrInstances > 4) seqOf->nbrInstances = 4;

   if(seqOf->nbrInstances != 0) {
      for (inst_index = 0; inst_index < seqOf->nbrInstances; inst_index++) {
         /* Decode PDUSessionResourceAdmittedItemIEs_t of type CLASS INST */
         len_ret = LTE_APER_Dec_PDUSessionResourceAdmittedItemIEs(&(seqOf->ProtocolIE_SingleContainer[inst_index]), buff, buff_len, &local_byte_index, &local_bit_index);
         if (local_bit_index != 8) {
            local_bit_index = 8; local_byte_index++;
         }
         if (len_ret < 0) return len_ret;
      }
   }

   len_ret = local_byte_index - (*buff_index);
   if (local_bit_index != 8) len_ret += 1;
   (*buff_index) = local_byte_index;
   (*bit_pos)    = local_bit_index;

   return len_ret;
}


/* PDUSessionItem - Sequence Format 2 */
int LTE_APER_Dec_PDUSessionItem(PDUSessionItem_t *seq, byte *buff, int buff_len, int *buff_index, int *bit_pos) {
   int local_byte_index  = (*buff_index);
   int local_bit_index   = (*bit_pos);
   int len_ret           = 0;
   unsigned int preamble_len = 2;
   unsigned int preamble_val = 0;
   unsigned int ext_bit_val  = 0;

   int ext_len_item = 0;
   unsigned int ext_preamble_len  = 0;
   unsigned int ext_preamble_val  = 0;
   int ext_preamble_items= 0;
   int ext_preamble_mask = 0;

   /* Read Sequence Preamble Info */
   len_ret = APER_DEC_PREAMBLE(buff, buff_len, &local_byte_index, &local_bit_index, preamble_len, &preamble_val);
   if (len_ret < 0) return len_ret;

   ext_bit_val = preamble_val >> 1;

   /* Decode pDUSessionID of type INTEGER */
   len_ret = APER_Dec_Basic_Integer_U32(buff, buff_len, &local_byte_index, &local_bit_index,
                                        0, 255, 8, 0, &(seq->pDUSessionID));
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = pDUSessionID\n", len_ret, __FUNCTION__);
     return len_ret;
   }

   /* Decode cause of type CHOICE */
   len_ret = LTE_APER_Dec_Cause(&(seq->cause), buff, buff_len, &local_byte_index, &local_bit_index);
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = cause\n", len_ret, __FUNCTION__);
     return len_ret;
   }

   if (ext_bit_val) {
      /* Read extension preamble length */
      len_ret = APER_Dec_Basic_Integer_U32(buff, buff_len, &local_byte_index, &local_bit_index,
                                       0, 127, 7, 0, &ext_preamble_len);
      if (len_ret < 0) return len_ret;
      if (ext_preamble_len < 0 || ext_preamble_len > 10) return APER_ERR_DEC_SEQ_MAN_EXT_TOO_MANY_C;
      ext_preamble_items = ext_preamble_len++;

      len_ret = APER_DEC_PREAMBLE(buff, buff_len, &local_byte_index, &local_bit_index, ext_preamble_len, &ext_preamble_val);
      if (len_ret < 0) return len_ret;

      /* Skip unsupported extensions */
      while (ext_preamble_items > 0) {
         ext_preamble_items --;
         ext_preamble_mask = 1 << ext_preamble_items;
         if (ext_preamble_val & ext_preamble_mask) {
            len_ret = APER_DEC_Open_Length(buff, buff_len, &local_byte_index, &local_bit_index, &ext_len_item);
            if (len_ret < 0) return APER_ERR_DEC_SEQ_BUFF_TOO_SHORT_C;
            local_byte_index += ext_len_item;
         }
      }
   }

   len_ret = local_byte_index - (*buff_index);
   if (local_bit_index != 8) len_ret += 1;
   (*buff_index) = local_byte_index;
   (*bit_pos)    = local_bit_index;

   return len_ret;
}


/* PDUSessionList - Sequence Of PDUSessionItem */
int LTE_APER_Dec_PDUSessionList(PDUSessionList_t *seqOf, byte *buff, int buff_len, int *buff_index, int *bit_pos) {
   int local_byte_index  = (*buff_index);
   int local_bit_index   = (*bit_pos);
   int len_ret           = 0;
   int inst_index        = 0;

   /* Decode Sequence Of Preamble */
   len_ret = APER_Dec_Basic_Integer_S32(buff, buff_len, &local_byte_index, &local_bit_index, 
                                    1, 256, 8, 0, &(seqOf->nbrInstances));
   if (len_ret < 0) return len_ret;

   /* Apply Max item optimization for decoding */
   if (seqOf->nbrInstances > 4) seqOf->nbrInstances = 4;

   if(seqOf->nbrInstances != 0) {
      for (inst_index = 0; inst_index < seqOf->nbrInstances; inst_index++) {
         /* Decode PDUSessionItem_t of type SEQUENCE */
         len_ret = LTE_APER_Dec_PDUSessionItem(&(seqOf->PDUSessionItem[inst_index]), buff, buff_len, &local_byte_index, &local_bit_index);
         if (len_ret < 0) return len_ret;
      }
   }

   len_ret = local_byte_index - (*buff_index);
   if (local_bit_index != 8) len_ret += 1;
   (*buff_index) = local_byte_index;
   (*bit_pos)    = local_bit_index;

   return len_ret;
}


/* CriticalityDiagnostics-IE-Item - Sequence Format 2 */
int LTE_APER_Dec_CriticalityDiagnostics_IE_Item(CriticalityDiagnostics_IE_Item_t *seq, byte *buff, int buff_len, int *buff_index, int *bit_pos) {
   int local_byte_index  = (*buff_index);
   int local_bit_index   = (*bit_pos);
   int len_ret           = 0;
   unsigned int preamble_len = 2;
   unsigned int preamble_val = 0;
   unsigned int ext_bit_val  = 0;

   int ext_len_item = 0;
   unsigned int ext_preamble_len  = 0;
   unsigned int ext_preamble_val  = 0;
   int ext_preamble_items= 0;
   int ext_preamble_mask = 0;

   /* Read Sequence Preamble Info */
   len_ret = APER_DEC_PREAMBLE(buff, buff_len, &local_byte_index, &local_bit_index, preamble_len, &preamble_val);
   if (len_ret < 0) return len_ret;

   ext_bit_val = preamble_val >> 1;

   /* Decode iECriticality of type ENUMERATED */
   len_ret = APER_Dec_Basic_Enum_U8(buff, buff_len, &local_byte_index, &local_bit_index,
                                  2, 0, CRITICALITY_NOTIFY, &(seq->iECriticality));
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = iECriticality\n", len_ret, __FUNCTION__);
     return len_ret;
   }

   /* Decode iE-ID of type INTEGER */
   len_ret = APER_Dec_Basic_Integer_U32(buff, buff_len, &local_byte_index, &local_bit_index,
                                        0, 65535, 16, 0, &(seq->iE_ID));
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = iE-ID\n", len_ret, __FUNCTION__);
     return len_ret;
   }

   /* Decode typeOfError of type ENUMERATED */
   len_ret = APER_Dec_Basic_Enum_U32(buff, buff_len, &local_byte_index, &local_bit_index,
                                  1, 1, TYPEOFERROR_EXT_START, &(seq->typeOfError));
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = typeOfError\n", len_ret, __FUNCTION__);
     return len_ret;
   }

   if (ext_bit_val) {
      /* Read extension preamble length */
      len_ret = APER_Dec_Basic_Integer_U32(buff, buff_len, &local_byte_index, &local_bit_index,
                                       0, 127, 7, 0, &ext_preamble_len);
      if (len_ret < 0) return len_ret;
      if (ext_preamble_len < 0 || ext_preamble_len > 10) return APER_ERR_DEC_SEQ_MAN_EXT_TOO_MANY_C;
      ext_preamble_items = ext_preamble_len++;

      len_ret = APER_DEC_PREAMBLE(buff, buff_len, &local_byte_index, &local_bit_index, ext_preamble_len, &ext_preamble_val);
      if (len_ret < 0) return len_ret;

      /* Skip unsupported extensions */
      while (ext_preamble_items > 0) {
         ext_preamble_items --;
         ext_preamble_mask = 1 << ext_preamble_items;
         if (ext_preamble_val & ext_preamble_mask) {
            len_ret = APER_DEC_Open_Length(buff, buff_len, &local_byte_index, &local_bit_index, &ext_len_item);
            if (len_ret < 0) return APER_ERR_DEC_SEQ_BUFF_TOO_SHORT_C;
            local_byte_index += ext_len_item;
         }
      }
   }

   len_ret = local_byte_index - (*buff_index);
   if (local_bit_index != 8) len_ret += 1;
   (*buff_index) = local_byte_index;
   (*bit_pos)    = local_bit_index;

   return len_ret;
}


/* CriticalityDiagnostics-IE-List - Sequence Of CriticalityDiagnostics-IE-Item */
int LTE_APER_Dec_CriticalityDiagnostics_IE_List(CriticalityDiagnostics_IE_List_t *seqOf, byte *buff, int buff_len, int *buff_index, int *bit_pos) {
   int local_byte_index  = (*buff_index);
   int local_bit_index   = (*bit_pos);
   int len_ret           = 0;
   int inst_index        = 0;

   /* Decode Sequence Of Preamble */
   len_ret = APER_Dec_Basic_Integer_S32(buff, buff_len, &local_byte_index, &local_bit_index, 
                                    1, 256, 8, 0, &(seqOf->nbrInstances));
   if (len_ret < 0) return len_ret;

   /* Apply Max item optimization for decoding */
   if (seqOf->nbrInstances > 4) seqOf->nbrInstances = 4;

   if(seqOf->nbrInstances != 0) {
      for (inst_index = 0; inst_index < seqOf->nbrInstances; inst_index++) {
         /* Decode CriticalityDiagnostics_IE_Item_t of type SEQUENCE */
         len_ret = LTE_APER_Dec_CriticalityDiagnostics_IE_Item(&(seqOf->CriticalityDiagnostics_IE_Item[inst_index]), buff, buff_len, &local_byte_index, &local_bit_index);
         if (len_ret < 0) return len_ret;
      }
   }

   len_ret = local_byte_index - (*buff_index);
   if (local_bit_index != 8) len_ret += 1;
   (*buff_index) = local_byte_index;
   (*bit_pos)    = local_bit_index;

   return len_ret;
}


/* CriticalityDiagnostics - Sequence Format 2 */
int LTE_APER_Dec_CriticalityDiagnostics(CriticalityDiagnostics_t *seq, byte *buff, int buff_len, int *buff_index, int *bit_pos) {
   int local_byte_index  = (*buff_index);
   int local_bit_index   = (*bit_pos);
   int len_ret           = 0;
   unsigned int preamble_len = 6;
   unsigned int preamble_val = 0;
   unsigned int ext_bit_val  = 0;

   int ext_len_item = 0;
   unsigned int ext_preamble_len  = 0;
   unsigned int ext_preamble_val  = 0;
   int ext_preamble_items= 0;
   int ext_preamble_mask = 0;

   /* Read Sequence Preamble Info */
   len_ret = APER_DEC_PREAMBLE(buff, buff_len, &local_byte_index, &local_bit_index, preamble_len, &preamble_val);
   if (len_ret < 0) return len_ret;

   ext_bit_val = preamble_val >> 5;
   if (preamble_val & (1 << 4)) seq->procedureCode_Present = 1;
   if (preamble_val & (1 << 3)) seq->triggeringMessage_Present = 1;
   if (preamble_val & (1 << 2)) seq->procedureCriticality_Present = 1;
   if (preamble_val & (1 << 1)) seq->iEsCriticalityDiagnostics_Present = 1;

   if (seq->procedureCode_Present) {
      /* Decode procedureCode of type INTEGER */
      len_ret = APER_Dec_Basic_Integer_U32(buff, buff_len, &local_byte_index, &local_bit_index,
                                           0, 255, 8, 0, &(seq->procedureCode));
      if (len_ret < 0) {
        printf("ret = %d, function = %s, IE = procedureCode\n", len_ret, __FUNCTION__);
        return len_ret;
      }
   }

   if (seq->triggeringMessage_Present) {
      /* Decode triggeringMessage of type ENUMERATED */
      len_ret = APER_Dec_Basic_Enum_U8(buff, buff_len, &local_byte_index, &local_bit_index,
                                     2, 0, TRIGGERINGMESSAGE_UNSUCCESSFULL_OUTCOME, &(seq->triggeringMessage));
      if (len_ret < 0) {
        printf("ret = %d, function = %s, IE = triggeringMessage\n", len_ret, __FUNCTION__);
        return len_ret;
      }
   }

   if (seq->procedureCriticality_Present) {
      /* Decode procedureCriticality of type ENUMERATED */
      len_ret = APER_Dec_Basic_Enum_U8(buff, buff_len, &local_byte_index, &local_bit_index,
                                     2, 0, CRITICALITY_NOTIFY, &(seq->procedureCriticality));
      if (len_ret < 0) {
        printf("ret = %d, function = %s, IE = procedureCriticality\n", len_ret, __FUNCTION__);
        return len_ret;
      }
   }

   if (seq->iEsCriticalityDiagnostics_Present) {
      /* Decode iEsCriticalityDiagnostics of type SEQUENCE OF */
      len_ret = LTE_APER_Dec_CriticalityDiagnostics_IE_List(&(seq->iEsCriticalityDiagnostics), buff, buff_len, &local_byte_index, &local_bit_index);
      if (len_ret < 0) {
        printf("ret = %d, function = %s, IE = iEsCriticalityDiagnostics\n", len_ret, __FUNCTION__);
        return len_ret;
      }
   }

   if (ext_bit_val) {
      /* Read extension preamble length */
      len_ret = APER_Dec_Basic_Integer_U32(buff, buff_len, &local_byte_index, &local_bit_index,
                                       0, 127, 7, 0, &ext_preamble_len);
      if (len_ret < 0) return len_ret;
      if (ext_preamble_len < 0 || ext_preamble_len > 10) return APER_ERR_DEC_SEQ_MAN_EXT_TOO_MANY_C;
      ext_preamble_items = ext_preamble_len++;

      len_ret = APER_DEC_PREAMBLE(buff, buff_len, &local_byte_index, &local_bit_index, ext_preamble_len, &ext_preamble_val);
      if (len_ret < 0) return len_ret;

      /* Skip unsupported extensions */
      while (ext_preamble_items > 0) {
         ext_preamble_items --;
         ext_preamble_mask = 1 << ext_preamble_items;
         if (ext_preamble_val & ext_preamble_mask) {
            len_ret = APER_DEC_Open_Length(buff, buff_len, &local_byte_index, &local_bit_index, &ext_len_item);
            if (len_ret < 0) return APER_ERR_DEC_SEQ_BUFF_TOO_SHORT_C;
            local_byte_index += ext_len_item;
         }
      }
   }

   len_ret = local_byte_index - (*buff_index);
   if (local_bit_index != 8) len_ret += 1;
   (*buff_index) = local_byte_index;
   (*bit_pos)    = local_bit_index;

   return len_ret;
}


/* HandoverRequestAcknowledgeIEs - Class Instance Decoding */
int LTE_APER_Dec_HandoverRequestAcknowledgeIEs(HandoverRequestAcknowledgeIEs_t *clsInst, byte *buff, int buff_len, int *buff_index, int *bit_pos) {
   int local_byte_index  = (*buff_index);
   int local_bit_index   = (*bit_pos);
   int len_ret           = 0;
   unsigned char IE_Order[6];
   int len_of_item       = 0;
   int end_of_item       = 0;
   int inst_index        = 0;
   int nbr_instances     = 0;
   int accepted_index    = 1; /* 1..nbrItems */
   unsigned int  id;
   unsigned char  criticality;
   memset(IE_Order, 0x00, 6); /* Init to 0 indicating IE not received */

   /* Read Preamble according to Constraint ProtocolIE_Container_t */
   len_ret = APER_Dec_Basic_Integer_S32(buff, buff_len, &local_byte_index, &local_bit_index,
                                    0, 65535, 16, 0, &nbr_instances);
   if (len_ret < 0) return len_ret;
   while (inst_index < nbr_instances) {
      /* Decode ID of type INTEGER */
      len_ret = APER_Dec_Basic_Integer_U32(buff, buff_len, &local_byte_index, &local_bit_index,
                                           0, 65535, 16, 0, &(id));
      if (len_ret < 0) return len_ret;

      /* Decode CRITICALITY of type ENUMERATED */
      len_ret = APER_Dec_Basic_Enum_U8(buff, buff_len, &local_byte_index, &local_bit_index,
                                     2, 0, CRITICALITY_NOTIFY, &(criticality));
      if (len_ret < 0) return len_ret;

      /* Read length of Instance Value */
      len_ret = APER_DEC_Open_Length(buff, buff_len, &local_byte_index, &local_bit_index, &len_of_item);
      if (len_ret < 0) return APER_ERR_DEC_CLSINST_BUFF_TOOSHORT_C;
      end_of_item = local_byte_index + len_of_item;

      switch (id) {
         /* Decode Sub-Item AMF_UE_NGAP_ID */
         case ID_AMF_UE_NGAP_ID:
            if (CRITICALITY_IGNORE != criticality) return APER_ERR_DEC_CLSINST_INC_CRITIC_C;
            if (IE_Order[0] != 0) return APER_ERR_DEC_CLSINST_DUPLICATE_IE_C;
            IE_Order[0] = accepted_index++;
            /* Decode TYPE of type INTEGER */
            len_ret = APER_Dec_Basic_Integer_U32(buff, end_of_item, &local_byte_index, &local_bit_index,
                                                 0, 4294967295, 32, 0, &(clsInst->AMF_UE_NGAP_ID));
            break;
         /* Decode Sub-Item RAN_UE_NGAP_ID */
         case ID_RAN_UE_NGAP_ID:
            if (CRITICALITY_IGNORE != criticality) return APER_ERR_DEC_CLSINST_INC_CRITIC_C;
            if (IE_Order[1] != 0) return APER_ERR_DEC_CLSINST_DUPLICATE_IE_C;
            IE_Order[1] = accepted_index++;
            /* Decode TYPE of type INTEGER */
            len_ret = APER_Dec_Basic_Integer_U32(buff, end_of_item, &local_byte_index, &local_bit_index,
                                                 0, 4294967295, 32, 0, &(clsInst->RAN_UE_NGAP_ID));
            break;
         /* Decode Sub-Item PDUSessionResourceAdmittedList */
         case ID_PDUSESSIONRESOURCEADMITTEDLIST:
            if (CRITICALITY_IGNORE != criticality) return APER_ERR_DEC_CLSINST_INC_CRITIC_C;
            if (IE_Order[2] != 0) return APER_ERR_DEC_CLSINST_DUPLICATE_IE_C;
            IE_Order[2] = accepted_index++;
            /* Decode TYPE of type SEQUENCE OF */
            len_ret = LTE_APER_Dec_PDUSessionResourceAdmittedList(&(clsInst->PDUSessionResourceAdmittedList), buff, end_of_item, &local_byte_index, &local_bit_index);
            break;
         /* Decode Sub-Item PDUSessionResourceFailedToSetupList */
         case ID_PDUSESSIONRESOURCEFAILEDTOSETUPLIST:
            if (CRITICALITY_IGNORE != criticality) return APER_ERR_DEC_CLSINST_INC_CRITIC_C;
            if (IE_Order[3] != 0) return APER_ERR_DEC_CLSINST_DUPLICATE_IE_C;
            IE_Order[3] = accepted_index++;
            /* Decode TYPE of type SEQUENCE OF */
            len_ret = LTE_APER_Dec_PDUSessionList(&(clsInst->PDUSessionResourceFailedToSetupList), buff, end_of_item, &local_byte_index, &local_bit_index);
            break;
         /* Decode Sub-Item TargetToSource_TransparentContainer */
         case ID_TARGETTOSOURCE_TRANSPARENTCONTAINER:
            if (CRITICALITY_REJECT != criticality) return APER_ERR_DEC_CLSINST_INC_CRITIC_C;
            if (IE_Order[4] != 0) return APER_ERR_DEC_CLSINST_DUPLICATE_IE_C;
            IE_Order[4] = accepted_index++;
            /* Decode TargetToSource_TransparentContainer of type OCTET STRING */
            clsInst->TargetToSource_TransparentContainer.length = 512;
            len_ret = APER_DEC_OCTSTR_AS_OPEN_ARRAY(buff, end_of_item, &local_byte_index, &local_bit_index,
                                                   &(clsInst->TargetToSource_TransparentContainer.length),
                                                   clsInst->TargetToSource_TransparentContainer.content);
            break;
         /* Decode Sub-Item CriticalityDiagnostics */
         case ID_CRITICALITYDIAGNOSTICS:
            if (CRITICALITY_IGNORE != criticality) return APER_ERR_DEC_CLSINST_INC_CRITIC_C;
            if (IE_Order[5] != 0) return APER_ERR_DEC_CLSINST_DUPLICATE_IE_C;
            IE_Order[5] = accepted_index++;
            /* Decode TYPE of type SEQUENCE */
            len_ret = LTE_APER_Dec_CriticalityDiagnostics(&(clsInst->CriticalityDiagnostics), buff, end_of_item, &local_byte_index, &local_bit_index);
            break;
         default:
            /* Ignore or return for unsupported IEI based on received Criticality */
            if (CRITICALITY_REJECT == criticality) return APER_ERR_DEC_CLSINST_REJECT_IE_NOT_COMPREHEND_C;
            else { /* Ignore and continue */
               local_byte_index = end_of_item;
            }
            break;
      }
      if (len_ret < 0) return len_ret;

      inst_index += 1; /* Read next ID */
   }

   /* Check for mandatory missing */
   if (IE_Order[4] == 0) return APER_ERR_DEC_CLSINST_MAND_IE_MISSING_C;

   /* Check IEI order */
   for (inst_index = 0; inst_index < 5; inst_index++) {
      if (IE_Order[inst_index + 1] && IE_Order[inst_index] > IE_Order[inst_index + 1])
         return APER_ERR_DEC_CLSINST_WRONG_ORDER_C;
   }

   /* Mark presence for optional items */
   if (IE_Order[0] != 0) clsInst->AMF_UE_NGAP_ID_Present = 1;
   if (IE_Order[1] != 0) clsInst->RAN_UE_NGAP_ID_Present = 1;
   if (IE_Order[2] != 0) clsInst->PDUSessionResourceAdmittedList_Present = 1;
   if (IE_Order[3] != 0) clsInst->PDUSessionResourceFailedToSetupList_Present = 1;
   if (IE_Order[5] != 0) clsInst->CriticalityDiagnostics_Present = 1;

   len_ret = local_byte_index - (*buff_index);
   if (local_bit_index != 8) len_ret += 1;
   (*buff_index) = local_byte_index;
   (*bit_pos)    = local_bit_index;

   return len_ret;
}

/* HandoverRequestAcknowledge - Sequence Format 2 */
int LTE_APER_Dec_Msg_HandoverRequestAcknowledge(HandoverRequestAcknowledge_t *seq, byte *buff, int buff_len, int *buff_index, int *bit_pos) {
   int local_byte_index  = (*buff_index);
   int local_bit_index   = (*bit_pos);
   int len_ret           = 0;
   int len_msg           = 0;
   unsigned int preamble_len = 1;
   unsigned int preamble_val = 0;
   unsigned int ext_bit_val  = 0;

   int ext_len_item = 0;
   unsigned int ext_preamble_len  = 0;
   unsigned int ext_preamble_val  = 0;
   int ext_preamble_items= 0;
   int ext_preamble_mask = 0;

   /* Check Message Header */
   if (buff[local_byte_index++] != NGAP_PDU_CHOICE_SUCCESSFULOUTCOME << 5)   return -1;
   if (buff[local_byte_index++] != ID_HANDOVERRESOURCEALLOCATION)   return -1;
   if (buff[local_byte_index++] != CRITICALITY_REJECT_C)   return -1;
   len_ret = APER_DEC_Open_Length(buff, buff_len, &local_byte_index, &local_bit_index, &len_msg);
   if (len_ret < 0 ) return APER_ERR_DEC_SEQ_BUFF_TOO_SHORT_C;

   /* Read Sequence Preamble Info */
   len_ret = APER_DEC_PREAMBLE(buff, buff_len, &local_byte_index, &local_bit_index, preamble_len, &preamble_val);
   if (len_ret < 0) return len_ret;

   ext_bit_val = preamble_val >> 0;

   /* Decode protocolIEs of type CLASS INST */
   len_ret = LTE_APER_Dec_HandoverRequestAcknowledgeIEs(&(seq->protocolIEs), buff, buff_len, &local_byte_index, &local_bit_index);
   if (local_bit_index != 8) {
      local_bit_index = 8; local_byte_index++;
   }
   if (len_ret < 0) return len_ret;


   if (ext_bit_val) {
      /* Read extension preamble length */
      len_ret = APER_Dec_Basic_Integer_U32(buff, buff_len, &local_byte_index, &local_bit_index,
                                       0, 127, 7, 0, &ext_preamble_len);
      if (len_ret < 0) return len_ret;
      if (ext_preamble_len < 0 || ext_preamble_len > 10) return APER_ERR_DEC_SEQ_MAN_EXT_TOO_MANY_C;
      ext_preamble_items = ext_preamble_len++;

      len_ret = APER_DEC_PREAMBLE(buff, buff_len, &local_byte_index, &local_bit_index, ext_preamble_len, &ext_preamble_val);
      if (len_ret < 0) return len_ret;

      /* Skip unsupported extensions */
      while (ext_preamble_items > 0) {
         ext_preamble_items -= 1;
         ext_preamble_mask   = 1 << ext_preamble_items;
         if (ext_preamble_val & ext_preamble_mask) {
            len_ret = APER_DEC_Open_Length(buff, buff_len, &local_byte_index, &local_bit_index, &ext_len_item);
            if (len_ret < 0) return APER_ERR_DEC_SEQ_BUFF_TOO_SHORT_C;
            local_byte_index += ext_len_item;
         }
      }
   }

   len_ret = local_byte_index - (*buff_index);
   if (local_bit_index != 8) len_ret += 1;
   (*buff_index) = local_byte_index;
   (*bit_pos)    = local_bit_index;

   return len_ret;
}

