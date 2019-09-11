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
#include "../asn_support/hdr/lib_support_aper.h"
#include "LTE_NGAP_DISP.h"
#include "LTE_NGAP_Enc.h"
#include "LTE_NGAP_Dec.h"

/* Display INTEGER ProtocolIE-ID */
void LTE_APER_Disp_WS_ProtocolIE_ID(unsigned int value, FILE *fp, int indent, char *name) {
   AsnAperPrintAt(fp, 0, indent, "%s: %d", name, value);
   AsnAperPrint(fp, "\n");
}

/* Display Enum Criticality */
void LTE_APER_Disp_WS_Criticality(unsigned char value, FILE *fp, int indent, char *name) {
   AsnAperPrintAt(fp, 0, indent, "%s: ", name);
   switch (value) {
      case CRITICALITY_REJECT:
        fprintf(fp, "reject (%d)\n", value);
        break;
      case CRITICALITY_IGNORE:
        fprintf(fp, "ignore (%d)\n", value);
        break;
      case CRITICALITY_NOTIFY:
        fprintf(fp, "notify (%d)\n", value);
        break;
      default:
        fprintf(fp, "Unknown (%d)\n", value);
        break;
   }
}

/* Display INTEGER AMF-UE-NGAP-ID */
void LTE_APER_Disp_WS_AMF_UE_NGAP_ID(unsigned int value, FILE *fp, int indent, char *name) {
   AsnAperPrintAt(fp, 0, indent, "%s: %d", name, value);
   AsnAperPrint(fp, "\n");
}

/* Display Enum Presence */
void LTE_APER_Disp_WS_Presence(unsigned char value, FILE *fp, int indent, char *name) {
   AsnAperPrintAt(fp, 0, indent, "%s: ", name);
   switch (value) {
      case PRESENCE_OPTIONAL:
        fprintf(fp, "optional (%d)\n", value);
        break;
      case PRESENCE_CONDITIONAL:
        fprintf(fp, "conditional (%d)\n", value);
        break;
      case PRESENCE_MANDATORY:
        fprintf(fp, "mandatory (%d)\n", value);
        break;
      default:
        fprintf(fp, "Unknown (%d)\n", value);
        break;
   }
}

/* Display INTEGER RAN-UE-NGAP-ID */
void LTE_APER_Disp_WS_RAN_UE_NGAP_ID(unsigned int value, FILE *fp, int indent, char *name) {
   AsnAperPrintAt(fp, 0, indent, "%s: %d", name, value);
   AsnAperPrint(fp, "\n");
}

/* Display INTEGER PDUSessionID */
void LTE_APER_Disp_WS_PDUSessionID(unsigned int value, FILE *fp, int indent, char *name) {
   AsnAperPrintAt(fp, 0, indent, "%s: %d", name, value);
   AsnAperPrint(fp, "\n");
}

/* TransportLayerAddress - BIT STRING Display - Case 3 */
void LTE_APER_Disp_WS_TransportLayerAddress(TransportLayerAddress_t *bstr, FILE *fp, int indent, char *name) {
   TransportLayerAddress_t tmp;
   int ii = 0, len = 0;

   memcpy(&tmp, bstr, sizeof(TransportLayerAddress_t));

   AsnAperPrintAt(fp, 0, indent, "%s: ", name);
   len = (tmp.len_bits + 7)/8;
   for (ii = 0; ii < len && ii < 24; ii++) {
      AsnAperPrint(fp, "%02x", tmp.cont_bits[ii]);
   }
   if (ii < len) AsnAperPrint(fp, "...");
   AsnAperPrint(fp, " [bit length %d]", tmp.len_bits);
   AsnAperPrint(fp, "\n");
}

/* GTP-TEID - OCTET STRING Display - Case 1 */
void LTE_APER_Disp_WS_GTP_TEID(unsigned int *bstr, FILE *fp, int indent, char *name) {
   unsigned int tmp;
   memcpy(&tmp, bstr, sizeof(unsigned int));

   AsnAperPrintAt(fp, 0, indent, "%s: %04x\n", name, tmp);
}

/* GTPTunnel - Sequence Format 2 */
void LTE_APER_Disp_WS_GTPTunnel(GTPTunnel_t *seq, FILE *fp, int indent, char *name) {

   LTE_APER_Disp_WS_TransportLayerAddress(&seq->transportLayerAddress, fp, indent, "transportLayerAddress");

   LTE_APER_Disp_WS_GTP_TEID(&seq->gTP_TEID, fp, indent, "gTP-TEID");
}

/* UPTransportLayerInformation - Choice Encoder */
void LTE_APER_Disp_WS_UPTransportLayerInformation(UPTransportLayerInformation_t *pch, FILE *fp, int indent, char *name) {
   AsnAperPrintAt(fp, 0, indent, "%s: ", name);
   indent += WS_INDENT_C;
   switch (pch->Choice_Index) {
      case UPTRANSPORTLAYERINFORMATION_CHOICE_GTPTUNNEL:
         fprintf(fp, "gTPTunnel (%d)\n", UPTRANSPORTLAYERINFORMATION_CHOICE_GTPTUNNEL);
      break;
   }

   switch (pch->Choice_Index) {
      case UPTRANSPORTLAYERINFORMATION_CHOICE_GTPTUNNEL:
         LTE_APER_Disp_WS_GTPTunnel(&pch->Choices.gTPTunnel, fp, indent, "gTPTunnel");
         break;
   }
}


/* Display Enum IntegrityProtectionResult */
void LTE_APER_Disp_WS_IntegrityProtectionResult(unsigned int value, FILE *fp, int indent, char *name) {
   AsnAperPrintAt(fp, 0, indent, "%s: ", name);
   switch (value) {
      case INTEGRITYPROTECTIONRESULT_PERFORMED:
        fprintf(fp, "performed (%d)\n", value);
        break;
      case INTEGRITYPROTECTIONRESULT_NOT_PERFORMED:
        fprintf(fp, "not-performed (%d)\n", value);
        break;
      default:
        fprintf(fp, "Unknown (%d)\n", value);
        break;
   }
}

