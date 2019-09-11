/*
  Source automatically generated on Fri Sep  6 05:29:26 2019 by lib_asn_aper_x86_64.
  Inputs:
   - ASN Class file:     ./ngap_asn/ngap-class-0.8.0.asn
   - ASN Constants file: ./ngap_asn/ngap-const-0.8.0.asn
   - ASN Main file:      ./ngap_asn/ngap-main-1.0.0.asn

  Author: Bidtem

  Communication And Support:
    For any extended use or support, please contact the author via email:
      deskzhcc@sina.com
    Or join EasyAsn at:
      QQ: 3115974651
*/

#include "../asn_support/hdr/lib_enc_types.h"
#include "../asn_support/hdr/lib_support_aper.h"
#include "LTE_NGAP_TST.h"
#include "LTE_NGAP_Enc.h"
#include "LTE_NGAP_Dec.h"
#include "LTE_NGAP_DISP.h"
#include "../manual/Test_Aper.h"

int G_coverage_test  = 1;
unsigned int G_choice_test_step = 0;
unsigned int G_choice_test_id   = 0;
unsigned int G_nbr_test_fail    = 0;
unsigned int G_log_info         = 0;
unsigned int G_nbr_test_pass    = 0;


/* TEST Init of SEQUENCE GTPTunnel */
int LTE_APER_TstInit_GTPTunnel(GTPTunnel_t *seq) {
   int ii = 0;

   /* Init transportLayerAddress */
   seq->transportLayerAddress.len_bits = 160;
   for (ii = 0; ii < 20; ii++) {
      seq->transportLayerAddress.cont_bits[ii] = ii | 0x81;
   }
   if (seq->transportLayerAddress.len_bits % 8) {
     seq->transportLayerAddress.cont_bits[0] &= ( 1 << (seq->transportLayerAddress.len_bits % 8)) - 1;
   }
   /* Init gTP_TEID */
   seq->gTP_TEID = 0x55660077;
   return 0;
}


unsigned int G_Choice_UPTransportLayerInformation = 0;

/* UPTransportLayerInformation - Choice Test Init */
int LTE_APER_TstInit_UPTransportLayerInformation(UPTransportLayerInformation_t *pch) {
   switch (pch->Choice_Index) {
      case UPTRANSPORTLAYERINFORMATION_CHOICE_GTPTUNNEL:
         LTE_APER_TstInit_GTPTunnel(&(pch->Choices.gTPTunnel));
         break;
   }

   return 0;
}


/* TEST Init of SEQUENCE SecurityResult */
int LTE_APER_TstInit_SecurityResult(SecurityResult_t *seq) {
   /* Init integrityProtectionResult */
   seq->integrityProtectionResult = INTEGRITYPROTECTIONRESULT_NOT_PERFORMED;
   /* Init confidentialityProtectionResult */
   seq->confidentialityProtectionResult = CONFIDENTIALITYPROTECTIONRESULT_NOT_PERFORMED;
   return 0;
}


/* TEST Init of SEQUENCE QosFlowSetupResponseItemHOReqAck */
int LTE_APER_TstInit_QosFlowSetupResponseItemHOReqAck(QosFlowSetupResponseItemHOReqAck_t *seq) {
   /* Init qosFlowIndicator */
   seq->qosFlowIndicator = 31;
   /* Init dataForwardingAccepted */
   seq->dataForwardingAccepted_Present = 1;
   seq->dataForwardingAccepted = DATAFORWARDINGACCEPTED_EXT_START;
   return 0;
}


unsigned int G_Choice_Cause = 0;

/* Cause - Choice Test Init */
int LTE_APER_TstInit_Cause(Cause_t *pch) {
   switch (pch->Choice_Index) {
      case CAUSE_CHOICE_RADIONETWORK:
         pch->Choices.radioNetwork = CAUSERADIONETWORK_TXNRELOCOVERALL_EXPIRY;
         break;
      case CAUSE_CHOICE_TRANSPORT:
         pch->Choices.transport = CAUSETRANSPORT_UNSPECIFIED;
         break;
      case CAUSE_CHOICE_NAS:
         pch->Choices.nas = CAUSENAS_AUTHENTICATION_FAILURE;
         break;
      case CAUSE_CHOICE_PROTOCOL:
         pch->Choices.protocol = CAUSEPROTOCOL_ABSTRACT_SYNTAX_ERROR_REJECT;
         break;
      case CAUSE_CHOICE_MISC:
         pch->Choices.misc = CAUSEMISC_NOT_ENOUGH_USER_PLANE_PROCESSING_RESOURCES;
         break;
   }

   return 0;
}


