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

#ifndef LTE_NGAP_DISP_H_
#define LTE_NGAP_DISP_H_
#include "LTE_NGAP_IE.h"
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#define WS_INDENT_C 3

/* Display INTEGER ProtocolIE-ID */
void LTE_APER_Disp_WS_ProtocolIE_ID(unsigned int value, FILE *fp, int indent, char *name);

/* Display Enum Criticality */
void LTE_APER_Disp_WS_Criticality(unsigned char value, FILE *fp, int indent, char *name);

/* Display INTEGER AMF-UE-NGAP-ID */
void LTE_APER_Disp_WS_AMF_UE_NGAP_ID(unsigned int value, FILE *fp, int indent, char *name);

/* Display Enum Presence */
void LTE_APER_Disp_WS_Presence(unsigned char value, FILE *fp, int indent, char *name);

/* Display INTEGER RAN-UE-NGAP-ID */
void LTE_APER_Disp_WS_RAN_UE_NGAP_ID(unsigned int value, FILE *fp, int indent, char *name);

/* Display INTEGER PDUSessionID */
void LTE_APER_Disp_WS_PDUSessionID(unsigned int value, FILE *fp, int indent, char *name);

/* TransportLayerAddress - BIT STRING Display - case 3 */
void LTE_APER_Disp_WS_TransportLayerAddress(TransportLayerAddress_t *bstr, FILE *fp, int indent, char *name);

/* GTP-TEID - OCTET STRING Display - case 1 */
void LTE_APER_Disp_WS_GTP_TEID(unsigned int *bstr, FILE *fp, int indent, char *name);

/* GTPTunnel - Sequence Format 2 */
void LTE_APER_Disp_WS_GTPTunnel(GTPTunnel_t *seq, FILE *fp, int indent, char *name);

/* UPTransportLayerInformation - Choice Encoder */
void LTE_APER_Disp_WS_UPTransportLayerInformation(UPTransportLayerInformation_t *pch, FILE *fp, int indent, char *name);

/* Display Enum IntegrityProtectionResult */
void LTE_APER_Disp_WS_IntegrityProtectionResult(unsigned int value, FILE *fp, int indent, char *name);

/* Display Enum ConfidentialityProtectionResult */
void LTE_APER_Disp_WS_ConfidentialityProtectionResult(unsigned int value, FILE *fp, int indent, char *name);

/* SecurityResult - Sequence Format 2 */
void LTE_APER_Disp_WS_SecurityResult(SecurityResult_t *seq, FILE *fp, int indent, char *name);

/* Display INTEGER QosFlowIndicator */
void LTE_APER_Disp_WS_QosFlowIndicator(unsigned int value, FILE *fp, int indent, char *name);

/* Display Enum DataForwardingAccepted */
void LTE_APER_Disp_WS_DataForwardingAccepted(unsigned int value, FILE *fp, int indent, char *name);

/* QosFlowSetupResponseItemHOReqAck - Sequence Format 2 */
void LTE_APER_Disp_WS_QosFlowSetupResponseItemHOReqAck(QosFlowSetupResponseItemHOReqAck_t *seq, FILE *fp, int indent, char *name);

/* QosFlowSetupResponseListHOReqAck - Disp Sequence Of QosFlowSetupResponseItemHOReqAck */
void LTE_APER_Disp_WS_QosFlowSetupResponseListHOReqAck(QosFlowSetupResponseListHOReqAck_t *seqOf, FILE *fp, int indent, char *name);

/* Display Enum CauseRadioNetwork */
void LTE_APER_Disp_WS_CauseRadioNetwork(unsigned int value, FILE *fp, int indent, char *name);

/* Display Enum CauseTransport */
void LTE_APER_Disp_WS_CauseTransport(unsigned int value, FILE *fp, int indent, char *name);

/* Display Enum CauseNas */
void LTE_APER_Disp_WS_CauseNas(unsigned int value, FILE *fp, int indent, char *name);

/* Display Enum CauseProtocol */
void LTE_APER_Disp_WS_CauseProtocol(unsigned int value, FILE *fp, int indent, char *name);

/* Display Enum CauseMisc */
void LTE_APER_Disp_WS_CauseMisc(unsigned int value, FILE *fp, int indent, char *name);

/* Cause - Choice Encoder */
void LTE_APER_Disp_WS_Cause(Cause_t *pch, FILE *fp, int indent, char *name);