/* Display Enum ConfidentialityProtectionResult */
void LTE_APER_Disp_WS_ConfidentialityProtectionResult(unsigned int value, FILE *fp, int indent, char *name) {
   AsnAperPrintAt(fp, 0, indent, "%s: ", name);
   switch (value) {
      case CONFIDENTIALITYPROTECTIONRESULT_PERFORMED:
        fprintf(fp, "performed (%d)\n", value);
        break;
      case CONFIDENTIALITYPROTECTIONRESULT_NOT_PERFORMED:
        fprintf(fp, "not-performed (%d)\n", value);
        break;
      default:
        fprintf(fp, "Unknown (%d)\n", value);
        break;
   }
}

/* SecurityResult - Sequence Format 2 */
void LTE_APER_Disp_WS_SecurityResult(SecurityResult_t *seq, FILE *fp, int indent, char *name) {

   LTE_APER_Disp_WS_IntegrityProtectionResult(seq->integrityProtectionResult, fp, indent, "integrityProtectionResult");

   LTE_APER_Disp_WS_ConfidentialityProtectionResult(seq->confidentialityProtectionResult, fp, indent, "confidentialityProtectionResult");
}

/* Display INTEGER QosFlowIndicator */
void LTE_APER_Disp_WS_QosFlowIndicator(unsigned int value, FILE *fp, int indent, char *name) {
   AsnAperPrintAt(fp, 0, indent, "%s: %d", name, value);
   AsnAperPrint(fp, "\n");
}

/* Display Enum DataForwardingAccepted */
void LTE_APER_Disp_WS_DataForwardingAccepted(unsigned int value, FILE *fp, int indent, char *name) {
   AsnAperPrintAt(fp, 0, indent, "%s: ", name);
   switch (value) {
      case DATAFORWARDINGACCEPTED_DATA_FORWARDING_ACCEPTED:
        fprintf(fp, "data-forwarding-accepted (%d)\n", value);
        break;
      default:
        fprintf(fp, "Unknown (%d)\n", value);
        break;
   }
}

/* QosFlowSetupResponseItemHOReqAck - Sequence Format 2 */
void LTE_APER_Disp_WS_QosFlowSetupResponseItemHOReqAck(QosFlowSetupResponseItemHOReqAck_t *seq, FILE *fp, int indent, char *name) {

   LTE_APER_Disp_WS_QosFlowIndicator(seq->qosFlowIndicator, fp, indent, "qosFlowIndicator");

   if (seq->dataForwardingAccepted_Present) {
      LTE_APER_Disp_WS_DataForwardingAccepted(seq->dataForwardingAccepted, fp, indent, "dataForwardingAccepted");
   }
}

/* QosFlowSetupResponseListHOReqAck - Sequence Of QosFlowSetupResponseItemHOReqAck */
void LTE_APER_Disp_WS_QosFlowSetupResponseListHOReqAck(QosFlowSetupResponseListHOReqAck_t *seqOf, FILE *fp, int indent, char *name) {
   int inst_index = 0;
   int indent2    = indent + WS_INDENT_C;

   AsnAperPrintAt(fp, 0, indent, "%s: %d item\n", name, seqOf->nbrInstances);
   indent = indent2 + WS_INDENT_C;

   for (inst_index = 0; inst_index < seqOf->nbrInstances; inst_index++) {
      AsnAperPrintAt(fp, 0, indent2, "Item %d\n", inst_index);
      LTE_APER_Disp_WS_QosFlowSetupResponseItemHOReqAck(&((*seqOf).QosFlowSetupResponseItemHOReqAck[inst_index]), fp, indent, "QosFlowSetupResponseItemHOReqAck");
   }
}


