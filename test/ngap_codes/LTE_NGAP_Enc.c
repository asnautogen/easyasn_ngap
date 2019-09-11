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

#include "../asn_support/hdr/lib_enc_types.h"
#include "LTE_NGAP_Enc.h"
#include "LTE_NGAP_IE.h"


/* GTPTunnel - Sequence Format 2 */
int LTE_APER_Enc_GTPTunnel(GTPTunnel_t *seq, byte *buff, int buff_len, int *buff_index, int *bit_pos) {
   int local_byte_index  = (*buff_index);
   int local_bit_index   = (*bit_pos);
   int len_ret           = 0;
   unsigned int preamble_len = 2;
   unsigned int preamble_val = 0;

   /* Build and Encode Sequence Preamble Info */
   len_ret = APER_ENC_PREAMBLE(buff, buff_len, &local_byte_index, &local_bit_index, preamble_len, preamble_val);
   if (len_ret < 0) return len_ret;

   /* Encode transportLayerAddress of type BIT STRING */
   len_ret = APER_ENC_BITSTR_AS_ARRAY_VAR_EXT(buff, buff_len, &local_byte_index, &local_bit_index,
                                          1, 160, 8, seq->transportLayerAddress.len_bits, seq->transportLayerAddress.cont_bits, 0);
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = transportLayerAddress\n", len_ret, __FUNCTION__);
     return len_ret;
   }

   /* Encode field gTP_TEID of type OCTET STRING */
   len_ret = APER_ENC_OCTSTR_AS_INTEGER_FIXED_VB4(buff, buff_len, &local_byte_index, &local_bit_index,
                                                  seq->gTP_TEID, 0);
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = gTP-TEID\n", len_ret, __FUNCTION__);
     return len_ret;
   }

   len_ret = local_byte_index - (*buff_index);
   if (local_bit_index != 8) len_ret += 1;
   (*buff_index) = local_byte_index;
   (*bit_pos)    = local_bit_index;

   return len_ret;
}


/* UPTransportLayerInformation - Choice Encoder */
int LTE_APER_Enc_UPTransportLayerInformation(UPTransportLayerInformation_t *pch, byte *buff, int buff_len, int *buff_index, int *bit_pos) {
   int local_byte_index  = (*buff_index);
   int local_bit_index   = (*bit_pos);
   int len_ret           = 0;

   unsigned int preamble_len = 1;
   unsigned int preamble_val = 0;

   /* Validate choice index */
   if (pch->Choice_Index > UPTRANSPORTLAYERINFORMATION_CHOICE_LAST) return APER_ERR_ENC_CHOICE_INDEX_VIOLATION_C;
   if (pch->Choice_Index >= UPTRANSPORTLAYERINFORMATION_CHOICE_EXT) {
       preamble_len = 8;
       preamble_val = 0x80 + (pch->Choice_Index - UPTRANSPORTLAYERINFORMATION_CHOICE_EXT);
   }
   /* Encode choice preamble */
   len_ret = APER_ENC_PREAMBLE(buff, buff_len, &local_byte_index, &local_bit_index, preamble_len, preamble_val);
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = UPTransportLayerInformation\n", len_ret, __FUNCTION__);
     return len_ret;
   }
   /* Encode choice elemente */
   switch (pch->Choice_Index) {
      case UPTRANSPORTLAYERINFORMATION_CHOICE_GTPTUNNEL:
         /* Encode gTPTunnel of type SEQUENCE */
         len_ret = LTE_APER_Enc_GTPTunnel(&(pch->Choices.gTPTunnel),buff, buff_len, &local_byte_index, &local_bit_index);
         break;
   }

   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = UPTransportLayerInformation\n", len_ret, __FUNCTION__);
     return len_ret;
   }
   len_ret = local_byte_index - (*buff_index);
   if (local_bit_index != 8) len_ret += 1;
   (*buff_index) = local_byte_index;
   (*bit_pos)    = local_bit_index;

   return len_ret;
}


/* SecurityResult - Sequence Format 2 */
int LTE_APER_Enc_SecurityResult(SecurityResult_t *seq, byte *buff, int buff_len, int *buff_index, int *bit_pos) {
   int local_byte_index  = (*buff_index);
   int local_bit_index   = (*bit_pos);
   int len_ret           = 0;
   unsigned int preamble_len = 2;
   unsigned int preamble_val = 0;

   /* Build and Encode Sequence Preamble Info */
   len_ret = APER_ENC_PREAMBLE(buff, buff_len, &local_byte_index, &local_bit_index, preamble_len, preamble_val);
   if (len_ret < 0) return len_ret;

   /* Encode integrityProtectionResult of type ENUMERATED */
   len_ret = APER_Enc_Basic_Enum_Ext(buff, buff_len, &local_byte_index, &local_bit_index,
                                  1, INTEGRITYPROTECTIONRESULT_EXT_START, seq->integrityProtectionResult, 0);
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = integrityProtectionResult\n", len_ret, __FUNCTION__);
     return len_ret;
   }

   /* Encode confidentialityProtectionResult of type ENUMERATED */
   len_ret = APER_Enc_Basic_Enum_Ext(buff, buff_len, &local_byte_index, &local_bit_index,
                                  1, CONFIDENTIALITYPROTECTIONRESULT_EXT_START, seq->confidentialityProtectionResult, 0);
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = confidentialityProtectionResult\n", len_ret, __FUNCTION__);
     return len_ret;
   }

   len_ret = local_byte_index - (*buff_index);
   if (local_bit_index != 8) len_ret += 1;
   (*buff_index) = local_byte_index;
   (*bit_pos)    = local_bit_index;

   return len_ret;
}


