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

#ifndef LTE_NGAP_TST_H_
#define LTE_NGAP_TST_H_
#include "LTE_NGAP_IE.h"
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <time.h>

/* TEST Init of SEQUENCE GTPTunnel */
int LTE_APER_TstInit_GTPTunnel(GTPTunnel_t *seq);

/* UPTransportLayerInformation - Choice Test Init */
int LTE_APER_TstInit_UPTransportLayerInformation(UPTransportLayerInformation_t *pch);

/* TEST Init of SEQUENCE SecurityResult */
int LTE_APER_TstInit_SecurityResult(SecurityResult_t *seq);

/* TEST Init of SEQUENCE QosFlowSetupResponseItemHOReqAck */
int LTE_APER_TstInit_QosFlowSetupResponseItemHOReqAck(QosFlowSetupResponseItemHOReqAck_t *seq);

/* Cause - Choice Test Init */
int LTE_APER_TstInit_Cause(Cause_t *pch);

/* TEST Init of SEQUENCE QosFlowItem */
int LTE_APER_TstInit_QosFlowItem(QosFlowItem_t *seq);

/* TEST Init of SEQUENCE DataForwardingResponseDRBItem */
int LTE_APER_TstInit_DataForwardingResponseDRBItem(DataForwardingResponseDRBItem_t *seq);

/* TEST Init of SEQUENCE HandoverRequestAcknowledgeTransfer */
int LTE_APER_TstInit_HandoverRequestAcknowledgeTransfer(HandoverRequestAcknowledgeTransfer_t *seq);

/* TEST Init of SEQUENCE PDUSessionResourceAdmittedItem */
int LTE_APER_TstInit_PDUSessionResourceAdmittedItem(PDUSessionResourceAdmittedItem_t *seq);

/* PDUSessionResourceAdmittedItemIEs - Class Instance Init */
int LTE_APER_TstInit_PDUSessionResourceAdmittedItemIEs(PDUSessionResourceAdmittedItemIEs_t *clsInst);


/* TEST Init of SEQUENCE PDUSessionItem */
int LTE_APER_TstInit_PDUSessionItem(PDUSessionItem_t *seq);

/* TEST Init of SEQUENCE CriticalityDiagnostics-IE-Item */
int LTE_APER_TstInit_CriticalityDiagnostics_IE_Item(CriticalityDiagnostics_IE_Item_t *seq);

/* TEST Init of SEQUENCE CriticalityDiagnostics */
int LTE_APER_TstInit_CriticalityDiagnostics(CriticalityDiagnostics_t *seq);

/* HandoverRequestAcknowledgeIEs - Class Instance Init */
int LTE_APER_TstInit_HandoverRequestAcknowledgeIEs(HandoverRequestAcknowledgeIEs_t *clsInst);


/* TEST HandoverRequestAcknowledge (SEQUENCE type 2) */
int LTE_APER_TST_HandoverRequestAcknowledge(FILE *fp, int run_times);
#endif /* LTE_NGAP_TST_H_ */