/* Display Enum CauseRadioNetwork */
void LTE_APER_Disp_WS_CauseRadioNetwork(unsigned int value, FILE *fp, int indent, char *name) {
   AsnAperPrintAt(fp, 0, indent, "%s: ", name);
   switch (value) {
      case CAUSERADIONETWORK_UNSPECIFIED:
        fprintf(fp, "unspecified (%d)\n", value);
        break;
      case CAUSERADIONETWORK_TXNRELOCOVERALL_EXPIRY:
        fprintf(fp, "txnrelocoverall-expiry (%d)\n", value);
        break;
      case CAUSERADIONETWORK_SUCCESSFUL_HANDOVER:
        fprintf(fp, "successful-handover (%d)\n", value);
        break;
      case CAUSERADIONETWORK_RELEASE_DUE_TO_NGRAN_GENERATED_REASON:
        fprintf(fp, "release-due-to-ngran-generated-reason (%d)\n", value);
        break;
      case CAUSERADIONETWORK_RELEASE_DUE_TO_5GC_GENERATED_REASON:
        fprintf(fp, "release-due-to-5gc-generated-reason (%d)\n", value);
        break;
      case CAUSERADIONETWORK_HANDOVER_CANCELLED:
        fprintf(fp, "handover-cancelled (%d)\n", value);
        break;
      case CAUSERADIONETWORK_PARTIAL_HANDOVER:
        fprintf(fp, "partial-handover (%d)\n", value);
        break;
      case CAUSERADIONETWORK_HO_FAILURE_IN_TARGET_5GC_NGRAN_NODE_OR_TARGET_SYSTEM:
        fprintf(fp, "ho-failure-in-target-5GC-ngran-node-or-target-system (%d)\n", value);
        break;
      case CAUSERADIONETWORK_HO_TARGET_NOT_ALLOWED:
        fprintf(fp, "ho-target-not-allowed (%d)\n", value);
        break;
      case CAUSERADIONETWORK_TNGRELOCOVERALL_EXPIRY:
        fprintf(fp, "tngrelocoverall-expiry (%d)\n", value);
        break;
      case CAUSERADIONETWORK_TNGRELOCPREP_EXPIRY:
        fprintf(fp, "tngrelocprep-expiry (%d)\n", value);
        break;
      case CAUSERADIONETWORK_CELL_NOT_AVAILABLE:
        fprintf(fp, "cell-not-available (%d)\n", value);
        break;
      case CAUSERADIONETWORK_UNKNOWN_TARGETID:
        fprintf(fp, "unknown-targetID (%d)\n", value);
        break;
      case CAUSERADIONETWORK_NO_RADIO_RESOURCES_AVAILABLE_IN_TARGET_CELL:
        fprintf(fp, "no-radio-resources-available-in-target-cell (%d)\n", value);
        break;
      case CAUSERADIONETWORK_UNKNOWN_LOCAL_UE_NGAP_ID:
        fprintf(fp, "unknown-local-UE-NGAP-ID (%d)\n", value);
        break;
      case CAUSERADIONETWORK_INCONSISTENT_REMOTE_UE_NGAP_ID:
        fprintf(fp, "inconsistent-remote-UE-NGAP-ID (%d)\n", value);
        break;
      case CAUSERADIONETWORK_HANDOVER_DESIRABLE_FOR_RADIO_REASON:
        fprintf(fp, "handover-desirable-for-radio-reason (%d)\n", value);
        break;
      case CAUSERADIONETWORK_TIME_CRITICAL_HANDOVER:
        fprintf(fp, "time-critical-handover (%d)\n", value);
        break;
      case CAUSERADIONETWORK_RESOURCE_OPTIMISATION_HANDOVER:
        fprintf(fp, "resource-optimisation-handover (%d)\n", value);
        break;
      case CAUSERADIONETWORK_REDUCE_LOAD_IN_SERVING_CELL:
        fprintf(fp, "reduce-load-in-serving-cell (%d)\n", value);
        break;
      case CAUSERADIONETWORK_USER_INACTIVITY:
        fprintf(fp, "user-inactivity (%d)\n", value);
        break;
      case CAUSERADIONETWORK_RADIO_CONNECTION_WITH_UE_LOST:
        fprintf(fp, "radio-connection-with-ue-lost (%d)\n", value);
        break;
      case CAUSERADIONETWORK_LOAD_BALANCING_TAU_REQUIRED:
        fprintf(fp, "load-balancing-tau-required (%d)\n", value);
        break;
      case CAUSERADIONETWORK_RADIO_RESOURCES_NOT_AVAILABLE:
        fprintf(fp, "radio-resources-not-available (%d)\n", value);
        break;
      case CAUSERADIONETWORK_INVALID_QOS_COMBINATION:
        fprintf(fp, "invalid-qos-combination (%d)\n", value);
        break;
      case CAUSERADIONETWORK_FAILURE_IN_RADIO_INTERFACE_PROCEDURE:
        fprintf(fp, "failure-in-radio-interface-procedure (%d)\n", value);
        break;
      case CAUSERADIONETWORK_INTERACTION_WITH_OTHER_PROCEDURE:
        fprintf(fp, "interaction-with-other-procedure (%d)\n", value);
        break;
      case CAUSERADIONETWORK_UNKNOWN_PDU_SESSION_ID:
        fprintf(fp, "unknown-PDU-session-ID (%d)\n", value);
        break;
      case CAUSERADIONETWORK_UNKOWN_QOS_FLOW_ID:
        fprintf(fp, "unkown-qos-flow-ID (%d)\n", value);
        break;
      case CAUSERADIONETWORK_MULTIPLE_PDU_SESSION_ID_INSTANCES:
        fprintf(fp, "multiple-PDU-session-ID-instances (%d)\n", value);
        break;
      case CAUSERADIONETWORK_MULTIPLE_QOS_FLOW_ID_INSTANCES:
        fprintf(fp, "multiple-qos-flow-ID-instances (%d)\n", value);
        break;
      case CAUSERADIONETWORK_ENCRYPTION_AND_OR_INTEGRITY_PROTECTION_ALGORITHMS_NOT_SUPPORTED:
        fprintf(fp, "encryption-and-or-integrity-protection-algorithms-not-supported (%d)\n", value);
        break;
      case CAUSERADIONETWORK_NG_INTRA_SYSTEM_HANDOVER_TRIGGERED:
        fprintf(fp, "ng-intra-system-handover-triggered (%d)\n", value);
        break;
      case CAUSERADIONETWORK_NG_INTER_SYSTEM_HANDOVER_TRIGGERED:
        fprintf(fp, "ng-inter-system-handover-triggered (%d)\n", value);
        break;
      case CAUSERADIONETWORK_XN_HANDOVER_TRIGGERED:
        fprintf(fp, "xn-handover-triggered (%d)\n", value);
        break;
      case CAUSERADIONETWORK_NOT_SUPPORTED_5QI_VALUE:
        fprintf(fp, "not-supported-5QI-value (%d)\n", value);
        break;
      case CAUSERADIONETWORK_UE_CONTEXT_TRANSFER:
        fprintf(fp, "ue-context-transfer (%d)\n", value);
        break;
      case CAUSERADIONETWORK_IMS_VOICE_EPS_FALLBACK_OR_RAT_FALLBACK_TRIGGERED:
        fprintf(fp, "ims-voice-eps-fallback-or-rat-fallback-triggered (%d)\n", value);
        break;
      case CAUSERADIONETWORK_UP_INTEGRITY_PROTECTION_NOT_POSSIBLE:
        fprintf(fp, "up-integrity-protection-not-possible (%d)\n", value);
        break;
      case CAUSERADIONETWORK_UP_CONFIDENTIALITY_PROTECTION_NOT_POSSIBLE:
        fprintf(fp, "up-confidentiality-protection-not-possible (%d)\n", value);
        break;
      case CAUSERADIONETWORK_SLICE_NOT_SUPPORTED:
        fprintf(fp, "slice-not-supported (%d)\n", value);
        break;
      case CAUSERADIONETWORK_UE_IN_RRC_INACTIVE_STATE_NOT_REACHABLE:
        fprintf(fp, "ue-in-rrc-inactive-state-not-reachable (%d)\n", value);
        break;
      default:
        fprintf(fp, "Unknown (%d)\n", value);
        break;
   }
}