/* QosFlowSetupResponseItemHOReqAck - Sequence Format 2 */
int LTE_APER_Enc_QosFlowSetupResponseItemHOReqAck(QosFlowSetupResponseItemHOReqAck_t *seq, byte *buff, int buff_len, int *buff_index, int *bit_pos) {
   int local_byte_index  = (*buff_index);
   int local_bit_index   = (*bit_pos);
   int len_ret           = 0;
   unsigned int preamble_len = 3;
   unsigned int preamble_val = 0;

   /* Build and Encode Sequence Preamble Info */
   if (seq->dataForwardingAccepted_Present) preamble_val |= 1 << 1;
   len_ret = APER_ENC_PREAMBLE(buff, buff_len, &local_byte_index, &local_bit_index, preamble_len, preamble_val);
   if (len_ret < 0) return len_ret;

   /* Encode qosFlowIndicator of type INTEGER */
   len_ret = APER_Enc_SINT_Ext(buff, buff_len, &local_byte_index, &local_bit_index,
                               0, 63, 6, seq->qosFlowIndicator, 0);
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = qosFlowIndicator\n", len_ret, __FUNCTION__);
     return len_ret;
   }

   if (seq->dataForwardingAccepted_Present) {
      /* Encode dataForwardingAccepted of type ENUMERATED */
      len_ret = APER_Enc_Basic_Enum_Ext(buff, buff_len, &local_byte_index, &local_bit_index,
                                     1, DATAFORWARDINGACCEPTED_EXT_START, seq->dataForwardingAccepted, 0);
      if (len_ret < 0) {
        printf("ret = %d, function = %s, IE = dataForwardingAccepted\n", len_ret, __FUNCTION__);
        return len_ret;
      }
   }

   len_ret = local_byte_index - (*buff_index);
   if (local_bit_index != 8) len_ret += 1;
   (*buff_index) = local_byte_index;
   (*bit_pos)    = local_bit_index;

   return len_ret;
}


/* QosFlowSetupResponseListHOReqAck - Sequence Of QosFlowSetupResponseItemHOReqAck */
int LTE_APER_Enc_QosFlowSetupResponseListHOReqAck(QosFlowSetupResponseListHOReqAck_t *seqOf, byte *buff, int buff_len, int *buff_index, int *bit_pos) {
   int local_byte_index  = (*buff_index);
   int local_bit_index   = (*bit_pos);
   int len_ret           = 0;
   int inst_index        = 0;

   /* Encode Sequence Of Preamble */
   if(seqOf->nbrInstances == 0) return 0;
   len_ret = APER_Enc_UINT_VB0(buff, buff_len, &local_byte_index, &local_bit_index,
                               1, 64, 6, seqOf->nbrInstances, 0);
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = QosFlowSetupResponseListHOReqAck\n", len_ret, __FUNCTION__);
     return len_ret;
   }

   for (inst_index = 0; inst_index < seqOf->nbrInstances && inst_index < 4; inst_index++) {
      /* Encode QosFlowSetupResponseItemHOReqAck_t of type SEQUENCE */
      len_ret = LTE_APER_Enc_QosFlowSetupResponseItemHOReqAck(&(seqOf->QosFlowSetupResponseItemHOReqAck[inst_index]),buff, buff_len, &local_byte_index, &local_bit_index);
      if (len_ret < 0) {
        printf("ret = %d, function = %s, IE = QosFlowSetupResponseItemHOReqAck_t\n", len_ret, __FUNCTION__);
        return len_ret;
      }
   }

   len_ret = local_byte_index - (*buff_index);
   if (local_bit_index != 8) len_ret += 1;
   (*buff_index) = local_byte_index;
   (*bit_pos)    = local_bit_index;

   return len_ret;
}


/* Cause - Choice Encoder */
int LTE_APER_Enc_Cause(Cause_t *pch, byte *buff, int buff_len, int *buff_index, int *bit_pos, int octet_aligned) {
   int local_byte_index  = (*buff_index);
   int local_bit_index   = (*bit_pos);
   int len_ret           = 0;

   unsigned int preamble_len = 4;
   unsigned int preamble_val = pch->Choice_Index;

   int length_ind_pos    = 0;
   /* Validate choice index */
   if (pch->Choice_Index > CAUSE_CHOICE_LAST) return APER_ERR_ENC_CHOICE_INDEX_VIOLATION_C;
   if (pch->Choice_Index >= CAUSE_CHOICE_EXT) {
       preamble_len = 8;
       preamble_val = 0x80 + (pch->Choice_Index - CAUSE_CHOICE_EXT);
   }
   /* Record length position */
   if (octet_aligned) {
      if (local_bit_index != 8) { local_bit_index = 8; local_byte_index += 1;}
      length_ind_pos = local_byte_index ++;
   }

   /* Encode choice preamble */
   len_ret = APER_ENC_PREAMBLE(buff, buff_len, &local_byte_index, &local_bit_index, preamble_len, preamble_val);
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = Cause\n", len_ret, __FUNCTION__);
     return len_ret;
   }
   /* Encode choice elemente */
   switch (pch->Choice_Index) {
      case CAUSE_CHOICE_RADIONETWORK:
         /* Encode radioNetwork of type ENUMERATED */
         len_ret = APER_Enc_Basic_Enum_Ext(buff, buff_len, &local_byte_index, &local_bit_index,
                                        6, CAUSERADIONETWORK_EXT_START, pch->Choices.radioNetwork, 0);
         break;
      case CAUSE_CHOICE_TRANSPORT:
         /* Encode transport of type ENUMERATED */
         len_ret = APER_Enc_Basic_Enum_Ext(buff, buff_len, &local_byte_index, &local_bit_index,
                                        1, CAUSETRANSPORT_EXT_START, pch->Choices.transport, 0);
         break;
      case CAUSE_CHOICE_NAS:
         /* Encode nas of type ENUMERATED */
         len_ret = APER_Enc_Basic_Enum_Ext(buff, buff_len, &local_byte_index, &local_bit_index,
                                        2, CAUSENAS_EXT_START, pch->Choices.nas, 0);
         break;
      case CAUSE_CHOICE_PROTOCOL:
         /* Encode protocol of type ENUMERATED */
         len_ret = APER_Enc_Basic_Enum_Ext(buff, buff_len, &local_byte_index, &local_bit_index,
                                        3, CAUSEPROTOCOL_EXT_START, pch->Choices.protocol, 0);
         break;
      case CAUSE_CHOICE_MISC:
         /* Encode misc of type ENUMERATED */
         len_ret = APER_Enc_Basic_Enum_Ext(buff, buff_len, &local_byte_index, &local_bit_index,
                                        3, CAUSEMISC_EXT_START, pch->Choices.misc, 0);
         break;
   }

   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = Cause\n", len_ret, __FUNCTION__);
     return len_ret;
   }
   if (octet_aligned) {
      len_ret = WriteItemLengthInd(buff, buff_len, length_ind_pos, &local_byte_index, &local_bit_index);
      if (len_ret < 0) {
         printf("ret = %d (%s.WriteItemLengthInd()\n", len_ret, __FUNCTION__);
         return len_ret;
      }
   }
   len_ret = local_byte_index - (*buff_index);
   if (local_bit_index != 8) len_ret += 1;
   (*buff_index) = local_byte_index;
   (*bit_pos)    = local_bit_index;

   return len_ret;
}


