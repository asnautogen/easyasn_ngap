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

#ifndef LTE_NGAP_DEC_H_
#define LTE_NGAP_DEC_H_
#include "LTE_NGAP_IE.h"


/* GTPTunnel - Sequence Format 2 */
int LTE_APER_Dec_GTPTunnel(GTPTunnel_t *seq, byte *buff, int buff_len, int *buff_index, int *bit_pos);

/* UPTransportLayerInformation - Choice Decoder */
int LTE_APER_Dec_UPTransportLayerInformation(UPTransportLayerInformation_t *pch, byte *buff, int buff_len, int *buff_index, int *bit_pos);

/* SecurityResult - Sequence Format 2 */
int LTE_APER_Dec_SecurityResult(SecurityResult_t *seq, byte *buff, int buff_len, int *buff_index, int *bit_pos);

/* QosFlowSetupResponseItemHOReqAck - Sequence Format 2 */
int LTE_APER_Dec_QosFlowSetupResponseItemHOReqAck(QosFlowSetupResponseItemHOReqAck_t *seq, byte *buff, int buff_len, int *buff_index, int *bit_pos);

/* QosFlowSetupResponseListHOReqAck - Sequence Of QosFlowSetupResponseItemHOReqAck */
int LTE_APER_Dec_QosFlowSetupResponseListHOReqAck(QosFlowSetupResponseListHOReqAck_t *seqOf, byte *buff, int buff_len, int *buff_index, int *bit_pos);

/* Cause - Choice Decoder */
int LTE_APER_Dec_Cause(Cause_t *pch, byte *buff, int buff_len, int *buff_index, int *bit_pos);

/* QosFlowItem - Sequence Format 2 */
int LTE_APER_Dec_QosFlowItem(QosFlowItem_t *seq, byte *buff, int buff_len, int *buff_index, int *bit_pos);

/* QosFlowList - Sequence Of QosFlowItem */
int LTE_APER_Dec_QosFlowList(QosFlowList_t *seqOf, byte *buff, int buff_len, int *buff_index, int *bit_pos);

/* DataForwardingResponseDRBItem - Sequence Format 2 */
int LTE_APER_Dec_DataForwardingResponseDRBItem(DataForwardingResponseDRBItem_t *seq, byte *buff, int buff_len, int *buff_index, int *bit_pos);

/* DataForwardingResponseDRBList - Sequence Of DataForwardingResponseDRBItem */
int LTE_APER_Dec_DataForwardingResponseDRBList(DataForwardingResponseDRBList_t *seqOf, byte *buff, int buff_len, int *buff_index, int *bit_pos);

/* HandoverRequestAcknowledgeTransfer - Sequence Format 2 */
int LTE_APER_Dec_HandoverRequestAcknowledgeTransfer(HandoverRequestAcknowledgeTransfer_t *seq, byte *buff, int buff_len, int *buff_index, int *bit_pos);

/* PDUSessionResourceAdmittedItem - Sequence Format 2 */
int LTE_APER_Dec_PDUSessionResourceAdmittedItem(PDUSessionResourceAdmittedItem_t *seq, byte *buff, int buff_len, int *buff_index, int *bit_pos);

/* PDUSessionResourceAdmittedItemIEs - Class Instance Decoding */
int LTE_APER_Dec_PDUSessionResourceAdmittedItemIEs(PDUSessionResourceAdmittedItemIEs_t *clsInst, byte *buff, int buff_len, int *buff_index, int *bit_pos);


/* PDUSessionResourceAdmittedList - Sequence Of PDUSessionResourceAdmittedItemIEs */
int LTE_APER_Dec_PDUSessionResourceAdmittedList(PDUSessionResourceAdmittedList_t *seqOf, byte *buff, int buff_len, int *buff_index, int *bit_pos);

/* PDUSessionItem - Sequence Format 2 */
int LTE_APER_Dec_PDUSessionItem(PDUSessionItem_t *seq, byte *buff, int buff_len, int *buff_index, int *bit_pos);

/* PDUSessionList - Sequence Of PDUSessionItem */
int LTE_APER_Dec_PDUSessionList(PDUSessionList_t *seqOf, byte *buff, int buff_len, int *buff_index, int *bit_pos);

/* CriticalityDiagnostics-IE-Item - Sequence Format 2 */
int LTE_APER_Dec_CriticalityDiagnostics_IE_Item(CriticalityDiagnostics_IE_Item_t *seq, byte *buff, int buff_len, int *buff_index, int *bit_pos);

/* CriticalityDiagnostics-IE-List - Sequence Of CriticalityDiagnostics-IE-Item */
int LTE_APER_Dec_CriticalityDiagnostics_IE_List(CriticalityDiagnostics_IE_List_t *seqOf, byte *buff, int buff_len, int *buff_index, int *bit_pos);

/* CriticalityDiagnostics - Sequence Format 2 */
int LTE_APER_Dec_CriticalityDiagnostics(CriticalityDiagnostics_t *seq, byte *buff, int buff_len, int *buff_index, int *bit_pos);

/* HandoverRequestAcknowledgeIEs - Class Instance Decoding */
int LTE_APER_Dec_HandoverRequestAcknowledgeIEs(HandoverRequestAcknowledgeIEs_t *clsInst, byte *buff, int buff_len, int *buff_index, int *bit_pos);


/* HandoverRequestAcknowledge - Sequence Format 2 */
int LTE_APER_Dec_Msg_HandoverRequestAcknowledge(HandoverRequestAcknowledge_t *seq, byte *buff, int buff_len, int *buff_index, int *bit_pos);
#endif /* LTE_NGAP_DEC_H_ */