/* Display Enum CauseTransport */
void LTE_APER_Disp_WS_CauseTransport(unsigned int value, FILE *fp, int indent, char *name) {
   AsnAperPrintAt(fp, 0, indent, "%s: ", name);
   switch (value) {
      case CAUSETRANSPORT_TRANSPORT_RESOURCE_UNAVAILABLE:
        fprintf(fp, "transport-resource-unavailable (%d)\n", value);
        break;
      case CAUSETRANSPORT_UNSPECIFIED:
        fprintf(fp, "unspecified (%d)\n", value);
        break;
      default:
        fprintf(fp, "Unknown (%d)\n", value);
        break;
   }
}

/* Display Enum CauseNas */
void LTE_APER_Disp_WS_CauseNas(unsigned int value, FILE *fp, int indent, char *name) {
   AsnAperPrintAt(fp, 0, indent, "%s: ", name);
   switch (value) {
      case CAUSENAS_NORMAL_RELEASE:
        fprintf(fp, "normal-release (%d)\n", value);
        break;
      case CAUSENAS_AUTHENTICATION_FAILURE:
        fprintf(fp, "authentication-failure (%d)\n", value);
        break;
      case CAUSENAS_DEREGISTER:
        fprintf(fp, "deregister (%d)\n", value);
        break;
      case CAUSENAS_UNSPECIFIED:
        fprintf(fp, "unspecified (%d)\n", value);
        break;
      default:
        fprintf(fp, "Unknown (%d)\n", value);
        break;
   }
}

/* Display Enum CauseProtocol */
void LTE_APER_Disp_WS_CauseProtocol(unsigned int value, FILE *fp, int indent, char *name) {
   AsnAperPrintAt(fp, 0, indent, "%s: ", name);
   switch (value) {
      case CAUSEPROTOCOL_TRANSFER_SYNTAX_ERROR:
        fprintf(fp, "transfer-syntax-error (%d)\n", value);
        break;
      case CAUSEPROTOCOL_ABSTRACT_SYNTAX_ERROR_REJECT:
        fprintf(fp, "abstract-syntax-error-reject (%d)\n", value);
        break;
      case CAUSEPROTOCOL_ABSTRACT_SYNTAX_ERROR_IGNORE_AND_NOTIFY:
        fprintf(fp, "abstract-syntax-error-ignore-and-notify (%d)\n", value);
        break;
      case CAUSEPROTOCOL_MESSAGE_NOT_COMPATIBLE_WITH_RECEIVER_STATE:
        fprintf(fp, "message-not-compatible-with-receiver-state (%d)\n", value);
        break;
      case CAUSEPROTOCOL_SEMANTIC_ERROR:
        fprintf(fp, "semantic-error (%d)\n", value);
        break;
      case CAUSEPROTOCOL_ABSTRACT_SYNTAX_ERROR_FALSELY_CONSTRUCTED_MESSAGE:
        fprintf(fp, "abstract-syntax-error-falsely-constructed-message (%d)\n", value);
        break;
      case CAUSEPROTOCOL_UNSPECIFIED:
        fprintf(fp, "unspecified (%d)\n", value);
        break;
      default:
        fprintf(fp, "Unknown (%d)\n", value);
        break;
   }
}

/* Display Enum CauseMisc */
void LTE_APER_Disp_WS_CauseMisc(unsigned int value, FILE *fp, int indent, char *name) {
   AsnAperPrintAt(fp, 0, indent, "%s: ", name);
   switch (value) {
      case CAUSEMISC_CONTROL_PROCESSING_OVERLOAD:
        fprintf(fp, "control-processing-overload (%d)\n", value);
        break;
      case CAUSEMISC_NOT_ENOUGH_USER_PLANE_PROCESSING_RESOURCES:
        fprintf(fp, "not-enough-user-plane-processing-resources (%d)\n", value);
        break;
      case CAUSEMISC_HARDWARE_FAILURE:
        fprintf(fp, "hardware-failure (%d)\n", value);
        break;
      case CAUSEMISC_OM_INTERVENTION:
        fprintf(fp, "om-intervention (%d)\n", value);
        break;
      case CAUSEMISC_UNKNOWN_PLMN:
        fprintf(fp, "unknown-PLMN (%d)\n", value);
        break;
      case CAUSEMISC_UNSPECIFIED:
        fprintf(fp, "unspecified (%d)\n", value);
        break;
      default:
        fprintf(fp, "Unknown (%d)\n", value);
        break;
   }
}