/* QosFlowItem - Sequence Format 2 */
int LTE_APER_Enc_QosFlowItem(QosFlowItem_t *seq, byte *buff, int buff_len, int *buff_index, int *bit_pos) {
   int local_byte_index  = (*buff_index);
   int local_bit_index   = (*bit_pos);
   int len_ret           = 0;
   unsigned int preamble_len = 2;
   unsigned int preamble_val = 0;

   /* Build and Encode Sequence Preamble Info */
   len_ret = APER_ENC_PREAMBLE(buff, buff_len, &local_byte_index, &local_bit_index, preamble_len, preamble_val);
   if (len_ret < 0) return len_ret;

   /* Encode qosFlowIndicator of type INTEGER */
   len_ret = APER_Enc_SINT_Ext(buff, buff_len, &local_byte_index, &local_bit_index,
                               0, 63, 6, seq->qosFlowIndicator, 0);
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = qosFlowIndicator\n", len_ret, __FUNCTION__);
     return len_ret;
   }

   /* Encode cause of type CHOICE */
   len_ret = LTE_APER_Enc_Cause(&(seq->cause), buff, buff_len, &local_byte_index, &local_bit_index, 0);
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = cause\n", len_ret, __FUNCTION__);
     return len_ret;
   }

   len_ret = local_byte_index - (*buff_index);
   if (local_bit_index != 8) len_ret += 1;
   (*buff_index) = local_byte_index;
   (*bit_pos)    = local_bit_index;

   return len_ret;
}


/* QosFlowList - Sequence Of QosFlowItem */
int LTE_APER_Enc_QosFlowList(QosFlowList_t *seqOf, byte *buff, int buff_len, int *buff_index, int *bit_pos) {
   int local_byte_index  = (*buff_index);
   int local_bit_index   = (*bit_pos);
   int len_ret           = 0;
   int inst_index        = 0;

   /* Encode Sequence Of Preamble */
   if(seqOf->nbrInstances == 0) return 0;
   len_ret = APER_Enc_UINT_VB0(buff, buff_len, &local_byte_index, &local_bit_index,
                               1, 64, 6, seqOf->nbrInstances, 0);
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = QosFlowList\n", len_ret, __FUNCTION__);
     return len_ret;
   }

   for (inst_index = 0; inst_index < seqOf->nbrInstances && inst_index < 4; inst_index++) {
      /* Encode QosFlowItem_t of type SEQUENCE */
      len_ret = LTE_APER_Enc_QosFlowItem(&(seqOf->QosFlowItem[inst_index]),buff, buff_len, &local_byte_index, &local_bit_index);
      if (len_ret < 0) {
        printf("ret = %d, function = %s, IE = QosFlowItem_t\n", len_ret, __FUNCTION__);
        return len_ret;
      }
   }

   len_ret = local_byte_index - (*buff_index);
   if (local_bit_index != 8) len_ret += 1;
   (*buff_index) = local_byte_index;
   (*bit_pos)    = local_bit_index;

   return len_ret;
}


/* DataForwardingResponseDRBItem - Sequence Format 2 */
int LTE_APER_Enc_DataForwardingResponseDRBItem(DataForwardingResponseDRBItem_t *seq, byte *buff, int buff_len, int *buff_index, int *bit_pos) {
   int local_byte_index  = (*buff_index);
   int local_bit_index   = (*bit_pos);
   int len_ret           = 0;
   unsigned int preamble_len = 4;
   unsigned int preamble_val = 0;

   /* Build and Encode Sequence Preamble Info */
   if (seq->dLForwardingUP_TNLInformation_Present) preamble_val |= 1 << 2;
   if (seq->uLForwardingUP_TNLInformation_Present) preamble_val |= 1 << 1;
   len_ret = APER_ENC_PREAMBLE(buff, buff_len, &local_byte_index, &local_bit_index, preamble_len, preamble_val);
   if (len_ret < 0) return len_ret;

   /* Encode dRB-ID of type INTEGER */
   len_ret = APER_Enc_SINT_Ext(buff, buff_len, &local_byte_index, &local_bit_index,
                               1, 32, 5, seq->dRB_ID, 0);
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = dRB-ID\n", len_ret, __FUNCTION__);
     return len_ret;
   }

   if (seq->dLForwardingUP_TNLInformation_Present) {
      /* Encode dLForwardingUP-TNLInformation of type CHOICE */
      len_ret = LTE_APER_Enc_UPTransportLayerInformation(&(seq->dLForwardingUP_TNLInformation), buff, buff_len, &local_byte_index, &local_bit_index);
      if (len_ret < 0) {
        printf("ret = %d, function = %s, IE = dLForwardingUP-TNLInformation\n", len_ret, __FUNCTION__);
        return len_ret;
      }
   }

   if (seq->uLForwardingUP_TNLInformation_Present) {
      /* Encode uLForwardingUP-TNLInformation of type CHOICE */
      len_ret = LTE_APER_Enc_UPTransportLayerInformation(&(seq->uLForwardingUP_TNLInformation), buff, buff_len, &local_byte_index, &local_bit_index);
      if (len_ret < 0) {
        printf("ret = %d, function = %s, IE = uLForwardingUP-TNLInformation\n", len_ret, __FUNCTION__);
        return len_ret;
      }
   }

   len_ret = local_byte_index - (*buff_index);
   if (local_bit_index != 8) len_ret += 1;
   (*buff_index) = local_byte_index;
   (*bit_pos)    = local_bit_index;

   return len_ret;
}