/* TEST Init of SEQUENCE QosFlowItem */
int LTE_APER_TstInit_QosFlowItem(QosFlowItem_t *seq) {
   /* Init qosFlowIndicator */
   seq->qosFlowIndicator = 31;
   /* Init cause */
   // Set value for CHOICE: Keep one out of 5 ...
   seq->cause.Choice_Index = CAUSE_CHOICE_RADIONETWORK;
   if (G_coverage_test) {
      seq->cause.Choice_Index = G_Choice_Cause % 5;
      G_Choice_Cause += 1;
   }
   //seq->cause.Choice_Index = CAUSE_CHOICE_TRANSPORT;
   //seq->cause.Choice_Index = CAUSE_CHOICE_NAS;
   //seq->cause.Choice_Index = CAUSE_CHOICE_PROTOCOL;
   //seq->cause.Choice_Index = CAUSE_CHOICE_MISC;
   LTE_APER_TstInit_Cause(&(seq->cause));
   return 0;
}


/* TEST Init of SEQUENCE DataForwardingResponseDRBItem */
int LTE_APER_TstInit_DataForwardingResponseDRBItem(DataForwardingResponseDRBItem_t *seq) {
   /* Init dRB_ID */
   seq->dRB_ID = 16;
   /* Init dLForwardingUP_TNLInformation */
   seq->dLForwardingUP_TNLInformation_Present = 1;
   seq->dLForwardingUP_TNLInformation.Choice_Index = UPTRANSPORTLAYERINFORMATION_CHOICE_GTPTUNNEL;
   if (G_coverage_test) {
      seq->dLForwardingUP_TNLInformation.Choice_Index = G_Choice_UPTransportLayerInformation % 1;
      G_Choice_UPTransportLayerInformation += 1;
   }
   LTE_APER_TstInit_UPTransportLayerInformation(&(seq->dLForwardingUP_TNLInformation));
   /* Init uLForwardingUP_TNLInformation */
   seq->uLForwardingUP_TNLInformation_Present = 1;
   seq->uLForwardingUP_TNLInformation.Choice_Index = UPTRANSPORTLAYERINFORMATION_CHOICE_GTPTUNNEL;
   if (G_coverage_test) {
      seq->uLForwardingUP_TNLInformation.Choice_Index = G_Choice_UPTransportLayerInformation % 1;
      G_Choice_UPTransportLayerInformation += 1;
   }
   LTE_APER_TstInit_UPTransportLayerInformation(&(seq->uLForwardingUP_TNLInformation));
   return 0;
}