/* Cause - Choice Encoder */
void LTE_APER_Disp_WS_Cause(Cause_t *pch, FILE *fp, int indent, char *name) {
   AsnAperPrintAt(fp, 0, indent, "%s: ", name);
   indent += WS_INDENT_C;
   switch (pch->Choice_Index) {
      case CAUSE_CHOICE_RADIONETWORK:
         fprintf(fp, "radioNetwork (%d)\n", CAUSE_CHOICE_RADIONETWORK);
      break;
      case CAUSE_CHOICE_TRANSPORT:
         fprintf(fp, "transport (%d)\n", CAUSE_CHOICE_TRANSPORT);
      break;
      case CAUSE_CHOICE_NAS:
         fprintf(fp, "nas (%d)\n", CAUSE_CHOICE_NAS);
      break;
      case CAUSE_CHOICE_PROTOCOL:
         fprintf(fp, "protocol (%d)\n", CAUSE_CHOICE_PROTOCOL);
      break;
      case CAUSE_CHOICE_MISC:
         fprintf(fp, "misc (%d)\n", CAUSE_CHOICE_MISC);
      break;
   }

   switch (pch->Choice_Index) {
      case CAUSE_CHOICE_RADIONETWORK:
         LTE_APER_Disp_WS_CauseRadioNetwork(pch->Choices.radioNetwork, fp, indent, "radioNetwork");
         break;
      case CAUSE_CHOICE_TRANSPORT:
         LTE_APER_Disp_WS_CauseTransport(pch->Choices.transport, fp, indent, "transport");
         break;
      case CAUSE_CHOICE_NAS:
         LTE_APER_Disp_WS_CauseNas(pch->Choices.nas, fp, indent, "nas");
         break;
      case CAUSE_CHOICE_PROTOCOL:
         LTE_APER_Disp_WS_CauseProtocol(pch->Choices.protocol, fp, indent, "protocol");
         break;
      case CAUSE_CHOICE_MISC:
         LTE_APER_Disp_WS_CauseMisc(pch->Choices.misc, fp, indent, "misc");
         break;
   }
}


/* QosFlowItem - Sequence Format 2 */
void LTE_APER_Disp_WS_QosFlowItem(QosFlowItem_t *seq, FILE *fp, int indent, char *name) {

   LTE_APER_Disp_WS_QosFlowIndicator(seq->qosFlowIndicator, fp, indent, "qosFlowIndicator");

   LTE_APER_Disp_WS_Cause(&seq->cause, fp, indent, "cause");
}

/* QosFlowList - Sequence Of QosFlowItem */
void LTE_APER_Disp_WS_QosFlowList(QosFlowList_t *seqOf, FILE *fp, int indent, char *name) {
   int inst_index = 0;
   int indent2    = indent + WS_INDENT_C;

   AsnAperPrintAt(fp, 0, indent, "%s: %d item\n", name, seqOf->nbrInstances);
   indent = indent2 + WS_INDENT_C;

   for (inst_index = 0; inst_index < seqOf->nbrInstances; inst_index++) {
      AsnAperPrintAt(fp, 0, indent2, "Item %d\n", inst_index);
      LTE_APER_Disp_WS_QosFlowItem(&((*seqOf).QosFlowItem[inst_index]), fp, indent, "QosFlowItem");
   }
}


/* Display INTEGER DRB-ID */
void LTE_APER_Disp_WS_DRB_ID(unsigned int value, FILE *fp, int indent, char *name) {
   AsnAperPrintAt(fp, 0, indent, "%s: %d", name, value);
   AsnAperPrint(fp, "\n");
}

/* DataForwardingResponseDRBItem - Sequence Format 2 */
void LTE_APER_Disp_WS_DataForwardingResponseDRBItem(DataForwardingResponseDRBItem_t *seq, FILE *fp, int indent, char *name) {

   LTE_APER_Disp_WS_DRB_ID(seq->dRB_ID, fp, indent, "dRB-ID");

   if (seq->dLForwardingUP_TNLInformation_Present) {
      LTE_APER_Disp_WS_UPTransportLayerInformation(&seq->dLForwardingUP_TNLInformation, fp, indent, "dLForwardingUP-TNLInformation");
   }

   if (seq->uLForwardingUP_TNLInformation_Present) {
      LTE_APER_Disp_WS_UPTransportLayerInformation(&seq->uLForwardingUP_TNLInformation, fp, indent, "uLForwardingUP-TNLInformation");
   }
}

/* DataForwardingResponseDRBList - Sequence Of DataForwardingResponseDRBItem */
void LTE_APER_Disp_WS_DataForwardingResponseDRBList(DataForwardingResponseDRBList_t *seqOf, FILE *fp, int indent, char *name) {
   int inst_index = 0;
   int indent2    = indent + WS_INDENT_C;

   AsnAperPrintAt(fp, 0, indent, "%s: %d item\n", name, seqOf->nbrInstances);
   indent = indent2 + WS_INDENT_C;

   for (inst_index = 0; inst_index < seqOf->nbrInstances; inst_index++) {
      AsnAperPrintAt(fp, 0, indent2, "Item %d\n", inst_index);
      LTE_APER_Disp_WS_DataForwardingResponseDRBItem(&((*seqOf).DataForwardingResponseDRBItem[inst_index]), fp, indent, "DataForwardingResponseDRBItem");
   }
}


/* HandoverRequestAcknowledgeTransfer - Sequence Format 2 */
void LTE_APER_Disp_WS_HandoverRequestAcknowledgeTransfer(HandoverRequestAcknowledgeTransfer_t *seq, FILE *fp, int indent, char *name) {

   LTE_APER_Disp_WS_UPTransportLayerInformation(&seq->dL_NGU_UP_TNLInformation, fp, indent, "dL-NGU-UP-TNLInformation");

   if (seq->dLForwardingUP_TNLInformation_Present) {
      LTE_APER_Disp_WS_UPTransportLayerInformation(&seq->dLForwardingUP_TNLInformation, fp, indent, "dLForwardingUP-TNLInformation");
   }

   if (seq->securityResult_Present) {
      LTE_APER_Disp_WS_SecurityResult(&seq->securityResult, fp, indent, "securityResult");
   }

   LTE_APER_Disp_WS_QosFlowSetupResponseListHOReqAck(&seq->qosFlowSetupResponseList, fp, indent, "qosFlowSetupResponseList");

   if (seq->qosFlowFailedToSetupList_Present) {
      LTE_APER_Disp_WS_QosFlowList(&seq->qosFlowFailedToSetupList, fp, indent, "qosFlowFailedToSetupList");
   }

   if (seq->dataForwardingResponseDRBList_Present) {
      LTE_APER_Disp_WS_DataForwardingResponseDRBList(&seq->dataForwardingResponseDRBList, fp, indent, "dataForwardingResponseDRBList");
   }
}