/* DataForwardingResponseDRBList - Sequence Of DataForwardingResponseDRBItem */
int LTE_APER_Enc_DataForwardingResponseDRBList(DataForwardingResponseDRBList_t *seqOf, byte *buff, int buff_len, int *buff_index, int *bit_pos) {
   int local_byte_index  = (*buff_index);
   int local_bit_index   = (*bit_pos);
   int len_ret           = 0;
   int inst_index        = 0;

   /* Encode Sequence Of Preamble */
   if(seqOf->nbrInstances == 0) return 0;
   len_ret = APER_Enc_UINT_VB0(buff, buff_len, &local_byte_index, &local_bit_index,
                               1, 32, 5, seqOf->nbrInstances, 0);
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = DataForwardingResponseDRBList\n", len_ret, __FUNCTION__);
     return len_ret;
   }

   for (inst_index = 0; inst_index < seqOf->nbrInstances && inst_index < 4; inst_index++) {
      /* Encode DataForwardingResponseDRBItem_t of type SEQUENCE */
      len_ret = LTE_APER_Enc_DataForwardingResponseDRBItem(&(seqOf->DataForwardingResponseDRBItem[inst_index]),buff, buff_len, &local_byte_index, &local_bit_index);
      if (len_ret < 0) {
        printf("ret = %d, function = %s, IE = DataForwardingResponseDRBItem_t\n", len_ret, __FUNCTION__);
        return len_ret;
      }
   }

   len_ret = local_byte_index - (*buff_index);
   if (local_bit_index != 8) len_ret += 1;
   (*buff_index) = local_byte_index;
   (*bit_pos)    = local_bit_index;

   return len_ret;
}


/* HandoverRequestAcknowledgeTransfer - Sequence Format 2 */
int LTE_APER_Enc_HandoverRequestAcknowledgeTransfer(HandoverRequestAcknowledgeTransfer_t *seq, byte *buff, int buff_len, int *buff_index, int *bit_pos) {
   int local_byte_index  = (*buff_index);
   int local_bit_index   = (*bit_pos);
   int len_ret           = 0;
   unsigned int preamble_len = 6;
   unsigned int preamble_val = 0;

   /* Build and Encode Sequence Preamble Info */
   if (seq->dLForwardingUP_TNLInformation_Present) preamble_val |= 1 << 4;
   if (seq->securityResult_Present) preamble_val |= 1 << 3;
   if (seq->qosFlowFailedToSetupList_Present) preamble_val |= 1 << 2;
   if (seq->dataForwardingResponseDRBList_Present) preamble_val |= 1 << 1;
   len_ret = APER_ENC_PREAMBLE(buff, buff_len, &local_byte_index, &local_bit_index, preamble_len, preamble_val);
   if (len_ret < 0) return len_ret;

   /* Encode dL-NGU-UP-TNLInformation of type CHOICE */
   len_ret = LTE_APER_Enc_UPTransportLayerInformation(&(seq->dL_NGU_UP_TNLInformation), buff, buff_len, &local_byte_index, &local_bit_index);
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = dL-NGU-UP-TNLInformation\n", len_ret, __FUNCTION__);
     return len_ret;
   }

   if (seq->dLForwardingUP_TNLInformation_Present) {
      /* Encode dLForwardingUP-TNLInformation of type CHOICE */
      len_ret = LTE_APER_Enc_UPTransportLayerInformation(&(seq->dLForwardingUP_TNLInformation), buff, buff_len, &local_byte_index, &local_bit_index);
      if (len_ret < 0) {
        printf("ret = %d, function = %s, IE = dLForwardingUP-TNLInformation\n", len_ret, __FUNCTION__);
        return len_ret;
      }
   }

   if (seq->securityResult_Present) {
      /* Encode securityResult of type SEQUENCE */
      len_ret = LTE_APER_Enc_SecurityResult(&(seq->securityResult),buff, buff_len, &local_byte_index, &local_bit_index);
      if (len_ret < 0) {
        printf("ret = %d, function = %s, IE = securityResult\n", len_ret, __FUNCTION__);
        return len_ret;
      }
   }

   /* Encode qosFlowSetupResponseList of type SEQUENCE OF */
   len_ret = LTE_APER_Enc_QosFlowSetupResponseListHOReqAck(&(seq->qosFlowSetupResponseList), buff, buff_len, &local_byte_index, &local_bit_index);
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = qosFlowSetupResponseList\n", len_ret, __FUNCTION__);
     return len_ret;
   }

   if (seq->qosFlowFailedToSetupList_Present) {
      /* Encode qosFlowFailedToSetupList of type SEQUENCE OF */
      len_ret = LTE_APER_Enc_QosFlowList(&(seq->qosFlowFailedToSetupList), buff, buff_len, &local_byte_index, &local_bit_index);
      if (len_ret < 0) {
        printf("ret = %d, function = %s, IE = qosFlowFailedToSetupList\n", len_ret, __FUNCTION__);
        return len_ret;
      }
   }

   if (seq->dataForwardingResponseDRBList_Present) {
      /* Encode dataForwardingResponseDRBList of type SEQUENCE OF */
      len_ret = LTE_APER_Enc_DataForwardingResponseDRBList(&(seq->dataForwardingResponseDRBList), buff, buff_len, &local_byte_index, &local_bit_index);
      if (len_ret < 0) {
        printf("ret = %d, function = %s, IE = dataForwardingResponseDRBList\n", len_ret, __FUNCTION__);
        return len_ret;
      }
   }

   len_ret = local_byte_index - (*buff_index);
   if (local_bit_index != 8) len_ret += 1;
   (*buff_index) = local_byte_index;
   (*bit_pos)    = local_bit_index;

   return len_ret;
}