/* QosFlowItem - Sequence Format 2 */
void LTE_APER_Disp_WS_QosFlowItem(QosFlowItem_t *seq, FILE *fp, int indent, char *name);

/* QosFlowList - Disp Sequence Of QosFlowItem */
void LTE_APER_Disp_WS_QosFlowList(QosFlowList_t *seqOf, FILE *fp, int indent, char *name);

/* Display INTEGER DRB-ID */
void LTE_APER_Disp_WS_DRB_ID(unsigned int value, FILE *fp, int indent, char *name);

/* DataForwardingResponseDRBItem - Sequence Format 2 */
void LTE_APER_Disp_WS_DataForwardingResponseDRBItem(DataForwardingResponseDRBItem_t *seq, FILE *fp, int indent, char *name);

/* DataForwardingResponseDRBList - Disp Sequence Of DataForwardingResponseDRBItem */
void LTE_APER_Disp_WS_DataForwardingResponseDRBList(DataForwardingResponseDRBList_t *seqOf, FILE *fp, int indent, char *name);

/* HandoverRequestAcknowledgeTransfer - Sequence Format 2 */
void LTE_APER_Disp_WS_HandoverRequestAcknowledgeTransfer(HandoverRequestAcknowledgeTransfer_t *seq, FILE *fp, int indent, char *name);

/* PDUSessionResourceAdmittedItem - Sequence Format 2 */
void LTE_APER_Disp_WS_PDUSessionResourceAdmittedItem(PDUSessionResourceAdmittedItem_t *seq, FILE *fp, int indent, char *name);

/* PDUSessionResourceAdmittedItemIEs - Class Instance Displaying */
void LTE_APER_Disp_WS_PDUSessionResourceAdmittedItemIEs(PDUSessionResourceAdmittedItemIEs_t *clsInst, FILE *fp, int indent);


/* PDUSessionResourceAdmittedList - Disp Sequence Of PDUSessionResourceAdmittedItemIEs */
void LTE_APER_Disp_WS_PDUSessionResourceAdmittedList(PDUSessionResourceAdmittedList_t *seqOf, FILE *fp, int indent, char *name);

/* PDUSessionItem - Sequence Format 2 */
void LTE_APER_Disp_WS_PDUSessionItem(PDUSessionItem_t *seq, FILE *fp, int indent, char *name);

/* PDUSessionList - Disp Sequence Of PDUSessionItem */
void LTE_APER_Disp_WS_PDUSessionList(PDUSessionList_t *seqOf, FILE *fp, int indent, char *name);

/* TargetToSource-TransparentContainer - OCTET STRING Display - case 6 */
void LTE_APER_Disp_WS_TargetToSource_TransparentContainer(TargetToSource_TransparentContainer_t *bstr, FILE *fp, int indent, char *name);

/* Display INTEGER ProcedureCode */
void LTE_APER_Disp_WS_ProcedureCode(unsigned int value, FILE *fp, int indent, char *name);

/* Display Enum TriggeringMessage */
void LTE_APER_Disp_WS_TriggeringMessage(unsigned char value, FILE *fp, int indent, char *name);

/* Display Enum TypeOfError */
void LTE_APER_Disp_WS_TypeOfError(unsigned int value, FILE *fp, int indent, char *name);

/* CriticalityDiagnostics-IE-Item - Sequence Format 2 */
void LTE_APER_Disp_WS_CriticalityDiagnostics_IE_Item(CriticalityDiagnostics_IE_Item_t *seq, FILE *fp, int indent, char *name);

/* CriticalityDiagnostics-IE-List - Disp Sequence Of CriticalityDiagnostics-IE-Item */
void LTE_APER_Disp_WS_CriticalityDiagnostics_IE_List(CriticalityDiagnostics_IE_List_t *seqOf, FILE *fp, int indent, char *name);

/* CriticalityDiagnostics - Sequence Format 2 */
void LTE_APER_Disp_WS_CriticalityDiagnostics(CriticalityDiagnostics_t *seq, FILE *fp, int indent, char *name);

/* HandoverRequestAcknowledgeIEs - Class Instance Displaying */
void LTE_APER_Disp_WS_HandoverRequestAcknowledgeIEs(HandoverRequestAcknowledgeIEs_t *clsInst, FILE *fp, int indent);


/* HandoverRequestAcknowledge - Sequence Format 2 */
void LTE_APER_Disp_WS_HandoverRequestAcknowledge(HandoverRequestAcknowledge_t *seq, FILE *fp, int indent, char *name);
#endif /* LTE_NGAP_DISP_H_ */