/* PDUSessionResourceAdmittedItem - Sequence Format 2 */
void LTE_APER_Disp_WS_PDUSessionResourceAdmittedItem(PDUSessionResourceAdmittedItem_t *seq, FILE *fp, int indent, char *name) {

   LTE_APER_Disp_WS_PDUSessionID(seq->pDUSessionID, fp, indent, "pDUSessionID");

   LTE_APER_Disp_WS_HandoverRequestAcknowledgeTransfer(&seq->handoverRequestAcknowledgeTransfer, fp, indent, "handoverRequestAcknowledgeTransfer");
}

/* PDUSessionResourceAdmittedItemIEs - Class Instance Displaying */
void LTE_APER_Disp_WS_PDUSessionResourceAdmittedItemIEs(PDUSessionResourceAdmittedItemIEs_t *clsInst, FILE *fp, int indent) {
   int nbr_items  = 0;
   int item_idx   = 0;
   int indent0    = indent;
   int indent1    = indent0 + WS_INDENT_C;
   int indent2    = indent1 + WS_INDENT_C;
   indent = indent2 + WS_INDENT_C; // for calling of subitems

   if (clsInst->PDUSessionResourceAdmittedItem_Present) {
      AsnAperPrintAt(fp, 0, indent0, "Item %d: id-PDUSessionResourceAdmittedItem\n", item_idx++);
      AsnAperPrintAt(fp, 0, indent1, "ProtocolIE-SingleContainer\n");
      AsnAperPrintAt(fp, 0, indent2, "id: id-PDUSessionResourceAdmittedItem (%d)\n", ID_PDUSESSIONRESOURCEADMITTEDITEM);
      AsnAperPrintAt(fp, 0, indent2, "criticality: ignore (%d)\n", CRITICALITY_IGNORE);
      AsnAperPrintAt(fp, 0, indent2, "value\n");
      LTE_APER_Disp_WS_PDUSessionResourceAdmittedItem(&clsInst->PDUSessionResourceAdmittedItem, fp, indent, "PDUSessionResourceAdmittedItem");
   }
}

/* PDUSessionResourceAdmittedList - Sequence Of PDUSessionResourceAdmittedItemIEs */
void LTE_APER_Disp_WS_PDUSessionResourceAdmittedList(PDUSessionResourceAdmittedList_t *seqOf, FILE *fp, int indent, char *name) {
   int inst_index = 0;
   int indent2    = indent + WS_INDENT_C;

   AsnAperPrintAt(fp, 0, indent, "%s: %d item\n", name, seqOf->nbrInstances);
   indent = indent2 + WS_INDENT_C;

   for (inst_index = 0; inst_index < seqOf->nbrInstances; inst_index++) {
      LTE_APER_Disp_WS_PDUSessionResourceAdmittedItemIEs(&((*seqOf).ProtocolIE_SingleContainer[inst_index]), fp, indent);
   }
}


/* PDUSessionItem - Sequence Format 2 */
void LTE_APER_Disp_WS_PDUSessionItem(PDUSessionItem_t *seq, FILE *fp, int indent, char *name) {

   LTE_APER_Disp_WS_PDUSessionID(seq->pDUSessionID, fp, indent, "pDUSessionID");

   LTE_APER_Disp_WS_Cause(&seq->cause, fp, indent, "cause");
}

/* PDUSessionList - Sequence Of PDUSessionItem */
void LTE_APER_Disp_WS_PDUSessionList(PDUSessionList_t *seqOf, FILE *fp, int indent, char *name) {
   int inst_index = 0;
   int indent2    = indent + WS_INDENT_C;

   AsnAperPrintAt(fp, 0, indent, "%s: %d item\n", name, seqOf->nbrInstances);
   indent = indent2 + WS_INDENT_C;

   for (inst_index = 0; inst_index < seqOf->nbrInstances; inst_index++) {
      AsnAperPrintAt(fp, 0, indent2, "Item %d\n", inst_index);
      LTE_APER_Disp_WS_PDUSessionItem(&((*seqOf).PDUSessionItem[inst_index]), fp, indent, "PDUSessionItem");
   }
}


/* TargetToSource-TransparentContainer - OCTET STRING Display - Case 6 */
void LTE_APER_Disp_WS_TargetToSource_TransparentContainer(TargetToSource_TransparentContainer_t *bstr, FILE *fp, int indent, char *name) {
   TargetToSource_TransparentContainer_t tmp;
   int ii = 0, len = 512;

   memcpy(&tmp, bstr, sizeof(TargetToSource_TransparentContainer_t));

   AsnAperPrintAt(fp, 0, indent, "%s: ", name);
   len = tmp.length;
   for (ii = 0; ii < len && ii < 24; ii++) {
      AsnAperPrint(fp, "%02x", tmp.content[ii]);
   }
   if (ii < len) AsnAperPrint(fp, "...");
   AsnAperPrint(fp, "\n");
}

/* Display INTEGER ProcedureCode */
void LTE_APER_Disp_WS_ProcedureCode(unsigned int value, FILE *fp, int indent, char *name) {
   AsnAperPrintAt(fp, 0, indent, "%s: %d", name, value);
   AsnAperPrint(fp, "\n");
}