/* PDUSessionResourceAdmittedItem - Sequence Format 2 */
int LTE_APER_Enc_PDUSessionResourceAdmittedItem(PDUSessionResourceAdmittedItem_t *seq, byte *buff, int buff_len, int *buff_index, int *bit_pos, int octet_aligned) {
   int local_byte_index  = (*buff_index);
   int local_bit_index   = (*bit_pos);
   int len_ret           = 0;
   int length_ind_pos    = 0;
   unsigned int preamble_len = 2;
   unsigned int preamble_val = 0;

   int ctner_len_pos = 0;
   int ctner_len_ret = 0;
   /* Record length position */
   if (octet_aligned) {
      if (local_bit_index != 8) { local_bit_index = 8; local_byte_index += 1;}
      length_ind_pos = local_byte_index ++;
   }

   /* Build and Encode Sequence Preamble Info */
   len_ret = APER_ENC_PREAMBLE(buff, buff_len, &local_byte_index, &local_bit_index, preamble_len, preamble_val);
   if (len_ret < 0) return len_ret;

   /* Encode pDUSessionID of type INTEGER */
   len_ret = APER_Enc_UINT_VB1(buff, buff_len, &local_byte_index, &local_bit_index,
                               0, 255, seq->pDUSessionID, 0);
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = pDUSessionID\n", len_ret, __FUNCTION__);
     return len_ret;
   }

   /* Remember where to put length indicator for OCTET Container item */
   if (local_bit_index != 8) { local_byte_index += 1; local_bit_index = 8;}
   ctner_len_pos = local_byte_index++;

   /* Encode handoverRequestAcknowledgeTransfer of type SEQUENCE */
   len_ret = LTE_APER_Enc_HandoverRequestAcknowledgeTransfer(&(seq->handoverRequestAcknowledgeTransfer),buff, buff_len, &local_byte_index, &local_bit_index);
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = handoverRequestAcknowledgeTransfer\n", len_ret, __FUNCTION__);
     return len_ret;
   }

   /* Write back length indicator for OCTET Container item */
   ctner_len_ret = WriteLengthIndicator(buff, buff_len, ctner_len_pos, &local_byte_index, local_bit_index);
   if(ctner_len_ret < 0) return ctner_len_ret;
   if(local_bit_index != 8) {local_bit_index = 8; local_byte_index += 1;}

   if (octet_aligned) {
      len_ret = WriteItemLengthInd(buff, buff_len, length_ind_pos, &local_byte_index, &local_bit_index);
      if (len_ret < 0) {
         printf("ret = %d (%s.WriteItemLengthInd()\n", len_ret, __FUNCTION__);
         return len_ret;
      }
   }

   len_ret = local_byte_index - (*buff_index);
   if (local_bit_index != 8) len_ret += 1;
   (*buff_index) = local_byte_index;
   (*bit_pos)    = local_bit_index;

   return len_ret;
}


/* PDUSessionResourceAdmittedItemIEs - Class Instance Encoding */
int LTE_APER_Enc_PDUSessionResourceAdmittedItemIEs(PDUSessionResourceAdmittedItemIEs_t *clsInst, byte *buff, int buff_len, int *buff_index, int *bit_pos) {
   int local_byte_index  = (*buff_index);
   int local_bit_index   = (*bit_pos);
   int len_ret           = 0;
   /* WARNING: Constraint type is not resolved  */

   /* Encode Sub-Item ID_PDUSESSIONRESOURCEADMITTEDITEM */
   if (clsInst->PDUSessionResourceAdmittedItem_Present) {
      APER_ENC_CLSINST_ITEM_HDR(ID_PDUSESSIONRESOURCEADMITTEDITEM, CRITICALITY_IGNORE)
      /* Encode TYPE of type SEQUENCE */
      len_ret = LTE_APER_Enc_PDUSessionResourceAdmittedItem(&(clsInst->PDUSessionResourceAdmittedItem),buff, buff_len, &local_byte_index, &local_bit_index, 1);
      if (len_ret < 0) {
        printf("ret = %d, function = %s, IE = ID_PDUSESSIONRESOURCEADMITTEDITEM\n", len_ret, __FUNCTION__);
        return len_ret;
      }
   }

   len_ret = local_byte_index - (*buff_index);
   if (local_bit_index != 8) len_ret += 1;
   (*buff_index) = local_byte_index;
   (*bit_pos)    = local_bit_index;

   return len_ret;
}

/* PDUSessionResourceAdmittedList - Sequence Of PDUSessionResourceAdmittedItemIEs */
int LTE_APER_Enc_PDUSessionResourceAdmittedList(PDUSessionResourceAdmittedList_t *seqOf, byte *buff, int buff_len, int *buff_index, int *bit_pos, int octet_aligned) {
   int local_byte_index  = (*buff_index);
   int local_bit_index   = (*bit_pos);
   int len_ret           = 0;
   int inst_index        = 0;

   int length_ind_pos    = 0;
   /* Encode Sequence Of Preamble */
   if(seqOf->nbrInstances == 0) return 0;
   /* Record length position */
   if (octet_aligned) {
      if (local_bit_index != 8) { local_bit_index = 8; local_byte_index += 1;}
      length_ind_pos = local_byte_index ++;
   }

   len_ret = APER_Enc_UINT_VB1(buff, buff_len, &local_byte_index, &local_bit_index,
                               1, 256, seqOf->nbrInstances, 0);
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = PDUSessionResourceAdmittedList\n", len_ret, __FUNCTION__);
     return len_ret;
   }

   for (inst_index = 0; inst_index < seqOf->nbrInstances && inst_index < 4; inst_index++) {
      /* Encode PDUSessionResourceAdmittedItemIEs_t of type CLASS INST */
      len_ret = LTE_APER_Enc_PDUSessionResourceAdmittedItemIEs(&(seqOf->ProtocolIE_SingleContainer[inst_index]), buff, buff_len, &local_byte_index, &local_bit_index);
      if (len_ret < 0) {
        printf("ret = %d, function = %s, IE = PDUSessionResourceAdmittedItemIEs_t\n", len_ret, __FUNCTION__);
        return len_ret;
      }
   }
   if (octet_aligned) {
      len_ret = WriteItemLengthInd(buff, buff_len, length_ind_pos, &local_byte_index, &local_bit_index);
      if (len_ret < 0) {
         printf("ret = %d (%s.WriteItemLengthInd()\n", len_ret, __FUNCTION__);
         return len_ret;
      }
   }

   len_ret = local_byte_index - (*buff_index);
   if (local_bit_index != 8) len_ret += 1;
   (*buff_index) = local_byte_index;
   (*bit_pos)    = local_bit_index;

   return len_ret;
}