/* TEST Init of SEQUENCE HandoverRequestAcknowledgeTransfer */
int LTE_APER_TstInit_HandoverRequestAcknowledgeTransfer(HandoverRequestAcknowledgeTransfer_t *seq) {
   /* Init dL_NGU_UP_TNLInformation */
   seq->dL_NGU_UP_TNLInformation.Choice_Index = UPTRANSPORTLAYERINFORMATION_CHOICE_GTPTUNNEL;
   if (G_coverage_test) {
      seq->dL_NGU_UP_TNLInformation.Choice_Index = G_Choice_UPTransportLayerInformation % 1;
      G_Choice_UPTransportLayerInformation += 1;
   }
   LTE_APER_TstInit_UPTransportLayerInformation(&(seq->dL_NGU_UP_TNLInformation));
   /* Init dLForwardingUP_TNLInformation */
   seq->dLForwardingUP_TNLInformation_Present = 1;
   seq->dLForwardingUP_TNLInformation.Choice_Index = UPTRANSPORTLAYERINFORMATION_CHOICE_GTPTUNNEL;
   if (G_coverage_test) {
      seq->dLForwardingUP_TNLInformation.Choice_Index = G_Choice_UPTransportLayerInformation % 1;
      G_Choice_UPTransportLayerInformation += 1;
   }
   LTE_APER_TstInit_UPTransportLayerInformation(&(seq->dLForwardingUP_TNLInformation));
   /* Init securityResult */
   seq->securityResult_Present = 1;
   LTE_APER_TstInit_SecurityResult(&(seq->securityResult));
   /* Init qosFlowSetupResponseList */
   seq->qosFlowSetupResponseList.nbrInstances = 1; /* SeqOf */
   LTE_APER_TstInit_QosFlowSetupResponseItemHOReqAck(&(seq->qosFlowSetupResponseList.QosFlowSetupResponseItemHOReqAck[0]));
   /* Init qosFlowFailedToSetupList */
   seq->qosFlowFailedToSetupList_Present = 1;
   seq->qosFlowFailedToSetupList.nbrInstances = 1; /* SeqOf */
   LTE_APER_TstInit_QosFlowItem(&(seq->qosFlowFailedToSetupList.QosFlowItem[0]));
   /* Init dataForwardingResponseDRBList */
   seq->dataForwardingResponseDRBList_Present = 1;
   seq->dataForwardingResponseDRBList.nbrInstances = 1; /* SeqOf */
   LTE_APER_TstInit_DataForwardingResponseDRBItem(&(seq->dataForwardingResponseDRBList.DataForwardingResponseDRBItem[0]));
   return 0;
}


/* TEST Init of SEQUENCE PDUSessionResourceAdmittedItem */
int LTE_APER_TstInit_PDUSessionResourceAdmittedItem(PDUSessionResourceAdmittedItem_t *seq) {
   /* Init pDUSessionID */
   seq->pDUSessionID = 127;
   /* Init handoverRequestAcknowledgeTransfer */
   LTE_APER_TstInit_HandoverRequestAcknowledgeTransfer(&(seq->handoverRequestAcknowledgeTransfer));
   return 0;
}


/* PDUSessionResourceAdmittedItemIEs - Class Instance Init */
int LTE_APER_TstInit_PDUSessionResourceAdmittedItemIEs(PDUSessionResourceAdmittedItemIEs_t *clsInst) {

   /* Init Sub-Item ID_PDUSESSIONRESOURCEADMITTEDITEM */
   clsInst->PDUSessionResourceAdmittedItem_Present = 1;
   LTE_APER_TstInit_PDUSessionResourceAdmittedItem(&(clsInst->PDUSessionResourceAdmittedItem));

   return 0;
}

/* TEST Init of SEQUENCE PDUSessionItem */
int LTE_APER_TstInit_PDUSessionItem(PDUSessionItem_t *seq) {
   /* Init pDUSessionID */
   seq->pDUSessionID = 127;
   /* Init cause */
   // Set value for CHOICE: Keep one out of 5 ...
   seq->cause.Choice_Index = CAUSE_CHOICE_RADIONETWORK;
   if (G_coverage_test) {
      seq->cause.Choice_Index = G_Choice_Cause % 5;
      G_Choice_Cause += 1;
   }
   //seq->cause.Choice_Index = CAUSE_CHOICE_TRANSPORT;
   //seq->cause.Choice_Index = CAUSE_CHOICE_NAS;
   //seq->cause.Choice_Index = CAUSE_CHOICE_PROTOCOL;
   //seq->cause.Choice_Index = CAUSE_CHOICE_MISC;
   LTE_APER_TstInit_Cause(&(seq->cause));
   return 0;
}


/* TEST Init of SEQUENCE CriticalityDiagnostics-IE-Item */
int LTE_APER_TstInit_CriticalityDiagnostics_IE_Item(CriticalityDiagnostics_IE_Item_t *seq) {
   /* Init iECriticality */
   seq->iECriticality = CRITICALITY_IGNORE;
   /* Init iE_ID */
   seq->iE_ID = 32767;
   /* Init typeOfError */
   seq->typeOfError = TYPEOFERROR_MISSING;
   return 0;
}