/* Display Enum TriggeringMessage */
void LTE_APER_Disp_WS_TriggeringMessage(unsigned char value, FILE *fp, int indent, char *name) {
   AsnAperPrintAt(fp, 0, indent, "%s: ", name);
   switch (value) {
      case TRIGGERINGMESSAGE_INITIATING_MESSAGE:
        fprintf(fp, "initiating-message (%d)\n", value);
        break;
      case TRIGGERINGMESSAGE_SUCCESSFUL_OUTCOME:
        fprintf(fp, "successful-outcome (%d)\n", value);
        break;
      case TRIGGERINGMESSAGE_UNSUCCESSFULL_OUTCOME:
        fprintf(fp, "unsuccessfull-outcome (%d)\n", value);
        break;
      default:
        fprintf(fp, "Unknown (%d)\n", value);
        break;
   }
}

/* Display Enum TypeOfError */
void LTE_APER_Disp_WS_TypeOfError(unsigned int value, FILE *fp, int indent, char *name) {
   AsnAperPrintAt(fp, 0, indent, "%s: ", name);
   switch (value) {
      case TYPEOFERROR_NOT_UNDERSTOOD:
        fprintf(fp, "not-understood (%d)\n", value);
        break;
      case TYPEOFERROR_MISSING:
        fprintf(fp, "missing (%d)\n", value);
        break;
      default:
        fprintf(fp, "Unknown (%d)\n", value);
        break;
   }
}

/* CriticalityDiagnostics-IE-Item - Sequence Format 2 */
void LTE_APER_Disp_WS_CriticalityDiagnostics_IE_Item(CriticalityDiagnostics_IE_Item_t *seq, FILE *fp, int indent, char *name) {

   LTE_APER_Disp_WS_Criticality(seq->iECriticality, fp, indent, "iECriticality");

   LTE_APER_Disp_WS_ProtocolIE_ID(seq->iE_ID, fp, indent, "iE-ID");

   LTE_APER_Disp_WS_TypeOfError(seq->typeOfError, fp, indent, "typeOfError");
}

/* CriticalityDiagnostics-IE-List - Sequence Of CriticalityDiagnostics-IE-Item */
void LTE_APER_Disp_WS_CriticalityDiagnostics_IE_List(CriticalityDiagnostics_IE_List_t *seqOf, FILE *fp, int indent, char *name) {
   int inst_index = 0;
   int indent2    = indent + WS_INDENT_C;

   AsnAperPrintAt(fp, 0, indent, "%s: %d item\n", name, seqOf->nbrInstances);
   indent = indent2 + WS_INDENT_C;

   for (inst_index = 0; inst_index < seqOf->nbrInstances; inst_index++) {
      AsnAperPrintAt(fp, 0, indent2, "Item %d\n", inst_index);
      LTE_APER_Disp_WS_CriticalityDiagnostics_IE_Item(&((*seqOf).CriticalityDiagnostics_IE_Item[inst_index]), fp, indent, "CriticalityDiagnostics-IE-Item");
   }
}


/* CriticalityDiagnostics - Sequence Format 2 */
void LTE_APER_Disp_WS_CriticalityDiagnostics(CriticalityDiagnostics_t *seq, FILE *fp, int indent, char *name) {

   if (seq->procedureCode_Present) {
      LTE_APER_Disp_WS_ProcedureCode(seq->procedureCode, fp, indent, "procedureCode");
   }

   if (seq->triggeringMessage_Present) {
      LTE_APER_Disp_WS_TriggeringMessage(seq->triggeringMessage, fp, indent, "triggeringMessage");
   }

   if (seq->procedureCriticality_Present) {
      LTE_APER_Disp_WS_Criticality(seq->procedureCriticality, fp, indent, "procedureCriticality");
   }

   if (seq->iEsCriticalityDiagnostics_Present) {
      LTE_APER_Disp_WS_CriticalityDiagnostics_IE_List(&seq->iEsCriticalityDiagnostics, fp, indent, "iEsCriticalityDiagnostics");
   }
}