/* PDUSessionItem - Sequence Format 2 */
int LTE_APER_Enc_PDUSessionItem(PDUSessionItem_t *seq, byte *buff, int buff_len, int *buff_index, int *bit_pos) {
   int local_byte_index  = (*buff_index);
   int local_bit_index   = (*bit_pos);
   int len_ret           = 0;
   unsigned int preamble_len = 2;
   unsigned int preamble_val = 0;

   /* Build and Encode Sequence Preamble Info */
   len_ret = APER_ENC_PREAMBLE(buff, buff_len, &local_byte_index, &local_bit_index, preamble_len, preamble_val);
   if (len_ret < 0) return len_ret;

   /* Encode pDUSessionID of type INTEGER */
   len_ret = APER_Enc_UINT_VB1(buff, buff_len, &local_byte_index, &local_bit_index,
                               0, 255, seq->pDUSessionID, 0);
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = pDUSessionID\n", len_ret, __FUNCTION__);
     return len_ret;
   }

   /* Encode cause of type CHOICE */
   len_ret = LTE_APER_Enc_Cause(&(seq->cause), buff, buff_len, &local_byte_index, &local_bit_index, 0);
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = cause\n", len_ret, __FUNCTION__);
     return len_ret;
   }

   len_ret = local_byte_index - (*buff_index);
   if (local_bit_index != 8) len_ret += 1;
   (*buff_index) = local_byte_index;
   (*bit_pos)    = local_bit_index;

   return len_ret;
}


/* PDUSessionList - Sequence Of PDUSessionItem */
int LTE_APER_Enc_PDUSessionList(PDUSessionList_t *seqOf, byte *buff, int buff_len, int *buff_index, int *bit_pos, int octet_aligned) {
   int local_byte_index  = (*buff_index);
   int local_bit_index   = (*bit_pos);
   int len_ret           = 0;
   int inst_index        = 0;

   int length_ind_pos    = 0;
   /* Encode Sequence Of Preamble */
   if(seqOf->nbrInstances == 0) return 0;
   /* Record length position */
   if (octet_aligned) {
      if (local_bit_index != 8) { local_bit_index = 8; local_byte_index += 1;}
      length_ind_pos = local_byte_index ++;
   }

   len_ret = APER_Enc_UINT_VB1(buff, buff_len, &local_byte_index, &local_bit_index,
                               1, 256, seqOf->nbrInstances, 0);
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = PDUSessionList\n", len_ret, __FUNCTION__);
     return len_ret;
   }

   for (inst_index = 0; inst_index < seqOf->nbrInstances && inst_index < 4; inst_index++) {
      /* Encode PDUSessionItem_t of type SEQUENCE */
      len_ret = LTE_APER_Enc_PDUSessionItem(&(seqOf->PDUSessionItem[inst_index]),buff, buff_len, &local_byte_index, &local_bit_index);
      if (len_ret < 0) {
        printf("ret = %d, function = %s, IE = PDUSessionItem_t\n", len_ret, __FUNCTION__);
        return len_ret;
      }
   }
   if (octet_aligned) {
      len_ret = WriteItemLengthInd(buff, buff_len, length_ind_pos, &local_byte_index, &local_bit_index);
      if (len_ret < 0) {
         printf("ret = %d (%s.WriteItemLengthInd()\n", len_ret, __FUNCTION__);
         return len_ret;
      }
   }

   len_ret = local_byte_index - (*buff_index);
   if (local_bit_index != 8) len_ret += 1;
   (*buff_index) = local_byte_index;
   (*bit_pos)    = local_bit_index;

   return len_ret;
}


/* CriticalityDiagnostics-IE-Item - Sequence Format 2 */
int LTE_APER_Enc_CriticalityDiagnostics_IE_Item(CriticalityDiagnostics_IE_Item_t *seq, byte *buff, int buff_len, int *buff_index, int *bit_pos) {
   int local_byte_index  = (*buff_index);
   int local_bit_index   = (*bit_pos);
   int len_ret           = 0;
   unsigned int preamble_len = 2;
   unsigned int preamble_val = 0;

   /* Build and Encode Sequence Preamble Info */
   len_ret = APER_ENC_PREAMBLE(buff, buff_len, &local_byte_index, &local_bit_index, preamble_len, preamble_val);
   if (len_ret < 0) return len_ret;

   /* Encode iECriticality of type ENUMERATED */
   len_ret = APER_Enc_Basic_Enum_Fixed(buff, buff_len, &local_byte_index, &local_bit_index,
                                  2, CRITICALITY_NOTIFY, seq->iECriticality, 0);
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = iECriticality\n", len_ret, __FUNCTION__);
     return len_ret;
   }

   /* Encode iE-ID of type INTEGER */
   len_ret = APER_Enc_UINT_VB2(buff, buff_len, &local_byte_index, &local_bit_index,
                               0, 65535, seq->iE_ID, 0);
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = iE-ID\n", len_ret, __FUNCTION__);
     return len_ret;
   }

   /* Encode typeOfError of type ENUMERATED */
   len_ret = APER_Enc_Basic_Enum_Ext(buff, buff_len, &local_byte_index, &local_bit_index,
                                  1, TYPEOFERROR_EXT_START, seq->typeOfError, 0);
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = typeOfError\n", len_ret, __FUNCTION__);
     return len_ret;
   }

   len_ret = local_byte_index - (*buff_index);
   if (local_bit_index != 8) len_ret += 1;
   (*buff_index) = local_byte_index;
   (*bit_pos)    = local_bit_index;

   return len_ret;
}


/* CriticalityDiagnostics-IE-List - Sequence Of CriticalityDiagnostics-IE-Item */
int LTE_APER_Enc_CriticalityDiagnostics_IE_List(CriticalityDiagnostics_IE_List_t *seqOf, byte *buff, int buff_len, int *buff_index, int *bit_pos) {
   int local_byte_index  = (*buff_index);
   int local_bit_index   = (*bit_pos);
   int len_ret           = 0;
   int inst_index        = 0;

   /* Encode Sequence Of Preamble */
   if(seqOf->nbrInstances == 0) return 0;
   len_ret = APER_Enc_UINT_VB1(buff, buff_len, &local_byte_index, &local_bit_index,
                               1, 256, seqOf->nbrInstances, 0);
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = CriticalityDiagnostics-IE-List\n", len_ret, __FUNCTION__);
     return len_ret;
   }

   for (inst_index = 0; inst_index < seqOf->nbrInstances && inst_index < 4; inst_index++) {
      /* Encode CriticalityDiagnostics_IE_Item_t of type SEQUENCE */
      len_ret = LTE_APER_Enc_CriticalityDiagnostics_IE_Item(&(seqOf->CriticalityDiagnostics_IE_Item[inst_index]),buff, buff_len, &local_byte_index, &local_bit_index);
      if (len_ret < 0) {
        printf("ret = %d, function = %s, IE = CriticalityDiagnostics_IE_Item_t\n", len_ret, __FUNCTION__);
        return len_ret;
      }
   }

   len_ret = local_byte_index - (*buff_index);
   if (local_bit_index != 8) len_ret += 1;
   (*buff_index) = local_byte_index;
   (*bit_pos)    = local_bit_index;

   return len_ret;
}