/* TEST Init of SEQUENCE CriticalityDiagnostics */
int LTE_APER_TstInit_CriticalityDiagnostics(CriticalityDiagnostics_t *seq) {
   /* Init procedureCode */
   seq->procedureCode_Present = 1;
   seq->procedureCode = 127;
   /* Init triggeringMessage */
   seq->triggeringMessage_Present = 1;
   seq->triggeringMessage = TRIGGERINGMESSAGE_SUCCESSFUL_OUTCOME;
   /* Init procedureCriticality */
   seq->procedureCriticality_Present = 1;
   seq->procedureCriticality = CRITICALITY_IGNORE;
   /* Init iEsCriticalityDiagnostics */
   seq->iEsCriticalityDiagnostics_Present = 1;
   seq->iEsCriticalityDiagnostics.nbrInstances = 1; /* SeqOf */
   LTE_APER_TstInit_CriticalityDiagnostics_IE_Item(&(seq->iEsCriticalityDiagnostics.CriticalityDiagnostics_IE_Item[0]));
   return 0;
}


/* HandoverRequestAcknowledgeIEs - Class Instance Init */
int LTE_APER_TstInit_HandoverRequestAcknowledgeIEs(HandoverRequestAcknowledgeIEs_t *clsInst) {
   int ii = 0;

   /* Init Sub-Item ID_AMF_UE_NGAP_ID */
   clsInst->AMF_UE_NGAP_ID_Present = 1;
   clsInst->AMF_UE_NGAP_ID = 2147483647;

   /* Init Sub-Item ID_RAN_UE_NGAP_ID */
   clsInst->RAN_UE_NGAP_ID_Present = 1;
   clsInst->RAN_UE_NGAP_ID = 2147483647;

   /* Init Sub-Item ID_PDUSESSIONRESOURCEADMITTEDLIST */
   clsInst->PDUSessionResourceAdmittedList_Present = 1;
   clsInst->PDUSessionResourceAdmittedList.nbrInstances = 1; /* SeqOf */
   /* Init PDUSessionResourceAdmittedItemIEs of type CLASS INST */
   LTE_APER_TstInit_PDUSessionResourceAdmittedItemIEs(&(clsInst->PDUSessionResourceAdmittedList.ProtocolIE_SingleContainer[0]));

   /* Init Sub-Item ID_PDUSESSIONRESOURCEFAILEDTOSETUPLIST */
   clsInst->PDUSessionResourceFailedToSetupList_Present = 1;
   clsInst->PDUSessionResourceFailedToSetupList.nbrInstances = 1; /* SeqOf */
   LTE_APER_TstInit_PDUSessionItem(&(clsInst->PDUSessionResourceFailedToSetupList.PDUSessionItem[0]));

   /* Init Sub-Item ID_TARGETTOSOURCE_TRANSPARENTCONTAINER */
   clsInst->TargetToSource_TransparentContainer.length  = 0x01;
   for (ii = 0; ii < clsInst->TargetToSource_TransparentContainer.length; ii++) {
      clsInst->TargetToSource_TransparentContainer.content[ii] = (ii + 1) % 256;
   }

   /* Init Sub-Item ID_CRITICALITYDIAGNOSTICS */
   clsInst->CriticalityDiagnostics_Present = 1;
   LTE_APER_TstInit_CriticalityDiagnostics(&(clsInst->CriticalityDiagnostics));

   return 0;
}