/* HandoverRequestAcknowledgeIEs - Class Instance Displaying */
void LTE_APER_Disp_WS_HandoverRequestAcknowledgeIEs(HandoverRequestAcknowledgeIEs_t *clsInst, FILE *fp, int indent) {
   int nbr_items  = 1;
   int item_idx   = 0;
   int indent0    = indent;
   int indent1    = indent0 + WS_INDENT_C;
   int indent2    = indent1 + WS_INDENT_C;
   indent = indent2 + WS_INDENT_C; // for calling of subitems
   if (clsInst->AMF_UE_NGAP_ID_Present) nbr_items ++;
   if (clsInst->RAN_UE_NGAP_ID_Present) nbr_items ++;
   if (clsInst->PDUSessionResourceAdmittedList_Present) nbr_items ++;
   if (clsInst->PDUSessionResourceFailedToSetupList_Present) nbr_items ++;
   if (clsInst->CriticalityDiagnostics_Present) nbr_items ++;

   if (nbr_items == 1)
      AsnAperPrint(fp, "%d item\n", nbr_items);
   else
      AsnAperPrint(fp, "%d items\n", nbr_items);

   if (clsInst->AMF_UE_NGAP_ID_Present) {
      AsnAperPrintAt(fp, 0, indent0, "Item %d: id-AMF-UE-NGAP-ID\n", item_idx++);
      AsnAperPrintAt(fp, 0, indent1, "ProtocolIE-Field\n");
      AsnAperPrintAt(fp, 0, indent2, "id: id-AMF-UE-NGAP-ID (%d)\n", ID_AMF_UE_NGAP_ID);
      AsnAperPrintAt(fp, 0, indent2, "criticality: ignore (%d)\n", CRITICALITY_IGNORE);
      AsnAperPrintAt(fp, 0, indent2, "value\n");
      LTE_APER_Disp_WS_AMF_UE_NGAP_ID(clsInst->AMF_UE_NGAP_ID, fp, indent, "AMF-UE-NGAP-ID");
   }

   if (clsInst->RAN_UE_NGAP_ID_Present) {
      AsnAperPrintAt(fp, 0, indent0, "Item %d: id-RAN-UE-NGAP-ID\n", item_idx++);
      AsnAperPrintAt(fp, 0, indent1, "ProtocolIE-Field\n");
      AsnAperPrintAt(fp, 0, indent2, "id: id-RAN-UE-NGAP-ID (%d)\n", ID_RAN_UE_NGAP_ID);
      AsnAperPrintAt(fp, 0, indent2, "criticality: ignore (%d)\n", CRITICALITY_IGNORE);
      AsnAperPrintAt(fp, 0, indent2, "value\n");
      LTE_APER_Disp_WS_RAN_UE_NGAP_ID(clsInst->RAN_UE_NGAP_ID, fp, indent, "RAN-UE-NGAP-ID");
   }

   if (clsInst->PDUSessionResourceAdmittedList_Present) {
      AsnAperPrintAt(fp, 0, indent0, "Item %d: id-PDUSessionResourceAdmittedList\n", item_idx++);
      AsnAperPrintAt(fp, 0, indent1, "ProtocolIE-Field\n");
      AsnAperPrintAt(fp, 0, indent2, "id: id-PDUSessionResourceAdmittedList (%d)\n", ID_PDUSESSIONRESOURCEADMITTEDLIST);
      AsnAperPrintAt(fp, 0, indent2, "criticality: ignore (%d)\n", CRITICALITY_IGNORE);
      AsnAperPrintAt(fp, 0, indent2, "value\n");
      LTE_APER_Disp_WS_PDUSessionResourceAdmittedList(&clsInst->PDUSessionResourceAdmittedList, fp, indent, "PDUSessionResourceAdmittedList");
   }

   if (clsInst->PDUSessionResourceFailedToSetupList_Present) {
      AsnAperPrintAt(fp, 0, indent0, "Item %d: id-PDUSessionResourceFailedToSetupList\n", item_idx++);
      AsnAperPrintAt(fp, 0, indent1, "ProtocolIE-Field\n");
      AsnAperPrintAt(fp, 0, indent2, "id: id-PDUSessionResourceFailedToSetupList (%d)\n", ID_PDUSESSIONRESOURCEFAILEDTOSETUPLIST);
      AsnAperPrintAt(fp, 0, indent2, "criticality: ignore (%d)\n", CRITICALITY_IGNORE);
      AsnAperPrintAt(fp, 0, indent2, "value\n");
      LTE_APER_Disp_WS_PDUSessionList(&clsInst->PDUSessionResourceFailedToSetupList, fp, indent, "PDUSessionList");
   }

   AsnAperPrintAt(fp, 0, indent0, "Item %d: id-TargetToSource-TransparentContainer\n", item_idx++);
   AsnAperPrintAt(fp, 0, indent1, "ProtocolIE-Field\n");
   AsnAperPrintAt(fp, 0, indent2, "id: id-TargetToSource-TransparentContainer (%d)\n", ID_TARGETTOSOURCE_TRANSPARENTCONTAINER);
   AsnAperPrintAt(fp, 0, indent2, "criticality: reject (%d)\n", CRITICALITY_REJECT);
   AsnAperPrintAt(fp, 0, indent2, "value\n");
   LTE_APER_Disp_WS_TargetToSource_TransparentContainer(&clsInst->TargetToSource_TransparentContainer, fp, indent, "TargetToSource-TransparentContainer");

   if (clsInst->CriticalityDiagnostics_Present) {
      AsnAperPrintAt(fp, 0, indent0, "Item %d: id-CriticalityDiagnostics\n", item_idx++);
      AsnAperPrintAt(fp, 0, indent1, "ProtocolIE-Field\n");
      AsnAperPrintAt(fp, 0, indent2, "id: id-CriticalityDiagnostics (%d)\n", ID_CRITICALITYDIAGNOSTICS);
      AsnAperPrintAt(fp, 0, indent2, "criticality: ignore (%d)\n", CRITICALITY_IGNORE);
      AsnAperPrintAt(fp, 0, indent2, "value\n");
      LTE_APER_Disp_WS_CriticalityDiagnostics(&clsInst->CriticalityDiagnostics, fp, indent, "CriticalityDiagnostics");
   }
}

/* HandoverRequestAcknowledge - Sequence Format 2 */
void LTE_APER_Disp_WS_HandoverRequestAcknowledge(HandoverRequestAcknowledge_t *seq, FILE *fp, int indent, char *name) {
   AsnAperPrintAt(fp, 0, indent, "NG Application Protocol\n");

   indent += WS_INDENT_C;
   AsnAperPrintAt(fp, 0, indent, "NGAP-ELEMENTARY-PROCEDURE-PDU: successfulOutcome (1)\n");

   indent += WS_INDENT_C;
   AsnAperPrintAt(fp, 0, indent, "successfulOutcome\n");

   indent += WS_INDENT_C;
   AsnAperPrintAt(fp, 0, indent, "procedureCode: id-HandoverResourceAllocation (%d)\n", ID_HANDOVERRESOURCEALLOCATION);
   AsnAperPrintAt(fp, 0, indent, "criticality: reject (%d)\n", CRITICALITY_REJECT_C >> 6);
   AsnAperPrintAt(fp, 0, indent, "value\n");

   indent += WS_INDENT_C;
   AsnAperPrintAt(fp, 0, indent, "HandoverRequestAcknowledge\n");

   indent += WS_INDENT_C;

   AsnAperPrintAt(fp, 0, indent, "protocolIEs: ");
   LTE_APER_Disp_WS_HandoverRequestAcknowledgeIEs(&seq->protocolIEs, fp, indent);
}