/* CriticalityDiagnostics - Sequence Format 2 */
int LTE_APER_Enc_CriticalityDiagnostics(CriticalityDiagnostics_t *seq, byte *buff, int buff_len, int *buff_index, int *bit_pos, int octet_aligned) {
   int local_byte_index  = (*buff_index);
   int local_bit_index   = (*bit_pos);
   int len_ret           = 0;
   int length_ind_pos    = 0;
   unsigned int preamble_len = 6;
   unsigned int preamble_val = 0;

   /* Record length position */
   if (octet_aligned) {
      if (local_bit_index != 8) { local_bit_index = 8; local_byte_index += 1;}
      length_ind_pos = local_byte_index ++;
   }

   /* Build and Encode Sequence Preamble Info */
   if (seq->procedureCode_Present) preamble_val |= 1 << 4;
   if (seq->triggeringMessage_Present) preamble_val |= 1 << 3;
   if (seq->procedureCriticality_Present) preamble_val |= 1 << 2;
   if (seq->iEsCriticalityDiagnostics_Present) preamble_val |= 1 << 1;
   len_ret = APER_ENC_PREAMBLE(buff, buff_len, &local_byte_index, &local_bit_index, preamble_len, preamble_val);
   if (len_ret < 0) return len_ret;

   if (seq->procedureCode_Present) {
      /* Encode procedureCode of type INTEGER */
      len_ret = APER_Enc_UINT_VB1(buff, buff_len, &local_byte_index, &local_bit_index,
                                  0, 255, seq->procedureCode, 0);
      if (len_ret < 0) {
        printf("ret = %d, function = %s, IE = procedureCode\n", len_ret, __FUNCTION__);
        return len_ret;
      }
   }

   if (seq->triggeringMessage_Present) {
      /* Encode triggeringMessage of type ENUMERATED */
      len_ret = APER_Enc_Basic_Enum_Fixed(buff, buff_len, &local_byte_index, &local_bit_index,
                                     2, TRIGGERINGMESSAGE_UNSUCCESSFULL_OUTCOME, seq->triggeringMessage, 0);
      if (len_ret < 0) {
        printf("ret = %d, function = %s, IE = triggeringMessage\n", len_ret, __FUNCTION__);
        return len_ret;
      }
   }

   if (seq->procedureCriticality_Present) {
      /* Encode procedureCriticality of type ENUMERATED */
      len_ret = APER_Enc_Basic_Enum_Fixed(buff, buff_len, &local_byte_index, &local_bit_index,
                                     2, CRITICALITY_NOTIFY, seq->procedureCriticality, 0);
      if (len_ret < 0) {
        printf("ret = %d, function = %s, IE = procedureCriticality\n", len_ret, __FUNCTION__);
        return len_ret;
      }
   }

   if (seq->iEsCriticalityDiagnostics_Present) {
      /* Encode iEsCriticalityDiagnostics of type SEQUENCE OF */
      len_ret = LTE_APER_Enc_CriticalityDiagnostics_IE_List(&(seq->iEsCriticalityDiagnostics), buff, buff_len, &local_byte_index, &local_bit_index);
      if (len_ret < 0) {
        printf("ret = %d, function = %s, IE = iEsCriticalityDiagnostics\n", len_ret, __FUNCTION__);
        return len_ret;
      }
   }
   if (octet_aligned) {
      len_ret = WriteItemLengthInd(buff, buff_len, length_ind_pos, &local_byte_index, &local_bit_index);
      if (len_ret < 0) {
         printf("ret = %d (%s.WriteItemLengthInd()\n", len_ret, __FUNCTION__);
         return len_ret;
      }
   }

   len_ret = local_byte_index - (*buff_index);
   if (local_bit_index != 8) len_ret += 1;
   (*buff_index) = local_byte_index;
   (*bit_pos)    = local_bit_index;

   return len_ret;
}