/* TEST HandoverRequestAcknowledge (SEQUENCE type 2) */
int LTE_APER_TST_HandoverRequestAcknowledge(FILE *fp, int run_times) {
   int byte_index = 0;
   int bit_index  = 8;
   int len_ret    = 0;
   int len_ret_enc= 0;
   int ii= 0, max_test = run_times;
   int buff_len   = TEST_BUFF_LEN;
   unsigned char buff[TEST_BUFF_LEN], buff_bk[TEST_BUFF_LEN];

   TimeStamp_t enc_start, enc_end, dec_start, dec_end;
   time_t time_now;
   char * time_str;
   /* Root message to test */
   HandoverRequestAcknowledge_t seq;
   HandoverRequestAcknowledge_t seq_dec;
   memset(&seq, 0x00, sizeof(HandoverRequestAcknowledge_t));
   memset(&seq_dec, 0x00, sizeof(HandoverRequestAcknowledge_t));
   memset(buff, 0x00, buff_len);

   time_now = time(NULL);
   time_str = ctime(&time_now);
   time_str[strlen(time_str) - 1] = 0x00;

   AsnAperPrint(fp, "\n>>>>>>> BEGIN TEST HandoverRequestAcknowledge  >>>>>>>>>>>>\n");
   /* Init protocolIEs */
   /* Init HandoverRequestAcknowledgeIEs of type CLASS INST */
   LTE_APER_TstInit_HandoverRequestAcknowledgeIEs(&(seq.protocolIEs));
   
   LTE_APER_Disp_WS_HandoverRequestAcknowledge(&seq, fp, 0, "test");

   GetTimeStamp(&enc_start);
   for (ii = 0; ii < max_test; ii++) {
      byte_index = 0; bit_index = 8;
      memset(buff, 0, buff_len);
      len_ret = LTE_APER_Enc_Msg_HandoverRequestAcknowledge(&seq, buff, buff_len, &byte_index, &bit_index);
   }
   GetTimeStamp(&enc_end);

   if (len_ret < 0) {
      G_nbr_test_fail++;
      AsnAperPrint(fp, "  + Encoding Failed (ret = %d)\n", len_ret);
      return len_ret;
   }
   else {
      AsnAperPrint(fp, "  + Encoding OK     (length = %d):\n", len_ret);
      PrintBufferToFile(fp, buff, len_ret);
   }

   len_ret_enc = len_ret;

   SendBufferToServer(fp, buff, len_ret);

   memcpy(buff_bk, buff, buff_len);

   GetTimeStamp(&dec_start);
   for (ii = 0; ii < max_test; ii++) {
      byte_index = 0; bit_index = 8;
      memcpy(buff, buff_bk, len_ret);
      memset(&seq_dec, 0, sizeof(seq_dec));
      len_ret = LTE_APER_Dec_Msg_HandoverRequestAcknowledge(&seq_dec, buff, buff_len, &byte_index, &bit_index);
   }
   GetTimeStamp(&dec_end);

   if (len_ret < 0) {
      G_nbr_test_fail++;
      AsnAperPrint(fp, "  + Decoding Failed (ret = %d)\n", len_ret);
      return len_ret;
   }
   else {
      AsnAperPrint(fp, "  + Decoding OK     (ret = %d)\n", len_ret);
   }

   if (G_log_info > 2) {
      AsnAperPrint(fp, "\n>>>>>>> HandoverRequestAcknowledge START [%s] >>>>>>>>\n", time_str);
      AsnAperPrint(fp, "-- Size of HandoverRequestAcknowledge_t = %d\n", sizeof(HandoverRequestAcknowledge_t));
      AsnAperPrint(fp, "-- Encoding Result: Length = %d\n", len_ret);
      PrintBufferToFile(fp, buff_bk, len_ret_enc);

      AsnAperPrint(fp, "\n-- Structure display of encoding input:\n");
      DISPLAY_TIME_INFO(len_ret, "HandoverRequestAcknowledge", enc_start, enc_end, dec_start, dec_end, fp);
   }
   if (memcmp(&seq, &seq_dec, sizeof(seq))) {
      G_nbr_test_fail++;
      AsnAperPrint(fp, "  + Structure dump for difference of encoding input and decoded output: %d bytes consumed.\n", len_ret);
      CompareBuffers((unsigned char*)&seq, (unsigned char*)&seq_dec, sizeof(seq_dec), fp);
      AsnAperPrint(fp, "  + Decoding Result incorrect:\n");
      LTE_APER_Disp_WS_HandoverRequestAcknowledge(&seq_dec, fp, 3, "test");

      printf(">>>>>>> HandoverRequestAcknowledge Decoding Result FAILURE>>>>>>>>>>>>\n");
      AsnAperPrint(fp, ">>>>>>> END TEST HandoverRequestAcknowledge  FAILED >>>>>>>>>>>>\n");
   }
   else {
      G_nbr_test_pass++;
      AsnAperPrint(fp, ">>>>>>> END TEST HandoverRequestAcknowledge  OK >>>>>>>>>>>>\n");
   }

   return 0;
}

/* TST roots to be used: 
   LTE_APER_TST_HandoverRequestAcknowledge(fp, run_times);

*/