/* HandoverRequestAcknowledgeIEs - Class Instance Encoding */
int LTE_APER_Enc_HandoverRequestAcknowledgeIEs(HandoverRequestAcknowledgeIEs_t *clsInst, byte *buff, int buff_len, int *buff_index, int *bit_pos) {
   int local_byte_index  = (*buff_index);
   int local_bit_index   = (*bit_pos);
   int len_ret           = 0;
   int nbr_instances     = 1;

   /* Build Preamble according to Constraint ProtocolIE_Container_t */
   if (clsInst->AMF_UE_NGAP_ID_Present) nbr_instances += 1;
   if (clsInst->RAN_UE_NGAP_ID_Present) nbr_instances += 1;
   if (clsInst->PDUSessionResourceAdmittedList_Present) nbr_instances += 1;
   if (clsInst->PDUSessionResourceFailedToSetupList_Present) nbr_instances += 1;
   if (clsInst->CriticalityDiagnostics_Present) nbr_instances += 1;

   len_ret = APER_Enc_UINT_VB2(buff, buff_len, &local_byte_index, &local_bit_index,
                               0, 65535, nbr_instances, 0);
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = ProtocolIE-Container\n", len_ret, __FUNCTION__);
     return len_ret;
   }

   /* Encode Sub-Item ID_AMF_UE_NGAP_ID */
   if (clsInst->AMF_UE_NGAP_ID_Present) {
      APER_ENC_CLSINST_ITEM_HDR(ID_AMF_UE_NGAP_ID, CRITICALITY_IGNORE)
      /* Encode TYPE of type INTEGER */
      len_ret = APER_Enc_UINT_VB3orMore(buff, buff_len, &local_byte_index, &local_bit_index,
                                        0, 4294967295, clsInst->AMF_UE_NGAP_ID, 1);
      if (len_ret < 0) {
        printf("ret = %d, function = %s, IE = ID_AMF_UE_NGAP_ID\n", len_ret, __FUNCTION__);
        return len_ret;
      }
   }

   /* Encode Sub-Item ID_RAN_UE_NGAP_ID */
   if (clsInst->RAN_UE_NGAP_ID_Present) {
      APER_ENC_CLSINST_ITEM_HDR(ID_RAN_UE_NGAP_ID, CRITICALITY_IGNORE)
      /* Encode TYPE of type INTEGER */
      len_ret = APER_Enc_UINT_VB3orMore(buff, buff_len, &local_byte_index, &local_bit_index,
                                        0, 4294967295, clsInst->RAN_UE_NGAP_ID, 1);
      if (len_ret < 0) {
        printf("ret = %d, function = %s, IE = ID_RAN_UE_NGAP_ID\n", len_ret, __FUNCTION__);
        return len_ret;
      }
   }

   /* Encode Sub-Item ID_PDUSESSIONRESOURCEADMITTEDLIST */
   if (clsInst->PDUSessionResourceAdmittedList_Present) {
      APER_ENC_CLSINST_ITEM_HDR(ID_PDUSESSIONRESOURCEADMITTEDLIST, CRITICALITY_IGNORE)
      /* Encode TYPE of type SEQUENCE OF */
      len_ret = LTE_APER_Enc_PDUSessionResourceAdmittedList(&(clsInst->PDUSessionResourceAdmittedList), buff, buff_len, &local_byte_index, &local_bit_index, 1);
      if (len_ret < 0) {
        printf("ret = %d, function = %s, IE = ID_PDUSESSIONRESOURCEADMITTEDLIST\n", len_ret, __FUNCTION__);
        return len_ret;
      }
   }

   /* Encode Sub-Item ID_PDUSESSIONRESOURCEFAILEDTOSETUPLIST */
   if (clsInst->PDUSessionResourceFailedToSetupList_Present) {
      APER_ENC_CLSINST_ITEM_HDR(ID_PDUSESSIONRESOURCEFAILEDTOSETUPLIST, CRITICALITY_IGNORE)
      /* Encode TYPE of type SEQUENCE OF */
      len_ret = LTE_APER_Enc_PDUSessionList(&(clsInst->PDUSessionResourceFailedToSetupList), buff, buff_len, &local_byte_index, &local_bit_index, 1);
      if (len_ret < 0) {
        printf("ret = %d, function = %s, IE = ID_PDUSESSIONRESOURCEFAILEDTOSETUPLIST\n", len_ret, __FUNCTION__);
        return len_ret;
      }
   }

   /* Encode Sub-Item ID_TARGETTOSOURCE_TRANSPARENTCONTAINER */
   APER_ENC_CLSINST_ITEM_HDR(ID_TARGETTOSOURCE_TRANSPARENTCONTAINER, CRITICALITY_REJECT)
   /* Encode field TargetToSource_TransparentContainer of type OCTET STRING */
   len_ret = APER_ENC_OCTSTR_AS_OPEN_ARRAY(buff, buff_len, &local_byte_index, &local_bit_index,
                                              clsInst->TargetToSource_TransparentContainer.length,
                                              clsInst->TargetToSource_TransparentContainer.content, 1);
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = ID_TARGETTOSOURCE_TRANSPARENTCONTAINER\n", len_ret, __FUNCTION__);
     return len_ret;
   }

   /* Encode Sub-Item ID_CRITICALITYDIAGNOSTICS */
   if (clsInst->CriticalityDiagnostics_Present) {
      APER_ENC_CLSINST_ITEM_HDR(ID_CRITICALITYDIAGNOSTICS, CRITICALITY_IGNORE)
      /* Encode TYPE of type SEQUENCE */
      len_ret = LTE_APER_Enc_CriticalityDiagnostics(&(clsInst->CriticalityDiagnostics),buff, buff_len, &local_byte_index, &local_bit_index, 1);
      if (len_ret < 0) {
        printf("ret = %d, function = %s, IE = ID_CRITICALITYDIAGNOSTICS\n", len_ret, __FUNCTION__);
        return len_ret;
      }
   }

   len_ret = local_byte_index - (*buff_index);
   if (local_bit_index != 8) len_ret += 1;
   (*buff_index) = local_byte_index;
   (*bit_pos)    = local_bit_index;

   return len_ret;
}

/* HandoverRequestAcknowledge - Sequence Format 2 */
int LTE_APER_Enc_Msg_HandoverRequestAcknowledge(HandoverRequestAcknowledge_t *seq, byte *buff, int buff_len, int *buff_index, int *bit_pos) {
   int local_byte_index  = (*buff_index);
   int local_bit_index   = (*bit_pos);
   int len_ret           = 0;
   int len_pos           = 0;

   unsigned int preamble_len = 1;
   unsigned int preamble_val = 0;

   /* Encode Message Header */
   buff[local_byte_index++] = NGAP_PDU_CHOICE_SUCCESSFULOUTCOME << 5;
   buff[local_byte_index++] = ID_HANDOVERRESOURCEALLOCATION;
   buff[local_byte_index++] = CRITICALITY_REJECT_C;

   /* Remember where to put length indicator */
   if (local_bit_index != 8) { local_byte_index += 1; local_bit_index = 8;}
   len_pos = local_byte_index++;

   /* Build and Encode Sequence Preamble Info */
   len_ret = APER_ENC_PREAMBLE(buff, buff_len, &local_byte_index, &local_bit_index, preamble_len, preamble_val);
   if (len_ret < 0) return len_ret;

   /* Encode protocolIEs of type CLASS INST */
   len_ret = LTE_APER_Enc_HandoverRequestAcknowledgeIEs(&(seq->protocolIEs), buff, buff_len, &local_byte_index, &local_bit_index);
   if (len_ret < 0) {
     printf("ret = %d, function = %s, IE = protocolIEs\n", len_ret, __FUNCTION__);
     return len_ret;
   }

   /* Write back length indicator */
   len_ret = WriteLengthIndicator(buff, buff_len, len_pos, &local_byte_index, local_bit_index);
   if(len_ret < 0) return len_ret;

   len_ret = local_byte_index - (*buff_index);
   if (local_bit_index != 8) len_ret += 1;
   (*buff_index) = local_byte_index;
   (*bit_pos)    = local_bit_index;

   return len_ret;
}

