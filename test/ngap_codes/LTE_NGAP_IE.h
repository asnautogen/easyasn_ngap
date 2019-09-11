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

#ifndef LTE_NGAP_IE_H_
#define LTE_NGAP_IE_H_
#include <stdio.h>
#include <stdlib.h>
#include "../asn_support/hdr/basic_types.h"

#define LEN_BITSTRING_EXT 16
#define MAX_BITSTRING_WITH_EXT_SIZE 20

/* Constants - longest = 55 */
#define ID_AMFCONFIGURATIONUPDATE                      0
#define ID_AMFSTATUSINDICATION                         1
#define ID_CELLTRAFFICTRACE                            2
#define ID_DEACTIVATETRACE                             3
#define ID_DOWNLINKNASTRANSPORT                        4
#define ID_DOWNLINKNONUEASSOCIATEDNRPPATRANSPORT       5
#define ID_DOWNLINKRANCONFIGURATIONTRANSFER            6
#define ID_DOWNLINKRANSTATUSTRANSFER                   7
#define ID_DOWNLINKUEASSOCIATEDNRPPATRANSPORT          8
#define ID_ERRORINDICATION                             9
#define ID_HANDOVERCANCEL                              10
#define ID_HANDOVERNOTIFICATION                        11
#define ID_HANDOVERPREPARATION                         12
#define ID_HANDOVERRESOURCEALLOCATION                  13
#define ID_INITIALCONTEXTSETUP                         14
#define ID_INITIALUEMESSAGE                            15
#define ID_LOCATIONREPORTINGCONTROL                    16
#define ID_LOCATIONREPORTINGFAILUREINDICATION          17
#define ID_LOCATIONREPORT                              18
#define ID_NASNONDELIVERYINDICATION                    19
#define ID_NGRESET                                     20
#define ID_NGSETUP                                     21
#define ID_PAGING                                      22
#define ID_PATHSWITCHREQUEST                           23
#define ID_PDUSESSIONRESOURCEMODIFY                    24
#define ID_PDUSESSIONRESOURCEMODIFYINDICATION          25
#define ID_PDUSESSIONRESOURCERELEASE                   26
#define ID_PDUSESSIONRESOURCESETUP                     27
#define ID_PDUSESSIONRESOURCENOTIFY                    28
#define ID_PRIVATEMESSAGE                              29
#define ID_PWSCANCEL                                   30
#define ID_PWSFAILUREINDICATION                        31
#define ID_PWSRESTARTINDICATION                        32
#define ID_RANCONFIGURATIONUPDATE                      33
#define ID_REROUTENASREQUEST                           34
#define ID_TRACEFAILUREINDICATION                      35
#define ID_TRACESTART                                  36
#define ID_UECAPABILITYINFOINDICATION                  37
#define ID_UECONTEXTMODIFICATION                       38
#define ID_UECONTEXTRELEASE                            39
#define ID_UECONTEXTRELEASEREQUEST                     40
#define ID_UERADIOCAPABILITYCHECK                      41
#define ID_UETNLABINDINGRELEASE                        42
#define ID_UPLINKNASTRANSPORT                          43
#define ID_UPLINKNONUEASSOCIATEDNRPPATRANSPORT         44
#define ID_UPLINKRANCONFIGURATIONTRANSFER              45
#define ID_UPLINKRANSTATUSTRANSFER                     46
#define ID_UPLINKUEASSOCIATEDNRPPATRANSPORT            47
#define ID_WRITEREPLACEWARNING                         48
#define MAXPRIVATEIES                                  65535
#define MAXPROTOCOLEXTENSIONS                          65535
#define MAXPROTOCOLIES                                 65535
#define MAXNOOFALLOWEDAREAS                            16
#define MAXNOOFALLOWEDS_NSSAIS                         8
#define MAXNOOFBPLMNS                                  12
#define MAXNOOFCELLIDFORWARNING                        65535
#define MAXNOOFCELLINEAI                               65535
#define MAXNOOFCELLINTAI                               65535
#define MAXNOOFCELLSINGNB                              16384
#define MAXNOOFCELLSINNGENB                            256
#define MAXNOOFDRBS                                    32
#define MAXNOOFEMERGENCYAREAID                         65535
#define MAXNOOFEAIFORRESTART                           256
#define MAXNOOFEPLMNS                                  15
#define MAXNOOFEPLMNSPLUSONE                           16
#define MAXNOOFE_RABS                                  256
#define MAXNOOFERRORS                                  256
#define MAXNOOFFORBTACS                                4096
#define MAXNOOFMULTICONNECTIVITIES                     8
#define MAXNOOFNGCONNECTIONSTORESET                    8192
#define MAXNOOFPDUSESSIONS                             256
#define MAXNOOFPLMNS                                   12
#define MAXNOOFQOSFLOWS                                64
#define MAXNOOFRECOMMENDEDCELLS                        16
#define MAXNOOFAOI                                     64
#define MAXNOOFSERVEDGUAMIS                            256
#define MAXNOOFSLICEITEMS                              1024
#define MAXNOOFTACS                                    256
#define MAXNOOFTAIS                                    16
#define MAXNOOFTAIFORRESTART                           2048
#define MAXNOOFTAIFORWARNING                           65535
#define MAXNOOFTNLASSOCIATIONS                         32
#define MAXNOOFXNEXTTLAS                               2
#define MAXNOOFXNGTP_TLAS                              16
#define MAXNOOFXNTLAS                                  16
#define ID_ALLOWEDNSSAI                                0
#define ID_AMFNAME                                     1
#define ID_AMFSETID                                    2
#define ID_AMF_TNLASSOCIATIONFAILEDTOSETUPLIST         3
#define ID_AMF_TNLASSOCIATIONSETUPITEM                 4
#define ID_AMF_TNLASSOCIATIONSETUPLIST                 5
#define ID_AMF_TNLASSOCIATIONTOADDITEM                 6
#define ID_AMF_TNLASSOCIATIONTOADDLIST                 7
#define ID_AMF_TNLASSOCIATIONTOREMOVEITEM              8
#define ID_AMF_TNLASSOCIATIONTOREMOVELIST              9
#define ID_AMF_TNLASSOCIATIONTOUPDATEITEM              10
#define ID_AMF_TNLASSOCIATIONTOUPDATELIST              11
#define ID_AMF_UE_NGAP_ID                              12
#define ID_ASSISTANCEDATAFORPAGING                     13
#define ID_BROADCASTCANCELLEDAREALIST                  14
#define ID_BROADCASTCOMPLETEDAREALIST                  15
#define ID_CANCELALLWARNINGMESSAGES                    16
#define ID_CAUSE                                       17
#define ID_CELLIDLISTFORRESTART                        18
#define ID_CONCURRENTWARNINGMESSAGEIND                 19
#define ID_CRITICALITYDIAGNOSTICS                      20
#define ID_DATACODINGSCHEME                            21
#define ID_DEFAULTPAGINGDRX                            22
#define ID_DIRECTFORWARDINGPATHAVAILABILITY            23
#define ID_EMERGENCYAREAIDLISTFORRESTART               24
#define ID_EMERGENCYFALLBACKINDICATOR                  25
#define ID_EUTRA_CGI                                   26
#define ID_FIVEG_S_TMSI                                27
#define ID_GLOBALRANNODEID                             28
#define ID_GUAMI                                       29
#define ID_HANDOVERTYPE                                30
#define ID_IMSVOICESUPPORTINDICATOR                    31
#define ID_INDEXTORFSP                                 32
#define ID_INFOONRECOMMENDEDCELLSANDRANNODESFORPAGING  33
#define ID_KAMFCHANGEIND                               34
#define ID_LOCATIONREPORTINGREQUESTTYPE                35
#define ID_MASKEDIMEISV                                36
#define ID_MESSAGEIDENTIFIER                           37
#define ID_MOBILITYRESTRICTIONLIST                     38
#define ID_NASC                                        39
#define ID_NAS_PDU                                     40
#define ID_NEWAMF_UE_NGAP_ID                           41
#define ID_NGAP_MESSAGE                                42
#define ID_NGRAN_CGI                                   43
#define ID_NGRANTRACEID                                44
#define ID_NR_CGI                                      45
#define ID_NRPPA_PDU                                   46
#define ID_NUMBEROFBROADCASTSREQUESTED                 47
#define ID_OLDAMF                                      48
#define ID_PAGINGDRX                                   49
#define ID_PAGINGORIGIN                                50
#define ID_PAGINGPRIORITY                              51
#define ID_PDUSESSIONRESOURCEADMITTEDITEM              52
#define ID_PDUSESSIONRESOURCEADMITTEDLIST              53
#define ID_PDUSESSIONRESOURCEFAILEDTOMODIFYLISTMODRES  54
#define ID_PDUSESSIONRESOURCEFAILEDTOSETUPLIST         55
#define ID_PDUSESSIONRESOURCEITEMHORQD                 56
#define ID_PDUSESSIONRESOURCELISTHORQD                 57
#define ID_PDUSESSIONRESOURCEMODIFYITEMMODCFM          58
#define ID_PDUSESSIONRESOURCEMODIFYITEMMODIND          59
#define ID_PDUSESSIONRESOURCEMODIFYITEMMODREQ          60
#define ID_PDUSESSIONRESOURCEMODIFYITEMMODRES          61
#define ID_PDUSESSIONRESOURCEMODIFYLISTMODCFM          62
#define ID_PDUSESSIONRESOURCEMODIFYLISTMODIND          63
#define ID_PDUSESSIONRESOURCEMODIFYLISTMODREQ          64
#define ID_PDUSESSIONRESOURCEMODIFYLISTMODRES          65
#define ID_PDUSESSIONRESOURCENOTIFYITEM                66
#define ID_PDUSESSIONRESOURCENOTIFYLIST                67
#define ID_PDUSESSIONRESOURCERELEASEDLIST              68
#define ID_PDUSESSIONRESOURCESETUPITEMCXTREQ           69
#define ID_PDUSESSIONRESOURCESETUPITEMCXTRES           70
#define ID_PDUSESSIONRESOURCESETUPITEMHOREQ            71
#define ID_PDUSESSIONRESOURCESETUPITEMSUREQ            72
#define ID_PDUSESSIONRESOURCESETUPITEMSURES            73
#define ID_PDUSESSIONRESOURCESETUPLISTCXTREQ           74
#define ID_PDUSESSIONRESOURCESETUPLISTCXTRES           75
#define ID_PDUSESSIONRESOURCESETUPLISTHOREQ            76
#define ID_PDUSESSIONRESOURCESETUPLISTSUREQ            77
#define ID_PDUSESSIONRESOURCESETUPLISTSURES            78
#define ID_PDUSESSIONRESOURCESUBJECTTOFORWARDINGITEM   79
#define ID_PDUSESSIONRESOURCESUBJECTTOFORWARDINGLIST   80
#define ID_PDUSESSIONRESOURCETOBESWITCHEDDLITEM        81
#define ID_PDUSESSIONRESOURCETOBESWITCHEDDLLIST        82
#define ID_PDUSESSIONRESOURCETOBESWITCHEDULITEM        83
#define ID_PDUSESSIONRESOURCETOBESWITCHEDULLIST        84
#define ID_PDUSESSIONRESOURCETORELEASELIST             85
#define ID_PLMNSUPPORTLIST                             86
#define ID_PWSFAILEDCELLIDLIST                         87
#define ID_RANNODENAME                                 88
#define ID_RANPAGINGPRIORITY                           89
#define ID_RANSTATUSTRANSFER_TRANSPARENTCONTAINER      90
#define ID_RAN_UE_NGAP_ID                              91
#define ID_RELATIVEAMFCAPACITY                         92
#define ID_REPETITIONPERIOD                            93
#define ID_RESETTYPE                                   94
#define ID_ROUTINGID                                   95
#define ID_RRCESTABLISHMENTCAUSE                       96
#define ID_RRCINACTIVEASSISTANCEINFORMATION            97
#define ID_SECURITYCONTEXT                             98
#define ID_SECURITYKEY                                 99
#define ID_SERIALNUMBER                                100
#define ID_SERVEDGUAMILIST                             101
#define ID_SLICESUPPORTLIST                            102
#define ID_SONCONFIGURATIONTRANSFERDL                  103
#define ID_SONCONFIGURATIONTRANSFERUL                  104
#define ID_SOURCEAMF_UE_NGAP_ID                        105
#define ID_SOURCETOTARGET_TRANSPARENTCONTAINER         106
#define ID_SUPPORTEDTALIST                             107
#define ID_TAI                                         108
#define ID_TAIITEM                                     109
#define ID_TAILIST                                     110
#define ID_TAILISTFORRESTART                           111
#define ID_TARGETID                                    112
#define ID_TARGETTOSOURCE_TRANSPARENTCONTAINER         113
#define ID_TIMESTAMP                                   114
#define ID_TIMETOWAIT                                  115
#define ID_TRACEACTIVATION                             116
#define ID_TRACECOLLECTIONENTITYIPADDRESS              117
#define ID_UEAGGREGATEMAXIMUMBITRATE                   118
#define ID_UE_ASSOCIATEDLOGICALNG_CONNECTIONITEM       119
#define ID_UE_ASSOCIATEDLOGICALNG_CONNECTIONLISTRESACK 120
#define ID_UECONTEXTREQUEST                            121
#define ID_UEIDENTITYINDEXVALUE                        122
#define ID_UE_NGAP_IDS                                 123
#define ID_UEPAGINGIDENTITY                            124
#define ID_UEPRESENCEINAREAOFINTERESTLIST              125
#define ID_UERADIOCAPABILITY                           126
#define ID_UERADIOCAPABILITYFORPAGING                  127
#define ID_UESECURITYCAPABILITIES                      128
#define ID_UNAVAILABLEGUAMILIST                        129
#define ID_USERLOCATIONINFORMATION                     130
#define ID_WARNINGAREALIST                             131
#define ID_WARNINGMESSAGECONTENTS                      132
#define ID_WARNINGSECURITYINFO                         133
#define ID_WARNINGTYPE                                 134

/* Criticality - Enumerations */
#define CRITICALITY_REJECT    0
#define CRITICALITY_IGNORE    1
#define CRITICALITY_NOTIFY    2
#define CRITICALITY_LAST      2
#define CRITICALITY_REJECT_C  0x00
#define CRITICALITY_IGNORE_C  0x40
#define CRITICALITY_NOTIFY_C  0x80
#define CRITICALITY_LAST_C    128

/* NGAP-ELEMENTARY-PROCEDURE - Class */
typedef struct {
   /* InitiatingMessage: Use Length-Value pair for extension */
   unsigned short  InitiatingMessage_len;
   unsigned char   InitiatingMessage_content[256];
   /* SuccessfulOutcome: Use Length-Value pair for extension */
   unsigned short  SuccessfulOutcome_len;
   unsigned char   SuccessfulOutcome_content[256];
   /* UnsuccessfulOutcome: Use Length-Value pair for extension */
   unsigned short  UnsuccessfulOutcome_len;
   unsigned char   UnsuccessfulOutcome_content[256];
   /* ProcedureCode: INTEGER (0..255) */
   unsigned int    procedureCode;
   /* Enumerates Criticality with 3 enums */
   unsigned char   criticality;
} NGAP_ELEMENTARY_PROCEDURE_t;

/* InitiatingMessage - Sequence Format 1 */
typedef struct {
   unsigned int procedureCode;
   unsigned char criticality;
   /* value: Use Length Value pair to support undefined type */
   unsigned int  value_len;
   unsigned char value_content[256];
} InitiatingMessage_t;

/* SuccessfulOutcome - Sequence Format 1 */
typedef struct {
   unsigned int procedureCode;
   unsigned char criticality;
   /* value: Use Length Value pair to support undefined type */
   unsigned int  value_len;
   unsigned char value_content[256];
} SuccessfulOutcome_t;

/* UnsuccessfulOutcome - Sequence Format 1 */
typedef struct {
   unsigned int procedureCode;
   unsigned char criticality;
   /* value: Use Length Value pair to support undefined type */
   unsigned int  value_len;
   unsigned char value_content[256];
} UnsuccessfulOutcome_t;

/* NGAP-PDU - Choice */
#define NGAP_PDU_CHOICE_INITIATINGMESSAGE   0
#define NGAP_PDU_CHOICE_SUCCESSFULOUTCOME   1
#define NGAP_PDU_CHOICE_UNSUCCESSFULOUTCOME 2
#define NGAP_PDU_CHOICE_EXT                 3
#define NGAP_PDU_CHOICE_LAST                3

typedef union {
   InitiatingMessage_t    initiatingMessage;
   SuccessfulOutcome_t    successfulOutcome;
   UnsuccessfulOutcome_t  unsuccessfulOutcome;
} NGAP_PDU_Choice_t;

typedef struct {
   unsigned char     Choice_Index;
   NGAP_PDU_Choice_t Choices;
} NGAP_PDU_t;

/* NAS-PDU - OctString Size 0..512, extendable = 0 */
typedef struct {
   int length;
   unsigned char content[512];
} NAS_PDU_t;

/* S-NSSAI - Sequence Format 2 */
typedef struct {
   /* SST: OCTET STRING (SIZE(1..1)) */
   unsigned int     sST;
   /* SD: OCTET STRING (SIZE(3..3)) */
   unsigned int     sD;
} S_NSSAI_t;

/* TransportLayerAddress - bit string 1..160 extensible = 1 */
typedef struct {
   int len_bits;
   unsigned char cont_bits[MAX_BITSTRING_WITH_EXT_SIZE];
} TransportLayerAddress_t;

/* GTPTunnel - Sequence Format 2 */
typedef struct {
   /* TransportLayerAddress: BIT STRING (SIZE(1..160)) */
   TransportLayerAddress_t   transportLayerAddress;
   /* GTP-TEID: OCTET STRING (SIZE(4..4)) */
   unsigned int              gTP_TEID;
} GTPTunnel_t;

/* UPTransportLayerInformation - Choice */
#define UPTRANSPORTLAYERINFORMATION_CHOICE_GTPTUNNEL 0
#define UPTRANSPORTLAYERINFORMATION_CHOICE_EXT       1
#define UPTRANSPORTLAYERINFORMATION_CHOICE_LAST      1

typedef union {
   GTPTunnel_t   gTPTunnel;
} UPTransportLayerInformation_Choice_t;

typedef struct {
   unsigned char                        Choice_Index;
   UPTransportLayerInformation_Choice_t Choices;
} UPTransportLayerInformation_t;

/* DataForwardingNotPossible - Enumerations */
#define DATAFORWARDINGNOTPOSSIBLE_DATA_FORWARDING_NOT_POSSIBLE 0
#define DATAFORWARDINGNOTPOSSIBLE_EXT_START                    1

/* PDUSessionType - Enumerations */
#define PDUSESSIONTYPE_IPV4         0
#define PDUSESSIONTYPE_IPV6         1
#define PDUSESSIONTYPE_IPV4V6       2
#define PDUSESSIONTYPE_ETHERNET     3
#define PDUSESSIONTYPE_UNSTRUCTURED 4
#define PDUSESSIONTYPE_EXT_START    5

/* IntegrityProtectionIndication - Enumerations */
#define INTEGRITYPROTECTIONINDICATION_REQUIRED   0
#define INTEGRITYPROTECTIONINDICATION_PREFERRED  1
#define INTEGRITYPROTECTIONINDICATION_NOT_NEEDED 2
#define INTEGRITYPROTECTIONINDICATION_EXT_START  3

/* ConfidentialityProtectionIndication - Enumerations */
#define CONFIDENTIALITYPROTECTIONINDICATION_REQUIRED   0
#define CONFIDENTIALITYPROTECTIONINDICATION_PREFERRED  1
#define CONFIDENTIALITYPROTECTIONINDICATION_NOT_NEEDED 2
#define CONFIDENTIALITYPROTECTIONINDICATION_EXT_START  3

/* SecurityIndication - Sequence Format 2 */
typedef struct {
   /* Enumerates IntegrityProtectionIndication with 3 enums */
   unsigned int     integrityProtectionIndication;
   /* Enumerates ConfidentialityProtectionIndication with 3 enums */
   unsigned int     confidentialityProtectionIndication;
} SecurityIndication_t;

/* NonDynamic5QIDescriptor - Sequence Format 2 */
typedef struct {
   /* FiveQI: INTEGER (0..255) */
   unsigned int     fiveQI;
   /* PriorityLevelQos: INTEGER (1..127) */
   unsigned char    priorityLevelQos_Present;
   unsigned int     priorityLevelQos;
   /* AveragingWindow: INTEGER (0..63) */
   unsigned char    averagingWindow_Present;
   unsigned int     averagingWindow;
   /* MaximumDataBurstVolume: INTEGER (0..63) */
   unsigned char    maximumDataBurstVolume_Present;
   unsigned int     maximumDataBurstVolume;
} NonDynamic5QIDescriptor_t;

/* DelayCritical - Enumerations */
#define DELAYCRITICAL_DELAY_CRITICAL     0
#define DELAYCRITICAL_NON_DELAY_CRITICAL 1
#define DELAYCRITICAL_EXT_START          2

/* Dynamic5QIDescriptor - Sequence Format 2 */
typedef struct {
   /* PriorityLevelQos: INTEGER (1..127) */
   unsigned int     priorityLevelQos;
   /* PacketDelayBudget: INTEGER (0..63) */
   unsigned int     packetDelayBudget;
   /* PacketErrorRate: INTEGER (0..63) */
   unsigned int     packetErrorRate;
   /* Enumerates DelayCritical with 2 enums */
   unsigned char    delayCritical_Present;
   unsigned int     delayCritical;
   /* AveragingWindow: INTEGER (0..63) */
   unsigned char    averagingWindow_Present;
   unsigned int     averagingWindow;
   /* MaximumDataBurstVolume: INTEGER (0..63) */
   unsigned char    maximumDataBurstVolume_Present;
   unsigned int     maximumDataBurstVolume;
} Dynamic5QIDescriptor_t;

/* QosCharacteristics - Choice */
#define QOSCHARACTERISTICS_CHOICE_NONDYNAMIC5QI 0
#define QOSCHARACTERISTICS_CHOICE_DYNAMIC5QI    1
#define QOSCHARACTERISTICS_CHOICE_EXT           2
#define QOSCHARACTERISTICS_CHOICE_LAST          2

typedef union {
   NonDynamic5QIDescriptor_t  nonDynamic5QI;
   Dynamic5QIDescriptor_t     dynamic5QI;
} QosCharacteristics_Choice_t;

typedef struct {
   unsigned char               Choice_Index;
   QosCharacteristics_Choice_t Choices;
} QosCharacteristics_t;

/* Pre-emptionCapability - Enumerations */
#define PRE_EMPTIONCAPABILITY_SHALL_NOT_TRIGGER_PRE_EMPTION 0
#define PRE_EMPTIONCAPABILITY_MAY_TRIGGER_PRE_EMPTION       1
#define PRE_EMPTIONCAPABILITY_LAST                          1

/* Pre-emptionVulnerability - Enumerations */
#define PRE_EMPTIONVULNERABILITY_NOT_PRE_EMPTABLE 0
#define PRE_EMPTIONVULNERABILITY_PRE_EMPTABLE     1
#define PRE_EMPTIONVULNERABILITY_LAST             1

/* AllocationAndRetentionPriority - Sequence Format 2 */
typedef struct {
   /* PriorityLevelARP: INTEGER (1..15) */
   unsigned int     priorityLevelARP;
   /* Enumerates Pre-emptionCapability with 2 enums */
   unsigned char    pre_emptionCapability;
   /* Enumerates Pre-emptionVulnerability with 2 enums */
   unsigned char    pre_emptionVulnerability;
} AllocationAndRetentionPriority_t;

/* NotificationControl - Enumerations */
#define NOTIFICATIONCONTROL_NOTIFICATION_ENABLED 0
#define NOTIFICATIONCONTROL_EXT_START            1

/* GBR-QosInformation - Sequence Format 2 */
typedef struct {
   /* BitRate: INTEGER (0..4000000000000) */
   uint64           maximumFlowBitRateDL;
   /* BitRate: INTEGER (0..4000000000000) */
   uint64           maximumFlowBitRateUL;
   /* BitRate: INTEGER (0..4000000000000) */
   uint64           guaranteedFlowBitRateDL;
   /* BitRate: INTEGER (0..4000000000000) */
   uint64           guaranteedFlowBitRateUL;
   /* Enumerates NotificationControl with 1 enums */
   unsigned char    notificationControl_Present;
   unsigned int     notificationControl;
   /* PacketLossRate: INTEGER (0..1000) */
   unsigned char    maximumPacketLossRateDL_Present;
   unsigned int     maximumPacketLossRateDL;
   /* PacketLossRate: INTEGER (0..1000) */
   unsigned char    maximumPacketLossRateUL_Present;
   unsigned int     maximumPacketLossRateUL;
} GBR_QosInformation_t;

/* ReflectiveQosAttribute - Enumerations */
#define REFLECTIVEQOSATTRIBUTE_SUBJECT_TO 0
#define REFLECTIVEQOSATTRIBUTE_EXT_START  1

/* AdditionalQosFlowInformation - Enumerations */
#define ADDITIONALQOSFLOWINFORMATION_MORE_LIKELY 0
#define ADDITIONALQOSFLOWINFORMATION_EXT_START   1

/* QosFlowLevelQosParameters - Sequence Format 2 */
typedef struct {
   QosCharacteristics_t             qosCharacteristics;
   AllocationAndRetentionPriority_t allocationAndRetentionPriority;
   unsigned char                    gBR_QosInformation_Present;
   GBR_QosInformation_t             gBR_QosInformation;
   /* Enumerates ReflectiveQosAttribute with 1 enums */
   unsigned char                    reflectiveQosAttribute_Present;
   unsigned int                     reflectiveQosAttribute;
   /* Enumerates AdditionalQosFlowInformation with 1 enums */
   unsigned char                    additionalQosFlowInformation_Present;
   unsigned int                     additionalQosFlowInformation;
   /* PPI: INTEGER (1..8) */
   unsigned char                    pPI_Present;
   unsigned int                     pPI;
} QosFlowLevelQosParameters_t;

/* QosFlowSetupRequestItem - Sequence Format 2 */
typedef struct {
   /* QosFlowIndicator: INTEGER (0..63) */
   unsigned int                qosFlowIndicator;
   QosFlowLevelQosParameters_t qosFlowLevelQosParameters;
   /* E-RAB-ID: INTEGER (0..15) */
   unsigned char               e_RAB_ID_Present;
   unsigned int                e_RAB_ID;
} QosFlowSetupRequestItem_t;

/* QosFlowSetupRequestList - Sequence (1 .. 64) Of QosFlowSetupRequestItem */
typedef struct {
   int                       nbrInstances;  /* 1 .. 64 */
   /* NOTE: Max number of item is changed from 64 to 4 for QosFlowSetupRequestItem_t */
   QosFlowSetupRequestItem_t  QosFlowSetupRequestItem[4];
} QosFlowSetupRequestList_t;

/* PDUSessionResourceSetupRequestTransfer - Sequence Format 2 */
typedef struct {
   /* BitRate: INTEGER (0..4000000000000) */
   uint64                        pDUSessionAggregateMaximumBitRate;
   UPTransportLayerInformation_t uL_NGU_UP_TNLInformation;
   unsigned char                 additionalUL_NGU_UP_TNLInformation_Present;
   UPTransportLayerInformation_t additionalUL_NGU_UP_TNLInformation;
   /* Enumerates DataForwardingNotPossible with 1 enums */
   unsigned char                 dataForwardingNotPossible_Present;
   unsigned int                  dataForwardingNotPossible;
   /* Enumerates PDUSessionType with 5 enums */
   unsigned int                  pDUSessionType;
   unsigned char                 securityIndication_Present;
   SecurityIndication_t          securityIndication;
   QosFlowSetupRequestList_t     qosFlowSetupRequestList;
} PDUSessionResourceSetupRequestTransfer_t;

/* PDUSessionResourceSetupItemSUReq - Sequence Format 2 */
typedef struct {
   /* PDUSessionID: INTEGER (0..255) */
   unsigned int                             pDUSessionID;
   unsigned char                            pDUSessionNAS_PDU_Present;
   NAS_PDU_t                                pDUSessionNAS_PDU;
   S_NSSAI_t                                s_NSSAI;
   PDUSessionResourceSetupRequestTransfer_t pDUSessionResourceSetupRequestTransfer;
} PDUSessionResourceSetupItemSUReq_t;

/* PDUSessionResourceSetupItemSUReqIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   PDUSessionResourceSetupItemSUReq_t PDUSessionResourceSetupItemSUReq;
} PDUSessionResourceSetupItemSUReqIEs_t;

/* PDUSessionResourceSetupListSUReq - Sequence (1 .. 256) Of PDUSessionResourceSetupItemSUReqIEs */
typedef struct {
   int                                   nbrInstances;  /* 1 .. 256 */
   /* NOTE: Max number of item is changed from 256 to 4 for PDUSessionResourceSetupItemSUReqIEs_t */
   PDUSessionResourceSetupItemSUReqIEs_t  ProtocolIE_SingleContainer[4];
} PDUSessionResourceSetupListSUReq_t;

/* Presence - Enumerations */
#define PRESENCE_OPTIONAL    0
#define PRESENCE_CONDITIONAL 1
#define PRESENCE_MANDATORY   2
#define PRESENCE_LAST        2

/* NGAP-PROTOCOL-IES - Class */
typedef struct {
   /* ProtocolIE-ID: INTEGER (0..65535) */
   unsigned int    id;
   /* Enumerates Criticality with 3 enums */
   unsigned char   criticality;
   /* Value: Use Length-Value pair for extension */
   unsigned short  Value_len;
   unsigned char   Value_content[256];
   /* Enumerates Presence with 3 enums */
   unsigned char   presence;
} NGAP_PROTOCOL_IES_t;

/* ProtocolIE-SingleContainer - Sequence Format 3 */
typedef struct {
   unsigned int id;
   unsigned char criticality;
   /* value: Use Length Value pair to support undefined type */
   unsigned int  value_len;
   unsigned char value_content[256];
} ProtocolIE_SingleContainer_t;

/* ProtocolIE-Container - Sequence (0 .. 65535) Of ProtocolIE-SingleContainer */
typedef struct {
   int                          nbrInstances;  /* 0 .. 65535 */
   /* NOTE: Max number of item is changed from 65535 to 4 for ProtocolIE_SingleContainer_t */
   ProtocolIE_SingleContainer_t  ProtocolIE_SingleContainer[4];
} ProtocolIE_Container_t;

/* PDUSessionResourceSetupRequestIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int                       AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int                       RAN_UE_NGAP_ID;
   /* RANPagingPriority: INTEGER (1..256) */
   unsigned char                      RANPagingPriority_Present;
   unsigned int                       RANPagingPriority;
   unsigned char                      NAS_PDU_Present;
   NAS_PDU_t                          NAS_PDU;
   PDUSessionResourceSetupListSUReq_t PDUSessionResourceSetupListSUReq;
} PDUSessionResourceSetupRequestIEs_t;

/* PDUSessionResourceSetupRequest - Sequence Format 2 */
typedef struct {
   PDUSessionResourceSetupRequestIEs_t protocolIEs;
} PDUSessionResourceSetupRequest_t;

/* IntegrityProtectionResult - Enumerations */
#define INTEGRITYPROTECTIONRESULT_PERFORMED     0
#define INTEGRITYPROTECTIONRESULT_NOT_PERFORMED 1
#define INTEGRITYPROTECTIONRESULT_EXT_START     2

/* ConfidentialityProtectionResult - Enumerations */
#define CONFIDENTIALITYPROTECTIONRESULT_PERFORMED     0
#define CONFIDENTIALITYPROTECTIONRESULT_NOT_PERFORMED 1
#define CONFIDENTIALITYPROTECTIONRESULT_EXT_START     2

/* SecurityResult - Sequence Format 2 */
typedef struct {
   /* Enumerates IntegrityProtectionResult with 2 enums */
   unsigned int     integrityProtectionResult;
   /* Enumerates ConfidentialityProtectionResult with 2 enums */
   unsigned int     confidentialityProtectionResult;
} SecurityResult_t;

/* QosFlowSetupResponseItemSURes - Sequence Format 2 */
typedef struct {
   /* QosFlowIndicator: INTEGER (0..63) */
   unsigned int     qosFlowIndicator;
} QosFlowSetupResponseItemSURes_t;

/* QosFlowSetupResponseListSURes - Sequence (1 .. 64) Of QosFlowSetupResponseItemSURes */
typedef struct {
   int                             nbrInstances;  /* 1 .. 64 */
   /* NOTE: Max number of item is changed from 64 to 4 for QosFlowSetupResponseItemSURes_t */
   QosFlowSetupResponseItemSURes_t  QosFlowSetupResponseItemSURes[4];
} QosFlowSetupResponseListSURes_t;

/* CauseRadioNetwork - Enumerations */
#define CAUSERADIONETWORK_UNSPECIFIED                                                     0
#define CAUSERADIONETWORK_TXNRELOCOVERALL_EXPIRY                                          1
#define CAUSERADIONETWORK_SUCCESSFUL_HANDOVER                                             2
#define CAUSERADIONETWORK_RELEASE_DUE_TO_NGRAN_GENERATED_REASON                           3
#define CAUSERADIONETWORK_RELEASE_DUE_TO_5GC_GENERATED_REASON                             4
#define CAUSERADIONETWORK_HANDOVER_CANCELLED                                              5
#define CAUSERADIONETWORK_PARTIAL_HANDOVER                                                6
#define CAUSERADIONETWORK_HO_FAILURE_IN_TARGET_5GC_NGRAN_NODE_OR_TARGET_SYSTEM            7
#define CAUSERADIONETWORK_HO_TARGET_NOT_ALLOWED                                           8
#define CAUSERADIONETWORK_TNGRELOCOVERALL_EXPIRY                                          9
#define CAUSERADIONETWORK_TNGRELOCPREP_EXPIRY                                             10
#define CAUSERADIONETWORK_CELL_NOT_AVAILABLE                                              11
#define CAUSERADIONETWORK_UNKNOWN_TARGETID                                                12
#define CAUSERADIONETWORK_NO_RADIO_RESOURCES_AVAILABLE_IN_TARGET_CELL                     13
#define CAUSERADIONETWORK_UNKNOWN_LOCAL_UE_NGAP_ID                                        14
#define CAUSERADIONETWORK_INCONSISTENT_REMOTE_UE_NGAP_ID                                  15
#define CAUSERADIONETWORK_HANDOVER_DESIRABLE_FOR_RADIO_REASON                             16
#define CAUSERADIONETWORK_TIME_CRITICAL_HANDOVER                                          17
#define CAUSERADIONETWORK_RESOURCE_OPTIMISATION_HANDOVER                                  18
#define CAUSERADIONETWORK_REDUCE_LOAD_IN_SERVING_CELL                                     19
#define CAUSERADIONETWORK_USER_INACTIVITY                                                 20
#define CAUSERADIONETWORK_RADIO_CONNECTION_WITH_UE_LOST                                   21
#define CAUSERADIONETWORK_LOAD_BALANCING_TAU_REQUIRED                                     22
#define CAUSERADIONETWORK_RADIO_RESOURCES_NOT_AVAILABLE                                   23
#define CAUSERADIONETWORK_INVALID_QOS_COMBINATION                                         24
#define CAUSERADIONETWORK_FAILURE_IN_RADIO_INTERFACE_PROCEDURE                            25
#define CAUSERADIONETWORK_INTERACTION_WITH_OTHER_PROCEDURE                                26
#define CAUSERADIONETWORK_UNKNOWN_PDU_SESSION_ID                                          27
#define CAUSERADIONETWORK_UNKOWN_QOS_FLOW_ID                                              28
#define CAUSERADIONETWORK_MULTIPLE_PDU_SESSION_ID_INSTANCES                               29
#define CAUSERADIONETWORK_MULTIPLE_QOS_FLOW_ID_INSTANCES                                  30
#define CAUSERADIONETWORK_ENCRYPTION_AND_OR_INTEGRITY_PROTECTION_ALGORITHMS_NOT_SUPPORTED 31
#define CAUSERADIONETWORK_NG_INTRA_SYSTEM_HANDOVER_TRIGGERED                              32
#define CAUSERADIONETWORK_NG_INTER_SYSTEM_HANDOVER_TRIGGERED                              33
#define CAUSERADIONETWORK_XN_HANDOVER_TRIGGERED                                           34
#define CAUSERADIONETWORK_NOT_SUPPORTED_5QI_VALUE                                         35
#define CAUSERADIONETWORK_UE_CONTEXT_TRANSFER                                             36
#define CAUSERADIONETWORK_IMS_VOICE_EPS_FALLBACK_OR_RAT_FALLBACK_TRIGGERED                37
#define CAUSERADIONETWORK_UP_INTEGRITY_PROTECTION_NOT_POSSIBLE                            38
#define CAUSERADIONETWORK_UP_CONFIDENTIALITY_PROTECTION_NOT_POSSIBLE                      39
#define CAUSERADIONETWORK_SLICE_NOT_SUPPORTED                                             40
#define CAUSERADIONETWORK_UE_IN_RRC_INACTIVE_STATE_NOT_REACHABLE                          41
#define CAUSERADIONETWORK_EXT_START                                                       42

/* CauseTransport - Enumerations */
#define CAUSETRANSPORT_TRANSPORT_RESOURCE_UNAVAILABLE 0
#define CAUSETRANSPORT_UNSPECIFIED                    1
#define CAUSETRANSPORT_EXT_START                      2

/* CauseNas - Enumerations */
#define CAUSENAS_NORMAL_RELEASE         0
#define CAUSENAS_AUTHENTICATION_FAILURE 1
#define CAUSENAS_DEREGISTER             2
#define CAUSENAS_UNSPECIFIED            3
#define CAUSENAS_EXT_START              4

/* CauseProtocol - Enumerations */
#define CAUSEPROTOCOL_TRANSFER_SYNTAX_ERROR                             0
#define CAUSEPROTOCOL_ABSTRACT_SYNTAX_ERROR_REJECT                      1
#define CAUSEPROTOCOL_ABSTRACT_SYNTAX_ERROR_IGNORE_AND_NOTIFY           2
#define CAUSEPROTOCOL_MESSAGE_NOT_COMPATIBLE_WITH_RECEIVER_STATE        3
#define CAUSEPROTOCOL_SEMANTIC_ERROR                                    4
#define CAUSEPROTOCOL_ABSTRACT_SYNTAX_ERROR_FALSELY_CONSTRUCTED_MESSAGE 5
#define CAUSEPROTOCOL_UNSPECIFIED                                       6
#define CAUSEPROTOCOL_EXT_START                                         7

/* CauseMisc - Enumerations */
#define CAUSEMISC_CONTROL_PROCESSING_OVERLOAD                0
#define CAUSEMISC_NOT_ENOUGH_USER_PLANE_PROCESSING_RESOURCES 1
#define CAUSEMISC_HARDWARE_FAILURE                           2
#define CAUSEMISC_OM_INTERVENTION                            3
#define CAUSEMISC_UNKNOWN_PLMN                               4
#define CAUSEMISC_UNSPECIFIED                                5
#define CAUSEMISC_EXT_START                                  6

/* Cause - Choice */
#define CAUSE_CHOICE_RADIONETWORK 0
#define CAUSE_CHOICE_TRANSPORT    1
#define CAUSE_CHOICE_NAS          2
#define CAUSE_CHOICE_PROTOCOL     3
#define CAUSE_CHOICE_MISC         4
#define CAUSE_CHOICE_EXT          5
#define CAUSE_CHOICE_LAST         5

typedef union {
   /* Enumerates CauseRadioNetwork with 42 enums */
   unsigned int  radioNetwork;
   /* Enumerates CauseTransport with 2 enums */
   unsigned int  transport;
   /* Enumerates CauseNas with 4 enums */
   unsigned int  nas;
   /* Enumerates CauseProtocol with 7 enums */
   unsigned int  protocol;
   /* Enumerates CauseMisc with 6 enums */
   unsigned int  misc;
} Cause_Choice_t;

typedef struct {
   unsigned char  Choice_Index;
   Cause_Choice_t Choices;
} Cause_t;

/* QosFlowItem - Sequence Format 2 */
typedef struct {
   /* QosFlowIndicator: INTEGER (0..63) */
   unsigned int     qosFlowIndicator;
   Cause_t          cause;
} QosFlowItem_t;

/* QosFlowList - Sequence (1 .. 64) Of QosFlowItem */
typedef struct {
   int           nbrInstances;  /* 1 .. 64 */
   /* NOTE: Max number of item is changed from 64 to 4 for QosFlowItem_t */
   QosFlowItem_t  QosFlowItem[4];
} QosFlowList_t;

/* PDUSessionResourceSetupResponseTransfer - Sequence Format 2 */
typedef struct {
   UPTransportLayerInformation_t   dL_NGU_UP_TNLInformation;
   unsigned char                   securityResult_Present;
   SecurityResult_t                securityResult;
   QosFlowSetupResponseListSURes_t qosFlowSetupResponseList;
   unsigned char                   qosFlowFailedToSetupList_Present;
   QosFlowList_t                   qosFlowFailedToSetupList;
} PDUSessionResourceSetupResponseTransfer_t;

/* PDUSessionResourceSetupItemSURes - Sequence Format 2 */
typedef struct {
   /* PDUSessionID: INTEGER (0..255) */
   unsigned int                              pDUSessionID;
   PDUSessionResourceSetupResponseTransfer_t pDUSessionResourceSetupResponseTransfer;
   unsigned char                             additionalPDUSessionResourceSetupResponseTransfer_Present;
   PDUSessionResourceSetupResponseTransfer_t additionalPDUSessionResourceSetupResponseTransfer;
} PDUSessionResourceSetupItemSURes_t;

/* PDUSessionResourceSetupItemSUResIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   unsigned char                      PDUSessionResourceSetupItemSURes_Present;
   PDUSessionResourceSetupItemSURes_t PDUSessionResourceSetupItemSURes;
} PDUSessionResourceSetupItemSUResIEs_t;

/* PDUSessionResourceSetupListSURes - Sequence (1 .. 256) Of PDUSessionResourceSetupItemSUResIEs */
typedef struct {
   int                                   nbrInstances;  /* 1 .. 256 */
   /* NOTE: Max number of item is changed from 256 to 4 for PDUSessionResourceSetupItemSUResIEs_t */
   PDUSessionResourceSetupItemSUResIEs_t  ProtocolIE_SingleContainer[4];
} PDUSessionResourceSetupListSURes_t;

/* PDUSessionItem - Sequence Format 2 */
typedef struct {
   /* PDUSessionID: INTEGER (0..255) */
   unsigned int     pDUSessionID;
   Cause_t          cause;
} PDUSessionItem_t;

/* PDUSessionList - Sequence (1 .. 256) Of PDUSessionItem */
typedef struct {
   int              nbrInstances;  /* 1 .. 256 */
   /* NOTE: Max number of item is changed from 256 to 4 for PDUSessionItem_t */
   PDUSessionItem_t  PDUSessionItem[4];
} PDUSessionList_t;

/* TriggeringMessage - Enumerations */
#define TRIGGERINGMESSAGE_INITIATING_MESSAGE    0
#define TRIGGERINGMESSAGE_SUCCESSFUL_OUTCOME    1
#define TRIGGERINGMESSAGE_UNSUCCESSFULL_OUTCOME 2
#define TRIGGERINGMESSAGE_LAST                  2

/* TypeOfError - Enumerations */
#define TYPEOFERROR_NOT_UNDERSTOOD 0
#define TYPEOFERROR_MISSING        1
#define TYPEOFERROR_EXT_START      2

/* CriticalityDiagnostics-IE-Item - Sequence Format 2 */
typedef struct {
   /* Enumerates Criticality with 3 enums */
   unsigned char    iECriticality;
   /* ProtocolIE-ID: INTEGER (0..65535) */
   unsigned int     iE_ID;
   /* Enumerates TypeOfError with 2 enums */
   unsigned int     typeOfError;
} CriticalityDiagnostics_IE_Item_t;

/* CriticalityDiagnostics-IE-List - Sequence (1 .. 256) Of CriticalityDiagnostics-IE-Item */
typedef struct {
   int                              nbrInstances;  /* 1 .. 256 */
   /* NOTE: Max number of item is changed from 256 to 4 for CriticalityDiagnostics_IE_Item_t */
   CriticalityDiagnostics_IE_Item_t  CriticalityDiagnostics_IE_Item[4];
} CriticalityDiagnostics_IE_List_t;

/* CriticalityDiagnostics - Sequence Format 2 */
typedef struct {
   /* ProcedureCode: INTEGER (0..255) */
   unsigned char                    procedureCode_Present;
   unsigned int                     procedureCode;
   /* Enumerates TriggeringMessage with 3 enums */
   unsigned char                    triggeringMessage_Present;
   unsigned char                    triggeringMessage;
   /* Enumerates Criticality with 3 enums */
   unsigned char                    procedureCriticality_Present;
   unsigned char                    procedureCriticality;
   unsigned char                    iEsCriticalityDiagnostics_Present;
   CriticalityDiagnostics_IE_List_t iEsCriticalityDiagnostics;
} CriticalityDiagnostics_t;

/* PDUSessionResourceSetupResponseIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned char                      AMF_UE_NGAP_ID_Present;
   unsigned int                       AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned char                      RAN_UE_NGAP_ID_Present;
   unsigned int                       RAN_UE_NGAP_ID;
   unsigned char                      PDUSessionResourceSetupListSURes_Present;
   PDUSessionResourceSetupListSURes_t PDUSessionResourceSetupListSURes;
   unsigned char                      PDUSessionResourceFailedToSetupList_Present;
   PDUSessionList_t                   PDUSessionResourceFailedToSetupList;
   unsigned char                      CriticalityDiagnostics_Present;
   CriticalityDiagnostics_t           CriticalityDiagnostics;
} PDUSessionResourceSetupResponseIEs_t;

/* PDUSessionResourceSetupResponse - Sequence Format 2 */
typedef struct {
   PDUSessionResourceSetupResponseIEs_t protocolIEs;
} PDUSessionResourceSetupResponse_t;

/* PDUSessionResourceReleaseCommandIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int        AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int        RAN_UE_NGAP_ID;
   /* RANPagingPriority: INTEGER (1..256) */
   unsigned char       RANPagingPriority_Present;
   unsigned int        RANPagingPriority;
   unsigned char       NAS_PDU_Present;
   NAS_PDU_t           NAS_PDU;
   unsigned char       PDUSessionResourceToReleaseList_Present;
   PDUSessionList_t    PDUSessionResourceToReleaseList;
} PDUSessionResourceReleaseCommandIEs_t;

/* PDUSessionResourceReleaseCommand - Sequence Format 2 */
typedef struct {
   PDUSessionResourceReleaseCommandIEs_t protocolIEs;
} PDUSessionResourceReleaseCommand_t;

/* EUTRA-CGI - Sequence Format 2 */
typedef struct {
   /* PLMNIdentity: OCTET STRING (SIZE(3..3)) */
   unsigned int     pLMNIdentity;
   /* EUTRACellIdentity: BIT STRING (SIZE(28..28)) */
   unsigned int     eUTRACellIdentity;
} EUTRA_CGI_t;

/* TAI - Sequence Format 2 */
typedef struct {
   /* PLMNIdentity: OCTET STRING (SIZE(3..3)) */
   unsigned int     pLMNIdentity;
   /* TAC: OCTET STRING (SIZE(3..3)) */
   unsigned int     tAC;
} TAI_t;

/* UserLocationInformationEUTRA - Sequence Format 2 */
typedef struct {
   EUTRA_CGI_t      eUTRA_CGI;
   TAI_t            tAI;
} UserLocationInformationEUTRA_t;

/* NRCellIdentity - bit string 36..36 extensible = 0 */
typedef unsigned char NRCellIdentity_t[5];

/* NR-CGI - Sequence Format 2 */
typedef struct {
   /* PLMNIdentity: OCTET STRING (SIZE(3..3)) */
   unsigned int       pLMNIdentity;
   /* NRCellIdentity: BIT STRING (SIZE(36..36)) */
   NRCellIdentity_t   nRCellIdentity;
} NR_CGI_t;

/* UserLocationInformationNR - Sequence Format 2 */
typedef struct {
   NR_CGI_t         nR_CGI;
   TAI_t            tAI;
} UserLocationInformationNR_t;

/* UserLocationInformationN3IWF - Sequence Format 2 */
typedef struct {
   /* TransportLayerAddress: BIT STRING (SIZE(1..160)) */
   TransportLayerAddress_t   iPAddress;
   /* PortNumber: OCTET STRING (SIZE(2..2)) */
   unsigned int              portNumber;
} UserLocationInformationN3IWF_t;

/* UserLocationInformation - Choice */
#define USERLOCATIONINFORMATION_CHOICE_USERLOCATIONINFORMATIONEUTRA 0
#define USERLOCATIONINFORMATION_CHOICE_USERLOCATIONINFORMATIONNR    1
#define USERLOCATIONINFORMATION_CHOICE_USERLOCATIONINFORMATIONN3IWF 2
#define USERLOCATIONINFORMATION_CHOICE_EXT                          3
#define USERLOCATIONINFORMATION_CHOICE_LAST                         3

typedef union {
   UserLocationInformationEUTRA_t  userLocationInformationEUTRA;
   UserLocationInformationNR_t     userLocationInformationNR;
   UserLocationInformationN3IWF_t  userLocationInformationN3IWF;
} UserLocationInformation_Choice_t;

typedef struct {
   unsigned char                    Choice_Index;
   UserLocationInformation_Choice_t Choices;
} UserLocationInformation_t;

/* PDUSessionResourceReleaseResponseIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned char             AMF_UE_NGAP_ID_Present;
   unsigned int              AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned char             RAN_UE_NGAP_ID_Present;
   unsigned int              RAN_UE_NGAP_ID;
   unsigned char             UserLocationInformation_Present;
   UserLocationInformation_t UserLocationInformation;
   unsigned char             CriticalityDiagnostics_Present;
   CriticalityDiagnostics_t  CriticalityDiagnostics;
} PDUSessionResourceReleaseResponseIEs_t;

/* PDUSessionResourceReleaseResponse - Sequence Format 2 */
typedef struct {
   PDUSessionResourceReleaseResponseIEs_t protocolIEs;
} PDUSessionResourceReleaseResponse_t;

/* QosFlowAddOrModifyRequestItem - Sequence Format 2 */
typedef struct {
   /* QosFlowIndicator: INTEGER (0..63) */
   unsigned int                qosFlowIndicator;
   unsigned char               qosFlowLevelQosParameters_Present;
   QosFlowLevelQosParameters_t qosFlowLevelQosParameters;
   /* E-RAB-ID: INTEGER (0..15) */
   unsigned char               e_RAB_ID_Present;
   unsigned int                e_RAB_ID;
} QosFlowAddOrModifyRequestItem_t;

/* QosFlowAddOrModifyRequestList - Sequence (1 .. 64) Of QosFlowAddOrModifyRequestItem */
typedef struct {
   int                             nbrInstances;  /* 1 .. 64 */
   /* NOTE: Max number of item is changed from 64 to 4 for QosFlowAddOrModifyRequestItem_t */
   QosFlowAddOrModifyRequestItem_t  QosFlowAddOrModifyRequestItem[4];
} QosFlowAddOrModifyRequestList_t;

/* PDUSessionResourceModifyRequestTransfer - Sequence Format 2 */
typedef struct {
   /* BitRate: INTEGER (0..4000000000000) */
   unsigned char                   pDUSessionAggregateMaximumBitRate_Present;
   uint64                          pDUSessionAggregateMaximumBitRate;
   unsigned char                   uL_NGU_UP_TNLInformation_Present;
   UPTransportLayerInformation_t   uL_NGU_UP_TNLInformation;
   unsigned char                   qosFlowAddOrModifyRequestList_Present;
   QosFlowAddOrModifyRequestList_t qosFlowAddOrModifyRequestList;
   unsigned char                   qosFlowToReleaseList_Present;
   QosFlowList_t                   qosFlowToReleaseList;
} PDUSessionResourceModifyRequestTransfer_t;

/* PDUSessionResourceModifyItemModReq - Sequence Format 2 */
typedef struct {
   /* PDUSessionID: INTEGER (0..255) */
   unsigned int                              pDUSessionID;
   unsigned char                             nAS_PDU_Present;
   NAS_PDU_t                                 nAS_PDU;
   PDUSessionResourceModifyRequestTransfer_t pDUSessionResourceModifyRequestTransfer;
} PDUSessionResourceModifyItemModReq_t;

/* PDUSessionResourceModifyItemModReqIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   PDUSessionResourceModifyItemModReq_t PDUSessionResourceModifyItemModReq;
} PDUSessionResourceModifyItemModReqIEs_t;

/* PDUSessionResourceModifyListModReq - Sequence (1 .. 256) Of PDUSessionResourceModifyItemModReqIEs */
typedef struct {
   int                                     nbrInstances;  /* 1 .. 256 */
   /* NOTE: Max number of item is changed from 256 to 4 for PDUSessionResourceModifyItemModReqIEs_t */
   PDUSessionResourceModifyItemModReqIEs_t  ProtocolIE_SingleContainer[4];
} PDUSessionResourceModifyListModReq_t;

/* PDUSessionResourceModifyRequestIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int                         AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int                         RAN_UE_NGAP_ID;
   /* RANPagingPriority: INTEGER (1..256) */
   unsigned char                        RANPagingPriority_Present;
   unsigned int                         RANPagingPriority;
   PDUSessionResourceModifyListModReq_t PDUSessionResourceModifyListModReq;
} PDUSessionResourceModifyRequestIEs_t;

/* PDUSessionResourceModifyRequest - Sequence Format 2 */
typedef struct {
   PDUSessionResourceModifyRequestIEs_t protocolIEs;
} PDUSessionResourceModifyRequest_t;

/* QosFlowAddOrModifyResponseItem - Sequence Format 2 */
typedef struct {
   /* QosFlowIndicator: INTEGER (0..63) */
   unsigned int     qosFlowIndicator;
} QosFlowAddOrModifyResponseItem_t;

/* QosFlowAddOrModifyResponseList - Sequence (1 .. 64) Of QosFlowAddOrModifyResponseItem */
typedef struct {
   int                              nbrInstances;  /* 1 .. 64 */
   /* NOTE: Max number of item is changed from 64 to 4 for QosFlowAddOrModifyResponseItem_t */
   QosFlowAddOrModifyResponseItem_t  QosFlowAddOrModifyResponseItem[4];
} QosFlowAddOrModifyResponseList_t;

/* PDUSessionResourceModifyResponseTransfer - Sequence Format 2 */
typedef struct {
   unsigned char                    dL_NGU_UP_TNLInformation_Present;
   UPTransportLayerInformation_t    dL_NGU_UP_TNLInformation;
   unsigned char                    qosFlowAddOrModifyResponseList_Present;
   QosFlowAddOrModifyResponseList_t qosFlowAddOrModifyResponseList;
   unsigned char                    qosFlowFailedToAddOrModifyList_Present;
   QosFlowList_t                    qosFlowFailedToAddOrModifyList;
} PDUSessionResourceModifyResponseTransfer_t;

/* PDUSessionResourceModifyItemModRes - Sequence Format 2 */
typedef struct {
   /* PDUSessionID: INTEGER (0..255) */
   unsigned int                               pDUSessionID;
   PDUSessionResourceModifyResponseTransfer_t pDUSessionResourceModifyResponseTransfer;
} PDUSessionResourceModifyItemModRes_t;

/* PDUSessionResourceModifyItemModResIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   unsigned char                        PDUSessionResourceModifyItemModRes_Present;
   PDUSessionResourceModifyItemModRes_t PDUSessionResourceModifyItemModRes;
} PDUSessionResourceModifyItemModResIEs_t;

/* PDUSessionResourceModifyListModRes - Sequence (1 .. 256) Of PDUSessionResourceModifyItemModResIEs */
typedef struct {
   int                                     nbrInstances;  /* 1 .. 256 */
   /* NOTE: Max number of item is changed from 256 to 4 for PDUSessionResourceModifyItemModResIEs_t */
   PDUSessionResourceModifyItemModResIEs_t  ProtocolIE_SingleContainer[4];
} PDUSessionResourceModifyListModRes_t;

/* PDUSessionResourceModifyResponseIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned char                        AMF_UE_NGAP_ID_Present;
   unsigned int                         AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned char                        RAN_UE_NGAP_ID_Present;
   unsigned int                         RAN_UE_NGAP_ID;
   unsigned char                        PDUSessionResourceModifyListModRes_Present;
   PDUSessionResourceModifyListModRes_t PDUSessionResourceModifyListModRes;
   unsigned char                        PDUSessionResourceFailedToModifyListModRes_Present;
   PDUSessionList_t                     PDUSessionResourceFailedToModifyListModRes;
   unsigned char                        UserLocationInformation_Present;
   UserLocationInformation_t            UserLocationInformation;
   unsigned char                        CriticalityDiagnostics_Present;
   CriticalityDiagnostics_t             CriticalityDiagnostics;
} PDUSessionResourceModifyResponseIEs_t;

/* PDUSessionResourceModifyResponse - Sequence Format 2 */
typedef struct {
   PDUSessionResourceModifyResponseIEs_t protocolIEs;
} PDUSessionResourceModifyResponse_t;

/* NotificationCause - Enumerations */
#define NOTIFICATIONCAUSE_FULFILLED     0
#define NOTIFICATIONCAUSE_NOT_FULFILLED 1
#define NOTIFICATIONCAUSE_EXT_START     2

/* QosFlowNotifyItem - Sequence Format 2 */
typedef struct {
   /* QosFlowIndicator: INTEGER (0..63) */
   unsigned int     qosFlowIndicator;
   /* Enumerates NotificationCause with 2 enums */
   unsigned int     notificationCause;
} QosFlowNotifyItem_t;

/* QosFlowNotifyList - Sequence (1 .. 64) Of QosFlowNotifyItem */
typedef struct {
   int                 nbrInstances;  /* 1 .. 64 */
   /* NOTE: Max number of item is changed from 64 to 4 for QosFlowNotifyItem_t */
   QosFlowNotifyItem_t  QosFlowNotifyItem[4];
} QosFlowNotifyList_t;

/* PDUSessionResourceNotifyTransfer - Sequence Format 2 */
typedef struct {
   unsigned char       qosFlowNotifyList_Present;
   QosFlowNotifyList_t qosFlowNotifyList;
   unsigned char       qosFlowReleasedList_Present;
   QosFlowList_t       qosFlowReleasedList;
} PDUSessionResourceNotifyTransfer_t;

/* PDUSessionResourceNotifyItem - Sequence Format 2 */
typedef struct {
   /* PDUSessionID: INTEGER (0..255) */
   unsigned int                       pDUSessionID;
   PDUSessionResourceNotifyTransfer_t pDUSessionResourceNotifyTransfer;
} PDUSessionResourceNotifyItem_t;

/* PDUSessionResourceNotifyItemIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   PDUSessionResourceNotifyItem_t PDUSessionResourceNotifyItem;
} PDUSessionResourceNotifyItemIEs_t;

/* PDUSessionResourceNotifyList - Sequence (1 .. 256) Of PDUSessionResourceNotifyItemIEs */
typedef struct {
   int                               nbrInstances;  /* 1 .. 256 */
   /* NOTE: Max number of item is changed from 256 to 4 for PDUSessionResourceNotifyItemIEs_t */
   PDUSessionResourceNotifyItemIEs_t  ProtocolIE_SingleContainer[4];
} PDUSessionResourceNotifyList_t;

/* PDUSessionResourceNotifyIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int                   AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int                   RAN_UE_NGAP_ID;
   unsigned char                  PDUSessionResourceNotifyList_Present;
   PDUSessionResourceNotifyList_t PDUSessionResourceNotifyList;
   unsigned char                  PDUSessionResourceReleasedList_Present;
   PDUSessionList_t               PDUSessionResourceReleasedList;
   unsigned char                  UserLocationInformation_Present;
   UserLocationInformation_t      UserLocationInformation;
} PDUSessionResourceNotifyIEs_t;

/* PDUSessionResourceNotify - Sequence Format 2 */
typedef struct {
   PDUSessionResourceNotifyIEs_t protocolIEs;
} PDUSessionResourceNotify_t;

/* SingleTNLInformation - Sequence Format 2 */
typedef struct {
   UPTransportLayerInformation_t uPTransportLayerInformation;
} SingleTNLInformation_t;

/* AssociatedQosFlowItem - Sequence Format 2 */
typedef struct {
   /* QosFlowIndicator: INTEGER (0..63) */
   unsigned int     qosFlowIndicator;
} AssociatedQosFlowItem_t;

/* AssociatedQosFlowList - Sequence (1 .. 64) Of AssociatedQosFlowItem */
typedef struct {
   int                     nbrInstances;  /* 1 .. 64 */
   /* NOTE: Max number of item is changed from 64 to 4 for AssociatedQosFlowItem_t */
   AssociatedQosFlowItem_t  AssociatedQosFlowItem[4];
} AssociatedQosFlowList_t;

/* TNLInformationItem - Sequence Format 2 */
typedef struct {
   UPTransportLayerInformation_t uPTransportLayerInformation;
   AssociatedQosFlowList_t       associatedQoSFlowList;
} TNLInformationItem_t;

/* TNLInformationList - Sequence (1 .. 8) Of TNLInformationItem */
typedef struct {
   int                  nbrInstances;  /* 1 .. 8 */
   /* NOTE: Max number of item is changed from 8 to 4 for TNLInformationItem_t */
   TNLInformationItem_t  TNLInformationItem[4];
} TNLInformationList_t;

/* MultipleTNLInformation - Sequence Format 2 */
typedef struct {
   TNLInformationList_t tNLInformationList;
} MultipleTNLInformation_t;

/* UP-TNLInformation - Choice */
#define UP_TNLINFORMATION_CHOICE_SINGLETNLINFORMATION   0
#define UP_TNLINFORMATION_CHOICE_MULTIPLETNLINFORMATION 1
#define UP_TNLINFORMATION_CHOICE_EXT                    2
#define UP_TNLINFORMATION_CHOICE_LAST                   2

typedef union {
   SingleTNLInformation_t    singleTNLInformation;
   MultipleTNLInformation_t  multipleTNLInformation;
} UP_TNLInformation_Choice_t;

typedef struct {
   unsigned char              Choice_Index;
   UP_TNLInformation_Choice_t Choices;
} UP_TNLInformation_t;

/* PDUSessionResourceModifyIndicationTransfer - Sequence Format 2 */
typedef struct {
   unsigned char       dL_UP_TNLInformation_Present;
   UP_TNLInformation_t dL_UP_TNLInformation;
} PDUSessionResourceModifyIndicationTransfer_t;

/* PDUSessionResourceModifyItemModInd - Sequence Format 2 */
typedef struct {
   /* PDUSessionID: INTEGER (0..255) */
   unsigned int                                 pDUSessionID;
   PDUSessionResourceModifyIndicationTransfer_t pDUSessionResourceModifyIndicationTransfer;
} PDUSessionResourceModifyItemModInd_t;

/* PDUSessionResourceModifyItemModIndIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   PDUSessionResourceModifyItemModInd_t PDUSessionResourceModifyItemModInd;
} PDUSessionResourceModifyItemModIndIEs_t;

/* PDUSessionResourceModifyListModInd - Sequence (1 .. 256) Of PDUSessionResourceModifyItemModIndIEs */
typedef struct {
   int                                     nbrInstances;  /* 1 .. 256 */
   /* NOTE: Max number of item is changed from 256 to 4 for PDUSessionResourceModifyItemModIndIEs_t */
   PDUSessionResourceModifyItemModIndIEs_t  ProtocolIE_SingleContainer[4];
} PDUSessionResourceModifyListModInd_t;

/* PDUSessionResourceModifyIndicationIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int                         AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int                         RAN_UE_NGAP_ID;
   PDUSessionResourceModifyListModInd_t PDUSessionResourceModifyListModInd;
} PDUSessionResourceModifyIndicationIEs_t;

/* PDUSessionResourceModifyIndication - Sequence Format 2 */
typedef struct {
   PDUSessionResourceModifyIndicationIEs_t protocolIEs;
} PDUSessionResourceModifyIndication_t;

/* QosFlowModifyConfirmItem - Sequence Format 2 */
typedef struct {
   /* QosFlowIndicator: INTEGER (0..63) */
   unsigned int     qosFlowIndicator;
} QosFlowModifyConfirmItem_t;

/* QosFlowModifyConfirmList - Sequence (1 .. 64) Of QosFlowModifyConfirmItem */
typedef struct {
   int                        nbrInstances;  /* 1 .. 64 */
   /* NOTE: Max number of item is changed from 64 to 4 for QosFlowModifyConfirmItem_t */
   QosFlowModifyConfirmItem_t  QosFlowModifyConfirmItem[4];
} QosFlowModifyConfirmList_t;

/* PDUSessionResourceModifyConfirmTransfer - Sequence Format 2 */
typedef struct {
   QosFlowModifyConfirmList_t qosFlowModifyConfirmList;
   unsigned char              qosFlowFailedToModifyList_Present;
   QosFlowList_t              qosFlowFailedToModifyList;
} PDUSessionResourceModifyConfirmTransfer_t;

/* PDUSessionResourceModifyItemModCfm - Sequence Format 2 */
typedef struct {
   /* PDUSessionID: INTEGER (0..255) */
   unsigned int                              pDUSessionID;
   PDUSessionResourceModifyConfirmTransfer_t pDUSessionResourceModifyConfirmTransfer;
} PDUSessionResourceModifyItemModCfm_t;

/* PDUSessionResourceModifyItemModCfmIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   PDUSessionResourceModifyItemModCfm_t PDUSessionResourceModifyItemModCfm;
} PDUSessionResourceModifyItemModCfmIEs_t;

/* PDUSessionResourceModifyListModCfm - Sequence (1 .. 256) Of PDUSessionResourceModifyItemModCfmIEs */
typedef struct {
   int                                     nbrInstances;  /* 1 .. 256 */
   /* NOTE: Max number of item is changed from 256 to 4 for PDUSessionResourceModifyItemModCfmIEs_t */
   PDUSessionResourceModifyItemModCfmIEs_t  ProtocolIE_SingleContainer[4];
} PDUSessionResourceModifyListModCfm_t;

/* PDUSessionResourceModifyConfirmIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned char                        AMF_UE_NGAP_ID_Present;
   unsigned int                         AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned char                        RAN_UE_NGAP_ID_Present;
   unsigned int                         RAN_UE_NGAP_ID;
   unsigned char                        PDUSessionResourceModifyListModCfm_Present;
   PDUSessionResourceModifyListModCfm_t PDUSessionResourceModifyListModCfm;
   unsigned char                        CriticalityDiagnostics_Present;
   CriticalityDiagnostics_t             CriticalityDiagnostics;
} PDUSessionResourceModifyConfirmIEs_t;

/* PDUSessionResourceModifyConfirm - Sequence Format 2 */
typedef struct {
   PDUSessionResourceModifyConfirmIEs_t protocolIEs;
} PDUSessionResourceModifyConfirm_t;

/* AMFName - OctString Size 1..150, extendable = 1 */
typedef struct {
   int length;
   unsigned char content[150];
} AMFName_t;

/* UEAggregateMaximumBitRate - Sequence Format 2 */
typedef struct {
   /* BitRate: INTEGER (0..4000000000000) */
   uint64           uEAggregateMaximumBitRateDL;
   /* BitRate: INTEGER (0..4000000000000) */
   uint64           uEAggregateMaximumBitRateUL;
} UEAggregateMaximumBitRate_t;

/* MICOModeIndication - Enumerations */
#define MICOMODEINDICATION_TRUE      0
#define MICOMODEINDICATION_EXT_START 1

/* TAIItem - Sequence Format 2 */
typedef struct {
   TAI_t            tAI;
} TAIItem_t;

/* TAIItemIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   unsigned char TAIItem_Present;
   TAIItem_t     TAIItem;
} TAIItemIEs_t;

/* TAIList - Sequence (1 .. 16) Of TAIItemIEs */
typedef struct {
   int          nbrInstances;  /* 1 .. 16 */
   /* NOTE: Max number of item is changed from 16 to 4 for TAIItemIEs_t */
   TAIItemIEs_t  ProtocolIE_SingleContainer[4];
} TAIList_t;

/* RRCInactiveAssistanceInformation - Sequence Format 2 */
typedef struct {
   /* UEIdentityIndexValue: INTEGER (0..63) */
   unsigned int     uEIdentityIndexValue;
   /* UESpecificDRX: INTEGER (0..63) */
   unsigned int     uESpecificDRX;
   /* PeriodicRegistrationUpdateTimer: INTEGER (0..63) */
   unsigned int     periodicRegistrationUpdateTimer;
   /* Enumerates MICOModeIndication with 1 enums */
   unsigned int     mICOModeIndication;
   TAIList_t        tAIList;
} RRCInactiveAssistanceInformation_t;

/* GUAMI - Sequence Format 2 */
typedef struct {
   /* PLMNIdentity: OCTET STRING (SIZE(3..3)) */
   unsigned int     pLMNIdentity;
   /* AMFRegionID: OCTET STRING (SIZE(2..2)) */
   unsigned int     aMFRegionID;
   /* AMFSetID: BIT STRING (SIZE(4..4)) */
   unsigned char    aMFSetID;
   /* AMFPointer: BIT STRING (SIZE(4..4)) */
   unsigned char    aMFPointer;
} GUAMI_t;

/* PDUSessionResourceSetupItemCxtReq - Sequence Format 2 */
typedef struct {
   /* PDUSessionID: INTEGER (0..255) */
   unsigned int                             pDUSessionID;
   unsigned char                            nAS_PDU_Present;
   NAS_PDU_t                                nAS_PDU;
   S_NSSAI_t                                s_NSSAI;
   PDUSessionResourceSetupRequestTransfer_t pDUSessionResourceSetupRequestTransfer;
} PDUSessionResourceSetupItemCxtReq_t;

/* PDUSessionResourceSetupItemCxtReqIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   PDUSessionResourceSetupItemCxtReq_t PDUSessionResourceSetupItemCxtReq;
} PDUSessionResourceSetupItemCxtReqIEs_t;

/* PDUSessionResourceSetupListCxtReq - Sequence (1 .. 256) Of PDUSessionResourceSetupItemCxtReqIEs */
typedef struct {
   int                                    nbrInstances;  /* 1 .. 256 */
   /* NOTE: Max number of item is changed from 256 to 4 for PDUSessionResourceSetupItemCxtReqIEs_t */
   PDUSessionResourceSetupItemCxtReqIEs_t  ProtocolIE_SingleContainer[4];
} PDUSessionResourceSetupListCxtReq_t;

/* AllowedNSSAI-Item - Sequence Format 2 */
typedef struct {
   S_NSSAI_t        s_NSSAI;
} AllowedNSSAI_Item_t;

/* AllowedNSSAI - Sequence (1 .. 8) Of AllowedNSSAI-Item */
typedef struct {
   int                 nbrInstances;  /* 1 .. 8 */
   /* NOTE: Max number of item is changed from 8 to 4 for AllowedNSSAI_Item_t */
   AllowedNSSAI_Item_t  AllowedNSSAI_Item[4];
} AllowedNSSAI_t;

/* NrencryptionAlgorithms - bit string 16..16 extensible = 1 */
typedef struct {
   int len_bits;
   unsigned char cont_bits[MAX_BITSTRING_WITH_EXT_SIZE];
} NrencryptionAlgorithms_t;

/* NrintegrityProtectionAlgorithms - bit string 16..16 extensible = 1 */
typedef struct {
   int len_bits;
   unsigned char cont_bits[MAX_BITSTRING_WITH_EXT_SIZE];
} NrintegrityProtectionAlgorithms_t;

/* EUTRAencryptionAlgorithms - bit string 16..16 extensible = 1 */
typedef struct {
   int len_bits;
   unsigned char cont_bits[MAX_BITSTRING_WITH_EXT_SIZE];
} EUTRAencryptionAlgorithms_t;

/* EUTRAintegrityProtectionAlgorithms - bit string 16..16 extensible = 1 */
typedef struct {
   int len_bits;
   unsigned char cont_bits[MAX_BITSTRING_WITH_EXT_SIZE];
} EUTRAintegrityProtectionAlgorithms_t;

/* UESecurityCapabilities - Sequence Format 2 */
typedef struct {
   /* NrencryptionAlgorithms: BIT STRING (SIZE(16..16)) */
   NrencryptionAlgorithms_t               nRencryptionAlgorithms;
   /* NrintegrityProtectionAlgorithms: BIT STRING (SIZE(16..16)) */
   NrintegrityProtectionAlgorithms_t      nRintegrityProtectionAlgorithms;
   /* EUTRAencryptionAlgorithms: BIT STRING (SIZE(16..16)) */
   EUTRAencryptionAlgorithms_t            eUTRAencryptionAlgorithms;
   /* EUTRAintegrityProtectionAlgorithms: BIT STRING (SIZE(16..16)) */
   EUTRAintegrityProtectionAlgorithms_t   eUTRAintegrityProtectionAlgorithms;
} UESecurityCapabilities_t;

/* SecurityKey - bit string 256..256 extensible = 0 */
typedef unsigned char SecurityKey_t[32];

/* NGRANTraceID - OctString Size 8..8, extendable = 0 */
typedef unsigned char NGRANTraceID_t[8];

/* TraceDepth - Enumerations */
#define TRACEDEPTH_MINIMUM                               0
#define TRACEDEPTH_MEDIUM                                1
#define TRACEDEPTH_MAXIMUM                               2
#define TRACEDEPTH_MINIMUMWITHOUTVENDORSPECIFICEXTENSION 3
#define TRACEDEPTH_MEDIUMWITHOUTVENDORSPECIFICEXTENSION  4
#define TRACEDEPTH_MAXIMUMWITHOUTVENDORSPECIFICEXTENSION 5
#define TRACEDEPTH_EXT_START                             6

/* TraceActivation - Sequence Format 2 */
typedef struct {
   NGRANTraceID_t            nGRANTraceID;
   /* InterfacesToTrace: BIT STRING (SIZE(8..8)) */
   unsigned char             interfacesToTrace;
   /* Enumerates TraceDepth with 6 enums */
   unsigned int              traceDepth;
   /* TransportLayerAddress: BIT STRING (SIZE(1..160)) */
   TransportLayerAddress_t   traceCollectionEntityIPAddress;
} TraceActivation_t;

/* EquivalentPLMNs - Sequence (1 .. 15) Of PLMNIdentity */
typedef struct {
   int            nbrInstances;  /* 1 .. 15 */
   /* NOTE: Max number of item is changed from 15 to 4 for unsigned int */
   unsigned int    PLMNIdentity[4];
} EquivalentPLMNs_t;

/* RATRestrictionInformation - bit string 8..8 extensible = 1 */
typedef struct {
   int len_bits;
   unsigned char cont_bits[MAX_BITSTRING_WITH_EXT_SIZE];
} RATRestrictionInformation_t;

/* RATRestrictions-Item - Sequence Format 2 */
typedef struct {
   /* PLMNIdentity: OCTET STRING (SIZE(3..3)) */
   unsigned int                  pLMNIdentity;
   /* RATRestrictionInformation: BIT STRING (SIZE(8..8)) */
   RATRestrictionInformation_t   rATRestrictionInformation;
} RATRestrictions_Item_t;

/* RATRestrictions - Sequence (0 .. 16) Of RATRestrictions-Item */
typedef struct {
   int                    nbrInstances;  /* 0 .. 16 */
   /* NOTE: Max number of item is changed from 16 to 4 for RATRestrictions_Item_t */
   RATRestrictions_Item_t  RATRestrictions_Item[4];
} RATRestrictions_t;

/* ForbiddenTACs - Sequence (1 .. 4096) Of TAC */
typedef struct {
   int   nbrInstances;  /* 1 .. 4096 */
   /* NOTE: Max number of item is changed from 4096 to 4 for unsigned int */
   unsigned int TAC[4];
} ForbiddenTACs_t;

/* ForbiddenAreaInformation-Item - Sequence Format 2 */
typedef struct {
   /* PLMNIdentity: OCTET STRING (SIZE(3..3)) */
   unsigned int     pLMNIdentity;
   ForbiddenTACs_t  forbiddenTACs;
} ForbiddenAreaInformation_Item_t;

/* ForbiddenAreaInformation - Sequence (1 .. 16) Of ForbiddenAreaInformation-Item */
typedef struct {
   int                             nbrInstances;  /* 1 .. 16 */
   /* NOTE: Max number of item is changed from 16 to 4 for ForbiddenAreaInformation_Item_t */
   ForbiddenAreaInformation_Item_t  ForbiddenAreaInformation_Item[4];
} ForbiddenAreaInformation_t;

/* AllowedTACs - Sequence (1 .. 16) Of TAC */
typedef struct {
   int   nbrInstances;  /* 1 .. 16 */
   /* NOTE: Max number of item is changed from 16 to 4 for unsigned int */
   unsigned int TAC[4];
} AllowedTACs_t;

/* NotAllowedTACs - Sequence (1 .. 16) Of TAC */
typedef struct {
   int   nbrInstances;  /* 1 .. 16 */
   /* NOTE: Max number of item is changed from 16 to 4 for unsigned int */
   unsigned int TAC[4];
} NotAllowedTACs_t;

/* ServiceAreaInformation-Item - Sequence Format 2 */
typedef struct {
   /* PLMNIdentity: OCTET STRING (SIZE(3..3)) */
   unsigned int     pLMNIdentity;
   unsigned char    allowedTACs_Present;
   AllowedTACs_t    allowedTACs;
   unsigned char    notAllowedTACs_Present;
   NotAllowedTACs_t notAllowedTACs;
} ServiceAreaInformation_Item_t;

/* ServiceAreaInformation - Sequence (1 .. 16) Of ServiceAreaInformation-Item */
typedef struct {
   int                           nbrInstances;  /* 1 .. 16 */
   /* NOTE: Max number of item is changed from 16 to 4 for ServiceAreaInformation_Item_t */
   ServiceAreaInformation_Item_t  ServiceAreaInformation_Item[4];
} ServiceAreaInformation_t;

/* MobilityRestrictionList - Sequence Format 2 */
typedef struct {
   /* PLMNIdentity: OCTET STRING (SIZE(3..3)) */
   unsigned int               servingPLMN;
   unsigned char              equivalentPLMNs_Present;
   EquivalentPLMNs_t          equivalentPLMNs;
   unsigned char              rATRestrictions_Present;
   RATRestrictions_t          rATRestrictions;
   unsigned char              forbiddenAreaInformation_Present;
   ForbiddenAreaInformation_t forbiddenAreaInformation;
   unsigned char              serviceAreaInformation_Present;
   ServiceAreaInformation_t   serviceAreaInformation;
} MobilityRestrictionList_t;

/* UERadioCapability - OctString Size 0..512, extendable = 0 */
typedef struct {
   int length;
   unsigned char content[512];
} UERadioCapability_t;

/* MaskedIMEISV - bit string 64..64 extensible = 0 */
typedef unsigned char MaskedIMEISV_t[8];

/* EmergencyFallbackIndicator - Enumerations */
#define EMERGENCYFALLBACKINDICATOR_EMERGENCY_FALLBACK_REQUESTED 0
#define EMERGENCYFALLBACKINDICATOR_EXT_START                    1

/* InitialContextSetupRequestIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int                        AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int                        RAN_UE_NGAP_ID;
   unsigned char                       OldAMF_Present;
   AMFName_t                           OldAMF;
   unsigned char                       UEAggregateMaximumBitRate_Present;
   UEAggregateMaximumBitRate_t         UEAggregateMaximumBitRate;
   unsigned char                       RRCInactiveAssistanceInformation_Present;
   RRCInactiveAssistanceInformation_t  RRCInactiveAssistanceInformation;
   GUAMI_t                             GUAMI;
   unsigned char                       PDUSessionResourceSetupListCxtReq_Present;
   PDUSessionResourceSetupListCxtReq_t PDUSessionResourceSetupListCxtReq;
   unsigned char                       AllowedNSSAI_Present;
   AllowedNSSAI_t                      AllowedNSSAI;
   UESecurityCapabilities_t            UESecurityCapabilities;
   /* SecurityKey: BIT STRING (SIZE(256..256)) */
   SecurityKey_t                       SecurityKey;
   unsigned char                       TraceActivation_Present;
   TraceActivation_t                   TraceActivation;
   unsigned char                       MobilityRestrictionList_Present;
   MobilityRestrictionList_t           MobilityRestrictionList;
   unsigned char                       UERadioCapability_Present;
   UERadioCapability_t                 UERadioCapability;
   /* IndexToRFSP: INTEGER (1..256) */
   unsigned char                       IndexToRFSP_Present;
   unsigned int                        IndexToRFSP;
   /* MaskedIMEISV: BIT STRING (SIZE(64..64)) */
   unsigned char                       MaskedIMEISV_Present;
   MaskedIMEISV_t                      MaskedIMEISV;
   unsigned char                       NAS_PDU_Present;
   NAS_PDU_t                           NAS_PDU;
   /* Enumerates EmergencyFallbackIndicator with 1 enums */
   unsigned char                       EmergencyFallbackIndicator_Present;
   unsigned int                        EmergencyFallbackIndicator;
} InitialContextSetupRequestIEs_t;

/* InitialContextSetupRequest - Sequence Format 2 */
typedef struct {
   InitialContextSetupRequestIEs_t protocolIEs;
} InitialContextSetupRequest_t;

/* PDUSessionResourceSetupItemCxtRes - Sequence Format 2 */
typedef struct {
   /* PDUSessionID: INTEGER (0..255) */
   unsigned int                              pDUSessionID;
   PDUSessionResourceSetupResponseTransfer_t pDUSessionResourceSetupResponseTransfer;
   unsigned char                             additionalPDUSessionResourceSetupResponseTransfer_Present;
   PDUSessionResourceSetupResponseTransfer_t additionalPDUSessionResourceSetupResponseTransfer;
} PDUSessionResourceSetupItemCxtRes_t;

/* PDUSessionResourceSetupItemCxtResIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   unsigned char                       PDUSessionResourceSetupItemCxtRes_Present;
   PDUSessionResourceSetupItemCxtRes_t PDUSessionResourceSetupItemCxtRes;
} PDUSessionResourceSetupItemCxtResIEs_t;

/* PDUSessionResourceSetupListCxtRes - Sequence (1 .. 256) Of PDUSessionResourceSetupItemCxtResIEs */
typedef struct {
   int                                    nbrInstances;  /* 1 .. 256 */
   /* NOTE: Max number of item is changed from 256 to 4 for PDUSessionResourceSetupItemCxtResIEs_t */
   PDUSessionResourceSetupItemCxtResIEs_t  ProtocolIE_SingleContainer[4];
} PDUSessionResourceSetupListCxtRes_t;

/* InitialContextSetupResponseIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned char                       AMF_UE_NGAP_ID_Present;
   unsigned int                        AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned char                       RAN_UE_NGAP_ID_Present;
   unsigned int                        RAN_UE_NGAP_ID;
   unsigned char                       PDUSessionResourceSetupListCxtRes_Present;
   PDUSessionResourceSetupListCxtRes_t PDUSessionResourceSetupListCxtRes;
   unsigned char                       PDUSessionResourceFailedToSetupList_Present;
   PDUSessionList_t                    PDUSessionResourceFailedToSetupList;
   unsigned char                       CriticalityDiagnostics_Present;
   CriticalityDiagnostics_t            CriticalityDiagnostics;
} InitialContextSetupResponseIEs_t;

/* InitialContextSetupResponse - Sequence Format 2 */
typedef struct {
   InitialContextSetupResponseIEs_t protocolIEs;
} InitialContextSetupResponse_t;

/* InitialContextSetupFailureIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned char            AMF_UE_NGAP_ID_Present;
   unsigned int             AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned char            RAN_UE_NGAP_ID_Present;
   unsigned int             RAN_UE_NGAP_ID;
   unsigned char            Cause_Present;
   Cause_t                  Cause;
   unsigned char            CriticalityDiagnostics_Present;
   CriticalityDiagnostics_t CriticalityDiagnostics;
} InitialContextSetupFailureIEs_t;

/* InitialContextSetupFailure - Sequence Format 2 */
typedef struct {
   InitialContextSetupFailureIEs_t protocolIEs;
} InitialContextSetupFailure_t;

/* UEContextReleaseRequest-IEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int     AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int     RAN_UE_NGAP_ID;
   unsigned char    Cause_Present;
   Cause_t          Cause;
} UEContextReleaseRequest_IEs_t;

/* UEContextReleaseRequest - Sequence Format 2 */
typedef struct {
   UEContextReleaseRequest_IEs_t protocolIEs;
} UEContextReleaseRequest_t;

/* UE-NGAP-ID-pair - Sequence Format 2 */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int     aMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int     rAN_UE_NGAP_ID;
} UE_NGAP_ID_pair_t;

/* UE-NGAP-IDs - Choice */
#define UE_NGAP_IDS_CHOICE_UE_NGAP_ID_PAIR 0
#define UE_NGAP_IDS_CHOICE_AMF_UE_NGAP_ID  1
#define UE_NGAP_IDS_CHOICE_EXT             2
#define UE_NGAP_IDS_CHOICE_LAST            2

typedef union {
   UE_NGAP_ID_pair_t  uE_NGAP_ID_pair;
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int       aMF_UE_NGAP_ID;
} UE_NGAP_IDs_Choice_t;

typedef struct {
   unsigned char        Choice_Index;
   UE_NGAP_IDs_Choice_t Choices;
} UE_NGAP_IDs_t;

/* UEContextReleaseCommand-IEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   UE_NGAP_IDs_t       UE_NGAP_IDs;
   /* RANPagingPriority: INTEGER (1..256) */
   unsigned char       RANPagingPriority_Present;
   unsigned int        RANPagingPriority;
   unsigned char       Cause_Present;
   Cause_t             Cause;
} UEContextReleaseCommand_IEs_t;

/* UEContextReleaseCommand - Sequence Format 2 */
typedef struct {
   UEContextReleaseCommand_IEs_t protocolIEs;
} UEContextReleaseCommand_t;

/* InfoOnRecommendedCellsAndRANNodesForPaging - OctString Size 0..512, extendable = 0 */
typedef struct {
   int length;
   unsigned char content[512];
} InfoOnRecommendedCellsAndRANNodesForPaging_t;

/* UEContextReleaseComplete-IEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned char                                  AMF_UE_NGAP_ID_Present;
   unsigned int                                   AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned char                                  RAN_UE_NGAP_ID_Present;
   unsigned int                                   RAN_UE_NGAP_ID;
   unsigned char                                  UserLocationInformation_Present;
   UserLocationInformation_t                      UserLocationInformation;
   unsigned char                                  InfoOnRecommendedCellsAndRANNodesForPaging_Present;
   InfoOnRecommendedCellsAndRANNodesForPaging_t   InfoOnRecommendedCellsAndRANNodesForPaging;
   unsigned char                                  CriticalityDiagnostics_Present;
   CriticalityDiagnostics_t                       CriticalityDiagnostics;
} UEContextReleaseComplete_IEs_t;

/* UEContextReleaseComplete - Sequence Format 2 */
typedef struct {
   UEContextReleaseComplete_IEs_t protocolIEs;
} UEContextReleaseComplete_t;

/* UEContextModificationRequestIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int                       AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int                       RAN_UE_NGAP_ID;
   /* RANPagingPriority: INTEGER (1..256) */
   unsigned char                      RANPagingPriority_Present;
   unsigned int                       RANPagingPriority;
   /* SecurityKey: BIT STRING (SIZE(256..256)) */
   unsigned char                      SecurityKey_Present;
   SecurityKey_t                      SecurityKey;
   /* IndexToRFSP: INTEGER (1..256) */
   unsigned char                      IndexToRFSP_Present;
   unsigned int                       IndexToRFSP;
   unsigned char                      UEAggregateMaximumBitRate_Present;
   UEAggregateMaximumBitRate_t        UEAggregateMaximumBitRate;
   unsigned char                      UESecurityCapabilities_Present;
   UESecurityCapabilities_t           UESecurityCapabilities;
   unsigned char                      RRCInactiveAssistanceInformation_Present;
   RRCInactiveAssistanceInformation_t RRCInactiveAssistanceInformation;
   /* Enumerates EmergencyFallbackIndicator with 1 enums */
   unsigned char                      EmergencyFallbackIndicator_Present;
   unsigned int                       EmergencyFallbackIndicator;
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned char                      NewAMF_UE_NGAP_ID_Present;
   unsigned int                       NewAMF_UE_NGAP_ID;
} UEContextModificationRequestIEs_t;

/* UEContextModificationRequest - Sequence Format 2 */
typedef struct {
   UEContextModificationRequestIEs_t protocolIEs;
} UEContextModificationRequest_t;

/* UEContextModificationResponseIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned char            AMF_UE_NGAP_ID_Present;
   unsigned int             AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned char            RAN_UE_NGAP_ID_Present;
   unsigned int             RAN_UE_NGAP_ID;
   unsigned char            CriticalityDiagnostics_Present;
   CriticalityDiagnostics_t CriticalityDiagnostics;
} UEContextModificationResponseIEs_t;

/* UEContextModificationResponse - Sequence Format 2 */
typedef struct {
   UEContextModificationResponseIEs_t protocolIEs;
} UEContextModificationResponse_t;

/* UEContextModificationFailureIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned char            AMF_UE_NGAP_ID_Present;
   unsigned int             AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned char            RAN_UE_NGAP_ID_Present;
   unsigned int             RAN_UE_NGAP_ID;
   unsigned char            Cause_Present;
   Cause_t                  Cause;
   unsigned char            CriticalityDiagnostics_Present;
   CriticalityDiagnostics_t CriticalityDiagnostics;
} UEContextModificationFailureIEs_t;

/* UEContextModificationFailure - Sequence Format 2 */
typedef struct {
   UEContextModificationFailureIEs_t protocolIEs;
} UEContextModificationFailure_t;

/* HandoverType - Enumerations */
#define HANDOVERTYPE_INTRA5GS      0
#define HANDOVERTYPE_FIVEGS_TO_EPS 1
#define HANDOVERTYPE_EPS_TO_5GS    2
#define HANDOVERTYPE_EXT_START     3

/* GNB-ID-GNB-ID - bit string 22..32 extensible = 0 */
typedef struct {
   int len_bits;
   unsigned int value_bits;
} GNB_ID_GNB_ID_t;

/* GNB-ID - Choice */
#define GNB_ID_CHOICE_GNB_ID 0
#define GNB_ID_CHOICE_EXT    1
#define GNB_ID_CHOICE_LAST   1

typedef union {
   /* GNB-ID-GNB-ID: BIT STRING (SIZE(22..32)) */
   GNB_ID_GNB_ID_t  gNB_ID;
} GNB_ID_Choice_t;

typedef struct {
   unsigned char   Choice_Index;
   GNB_ID_Choice_t Choices;
} GNB_ID_t;

/* GlobalGNB-ID - Sequence Format 2 */
typedef struct {
   /* PLMNIdentity: OCTET STRING (SIZE(3..3)) */
   unsigned int     pLMNIdentity;
   GNB_ID_t         gNB_ID;
} GlobalGNB_ID_t;

/* NgENB-ID - Choice */
#define NGENB_ID_CHOICE_MACRONGENB_ID      0
#define NGENB_ID_CHOICE_SHORTMACRONGENB_ID 1
#define NGENB_ID_CHOICE_LONGMACRONGENB_ID  2
#define NGENB_ID_CHOICE_EXT                3
#define NGENB_ID_CHOICE_LAST               3

typedef union {
   /* NgENB-ID-MacroNgENB-ID: BIT STRING (SIZE(20..20)) */
   unsigned int  macroNgENB_ID;
   /* NgENB-ID-ShortMacroNgENB-ID: BIT STRING (SIZE(18..18)) */
   unsigned int  shortMacroNgENB_ID;
   /* NgENB-ID-LongMacroNgENB-ID: BIT STRING (SIZE(21..21)) */
   unsigned int  longMacroNgENB_ID;
} NgENB_ID_Choice_t;

typedef struct {
   unsigned char     Choice_Index;
   NgENB_ID_Choice_t Choices;
} NgENB_ID_t;

/* GlobalNgENB-ID - Sequence Format 2 */
typedef struct {
   /* PLMNIdentity: OCTET STRING (SIZE(3..3)) */
   unsigned int     pLMNIdentity;
   NgENB_ID_t       ngENB_ID;
} GlobalNgENB_ID_t;

/* N3IWF-ID - Choice */
#define N3IWF_ID_CHOICE_N3IWF_ID 0
#define N3IWF_ID_CHOICE_EXT      1
#define N3IWF_ID_CHOICE_LAST     1

typedef union {
   /* N3IWF-ID-N3IWF-ID: BIT STRING (SIZE(16..16)) */
   unsigned short  n3IWF_ID;
} N3IWF_ID_Choice_t;

typedef struct {
   unsigned char     Choice_Index;
   N3IWF_ID_Choice_t Choices;
} N3IWF_ID_t;

/* GlobalN3IWF-ID - Sequence Format 2 */
typedef struct {
   /* PLMNIdentity: OCTET STRING (SIZE(3..3)) */
   unsigned int     pLMNIdentity;
   N3IWF_ID_t       n3IWF_ID;
} GlobalN3IWF_ID_t;

/* GlobalRANNodeID - Choice */
#define GLOBALRANNODEID_CHOICE_GLOBALGNB_ID   0
#define GLOBALRANNODEID_CHOICE_GLOBALNGENB_ID 1
#define GLOBALRANNODEID_CHOICE_GLOBALN3IWF_ID 2
#define GLOBALRANNODEID_CHOICE_EXT            3
#define GLOBALRANNODEID_CHOICE_LAST           3

typedef union {
   GlobalGNB_ID_t    globalGNB_ID;
   GlobalNgENB_ID_t  globalNgENB_ID;
   GlobalN3IWF_ID_t  globalN3IWF_ID;
} GlobalRANNodeID_Choice_t;

typedef struct {
   unsigned char            Choice_Index;
   GlobalRANNodeID_Choice_t Choices;
} GlobalRANNodeID_t;

/* TargetRANNodeID - Sequence Format 2 */
typedef struct {
   GlobalRANNodeID_t globalRANNodeID;
   TAI_t             selectedTAI;
} TargetRANNodeID_t;

/* EPS-TAI - Sequence Format 2 */
typedef struct {
   /* PLMNIdentity: OCTET STRING (SIZE(3..3)) */
   unsigned int     pLMNIdentity;
   /* EPS-TAC: OCTET STRING (SIZE(2..2)) */
   unsigned int     ePS_TAC;
} EPS_TAI_t;

/* TargeteNB-ID - Sequence Format 2 */
typedef struct {
   GlobalNgENB_ID_t globalENB_ID;
   EPS_TAI_t        selected_EPS_TAI;
} TargeteNB_ID_t;

/* TargetID - Choice */
#define TARGETID_CHOICE_TARGETRANNODEID 0
#define TARGETID_CHOICE_TARGETENB_ID    1
#define TARGETID_CHOICE_EXT             2
#define TARGETID_CHOICE_LAST            2

typedef union {
   TargetRANNodeID_t  targetRANNodeID;
   TargeteNB_ID_t     targeteNB_ID;
} TargetID_Choice_t;

typedef struct {
   unsigned char     Choice_Index;
   TargetID_Choice_t Choices;
} TargetID_t;

/* DirectForwardingPathAvailability - Enumerations */
#define DIRECTFORWARDINGPATHAVAILABILITY_DIRECT_PATH_AVAILABLE 0
#define DIRECTFORWARDINGPATHAVAILABILITY_EXT_START             1

/* PDUSessionResourceSubjectToHandover - OctString Size 0..512, extendable = 0 */
typedef struct {
   int length;
   unsigned char content[512];
} PDUSessionResourceSubjectToHandover_t;

/* PDUSessionResourceItemHORqd - Sequence Format 2 */
typedef struct {
   /* PDUSessionID: INTEGER (0..255) */
   unsigned int                             pDUSessionID;
   S_NSSAI_t                                s_NSSAI;
   PDUSessionResourceSetupRequestTransfer_t handoverRequiredTransfer;
   PDUSessionResourceSubjectToHandover_t    pDUSessionResourceSubjectToHandover;
} PDUSessionResourceItemHORqd_t;

/* PDUSessionResourceItemHORqdIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   PDUSessionResourceItemHORqd_t PDUSessionResourceItemHORqd;
} PDUSessionResourceItemHORqdIEs_t;

/* PDUSessionResourceListHORqd - Sequence (1 .. 256) Of PDUSessionResourceItemHORqdIEs */
typedef struct {
   int                              nbrInstances;  /* 1 .. 256 */
   /* NOTE: Max number of item is changed from 256 to 4 for PDUSessionResourceItemHORqdIEs_t */
   PDUSessionResourceItemHORqdIEs_t  ProtocolIE_SingleContainer[4];
} PDUSessionResourceListHORqd_t;

/* SourceToTarget-TransparentContainer - OctString Size 0..512, extendable = 0 */
typedef struct {
   int length;
   unsigned char content[512];
} SourceToTarget_TransparentContainer_t;

/* HandoverRequiredIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int                            AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int                            RAN_UE_NGAP_ID;
   /* Enumerates HandoverType with 3 enums */
   unsigned int                            HandoverType;
   unsigned char                           Cause_Present;
   Cause_t                                 Cause;
   TargetID_t                              TargetID;
   /* Enumerates DirectForwardingPathAvailability with 1 enums */
   unsigned char                           DirectForwardingPathAvailability_Present;
   unsigned int                            DirectForwardingPathAvailability;
   PDUSessionResourceListHORqd_t           PDUSessionResourceListHORqd;
   SourceToTarget_TransparentContainer_t   SourceToTarget_TransparentContainer;
} HandoverRequiredIEs_t;

/* HandoverRequired - Sequence Format 2 */
typedef struct {
   HandoverRequiredIEs_t  protocolIEs;
} HandoverRequired_t;

/* QosFlowToBeForwardedItem - Sequence Format 2 */
typedef struct {
   /* QosFlowIndicator: INTEGER (0..63) */
   unsigned int     qosFlowIndicator;
} QosFlowToBeForwardedItem_t;

/* QosFlowToBeForwardedList - Sequence (1 .. 64) Of QosFlowToBeForwardedItem */
typedef struct {
   int                        nbrInstances;  /* 1 .. 64 */
   /* NOTE: Max number of item is changed from 64 to 4 for QosFlowToBeForwardedItem_t */
   QosFlowToBeForwardedItem_t  QosFlowToBeForwardedItem[4];
} QosFlowToBeForwardedList_t;

/* DataForwardingResponseDRBItem - Sequence Format 2 */
typedef struct {
   /* DRB-ID: INTEGER (1..32) */
   unsigned int                  dRB_ID;
   unsigned char                 dLForwardingUP_TNLInformation_Present;
   UPTransportLayerInformation_t dLForwardingUP_TNLInformation;
   unsigned char                 uLForwardingUP_TNLInformation_Present;
   UPTransportLayerInformation_t uLForwardingUP_TNLInformation;
} DataForwardingResponseDRBItem_t;

/* DataForwardingResponseDRBList - Sequence (1 .. 32) Of DataForwardingResponseDRBItem */
typedef struct {
   int                             nbrInstances;  /* 1 .. 32 */
   /* NOTE: Max number of item is changed from 32 to 4 for DataForwardingResponseDRBItem_t */
   DataForwardingResponseDRBItem_t  DataForwardingResponseDRBItem[4];
} DataForwardingResponseDRBList_t;

/* HandoverCommandTransfer - Sequence Format 2 */
typedef struct {
   unsigned char                   dLForwardingUP_TNLInformation_Present;
   UPTransportLayerInformation_t   dLForwardingUP_TNLInformation;
   QosFlowToBeForwardedList_t      qosFlowToBeForwardedList;
   unsigned char                   dataForwardingResponseDRBList_Present;
   DataForwardingResponseDRBList_t dataForwardingResponseDRBList;
} HandoverCommandTransfer_t;

/* PDUSessionResourceSubjectToForwardingItem - Sequence Format 2 */
typedef struct {
   /* PDUSessionID: INTEGER (0..255) */
   unsigned int              pDUSessionID;
   unsigned char             handoverCommandTransfer_Present;
   HandoverCommandTransfer_t handoverCommandTransfer;
} PDUSessionResourceSubjectToForwardingItem_t;

/* PDUSessionResourceSubjectToForwardingItemIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   PDUSessionResourceSubjectToForwardingItem_t PDUSessionResourceSubjectToForwardingItem;
} PDUSessionResourceSubjectToForwardingItemIEs_t;

/* PDUSessionResourceSubjectToForwardingList - Sequence (1 .. 256) Of PDUSessionResourceSubjectToForwardingItemIEs */
typedef struct {
   int                                            nbrInstances;  /* 1 .. 256 */
   /* NOTE: Max number of item is changed from 256 to 4 for PDUSessionResourceSubjectToForwardingItemIEs_t */
   PDUSessionResourceSubjectToForwardingItemIEs_t  ProtocolIE_SingleContainer[4];
} PDUSessionResourceSubjectToForwardingList_t;

/* TargetToSource-TransparentContainer - OctString Size 0..512, extendable = 0 */
typedef struct {
   int length;
   unsigned char content[512];
} TargetToSource_TransparentContainer_t;

/* HandoverCommandIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int                                AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int                                RAN_UE_NGAP_ID;
   /* Enumerates HandoverType with 3 enums */
   unsigned int                                HandoverType;
   unsigned char                               PDUSessionResourceSubjectToForwardingList_Present;
   PDUSessionResourceSubjectToForwardingList_t PDUSessionResourceSubjectToForwardingList;
   unsigned char                               PDUSessionResourceToReleaseList_Present;
   PDUSessionList_t                            PDUSessionResourceToReleaseList;
   TargetToSource_TransparentContainer_t       TargetToSource_TransparentContainer;
   unsigned char                               CriticalityDiagnostics_Present;
   CriticalityDiagnostics_t                    CriticalityDiagnostics;
} HandoverCommandIEs_t;

/* HandoverCommand - Sequence Format 2 */
typedef struct {
   HandoverCommandIEs_t   protocolIEs;
} HandoverCommand_t;

/* HandoverPreparationFailureIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned char            AMF_UE_NGAP_ID_Present;
   unsigned int             AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned char            RAN_UE_NGAP_ID_Present;
   unsigned int             RAN_UE_NGAP_ID;
   unsigned char            Cause_Present;
   Cause_t                  Cause;
   unsigned char            CriticalityDiagnostics_Present;
   CriticalityDiagnostics_t CriticalityDiagnostics;
} HandoverPreparationFailureIEs_t;

/* HandoverPreparationFailure - Sequence Format 2 */
typedef struct {
   HandoverPreparationFailureIEs_t protocolIEs;
} HandoverPreparationFailure_t;

/* SecurityContext - Sequence Format 2 */
typedef struct {
   /* NextHopChainingCount: INTEGER (0..7) */
   unsigned int     nextHopChainingCount;
   /* SecurityKey: BIT STRING (SIZE(256..256)) */
   SecurityKey_t    nextHopNH;
} SecurityContext_t;

/* KamfChangeInd - Enumerations */
#define KAMFCHANGEIND_TRUE      0
#define KAMFCHANGEIND_EXT_START 1

/* PDUSessionResourceSetupItemHOReq - Sequence Format 2 */
typedef struct {
   /* PDUSessionID: INTEGER (0..255) */
   unsigned int                             pDUSessionID;
   S_NSSAI_t                                s_NSSAI;
   PDUSessionResourceSetupRequestTransfer_t handoverRequestTransfer;
} PDUSessionResourceSetupItemHOReq_t;

/* PDUSessionResourceSetupItemHOReqIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   PDUSessionResourceSetupItemHOReq_t PDUSessionResourceSetupItemHOReq;
} PDUSessionResourceSetupItemHOReqIEs_t;

/* PDUSessionResourceSetupListHOReq - Sequence (1 .. 256) Of PDUSessionResourceSetupItemHOReqIEs */
typedef struct {
   int                                   nbrInstances;  /* 1 .. 256 */
   /* NOTE: Max number of item is changed from 256 to 4 for PDUSessionResourceSetupItemHOReqIEs_t */
   PDUSessionResourceSetupItemHOReqIEs_t  ProtocolIE_SingleContainer[4];
} PDUSessionResourceSetupListHOReq_t;

/* EventType - Enumerations */
#define EVENTTYPE_DIRECT                               0
#define EVENTTYPE_CHANGE_OF_SERVE_CELL                 1
#define EVENTTYPE_UE_PRESENCE_IN_AREA_OF_INTEREST      2
#define EVENTTYPE_STOP_CHANGE_OF_SERVE_CELL            3
#define EVENTTYPE_STOP_UE_PRESENCE_IN_AREA_OF_INTEREST 4
#define EVENTTYPE_CANCEL_LOCATION_REPORTING_FOR_THE_UE 5
#define EVENTTYPE_EXT_START                            6

/* ReportArea - Enumerations */
#define REPORTAREA_CELL      0
#define REPORTAREA_EXT_START 1

/* AreaOfInterestTAIItem - Sequence Format 2 */
typedef struct {
   TAI_t            tAI;
} AreaOfInterestTAIItem_t;

/* AreaOfInterestTAIList - Sequence (1 .. 64) Of AreaOfInterestTAIItem */
typedef struct {
   int                     nbrInstances;  /* 1 .. 64 */
   /* NOTE: Max number of item is changed from 64 to 4 for AreaOfInterestTAIItem_t */
   AreaOfInterestTAIItem_t  AreaOfInterestTAIItem[4];
} AreaOfInterestTAIList_t;

/* AreaOfInterest - Sequence Format 2 */
typedef struct {
   AreaOfInterestTAIList_t areaOfInterestTAIList;
} AreaOfInterest_t;

/* AreaOfInterestItem - Sequence Format 2 */
typedef struct {
   AreaOfInterest_t areaOfInterest;
   /* LocationReportingReferenceID: INTEGER (1..64) */
   unsigned char    locationReportingReferenceID_Present;
   unsigned int     locationReportingReferenceID;
} AreaOfInterestItem_t;

/* AreaOfInterestList - Sequence (1 .. 64) Of AreaOfInterestItem */
typedef struct {
   int                  nbrInstances;  /* 1 .. 64 */
   /* NOTE: Max number of item is changed from 64 to 4 for AreaOfInterestItem_t */
   AreaOfInterestItem_t  AreaOfInterestItem[4];
} AreaOfInterestList_t;

/* LocationReportingRequestType - Sequence Format 2 */
typedef struct {
   /* Enumerates EventType with 6 enums */
   unsigned int         eventType;
   /* Enumerates ReportArea with 1 enums */
   unsigned int         reportArea;
   unsigned char        areaOfInterestList_Present;
   AreaOfInterestList_t areaOfInterestList;
   /* LocationReportingReferenceID: INTEGER (1..64) */
   unsigned char        locationReportingReferenceIDToBeCancelled_Present;
   unsigned int         locationReportingReferenceIDToBeCancelled;
} LocationReportingRequestType_t;

/* HandoverRequestIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int                            AMF_UE_NGAP_ID;
   /* Enumerates HandoverType with 3 enums */
   unsigned int                            HandoverType;
   unsigned char                           Cause_Present;
   Cause_t                                 Cause;
   UEAggregateMaximumBitRate_t             UEAggregateMaximumBitRate;
   unsigned char                           RRCInactiveAssistanceInformation_Present;
   RRCInactiveAssistanceInformation_t      RRCInactiveAssistanceInformation;
   UESecurityCapabilities_t                UESecurityCapabilities;
   SecurityContext_t                       SecurityContext;
   /* Enumerates KamfChangeInd with 1 enums */
   unsigned char                           KamfChangeInd_Present;
   unsigned int                            KamfChangeInd;
   unsigned char                           NASC_Present;
   NAS_PDU_t                               NASC;
   PDUSessionResourceSetupListHOReq_t      PDUSessionResourceSetupListHOReq;
   unsigned char                           TraceActivation_Present;
   TraceActivation_t                       TraceActivation;
   /* MaskedIMEISV: BIT STRING (SIZE(64..64)) */
   unsigned char                           MaskedIMEISV_Present;
   MaskedIMEISV_t                          MaskedIMEISV;
   SourceToTarget_TransparentContainer_t   SourceToTarget_TransparentContainer;
   unsigned char                           MobilityRestrictionList_Present;
   MobilityRestrictionList_t               MobilityRestrictionList;
   unsigned char                           LocationReportingRequestType_Present;
   LocationReportingRequestType_t          LocationReportingRequestType;
} HandoverRequestIEs_t;

/* HandoverRequest - Sequence Format 2 */
typedef struct {
   HandoverRequestIEs_t   protocolIEs;
} HandoverRequest_t;

/* DataForwardingAccepted - Enumerations */
#define DATAFORWARDINGACCEPTED_DATA_FORWARDING_ACCEPTED 0
#define DATAFORWARDINGACCEPTED_EXT_START                1

/* QosFlowSetupResponseItemHOReqAck - Sequence Format 2 */
typedef struct {
   /* QosFlowIndicator: INTEGER (0..63) */
   unsigned int     qosFlowIndicator;
   /* Enumerates DataForwardingAccepted with 1 enums */
   unsigned char    dataForwardingAccepted_Present;
   unsigned int     dataForwardingAccepted;
} QosFlowSetupResponseItemHOReqAck_t;

/* QosFlowSetupResponseListHOReqAck - Sequence (1 .. 64) Of QosFlowSetupResponseItemHOReqAck */
typedef struct {
   int                                nbrInstances;  /* 1 .. 64 */
   /* NOTE: Max number of item is changed from 64 to 4 for QosFlowSetupResponseItemHOReqAck_t */
   QosFlowSetupResponseItemHOReqAck_t  QosFlowSetupResponseItemHOReqAck[4];
} QosFlowSetupResponseListHOReqAck_t;

/* HandoverRequestAcknowledgeTransfer - Sequence Format 2 */
typedef struct {
   UPTransportLayerInformation_t      dL_NGU_UP_TNLInformation;
   unsigned char                      dLForwardingUP_TNLInformation_Present;
   UPTransportLayerInformation_t      dLForwardingUP_TNLInformation;
   unsigned char                      securityResult_Present;
   SecurityResult_t                   securityResult;
   QosFlowSetupResponseListHOReqAck_t qosFlowSetupResponseList;
   unsigned char                      qosFlowFailedToSetupList_Present;
   QosFlowList_t                      qosFlowFailedToSetupList;
   unsigned char                      dataForwardingResponseDRBList_Present;
   DataForwardingResponseDRBList_t    dataForwardingResponseDRBList;
} HandoverRequestAcknowledgeTransfer_t;

/* PDUSessionResourceAdmittedItem - Sequence Format 2 */
typedef struct {
   /* PDUSessionID: INTEGER (0..255) */
   unsigned int                         pDUSessionID;
   HandoverRequestAcknowledgeTransfer_t handoverRequestAcknowledgeTransfer;
} PDUSessionResourceAdmittedItem_t;

/* PDUSessionResourceAdmittedItemIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   unsigned char                    PDUSessionResourceAdmittedItem_Present;
   PDUSessionResourceAdmittedItem_t PDUSessionResourceAdmittedItem;
} PDUSessionResourceAdmittedItemIEs_t;

/* PDUSessionResourceAdmittedList - Sequence (1 .. 256) Of PDUSessionResourceAdmittedItemIEs */
typedef struct {
   int                                 nbrInstances;  /* 1 .. 256 */
   /* NOTE: Max number of item is changed from 256 to 4 for PDUSessionResourceAdmittedItemIEs_t */
   PDUSessionResourceAdmittedItemIEs_t  ProtocolIE_SingleContainer[4];
} PDUSessionResourceAdmittedList_t;

/* HandoverRequestAcknowledgeIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned char                           AMF_UE_NGAP_ID_Present;
   unsigned int                            AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned char                           RAN_UE_NGAP_ID_Present;
   unsigned int                            RAN_UE_NGAP_ID;
   unsigned char                           PDUSessionResourceAdmittedList_Present;
   PDUSessionResourceAdmittedList_t        PDUSessionResourceAdmittedList;
   unsigned char                           PDUSessionResourceFailedToSetupList_Present;
   PDUSessionList_t                        PDUSessionResourceFailedToSetupList;
   TargetToSource_TransparentContainer_t   TargetToSource_TransparentContainer;
   unsigned char                           CriticalityDiagnostics_Present;
   CriticalityDiagnostics_t                CriticalityDiagnostics;
} HandoverRequestAcknowledgeIEs_t;

/* HandoverRequestAcknowledge - Sequence Format 2 */
typedef struct {
   HandoverRequestAcknowledgeIEs_t protocolIEs;
} HandoverRequestAcknowledge_t;

/* HandoverFailureIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned char            AMF_UE_NGAP_ID_Present;
   unsigned int             AMF_UE_NGAP_ID;
   unsigned char            Cause_Present;
   Cause_t                  Cause;
   unsigned char            CriticalityDiagnostics_Present;
   CriticalityDiagnostics_t CriticalityDiagnostics;
} HandoverFailureIEs_t;

/* HandoverFailure - Sequence Format 2 */
typedef struct {
   HandoverFailureIEs_t   protocolIEs;
} HandoverFailure_t;

/* HandoverNotifyIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int              AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int              RAN_UE_NGAP_ID;
   unsigned char             UserLocationInformation_Present;
   UserLocationInformation_t UserLocationInformation;
} HandoverNotifyIEs_t;

/* HandoverNotify - Sequence Format 2 */
typedef struct {
   HandoverNotifyIEs_t    protocolIEs;
} HandoverNotify_t;

/* UserPlaneSecurityInformation - Sequence Format 2 */
typedef struct {
   SecurityResult_t     securityResult;
   SecurityIndication_t securityIndication;
} UserPlaneSecurityInformation_t;

/* QosFlowAcceptedItem - Sequence Format 2 */
typedef struct {
   /* QosFlowIndicator: INTEGER (0..63) */
   unsigned int     qosFlowIndicator;
} QosFlowAcceptedItem_t;

/* QosFlowAcceptedList - Sequence (1 .. 64) Of QosFlowAcceptedItem */
typedef struct {
   int                   nbrInstances;  /* 1 .. 64 */
   /* NOTE: Max number of item is changed from 64 to 4 for QosFlowAcceptedItem_t */
   QosFlowAcceptedItem_t  QosFlowAcceptedItem[4];
} QosFlowAcceptedList_t;

/* PathSwitchRequestTransfer - Sequence Format 2 */
typedef struct {
   UPTransportLayerInformation_t  dL_NGU_UP_TNLInformation;
   unsigned char                  userPlaneSecurityInformation_Present;
   UserPlaneSecurityInformation_t userPlaneSecurityInformation;
   QosFlowAcceptedList_t          qosFlowAcceptedList;
} PathSwitchRequestTransfer_t;

/* PDUSessionResourceToBeSwitchedDLItem - Sequence Format 2 */
typedef struct {
   /* PDUSessionID: INTEGER (0..255) */
   unsigned int                pDUSessionID;
   PathSwitchRequestTransfer_t pathSwitchRequestTransfer;
} PDUSessionResourceToBeSwitchedDLItem_t;

/* PDUSessionResourceToBeSwitchedDLItemIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   PDUSessionResourceToBeSwitchedDLItem_t PDUSessionResourceToBeSwitchedDLItem;
} PDUSessionResourceToBeSwitchedDLItemIEs_t;

/* PDUSessionResourceToBeSwitchedDLList - Sequence (1 .. 256) Of PDUSessionResourceToBeSwitchedDLItemIEs */
typedef struct {
   int                                       nbrInstances;  /* 1 .. 256 */
   /* NOTE: Max number of item is changed from 256 to 4 for PDUSessionResourceToBeSwitchedDLItemIEs_t */
   PDUSessionResourceToBeSwitchedDLItemIEs_t  ProtocolIE_SingleContainer[4];
} PDUSessionResourceToBeSwitchedDLList_t;

/* PathSwitchRequestIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int                           RAN_UE_NGAP_ID;
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int                           SourceAMF_UE_NGAP_ID;
   unsigned char                          UserLocationInformation_Present;
   UserLocationInformation_t              UserLocationInformation;
   unsigned char                          UESecurityCapabilities_Present;
   UESecurityCapabilities_t               UESecurityCapabilities;
   PDUSessionResourceToBeSwitchedDLList_t PDUSessionResourceToBeSwitchedDLList;
   unsigned char                          PDUSessionResourceFailedToSetupList_Present;
   PDUSessionList_t                       PDUSessionResourceFailedToSetupList;
} PathSwitchRequestIEs_t;

/* PathSwitchRequest - Sequence Format 2 */
typedef struct {
   PathSwitchRequestIEs_t protocolIEs;
} PathSwitchRequest_t;

/* PathSwitchRequestAcknowledgeTransfer - Sequence Format 2 */
typedef struct {
   UPTransportLayerInformation_t uL_NGU_UP_TNLInformation;
   unsigned char                 securityIndication_Present;
   SecurityIndication_t          securityIndication;
} PathSwitchRequestAcknowledgeTransfer_t;

/* PDUSessionResourceToBeSwitchedULItem - Sequence Format 2 */
typedef struct {
   /* PDUSessionID: INTEGER (0..255) */
   unsigned int                           pDUSessionID;
   PathSwitchRequestAcknowledgeTransfer_t pathSwitchRequestTransfer;
} PDUSessionResourceToBeSwitchedULItem_t;

/* PDUSessionResourceToBeSwitchedULItemIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   PDUSessionResourceToBeSwitchedULItem_t PDUSessionResourceToBeSwitchedULItem;
} PDUSessionResourceToBeSwitchedULItemIEs_t;

/* PDUSessionResourceToBeSwitchedULList - Sequence (1 .. 256) Of PDUSessionResourceToBeSwitchedULItemIEs */
typedef struct {
   int                                       nbrInstances;  /* 1 .. 256 */
   /* NOTE: Max number of item is changed from 256 to 4 for PDUSessionResourceToBeSwitchedULItemIEs_t */
   PDUSessionResourceToBeSwitchedULItemIEs_t  ProtocolIE_SingleContainer[4];
} PDUSessionResourceToBeSwitchedULList_t;

/* PathSwitchRequestAcknowledgeIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned char                          AMF_UE_NGAP_ID_Present;
   unsigned int                           AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned char                          RAN_UE_NGAP_ID_Present;
   unsigned int                           RAN_UE_NGAP_ID;
   unsigned char                          UESecurityCapabilities_Present;
   UESecurityCapabilities_t               UESecurityCapabilities;
   SecurityContext_t                      SecurityContext;
   /* Enumerates KamfChangeInd with 1 enums */
   unsigned char                          KamfChangeInd_Present;
   unsigned int                           KamfChangeInd;
   unsigned char                          PDUSessionResourceToBeSwitchedULList_Present;
   PDUSessionResourceToBeSwitchedULList_t PDUSessionResourceToBeSwitchedULList;
   unsigned char                          PDUSessionResourceReleasedList_Present;
   PDUSessionList_t                       PDUSessionResourceReleasedList;
   unsigned char                          RRCInactiveAssistanceInformation_Present;
   RRCInactiveAssistanceInformation_t     RRCInactiveAssistanceInformation;
   unsigned char                          CriticalityDiagnostics_Present;
   CriticalityDiagnostics_t               CriticalityDiagnostics;
} PathSwitchRequestAcknowledgeIEs_t;

/* PathSwitchRequestAcknowledge - Sequence Format 2 */
typedef struct {
   PathSwitchRequestAcknowledgeIEs_t protocolIEs;
} PathSwitchRequestAcknowledge_t;

/* PathSwitchRequestFailureIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned char            AMF_UE_NGAP_ID_Present;
   unsigned int             AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned char            RAN_UE_NGAP_ID_Present;
   unsigned int             RAN_UE_NGAP_ID;
   unsigned char            Cause_Present;
   Cause_t                  Cause;
   unsigned char            CriticalityDiagnostics_Present;
   CriticalityDiagnostics_t CriticalityDiagnostics;
} PathSwitchRequestFailureIEs_t;

/* PathSwitchRequestFailure - Sequence Format 2 */
typedef struct {
   PathSwitchRequestFailureIEs_t protocolIEs;
} PathSwitchRequestFailure_t;

/* HandoverCancelIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int     AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int     RAN_UE_NGAP_ID;
   unsigned char    Cause_Present;
   Cause_t          Cause;
} HandoverCancelIEs_t;

/* HandoverCancel - Sequence Format 2 */
typedef struct {
   HandoverCancelIEs_t    protocolIEs;
} HandoverCancel_t;

/* HandoverCancelAcknowledgeIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned char            AMF_UE_NGAP_ID_Present;
   unsigned int             AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned char            RAN_UE_NGAP_ID_Present;
   unsigned int             RAN_UE_NGAP_ID;
   unsigned char            CriticalityDiagnostics_Present;
   CriticalityDiagnostics_t CriticalityDiagnostics;
} HandoverCancelAcknowledgeIEs_t;

/* HandoverCancelAcknowledge - Sequence Format 2 */
typedef struct {
   HandoverCancelAcknowledgeIEs_t protocolIEs;
} HandoverCancelAcknowledge_t;

/* RANStatusTransfer-TransparentContainer - OctString Size 0..512, extendable = 0 */
typedef struct {
   int length;
   unsigned char content[512];
} RANStatusTransfer_TransparentContainer_t;

/* UplinkRANStatusTransferIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int                               AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int                               RAN_UE_NGAP_ID;
   RANStatusTransfer_TransparentContainer_t   RANStatusTransfer_TransparentContainer;
} UplinkRANStatusTransferIEs_t;

/* UplinkRANStatusTransfer - Sequence Format 2 */
typedef struct {
   UplinkRANStatusTransferIEs_t protocolIEs;
} UplinkRANStatusTransfer_t;

/* DownlinkRANStatusTransferIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int                               AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int                               RAN_UE_NGAP_ID;
   RANStatusTransfer_TransparentContainer_t   RANStatusTransfer_TransparentContainer;
} DownlinkRANStatusTransferIEs_t;

/* DownlinkRANStatusTransfer - Sequence Format 2 */
typedef struct {
   DownlinkRANStatusTransferIEs_t protocolIEs;
} DownlinkRANStatusTransfer_t;

/* FiveG-S-TMSI - Sequence Format 2 */
typedef struct {
   /* AMFSetID: BIT STRING (SIZE(4..4)) */
   unsigned char    aMFSetID;
   /* AMFPointer: BIT STRING (SIZE(4..4)) */
   unsigned char    aMFPointer;
   /* FiveG-TMSI: OCTET STRING (SIZE(4..4)) */
   unsigned int     fiveG_TMSI;
} FiveG_S_TMSI_t;

/* UEPagingIdentity - Choice */
#define UEPAGINGIDENTITY_CHOICE_FIVEG_S_TMSI 0
#define UEPAGINGIDENTITY_CHOICE_EXT          1
#define UEPAGINGIDENTITY_CHOICE_LAST         1

typedef union {
   FiveG_S_TMSI_t  fiveG_S_TMSI;
} UEPagingIdentity_Choice_t;

typedef struct {
   unsigned char             Choice_Index;
   UEPagingIdentity_Choice_t Choices;
} UEPagingIdentity_t;

/* PagingPriority - Enumerations */
#define PAGINGPRIORITY_PRIOLEVEL1 0
#define PAGINGPRIORITY_PRIOLEVEL2 1
#define PAGINGPRIORITY_PRIOLEVEL3 2
#define PAGINGPRIORITY_PRIOLEVEL4 3
#define PAGINGPRIORITY_PRIOLEVEL5 4
#define PAGINGPRIORITY_PRIOLEVEL6 5
#define PAGINGPRIORITY_PRIOLEVEL7 6
#define PAGINGPRIORITY_PRIOLEVEL8 7
#define PAGINGPRIORITY_EXT_START  8

/* UERadioCapabilityForPaging - OctString Size 0..512, extendable = 0 */
typedef struct {
   int length;
   unsigned char content[512];
} UERadioCapabilityForPaging_t;

/* PagingOrigin - Enumerations */
#define PAGINGORIGIN_NON_3GPP  0
#define PAGINGORIGIN_EXT_START 1

/* NGRAN-CGI - Choice */
#define NGRAN_CGI_CHOICE_NR_CGI    0
#define NGRAN_CGI_CHOICE_EUTRA_CGI 1
#define NGRAN_CGI_CHOICE_EXT       2
#define NGRAN_CGI_CHOICE_LAST      2

typedef union {
   NR_CGI_t      nR_CGI;
   EUTRA_CGI_t   eUTRA_CGI;
} NGRAN_CGI_Choice_t;

typedef struct {
   unsigned char      Choice_Index;
   NGRAN_CGI_Choice_t Choices;
} NGRAN_CGI_t;

/* RecommendedCellItem - Sequence Format 2 */
typedef struct {
   NGRAN_CGI_t      nGRAN_CGI;
   /* RecommendedCellItem-TimeStayedInCell: INTEGER (0..4095) */
   unsigned char    timeStayedInCell_Present;
   unsigned int     timeStayedInCell;
} RecommendedCellItem_t;

/* RecommendedCellList - Sequence (1 .. 16) Of RecommendedCellItem */
typedef struct {
   int                   nbrInstances;  /* 1 .. 16 */
   /* NOTE: Max number of item is changed from 16 to 4 for RecommendedCellItem_t */
   RecommendedCellItem_t  RecommendedCellItem[4];
} RecommendedCellList_t;

/* RecommendedCellsForPaging - Sequence Format 2 */
typedef struct {
   RecommendedCellList_t recommendedCellList;
} RecommendedCellsForPaging_t;

/* AssistanceDataForRecommendedCells - Sequence Format 2 */
typedef struct {
   RecommendedCellsForPaging_t recommendedCellsForPaging;
} AssistanceDataForRecommendedCells_t;

/* NextPagingAreaScope - Enumerations */
#define NEXTPAGINGAREASCOPE_SAME      0
#define NEXTPAGINGAREASCOPE_CHANGED   1
#define NEXTPAGINGAREASCOPE_EXT_START 2

/* PagingAttemptInformation - Sequence Format 2 */
typedef struct {
   /* PagingAttemptCount: INTEGER (1..16) */
   unsigned int     pagingAttemptCount;
   /* IntendedNumberOfPagingAttempts: INTEGER (1..16) */
   unsigned int     intendedNumberOfPagingAttempts;
   /* Enumerates NextPagingAreaScope with 2 enums */
   unsigned char    nextPagingAreaScope_Present;
   unsigned int     nextPagingAreaScope;
} PagingAttemptInformation_t;

/* AssistanceDataForPaging - Sequence Format 2 */
typedef struct {
   unsigned char                       assistanceDataForRecommendedCells_Present;
   AssistanceDataForRecommendedCells_t assistanceDataForRecommendedCells;
   unsigned char                       pagingAttemptInformation_Present;
   PagingAttemptInformation_t          pagingAttemptInformation;
} AssistanceDataForPaging_t;

/* PagingIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* UEIdentityIndexValue: INTEGER (0..63) */
   unsigned char                  UEIdentityIndexValue_Present;
   unsigned int                   UEIdentityIndexValue;
   unsigned char                  UEPagingIdentity_Present;
   UEPagingIdentity_t             UEPagingIdentity;
   /* PagingDRX: INTEGER (0..63) */
   unsigned char                  PagingDRX_Present;
   unsigned int                   PagingDRX;
   unsigned char                  TAIList_Present;
   TAIList_t                      TAIList;
   /* Enumerates PagingPriority with 8 enums */
   unsigned char                  PagingPriority_Present;
   unsigned int                   PagingPriority;
   unsigned char                  UERadioCapabilityForPaging_Present;
   UERadioCapabilityForPaging_t   UERadioCapabilityForPaging;
   /* Enumerates PagingOrigin with 1 enums */
   unsigned char                  PagingOrigin_Present;
   unsigned int                   PagingOrigin;
   unsigned char                  AssistanceDataForPaging_Present;
   AssistanceDataForPaging_t      AssistanceDataForPaging;
} PagingIEs_t;

/* Paging - Sequence Format 2 */
typedef struct {
   PagingIEs_t            protocolIEs;
} Paging_t;

/* RRCEstablishmentCause - OctString Size 0..512, extendable = 0 */
typedef struct {
   int length;
   unsigned char content[512];
} RRCEstablishmentCause_t;

/* UEContextRequest - Enumerations */
#define UECONTEXTREQUEST_REQUESTED 0
#define UECONTEXTREQUEST_EXT_START 1

/* InitialUEMessage-IEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int              RAN_UE_NGAP_ID;
   NAS_PDU_t                 NAS_PDU;
   UserLocationInformation_t UserLocationInformation;
   unsigned char             RRCEstablishmentCause_Present;
   RRCEstablishmentCause_t   RRCEstablishmentCause;
   unsigned char             FiveG_S_TMSI_Present;
   FiveG_S_TMSI_t            FiveG_S_TMSI;
   unsigned char             GUAMI_Present;
   GUAMI_t                   GUAMI;
   /* AMFSetID: BIT STRING (SIZE(4..4)) */
   unsigned char             AMFSetID_Present;
   unsigned char             AMFSetID;
   /* Enumerates UEContextRequest with 1 enums */
   unsigned char             UEContextRequest_Present;
   unsigned int              UEContextRequest;
} InitialUEMessage_IEs_t;

/* InitialUEMessage - Sequence Format 2 */
typedef struct {
   InitialUEMessage_IEs_t protocolIEs;
} InitialUEMessage_t;

/* DownlinkNASTransport-IEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int                AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int                RAN_UE_NGAP_ID;
   unsigned char               OldAMF_Present;
   AMFName_t                   OldAMF;
   /* RANPagingPriority: INTEGER (1..256) */
   unsigned char               RANPagingPriority_Present;
   unsigned int                RANPagingPriority;
   NAS_PDU_t                   NAS_PDU;
   unsigned char               MobilityRestrictionList_Present;
   MobilityRestrictionList_t   MobilityRestrictionList;
   /* IndexToRFSP: INTEGER (1..256) */
   unsigned char               IndexToRFSP_Present;
   unsigned int                IndexToRFSP;
   unsigned char               UEAggregateMaximumBitRate_Present;
   UEAggregateMaximumBitRate_t UEAggregateMaximumBitRate;
} DownlinkNASTransport_IEs_t;

/* DownlinkNASTransport - Sequence Format 2 */
typedef struct {
   DownlinkNASTransport_IEs_t protocolIEs;
} DownlinkNASTransport_t;

/* UplinkNASTransport-IEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int              AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int              RAN_UE_NGAP_ID;
   NAS_PDU_t                 NAS_PDU;
   unsigned char             UserLocationInformation_Present;
   UserLocationInformation_t UserLocationInformation;
} UplinkNASTransport_IEs_t;

/* UplinkNASTransport - Sequence Format 2 */
typedef struct {
   UplinkNASTransport_IEs_t protocolIEs;
} UplinkNASTransport_t;

/* NASNonDeliveryIndication-IEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int     AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int     RAN_UE_NGAP_ID;
   unsigned char    NAS_PDU_Present;
   NAS_PDU_t        NAS_PDU;
   unsigned char    Cause_Present;
   Cause_t          Cause;
} NASNonDeliveryIndication_IEs_t;

/* NASNonDeliveryIndication - Sequence Format 2 */
typedef struct {
   NASNonDeliveryIndication_IEs_t protocolIEs;
} NASNonDeliveryIndication_t;

/* OCTET-STRING - OctString Size 0..512, extendable = 0 */
typedef struct {
   int length;
   unsigned char content[512];
} OCTET_STRING_t;

/* RerouteNASRequest-IEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int     RAN_UE_NGAP_ID;
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned char    AMF_UE_NGAP_ID_Present;
   unsigned int     AMF_UE_NGAP_ID;
   OCTET_STRING_t   NGAP_Message;
   /* AMFSetID: BIT STRING (SIZE(4..4)) */
   unsigned char    AMFSetID;
   unsigned char    AllowedNSSAI_Present;
   AllowedNSSAI_t   AllowedNSSAI;
} RerouteNASRequest_IEs_t;

/* RerouteNASRequest - Sequence Format 2 */
typedef struct {
   RerouteNASRequest_IEs_t protocolIEs;
} RerouteNASRequest_t;

/* RANNodeName - OctString Size 1..150, extendable = 1 */
typedef struct {
   int length;
   unsigned char content[150];
} RANNodeName_t;

/* SliceSupportItem - Sequence Format 2 */
typedef struct {
   S_NSSAI_t        s_NSSAI;
} SliceSupportItem_t;

/* SliceSupportList - Sequence (1 .. 1024) Of SliceSupportItem */
typedef struct {
   int                nbrInstances;  /* 1 .. 1024 */
   /* NOTE: Max number of item is changed from 1024 to 4 for SliceSupportItem_t */
   SliceSupportItem_t  SliceSupportItem[4];
} SliceSupportList_t;

/* BroadcastPLMNItem - Sequence Format 2 */
typedef struct {
   /* PLMNIdentity: OCTET STRING (SIZE(3..3)) */
   unsigned int       pLMNIdentity;
   SliceSupportList_t tAISliceSupportList;
} BroadcastPLMNItem_t;

/* BroadcastPLMNList - Sequence (1 .. 12) Of BroadcastPLMNItem */
typedef struct {
   int                 nbrInstances;  /* 1 .. 12 */
   /* NOTE: Max number of item is changed from 12 to 4 for BroadcastPLMNItem_t */
   BroadcastPLMNItem_t  BroadcastPLMNItem[4];
} BroadcastPLMNList_t;

/* SupportedTAItem - Sequence Format 2 */
typedef struct {
   /* TAC: OCTET STRING (SIZE(3..3)) */
   unsigned int        tAC;
   BroadcastPLMNList_t broadcastPLMNList;
} SupportedTAItem_t;

/* SupportedTAList - Sequence (1 .. 256) Of SupportedTAItem */
typedef struct {
   int               nbrInstances;  /* 1 .. 256 */
   /* NOTE: Max number of item is changed from 256 to 4 for SupportedTAItem_t */
   SupportedTAItem_t  SupportedTAItem[4];
} SupportedTAList_t;

/* NGSetupRequestIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   GlobalRANNodeID_t GlobalRANNodeID;
   unsigned char     RANNodeName_Present;
   RANNodeName_t     RANNodeName;
   SupportedTAList_t SupportedTAList;
   /* PagingDRX: INTEGER (0..63) */
   unsigned char     DefaultPagingDRX_Present;
   unsigned int      DefaultPagingDRX;
} NGSetupRequestIEs_t;

/* NGSetupRequest - Sequence Format 2 */
typedef struct {
   NGSetupRequestIEs_t    protocolIEs;
} NGSetupRequest_t;

/* ServedGUAMIItem - Sequence Format 2 */
typedef struct {
   GUAMI_t          gUAMI;
   unsigned char    backupAMFName_Present;
   AMFName_t        backupAMFName;
} ServedGUAMIItem_t;

/* ServedGUAMIList - Sequence (1 .. 256) Of ServedGUAMIItem */
typedef struct {
   int               nbrInstances;  /* 1 .. 256 */
   /* NOTE: Max number of item is changed from 256 to 4 for ServedGUAMIItem_t */
   ServedGUAMIItem_t  ServedGUAMIItem[4];
} ServedGUAMIList_t;

/* PLMNSupportItem - Sequence Format 2 */
typedef struct {
   /* PLMNIdentity: OCTET STRING (SIZE(3..3)) */
   unsigned int       pLMNIdentity;
   SliceSupportList_t sliceSupportList;
} PLMNSupportItem_t;

/* PLMNSupportList - Sequence (1 .. 12) Of PLMNSupportItem */
typedef struct {
   int               nbrInstances;  /* 1 .. 12 */
   /* NOTE: Max number of item is changed from 12 to 4 for PLMNSupportItem_t */
   PLMNSupportItem_t  PLMNSupportItem[4];
} PLMNSupportList_t;

/* NGSetupResponseIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   AMFName_t                AMFName;
   ServedGUAMIList_t        ServedGUAMIList;
   /* RelativeAMFCapacity: INTEGER (0..255) */
   unsigned char            RelativeAMFCapacity_Present;
   unsigned int             RelativeAMFCapacity;
   PLMNSupportList_t        PLMNSupportList;
   unsigned char            CriticalityDiagnostics_Present;
   CriticalityDiagnostics_t CriticalityDiagnostics;
} NGSetupResponseIEs_t;

/* NGSetupResponse - Sequence Format 2 */
typedef struct {
   NGSetupResponseIEs_t   protocolIEs;
} NGSetupResponse_t;

/* TimeToWait - Enumerations */
#define TIMETOWAIT_V1S       0
#define TIMETOWAIT_V2S       1
#define TIMETOWAIT_V5S       2
#define TIMETOWAIT_V10S      3
#define TIMETOWAIT_V20S      4
#define TIMETOWAIT_V60S      5
#define TIMETOWAIT_EXT_START 6

/* NGSetupFailureIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   unsigned char            Cause_Present;
   Cause_t                  Cause;
   /* Enumerates TimeToWait with 6 enums */
   unsigned char            TimeToWait_Present;
   unsigned int             TimeToWait;
   unsigned char            CriticalityDiagnostics_Present;
   CriticalityDiagnostics_t CriticalityDiagnostics;
} NGSetupFailureIEs_t;

/* NGSetupFailure - Sequence Format 2 */
typedef struct {
   NGSetupFailureIEs_t    protocolIEs;
} NGSetupFailure_t;

/* RANConfigurationUpdateIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   unsigned char     RANNodeName_Present;
   RANNodeName_t     RANNodeName;
   unsigned char     SupportedTAList_Present;
   SupportedTAList_t SupportedTAList;
   /* PagingDRX: INTEGER (0..63) */
   unsigned char     DefaultPagingDRX_Present;
   unsigned int      DefaultPagingDRX;
} RANConfigurationUpdateIEs_t;

/* RANConfigurationUpdate - Sequence Format 2 */
typedef struct {
   RANConfigurationUpdateIEs_t protocolIEs;
} RANConfigurationUpdate_t;

/* RANConfigurationUpdateAcknowledgeIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   unsigned char            CriticalityDiagnostics_Present;
   CriticalityDiagnostics_t CriticalityDiagnostics;
} RANConfigurationUpdateAcknowledgeIEs_t;

/* RANConfigurationUpdateAcknowledge - Sequence Format 2 */
typedef struct {
   RANConfigurationUpdateAcknowledgeIEs_t protocolIEs;
} RANConfigurationUpdateAcknowledge_t;

/* RANConfigurationUpdateFailureIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   unsigned char            Cause_Present;
   Cause_t                  Cause;
   /* Enumerates TimeToWait with 6 enums */
   unsigned char            TimeToWait_Present;
   unsigned int             TimeToWait;
   unsigned char            CriticalityDiagnostics_Present;
   CriticalityDiagnostics_t CriticalityDiagnostics;
} RANConfigurationUpdateFailureIEs_t;

/* RANConfigurationUpdateFailure - Sequence Format 2 */
typedef struct {
   RANConfigurationUpdateFailureIEs_t protocolIEs;
} RANConfigurationUpdateFailure_t;

/* CPTransportLayerInformation - Choice */
#define CPTRANSPORTLAYERINFORMATION_CHOICE_ENDPOINTIPADDRESS 0
#define CPTRANSPORTLAYERINFORMATION_CHOICE_EXT               1
#define CPTRANSPORTLAYERINFORMATION_CHOICE_LAST              1

typedef union {
   /* TransportLayerAddress: BIT STRING (SIZE(1..160)) */
   TransportLayerAddress_t  endpointIPAddress;
} CPTransportLayerInformation_Choice_t;

typedef struct {
   unsigned char                        Choice_Index;
   CPTransportLayerInformation_Choice_t Choices;
} CPTransportLayerInformation_t;

/* TNLAssociationUsage - Enumerations */
#define TNLASSOCIATIONUSAGE_UE        0
#define TNLASSOCIATIONUSAGE_NON_UE    1
#define TNLASSOCIATIONUSAGE_BOTH      2
#define TNLASSOCIATIONUSAGE_EXT_START 3

/* AMF-TNLAssociationToAddItem - Sequence Format 2 */
typedef struct {
   CPTransportLayerInformation_t aMF_TNLAssociationAddress;
   /* Enumerates TNLAssociationUsage with 3 enums */
   unsigned char                 tNLAssociationUsage_Present;
   unsigned int                  tNLAssociationUsage;
   /* TNLAssociationWeightFactor: INTEGER (0..255) */
   unsigned int                  tNLAssociationWeightFactor;
} AMF_TNLAssociationToAddItem_t;

/* AMF-TNLAssociationToAddItemIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   AMF_TNLAssociationToAddItem_t AMF_TNLAssociationToAddItem;
} AMF_TNLAssociationToAddItemIEs_t;

/* AMF-TNLAssociationToAddList - Sequence (1 .. 32) Of AMF-TNLAssociationToAddItemIEs */
typedef struct {
   int                              nbrInstances;  /* 1 .. 32 */
   /* NOTE: Max number of item is changed from 32 to 4 for AMF_TNLAssociationToAddItemIEs_t */
   AMF_TNLAssociationToAddItemIEs_t  ProtocolIE_SingleContainer[4];
} AMF_TNLAssociationToAddList_t;

/* AMF-TNLAssociationToRemoveItem - Sequence Format 2 */
typedef struct {
   CPTransportLayerInformation_t aMF_TNLAssociationAddress;
} AMF_TNLAssociationToRemoveItem_t;

/* AMF-TNLAssociationToRemoveItemIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   AMF_TNLAssociationToRemoveItem_t AMF_TNLAssociationToRemoveItem;
} AMF_TNLAssociationToRemoveItemIEs_t;

/* AMF-TNLAssociationToRemoveList - Sequence (1 .. 32) Of AMF-TNLAssociationToRemoveItemIEs */
typedef struct {
   int                                 nbrInstances;  /* 1 .. 32 */
   /* NOTE: Max number of item is changed from 32 to 4 for AMF_TNLAssociationToRemoveItemIEs_t */
   AMF_TNLAssociationToRemoveItemIEs_t  ProtocolIE_SingleContainer[4];
} AMF_TNLAssociationToRemoveList_t;

/* AMF-TNLAssociationToUpdateItem - Sequence Format 2 */
typedef struct {
   CPTransportLayerInformation_t aMF_TNLAssociationAddress;
   /* Enumerates TNLAssociationUsage with 3 enums */
   unsigned char                 tNLAssociationUsage_Present;
   unsigned int                  tNLAssociationUsage;
   /* TNLAssociationWeightFactor: INTEGER (0..255) */
   unsigned char                 tNLAssociationWeightFactor_Present;
   unsigned int                  tNLAssociationWeightFactor;
} AMF_TNLAssociationToUpdateItem_t;

/* AMF-TNLAssociationToUpdateItemIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   AMF_TNLAssociationToUpdateItem_t AMF_TNLAssociationToUpdateItem;
} AMF_TNLAssociationToUpdateItemIEs_t;

/* AMF-TNLAssociationToUpdateList - Sequence (1 .. 32) Of AMF-TNLAssociationToUpdateItemIEs */
typedef struct {
   int                                 nbrInstances;  /* 1 .. 32 */
   /* NOTE: Max number of item is changed from 32 to 4 for AMF_TNLAssociationToUpdateItemIEs_t */
   AMF_TNLAssociationToUpdateItemIEs_t  ProtocolIE_SingleContainer[4];
} AMF_TNLAssociationToUpdateList_t;

/* AMFConfigurationUpdateIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   unsigned char                    AMFName_Present;
   AMFName_t                        AMFName;
   unsigned char                    ServedGUAMIList_Present;
   ServedGUAMIList_t                ServedGUAMIList;
   /* RelativeAMFCapacity: INTEGER (0..255) */
   unsigned char                    RelativeAMFCapacity_Present;
   unsigned int                     RelativeAMFCapacity;
   unsigned char                    PLMNSupportList_Present;
   PLMNSupportList_t                PLMNSupportList;
   unsigned char                    AMF_TNLAssociationToAddList_Present;
   AMF_TNLAssociationToAddList_t    AMF_TNLAssociationToAddList;
   unsigned char                    AMF_TNLAssociationToRemoveList_Present;
   AMF_TNLAssociationToRemoveList_t AMF_TNLAssociationToRemoveList;
   unsigned char                    AMF_TNLAssociationToUpdateList_Present;
   AMF_TNLAssociationToUpdateList_t AMF_TNLAssociationToUpdateList;
} AMFConfigurationUpdateIEs_t;

/* AMFConfigurationUpdate - Sequence Format 2 */
typedef struct {
   AMFConfigurationUpdateIEs_t protocolIEs;
} AMFConfigurationUpdate_t;

/* AMF-TNLAssociationSetupItem - Sequence Format 2 */
typedef struct {
   CPTransportLayerInformation_t aMF_TNLAssociationAddress;
} AMF_TNLAssociationSetupItem_t;

/* AMF-TNLAssociationSetupItemIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   AMF_TNLAssociationSetupItem_t AMF_TNLAssociationSetupItem;
} AMF_TNLAssociationSetupItemIEs_t;

/* AMF-TNLAssociationSetupList - Sequence (1 .. 32) Of AMF-TNLAssociationSetupItemIEs */
typedef struct {
   int                              nbrInstances;  /* 1 .. 32 */
   /* NOTE: Max number of item is changed from 32 to 4 for AMF_TNLAssociationSetupItemIEs_t */
   AMF_TNLAssociationSetupItemIEs_t  ProtocolIE_SingleContainer[4];
} AMF_TNLAssociationSetupList_t;

/* TNLAssociationItem - Sequence Format 2 */
typedef struct {
   CPTransportLayerInformation_t tNLAssociationAddress;
   Cause_t                       cause;
} TNLAssociationItem_t;

/* TNLAssociationList - Sequence (1 .. 32) Of TNLAssociationItem */
typedef struct {
   int                  nbrInstances;  /* 1 .. 32 */
   /* NOTE: Max number of item is changed from 32 to 4 for TNLAssociationItem_t */
   TNLAssociationItem_t  TNLAssociationItem[4];
} TNLAssociationList_t;

/* AMFConfigurationUpdateAcknowledgeIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   unsigned char                 AMF_TNLAssociationSetupList_Present;
   AMF_TNLAssociationSetupList_t AMF_TNLAssociationSetupList;
   unsigned char                 AMF_TNLAssociationFailedToSetupList_Present;
   TNLAssociationList_t          AMF_TNLAssociationFailedToSetupList;
   unsigned char                 CriticalityDiagnostics_Present;
   CriticalityDiagnostics_t      CriticalityDiagnostics;
} AMFConfigurationUpdateAcknowledgeIEs_t;

/* AMFConfigurationUpdateAcknowledge - Sequence Format 2 */
typedef struct {
   AMFConfigurationUpdateAcknowledgeIEs_t protocolIEs;
} AMFConfigurationUpdateAcknowledge_t;

/* AMFConfigurationUpdateFailureIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   unsigned char            Cause_Present;
   Cause_t                  Cause;
   /* Enumerates TimeToWait with 6 enums */
   unsigned char            TimeToWait_Present;
   unsigned int             TimeToWait;
   unsigned char            CriticalityDiagnostics_Present;
   CriticalityDiagnostics_t CriticalityDiagnostics;
} AMFConfigurationUpdateFailureIEs_t;

/* AMFConfigurationUpdateFailure - Sequence Format 2 */
typedef struct {
   AMFConfigurationUpdateFailureIEs_t protocolIEs;
} AMFConfigurationUpdateFailure_t;

/* TimerApproachForGUAMIRemoval - Enumerations */
#define TIMERAPPROACHFORGUAMIREMOVAL_APPLY_TIMER 0
#define TIMERAPPROACHFORGUAMIREMOVAL_EXT_START   1

/* UnavailableGUAMIItem - Sequence Format 2 */
typedef struct {
   GUAMI_t          gUAMI;
   /* Enumerates TimerApproachForGUAMIRemoval with 1 enums */
   unsigned char    timerApproachForGUAMIRemoval_Present;
   unsigned int     timerApproachForGUAMIRemoval;
   unsigned char    backupAMFName_Present;
   AMFName_t        backupAMFName;
} UnavailableGUAMIItem_t;

/* UnavailableGUAMIList - Sequence (1 .. 256) Of UnavailableGUAMIItem */
typedef struct {
   int                    nbrInstances;  /* 1 .. 256 */
   /* NOTE: Max number of item is changed from 256 to 4 for UnavailableGUAMIItem_t */
   UnavailableGUAMIItem_t  UnavailableGUAMIItem[4];
} UnavailableGUAMIList_t;

/* AMFStatusIndicationIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   UnavailableGUAMIList_t UnavailableGUAMIList;
} AMFStatusIndicationIEs_t;

/* AMFStatusIndication - Sequence Format 2 */
typedef struct {
   AMFStatusIndicationIEs_t protocolIEs;
} AMFStatusIndication_t;

/* ResetAll - Enumerations */
#define RESETALL_RESET_ALL 0
#define RESETALL_EXT_START 1

/* UE-associatedLogicalNG-ConnectionItem - Sequence Format 2 */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned char    aMF_UE_NGAP_ID_Present;
   unsigned int     aMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned char    rAN_UE_NGAP_ID_Present;
   unsigned int     rAN_UE_NGAP_ID;
} UE_associatedLogicalNG_ConnectionItem_t;

/* UE-associatedLogicalNG-ConnectionItemResIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   UE_associatedLogicalNG_ConnectionItem_t UE_associatedLogicalNG_ConnectionItem;
} UE_associatedLogicalNG_ConnectionItemResIEs_t;

/* UE-associatedLogicalNG-ConnectionListRes - Sequence (1 .. 8192) Of UE-associatedLogicalNG-ConnectionItemResIEs */
typedef struct {
   int                                           nbrInstances;  /* 1 .. 8192 */
   /* NOTE: Max number of item is changed from 8192 to 4 for UE_associatedLogicalNG_ConnectionItemResIEs_t */
   UE_associatedLogicalNG_ConnectionItemResIEs_t  ProtocolIE_SingleContainer[4];
} UE_associatedLogicalNG_ConnectionListRes_t;

/* ResetType - Choice */
#define RESETTYPE_CHOICE_NG_INTERFACE       0
#define RESETTYPE_CHOICE_PARTOFNG_INTERFACE 1
#define RESETTYPE_CHOICE_EXT                2
#define RESETTYPE_CHOICE_LAST               2

typedef union {
   /* Enumerates ResetAll with 1 enums */
   unsigned int                                nG_Interface;
   UE_associatedLogicalNG_ConnectionListRes_t  partOfNG_Interface;
} ResetType_Choice_t;

typedef struct {
   unsigned char      Choice_Index;
   ResetType_Choice_t Choices;
} ResetType_t;

/* NGResetIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   unsigned char Cause_Present;
   Cause_t       Cause;
   ResetType_t   ResetType;
} NGResetIEs_t;

/* NGReset - Sequence Format 2 */
typedef struct {
   NGResetIEs_t           protocolIEs;
} NGReset_t;

/* UE-associatedLogicalNG-ConnectionItemResAck - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   unsigned char                           UE_associatedLogicalNG_ConnectionItem_Present;
   UE_associatedLogicalNG_ConnectionItem_t UE_associatedLogicalNG_ConnectionItem;
} UE_associatedLogicalNG_ConnectionItemResAck_t;

/* UE-associatedLogicalNG-ConnectionListResAck - Sequence (1 .. 8192) Of UE-associatedLogicalNG-ConnectionItemResAck */
typedef struct {
   int                                           nbrInstances;  /* 1 .. 8192 */
   /* NOTE: Max number of item is changed from 8192 to 4 for UE_associatedLogicalNG_ConnectionItemResAck_t */
   UE_associatedLogicalNG_ConnectionItemResAck_t  ProtocolIE_SingleContainer[4];
} UE_associatedLogicalNG_ConnectionListResAck_t;

/* NGResetAcknowledgeIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   unsigned char                                 UE_associatedLogicalNG_ConnectionListResAck_Present;
   UE_associatedLogicalNG_ConnectionListResAck_t UE_associatedLogicalNG_ConnectionListResAck;
   unsigned char                                 CriticalityDiagnostics_Present;
   CriticalityDiagnostics_t                      CriticalityDiagnostics;
} NGResetAcknowledgeIEs_t;

/* NGResetAcknowledge - Sequence Format 2 */
typedef struct {
   NGResetAcknowledgeIEs_t protocolIEs;
} NGResetAcknowledge_t;

/* ErrorIndicationIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned char            AMF_UE_NGAP_ID_Present;
   unsigned int             AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned char            RAN_UE_NGAP_ID_Present;
   unsigned int             RAN_UE_NGAP_ID;
   unsigned char            Cause_Present;
   Cause_t                  Cause;
   unsigned char            CriticalityDiagnostics_Present;
   CriticalityDiagnostics_t CriticalityDiagnostics;
} ErrorIndicationIEs_t;

/* ErrorIndication - Sequence Format 2 */
typedef struct {
   ErrorIndicationIEs_t   protocolIEs;
} ErrorIndication_t;

/* SourceRANNodeID - Sequence Format 2 */
typedef struct {
   GlobalRANNodeID_t globalRANNodeID;
   TAI_t             selectedTAI;
} SourceRANNodeID_t;

/* SONInformationRequest - Enumerations */
#define SONINFORMATIONREQUEST_XN_TNL_CONFIGURATION_INFO 0
#define SONINFORMATIONREQUEST_EXT_START                 1

/* XnTLAs - Sequence (1 .. 16) Of TransportLayerAddress */
typedef struct {
   int                     nbrInstances;  /* 1 .. 16 */
   /* NOTE: Max number of item is changed from 16 to 4 for TransportLayerAddress_t */
   TransportLayerAddress_t  TransportLayerAddress[4];
} XnTLAs_t;

/* XnGTP-TLAs - Sequence (1 .. 16) Of TransportLayerAddress */
typedef struct {
   int                     nbrInstances;  /* 1 .. 16 */
   /* NOTE: Max number of item is changed from 16 to 4 for TransportLayerAddress_t */
   TransportLayerAddress_t  TransportLayerAddress[4];
} XnGTP_TLAs_t;

/* XnExtTLA-Item - Sequence Format 2 */
typedef struct {
   /* TransportLayerAddress: BIT STRING (SIZE(1..160)) */
   unsigned char             iPsecTLA_Present;
   TransportLayerAddress_t   iPsecTLA;
   unsigned char             gTP_TLAs_Present;
   XnGTP_TLAs_t              gTP_TLAs;
} XnExtTLA_Item_t;

/* XnExtTLAs - Sequence (1 .. 2) Of XnExtTLA-Item */
typedef struct {
   int             nbrInstances;  /* 1 .. 2 */
   XnExtTLA_Item_t  XnExtTLA_Item[2];
} XnExtTLAs_t;

/* XnTNLConfigurationInfo - Sequence Format 2 */
typedef struct {
   XnTLAs_t         xnTransportLayerAddresses;
   unsigned char    xnExtendedTransportLayerAddresses_Present;
   XnExtTLAs_t      xnExtendedTransportLayerAddresses;
} XnTNLConfigurationInfo_t;

/* SONInformationReply - Sequence Format 2 */
typedef struct {
   unsigned char            xnTNLConfigurationInfo_Present;
   XnTNLConfigurationInfo_t xnTNLConfigurationInfo;
} SONInformationReply_t;

/* SONInformation - Choice */
#define SONINFORMATION_CHOICE_SONINFORMATIONREQUEST 0
#define SONINFORMATION_CHOICE_SONINFORMATIONREPLY   1
#define SONINFORMATION_CHOICE_EXT                   2
#define SONINFORMATION_CHOICE_LAST                  2

typedef union {
   /* Enumerates SONInformationRequest with 1 enums */
   unsigned int           sONInformationRequest;
   SONInformationReply_t  sONInformationReply;
} SONInformation_Choice_t;

typedef struct {
   unsigned char           Choice_Index;
   SONInformation_Choice_t Choices;
} SONInformation_t;

/* SONConfigurationTransfer - Sequence Format 2 */
typedef struct {
   TargetRANNodeID_t        targetRANNodeID;
   SourceRANNodeID_t        sourceRANNodeID;
   SONInformation_t         sONInformation;
   XnTNLConfigurationInfo_t xnTNLConfigurationInfo;
} SONConfigurationTransfer_t;

/* UplinkRANConfigurationTransferIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   unsigned char              SONConfigurationTransferUL_Present;
   SONConfigurationTransfer_t SONConfigurationTransferUL;
} UplinkRANConfigurationTransferIEs_t;

/* UplinkRANConfigurationTransfer - Sequence Format 2 */
typedef struct {
   UplinkRANConfigurationTransferIEs_t protocolIEs;
} UplinkRANConfigurationTransfer_t;

/* DownlinkRANConfigurationTransferIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   unsigned char              SONConfigurationTransferDL_Present;
   SONConfigurationTransfer_t SONConfigurationTransferDL;
} DownlinkRANConfigurationTransferIEs_t;

/* DownlinkRANConfigurationTransfer - Sequence Format 2 */
typedef struct {
   DownlinkRANConfigurationTransferIEs_t protocolIEs;
} DownlinkRANConfigurationTransfer_t;

/* EUTRA-CGIListForWarning - Sequence (1 .. 65535) Of EUTRA-CGI */
typedef struct {
   int         nbrInstances;  /* 1 .. 65535 */
   /* NOTE: Max number of item is changed from 65535 to 4 for EUTRA_CGI_t */
   EUTRA_CGI_t  EUTRA_CGI[4];
} EUTRA_CGIListForWarning_t;

/* NR-CGIListForWarning - Sequence (1 .. 65535) Of NR-CGI */
typedef struct {
   int      nbrInstances;  /* 1 .. 65535 */
   /* NOTE: Max number of item is changed from 65535 to 4 for NR_CGI_t */
   NR_CGI_t  NR_CGI[4];
} NR_CGIListForWarning_t;

/* TAIListForWarning - Sequence (1 .. 65535) Of TAI */
typedef struct {
   int   nbrInstances;  /* 1 .. 65535 */
   /* NOTE: Max number of item is changed from 65535 to 4 for TAI_t */
   TAI_t  TAI[4];
} TAIListForWarning_t;

/* EmergencyAreaIDList - Sequence (1 .. 65535) Of EmergencyAreaID */
typedef struct {
   int               nbrInstances;  /* 1 .. 65535 */
   /* NOTE: Max number of item is changed from 65535 to 4 for unsigned int */
   unsigned int       EmergencyAreaID[4];
} EmergencyAreaIDList_t;

/* WarningAreaList - Choice */
#define WARNINGAREALIST_CHOICE_EUTRA_CGILISTFORWARNING 0
#define WARNINGAREALIST_CHOICE_NR_CGILISTFORWARNING    1
#define WARNINGAREALIST_CHOICE_TAILISTFORWARNING       2
#define WARNINGAREALIST_CHOICE_EMERGENCYAREAIDLIST     3
#define WARNINGAREALIST_CHOICE_EXT                     4
#define WARNINGAREALIST_CHOICE_LAST                    4

typedef union {
   EUTRA_CGIListForWarning_t  eUTRA_CGIListForWarning;
   NR_CGIListForWarning_t     nR_CGIListForWarning;
   TAIListForWarning_t        tAIListForWarning;
   EmergencyAreaIDList_t      emergencyAreaIDList;
} WarningAreaList_Choice_t;

typedef struct {
   unsigned char            Choice_Index;
   WarningAreaList_Choice_t Choices;
} WarningAreaList_t;

/* WarningSecurityInfo - OctString Size 50..50, extendable = 0 */
typedef unsigned char WarningSecurityInfo_t[50];

/* WarningMessageContents - OctString Size 1..9600, extendable = 0 */
typedef struct {
   int length;
   unsigned char content[512];
} WarningMessageContents_t;

/* ConcurrentWarningMessageInd - Enumerations */
#define CONCURRENTWARNINGMESSAGEIND_TRUE      0
#define CONCURRENTWARNINGMESSAGEIND_LAST      0

/* WriteReplaceWarningRequestIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* MessageIdentifier: BIT STRING (SIZE(16..16)) */
   unsigned short                MessageIdentifier;
   /* SerialNumber: BIT STRING (SIZE(16..16)) */
   unsigned short                SerialNumber;
   unsigned char                 WarningAreaList_Present;
   WarningAreaList_t             WarningAreaList;
   /* RepetitionPeriod: INTEGER (0..131071) */
   unsigned int                  RepetitionPeriod;
   /* NumberOfBroadcastsRequested: INTEGER (0..65535) */
   unsigned int                  NumberOfBroadcastsRequested;
   /* WarningType: OCTET STRING (SIZE(2..2)) */
   unsigned char                 WarningType_Present;
   unsigned int                  WarningType;
   unsigned char                 WarningSecurityInfo_Present;
   WarningSecurityInfo_t         WarningSecurityInfo;
   /* DataCodingScheme: BIT STRING (SIZE(8..8)) */
   unsigned char                 DataCodingScheme_Present;
   unsigned char                 DataCodingScheme;
   unsigned char                 WarningMessageContents_Present;
   WarningMessageContents_t      WarningMessageContents;
   /* Enumerates ConcurrentWarningMessageInd with 1 enums */
   unsigned char                 ConcurrentWarningMessageInd_Present;
   unsigned char                 ConcurrentWarningMessageInd;
} WriteReplaceWarningRequestIEs_t;

/* WriteReplaceWarningRequest - Sequence Format 2 */
typedef struct {
   WriteReplaceWarningRequestIEs_t protocolIEs;
} WriteReplaceWarningRequest_t;

/* CellIDBroadcastEUTRA-Item - Sequence Format 2 */
typedef struct {
   EUTRA_CGI_t      eUTRA_CGI;
} CellIDBroadcastEUTRA_Item_t;

/* CellIDBroadcastEUTRA - Sequence (1 .. 65535) Of CellIDBroadcastEUTRA-Item */
typedef struct {
   int                         nbrInstances;  /* 1 .. 65535 */
   /* NOTE: Max number of item is changed from 65535 to 4 for CellIDBroadcastEUTRA_Item_t */
   CellIDBroadcastEUTRA_Item_t  CellIDBroadcastEUTRA_Item[4];
} CellIDBroadcastEUTRA_t;

/* CompletedCellsInTAI-EUTRA-Item - Sequence Format 2 */
typedef struct {
   EUTRA_CGI_t      eUTRA_CGI;
} CompletedCellsInTAI_EUTRA_Item_t;

/* CompletedCellsInTAI-EUTRA - Sequence (1 .. 65535) Of CompletedCellsInTAI-EUTRA-Item */
typedef struct {
   int                              nbrInstances;  /* 1 .. 65535 */
   /* NOTE: Max number of item is changed from 65535 to 4 for CompletedCellsInTAI_EUTRA_Item_t */
   CompletedCellsInTAI_EUTRA_Item_t  CompletedCellsInTAI_EUTRA_Item[4];
} CompletedCellsInTAI_EUTRA_t;

/* TAIBroadcastEUTRA-Item - Sequence Format 2 */
typedef struct {
   TAI_t                       tAI;
   CompletedCellsInTAI_EUTRA_t completedCellsInTAI_EUTRA;
} TAIBroadcastEUTRA_Item_t;

/* TAIBroadcastEUTRA - Sequence (1 .. 65535) Of TAIBroadcastEUTRA-Item */
typedef struct {
   int                      nbrInstances;  /* 1 .. 65535 */
   /* NOTE: Max number of item is changed from 65535 to 4 for TAIBroadcastEUTRA_Item_t */
   TAIBroadcastEUTRA_Item_t  TAIBroadcastEUTRA_Item[4];
} TAIBroadcastEUTRA_t;

/* CompletedCellsInEAI-EUTRA-Item - Sequence Format 2 */
typedef struct {
   EUTRA_CGI_t      eUTRA_CGI;
} CompletedCellsInEAI_EUTRA_Item_t;

/* CompletedCellsInEAI-EUTRA - Sequence (1 .. 65535) Of CompletedCellsInEAI-EUTRA-Item */
typedef struct {
   int                              nbrInstances;  /* 1 .. 65535 */
   /* NOTE: Max number of item is changed from 65535 to 4 for CompletedCellsInEAI_EUTRA_Item_t */
   CompletedCellsInEAI_EUTRA_Item_t  CompletedCellsInEAI_EUTRA_Item[4];
} CompletedCellsInEAI_EUTRA_t;

/* EmergencyAreaIDBroadcastEUTRA-Item - Sequence Format 2 */
typedef struct {
   /* EmergencyAreaID: OCTET STRING (SIZE(3..3)) */
   unsigned int                emergencyAreaID;
   CompletedCellsInEAI_EUTRA_t completedCellsInEAI_EUTRA;
} EmergencyAreaIDBroadcastEUTRA_Item_t;

/* EmergencyAreaIDBroadcastEUTRA - Sequence (1 .. 65535) Of EmergencyAreaIDBroadcastEUTRA-Item */
typedef struct {
   int                                  nbrInstances;  /* 1 .. 65535 */
   /* NOTE: Max number of item is changed from 65535 to 4 for EmergencyAreaIDBroadcastEUTRA_Item_t */
   EmergencyAreaIDBroadcastEUTRA_Item_t  EmergencyAreaIDBroadcastEUTRA_Item[4];
} EmergencyAreaIDBroadcastEUTRA_t;

/* CellIDBroadcastNR-Item - Sequence Format 2 */
typedef struct {
   NR_CGI_t         nR_CGI;
} CellIDBroadcastNR_Item_t;

/* CellIDBroadcastNR - Sequence (1 .. 65535) Of CellIDBroadcastNR-Item */
typedef struct {
   int                      nbrInstances;  /* 1 .. 65535 */
   /* NOTE: Max number of item is changed from 65535 to 4 for CellIDBroadcastNR_Item_t */
   CellIDBroadcastNR_Item_t  CellIDBroadcastNR_Item[4];
} CellIDBroadcastNR_t;

/* CompletedCellsInTAI-NR-Item - Sequence Format 2 */
typedef struct {
   NR_CGI_t         nR_CGI;
} CompletedCellsInTAI_NR_Item_t;

/* CompletedCellsInTAI-NR - Sequence (1 .. 65535) Of CompletedCellsInTAI-NR-Item */
typedef struct {
   int                           nbrInstances;  /* 1 .. 65535 */
   /* NOTE: Max number of item is changed from 65535 to 4 for CompletedCellsInTAI_NR_Item_t */
   CompletedCellsInTAI_NR_Item_t  CompletedCellsInTAI_NR_Item[4];
} CompletedCellsInTAI_NR_t;

/* TAIBroadcastNR-Item - Sequence Format 2 */
typedef struct {
   TAI_t                    tAI;
   CompletedCellsInTAI_NR_t completedCellsInTAI_NR;
} TAIBroadcastNR_Item_t;

/* TAIBroadcastNR - Sequence (1 .. 65535) Of TAIBroadcastNR-Item */
typedef struct {
   int                   nbrInstances;  /* 1 .. 65535 */
   /* NOTE: Max number of item is changed from 65535 to 4 for TAIBroadcastNR_Item_t */
   TAIBroadcastNR_Item_t  TAIBroadcastNR_Item[4];
} TAIBroadcastNR_t;

/* CompletedCellsInEAI-NR-Item - Sequence Format 2 */
typedef struct {
   NR_CGI_t         nR_CGI;
} CompletedCellsInEAI_NR_Item_t;

/* CompletedCellsInEAI-NR - Sequence (1 .. 65535) Of CompletedCellsInEAI-NR-Item */
typedef struct {
   int                           nbrInstances;  /* 1 .. 65535 */
   /* NOTE: Max number of item is changed from 65535 to 4 for CompletedCellsInEAI_NR_Item_t */
   CompletedCellsInEAI_NR_Item_t  CompletedCellsInEAI_NR_Item[4];
} CompletedCellsInEAI_NR_t;

/* EmergencyAreaIDBroadcastNR-Item - Sequence Format 2 */
typedef struct {
   /* EmergencyAreaID: OCTET STRING (SIZE(3..3)) */
   unsigned int             emergencyAreaID;
   CompletedCellsInEAI_NR_t completedCellsInEAI_NR;
} EmergencyAreaIDBroadcastNR_Item_t;

/* EmergencyAreaIDBroadcastNR - Sequence (1 .. 65535) Of EmergencyAreaIDBroadcastNR-Item */
typedef struct {
   int                               nbrInstances;  /* 1 .. 65535 */
   /* NOTE: Max number of item is changed from 65535 to 4 for EmergencyAreaIDBroadcastNR_Item_t */
   EmergencyAreaIDBroadcastNR_Item_t  EmergencyAreaIDBroadcastNR_Item[4];
} EmergencyAreaIDBroadcastNR_t;

/* BroadcastCompletedAreaList - Choice */
#define BROADCASTCOMPLETEDAREALIST_CHOICE_CELLIDBROADCASTEUTRA          0
#define BROADCASTCOMPLETEDAREALIST_CHOICE_TAIBROADCASTEUTRA             1
#define BROADCASTCOMPLETEDAREALIST_CHOICE_EMERGENCYAREAIDBROADCASTEUTRA 2
#define BROADCASTCOMPLETEDAREALIST_CHOICE_CELLIDBROADCASTNR             3
#define BROADCASTCOMPLETEDAREALIST_CHOICE_TAIBROADCASTNR                4
#define BROADCASTCOMPLETEDAREALIST_CHOICE_EMERGENCYAREAIDBROADCASTNR    5
#define BROADCASTCOMPLETEDAREALIST_CHOICE_EXT                           6
#define BROADCASTCOMPLETEDAREALIST_CHOICE_LAST                          6

typedef union {
   CellIDBroadcastEUTRA_t           cellIDBroadcastEUTRA;
   TAIBroadcastEUTRA_t              tAIBroadcastEUTRA;
   EmergencyAreaIDBroadcastEUTRA_t  emergencyAreaIDBroadcastEUTRA;
   CellIDBroadcastNR_t              cellIDBroadcastNR;
   TAIBroadcastNR_t                 tAIBroadcastNR;
   EmergencyAreaIDBroadcastNR_t     emergencyAreaIDBroadcastNR;
} BroadcastCompletedAreaList_Choice_t;

typedef struct {
   unsigned char                       Choice_Index;
   BroadcastCompletedAreaList_Choice_t Choices;
} BroadcastCompletedAreaList_t;

/* WriteReplaceWarningResponseIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* MessageIdentifier: BIT STRING (SIZE(16..16)) */
   unsigned short               MessageIdentifier;
   /* SerialNumber: BIT STRING (SIZE(16..16)) */
   unsigned short               SerialNumber;
   unsigned char                BroadcastCompletedAreaList_Present;
   BroadcastCompletedAreaList_t BroadcastCompletedAreaList;
   unsigned char                CriticalityDiagnostics_Present;
   CriticalityDiagnostics_t     CriticalityDiagnostics;
} WriteReplaceWarningResponseIEs_t;

/* WriteReplaceWarningResponse - Sequence Format 2 */
typedef struct {
   WriteReplaceWarningResponseIEs_t protocolIEs;
} WriteReplaceWarningResponse_t;

/* CancelAllWarningMessages - Enumerations */
#define CANCELALLWARNINGMESSAGES_TRUE      0
#define CANCELALLWARNINGMESSAGES_LAST      0

/* PWSCancelRequestIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* MessageIdentifier: BIT STRING (SIZE(16..16)) */
   unsigned short             MessageIdentifier;
   /* SerialNumber: BIT STRING (SIZE(16..16)) */
   unsigned short             SerialNumber;
   unsigned char              WarningAreaList_Present;
   WarningAreaList_t          WarningAreaList;
   /* Enumerates CancelAllWarningMessages with 1 enums */
   unsigned char              CancelAllWarningMessages_Present;
   unsigned char              CancelAllWarningMessages;
} PWSCancelRequestIEs_t;

/* PWSCancelRequest - Sequence Format 2 */
typedef struct {
   PWSCancelRequestIEs_t  protocolIEs;
} PWSCancelRequest_t;

/* CellIDCancelledEUTRA-Item - Sequence Format 2 */
typedef struct {
   EUTRA_CGI_t      eUTRA_CGI;
   /* NumberOfBroadcasts: INTEGER (0..65535) */
   unsigned int     numberOfBroadcasts;
} CellIDCancelledEUTRA_Item_t;

/* CellIDCancelledEUTRA - Sequence (1 .. 65535) Of CellIDCancelledEUTRA-Item */
typedef struct {
   int                         nbrInstances;  /* 1 .. 65535 */
   /* NOTE: Max number of item is changed from 65535 to 4 for CellIDCancelledEUTRA_Item_t */
   CellIDCancelledEUTRA_Item_t  CellIDCancelledEUTRA_Item[4];
} CellIDCancelledEUTRA_t;

/* CancelledCellsInTAI-EUTRA-Item - Sequence Format 2 */
typedef struct {
   EUTRA_CGI_t      eUTRA_CGI;
   /* NumberOfBroadcasts: INTEGER (0..65535) */
   unsigned int     numberOfBroadcasts;
} CancelledCellsInTAI_EUTRA_Item_t;

/* CancelledCellsInTAI-EUTRA - Sequence (1 .. 65535) Of CancelledCellsInTAI-EUTRA-Item */
typedef struct {
   int                              nbrInstances;  /* 1 .. 65535 */
   /* NOTE: Max number of item is changed from 65535 to 4 for CancelledCellsInTAI_EUTRA_Item_t */
   CancelledCellsInTAI_EUTRA_Item_t  CancelledCellsInTAI_EUTRA_Item[4];
} CancelledCellsInTAI_EUTRA_t;

/* TAICancelledEUTRA-Item - Sequence Format 2 */
typedef struct {
   TAI_t                       tAI;
   CancelledCellsInTAI_EUTRA_t cancelledCellsInTAI_EUTRA;
} TAICancelledEUTRA_Item_t;

/* TAICancelledEUTRA - Sequence (1 .. 65535) Of TAICancelledEUTRA-Item */
typedef struct {
   int                      nbrInstances;  /* 1 .. 65535 */
   /* NOTE: Max number of item is changed from 65535 to 4 for TAICancelledEUTRA_Item_t */
   TAICancelledEUTRA_Item_t  TAICancelledEUTRA_Item[4];
} TAICancelledEUTRA_t;

/* CancelledCellsInEAI-EUTRA-Item - Sequence Format 2 */
typedef struct {
   EUTRA_CGI_t      eUTRA_CGI;
   /* NumberOfBroadcasts: INTEGER (0..65535) */
   unsigned int     numberOfBroadcasts;
} CancelledCellsInEAI_EUTRA_Item_t;

/* CancelledCellsInEAI-EUTRA - Sequence (1 .. 65535) Of CancelledCellsInEAI-EUTRA-Item */
typedef struct {
   int                              nbrInstances;  /* 1 .. 65535 */
   /* NOTE: Max number of item is changed from 65535 to 4 for CancelledCellsInEAI_EUTRA_Item_t */
   CancelledCellsInEAI_EUTRA_Item_t  CancelledCellsInEAI_EUTRA_Item[4];
} CancelledCellsInEAI_EUTRA_t;

/* EmergencyAreaIDCancelledEUTRA-Item - Sequence Format 2 */
typedef struct {
   /* EmergencyAreaID: OCTET STRING (SIZE(3..3)) */
   unsigned int                emergencyAreaID;
   CancelledCellsInEAI_EUTRA_t cancelledCellsInEAI_EUTRA;
} EmergencyAreaIDCancelledEUTRA_Item_t;

/* EmergencyAreaIDCancelledEUTRA - Sequence (1 .. 65535) Of EmergencyAreaIDCancelledEUTRA-Item */
typedef struct {
   int                                  nbrInstances;  /* 1 .. 65535 */
   /* NOTE: Max number of item is changed from 65535 to 4 for EmergencyAreaIDCancelledEUTRA_Item_t */
   EmergencyAreaIDCancelledEUTRA_Item_t  EmergencyAreaIDCancelledEUTRA_Item[4];
} EmergencyAreaIDCancelledEUTRA_t;

/* CellIDCancelledNR-Item - Sequence Format 2 */
typedef struct {
   NR_CGI_t         nR_CGI;
   /* NumberOfBroadcasts: INTEGER (0..65535) */
   unsigned int     numberOfBroadcasts;
} CellIDCancelledNR_Item_t;

/* CellIDCancelledNR - Sequence (1 .. 65535) Of CellIDCancelledNR-Item */
typedef struct {
   int                      nbrInstances;  /* 1 .. 65535 */
   /* NOTE: Max number of item is changed from 65535 to 4 for CellIDCancelledNR_Item_t */
   CellIDCancelledNR_Item_t  CellIDCancelledNR_Item[4];
} CellIDCancelledNR_t;

/* CancelledCellsInTAI-NR-Item - Sequence Format 2 */
typedef struct {
   NR_CGI_t         nR_CGI;
   /* NumberOfBroadcasts: INTEGER (0..65535) */
   unsigned int     numberOfBroadcasts;
} CancelledCellsInTAI_NR_Item_t;

/* CancelledCellsInTAI-NR - Sequence (1 .. 65535) Of CancelledCellsInTAI-NR-Item */
typedef struct {
   int                           nbrInstances;  /* 1 .. 65535 */
   /* NOTE: Max number of item is changed from 65535 to 4 for CancelledCellsInTAI_NR_Item_t */
   CancelledCellsInTAI_NR_Item_t  CancelledCellsInTAI_NR_Item[4];
} CancelledCellsInTAI_NR_t;

/* TAICancelledNR-Item - Sequence Format 2 */
typedef struct {
   TAI_t                    tAI;
   CancelledCellsInTAI_NR_t cancelledCellsInTAI_NR;
} TAICancelledNR_Item_t;

/* TAICancelledNR - Sequence (1 .. 65535) Of TAICancelledNR-Item */
typedef struct {
   int                   nbrInstances;  /* 1 .. 65535 */
   /* NOTE: Max number of item is changed from 65535 to 4 for TAICancelledNR_Item_t */
   TAICancelledNR_Item_t  TAICancelledNR_Item[4];
} TAICancelledNR_t;

/* CancelledCellsInEAI-NR-Item - Sequence Format 2 */
typedef struct {
   NR_CGI_t         nR_CGI;
   /* NumberOfBroadcasts: INTEGER (0..65535) */
   unsigned int     numberOfBroadcasts;
} CancelledCellsInEAI_NR_Item_t;

/* CancelledCellsInEAI-NR - Sequence (1 .. 65535) Of CancelledCellsInEAI-NR-Item */
typedef struct {
   int                           nbrInstances;  /* 1 .. 65535 */
   /* NOTE: Max number of item is changed from 65535 to 4 for CancelledCellsInEAI_NR_Item_t */
   CancelledCellsInEAI_NR_Item_t  CancelledCellsInEAI_NR_Item[4];
} CancelledCellsInEAI_NR_t;

/* EmergencyAreaIDCancelledNR-Item - Sequence Format 2 */
typedef struct {
   /* EmergencyAreaID: OCTET STRING (SIZE(3..3)) */
   unsigned int             emergencyAreaID;
   CancelledCellsInEAI_NR_t cancelledCellsInEAI_NR;
} EmergencyAreaIDCancelledNR_Item_t;

/* EmergencyAreaIDCancelledNR - Sequence (1 .. 65535) Of EmergencyAreaIDCancelledNR-Item */
typedef struct {
   int                               nbrInstances;  /* 1 .. 65535 */
   /* NOTE: Max number of item is changed from 65535 to 4 for EmergencyAreaIDCancelledNR_Item_t */
   EmergencyAreaIDCancelledNR_Item_t  EmergencyAreaIDCancelledNR_Item[4];
} EmergencyAreaIDCancelledNR_t;

/* BroadcastCancelledAreaList - Choice */
#define BROADCASTCANCELLEDAREALIST_CHOICE_CELLIDCANCELLEDEUTRA          0
#define BROADCASTCANCELLEDAREALIST_CHOICE_TAICANCELLEDEUTRA             1
#define BROADCASTCANCELLEDAREALIST_CHOICE_EMERGENCYAREAIDCANCELLEDEUTRA 2
#define BROADCASTCANCELLEDAREALIST_CHOICE_CELLIDCANCELLEDNR             3
#define BROADCASTCANCELLEDAREALIST_CHOICE_TAICANCELLEDNR                4
#define BROADCASTCANCELLEDAREALIST_CHOICE_EMERGENCYAREAIDCANCELLEDNR    5
#define BROADCASTCANCELLEDAREALIST_CHOICE_EXT                           6
#define BROADCASTCANCELLEDAREALIST_CHOICE_LAST                          6

typedef union {
   CellIDCancelledEUTRA_t           cellIDCancelledEUTRA;
   TAICancelledEUTRA_t              tAICancelledEUTRA;
   EmergencyAreaIDCancelledEUTRA_t  emergencyAreaIDCancelledEUTRA;
   CellIDCancelledNR_t              cellIDCancelledNR;
   TAICancelledNR_t                 tAICancelledNR;
   EmergencyAreaIDCancelledNR_t     emergencyAreaIDCancelledNR;
} BroadcastCancelledAreaList_Choice_t;

typedef struct {
   unsigned char                       Choice_Index;
   BroadcastCancelledAreaList_Choice_t Choices;
} BroadcastCancelledAreaList_t;

/* PWSCancelResponseIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* MessageIdentifier: BIT STRING (SIZE(16..16)) */
   unsigned short               MessageIdentifier;
   /* SerialNumber: BIT STRING (SIZE(16..16)) */
   unsigned short               SerialNumber;
   unsigned char                BroadcastCancelledAreaList_Present;
   BroadcastCancelledAreaList_t BroadcastCancelledAreaList;
   unsigned char                CriticalityDiagnostics_Present;
   CriticalityDiagnostics_t     CriticalityDiagnostics;
} PWSCancelResponseIEs_t;

/* PWSCancelResponse - Sequence Format 2 */
typedef struct {
   PWSCancelResponseIEs_t protocolIEs;
} PWSCancelResponse_t;

/* EUTRA-CGIList - Sequence (1 .. 256) Of EUTRA-CGI */
typedef struct {
   int         nbrInstances;  /* 1 .. 256 */
   /* NOTE: Max number of item is changed from 256 to 4 for EUTRA_CGI_t */
   EUTRA_CGI_t  EUTRA_CGI[4];
} EUTRA_CGIList_t;

/* NR-CGIList - Sequence (1 .. 16384) Of NR-CGI */
typedef struct {
   int      nbrInstances;  /* 1 .. 16384 */
   /* NOTE: Max number of item is changed from 16384 to 4 for NR_CGI_t */
   NR_CGI_t  NR_CGI[4];
} NR_CGIList_t;

/* CellIDListForRestart - Choice */
#define CELLIDLISTFORRESTART_CHOICE_EUTRA_CGILISTFORRESTART 0
#define CELLIDLISTFORRESTART_CHOICE_NR_CGILISTFORRESTART    1
#define CELLIDLISTFORRESTART_CHOICE_EXT                     2
#define CELLIDLISTFORRESTART_CHOICE_LAST                    2

typedef union {
   EUTRA_CGIList_t  eUTRA_CGIListforRestart;
   NR_CGIList_t     nR_CGIListforRestart;
} CellIDListForRestart_Choice_t;

typedef struct {
   unsigned char                 Choice_Index;
   CellIDListForRestart_Choice_t Choices;
} CellIDListForRestart_t;

/* TAIListForRestart - Sequence (1 .. 2048) Of TAI */
typedef struct {
   int   nbrInstances;  /* 1 .. 2048 */
   /* NOTE: Max number of item is changed from 2048 to 4 for TAI_t */
   TAI_t  TAI[4];
} TAIListForRestart_t;

/* EmergencyAreaIDListForRestart - Sequence (1 .. 256) Of EmergencyAreaID */
typedef struct {
   int               nbrInstances;  /* 1 .. 256 */
   /* NOTE: Max number of item is changed from 256 to 4 for unsigned int */
   unsigned int       EmergencyAreaID[4];
} EmergencyAreaIDListForRestart_t;

/* PWSRestartIndicationIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   CellIDListForRestart_t          CellIDListForRestart;
   GlobalRANNodeID_t               GlobalRANNodeID;
   TAIListForRestart_t             TAIListForRestart;
   unsigned char                   EmergencyAreaIDListForRestart_Present;
   EmergencyAreaIDListForRestart_t EmergencyAreaIDListForRestart;
} PWSRestartIndicationIEs_t;

/* PWSRestartIndication - Sequence Format 2 */
typedef struct {
   PWSRestartIndicationIEs_t protocolIEs;
} PWSRestartIndication_t;

/* PWSFailedCellIDList - Choice */
#define PWSFAILEDCELLIDLIST_CHOICE_EUTRA_CGI_PWSFAILEDLIST 0
#define PWSFAILEDCELLIDLIST_CHOICE_NR_CGI_PWSFAILEDLIST    1
#define PWSFAILEDCELLIDLIST_CHOICE_EXT                     2
#define PWSFAILEDCELLIDLIST_CHOICE_LAST                    2

typedef union {
   EUTRA_CGIList_t  eUTRA_CGI_PWSFailedList;
   NR_CGIList_t     nR_CGI_PWSFailedList;
} PWSFailedCellIDList_Choice_t;

typedef struct {
   unsigned char                Choice_Index;
   PWSFailedCellIDList_Choice_t Choices;
} PWSFailedCellIDList_t;

/* PWSFailureIndicationIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   PWSFailedCellIDList_t PWSFailedCellIDList;
   GlobalRANNodeID_t     GlobalRANNodeID;
} PWSFailureIndicationIEs_t;

/* PWSFailureIndication - Sequence Format 2 */
typedef struct {
   PWSFailureIndicationIEs_t protocolIEs;
} PWSFailureIndication_t;

/* RoutingID - OctString Size 0..512, extendable = 0 */
typedef struct {
   int length;
   unsigned char content[512];
} RoutingID_t;

/* NRPPa-PDU - OctString Size 0..512, extendable = 0 */
typedef struct {
   int length;
   unsigned char content[512];
} NRPPa_PDU_t;

/* DownlinkUEAssociatedNRPPaTransportIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int     AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int     RAN_UE_NGAP_ID;
   RoutingID_t      RoutingID;
   NRPPa_PDU_t      NRPPa_PDU;
} DownlinkUEAssociatedNRPPaTransportIEs_t;

/* DownlinkUEAssociatedNRPPaTransport - Sequence Format 2 */
typedef struct {
   DownlinkUEAssociatedNRPPaTransportIEs_t protocolIEs;
} DownlinkUEAssociatedNRPPaTransport_t;

/* UplinkUEAssociatedNRPPaTransportIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int     AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int     RAN_UE_NGAP_ID;
   RoutingID_t      RoutingID;
   NRPPa_PDU_t      NRPPa_PDU;
} UplinkUEAssociatedNRPPaTransportIEs_t;

/* UplinkUEAssociatedNRPPaTransport - Sequence Format 2 */
typedef struct {
   UplinkUEAssociatedNRPPaTransportIEs_t protocolIEs;
} UplinkUEAssociatedNRPPaTransport_t;

/* DownlinkNonUEAssociatedNRPPaTransportIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   RoutingID_t   RoutingID;
   NRPPa_PDU_t   NRPPa_PDU;
} DownlinkNonUEAssociatedNRPPaTransportIEs_t;

/* DownlinkNonUEAssociatedNRPPaTransport - Sequence Format 2 */
typedef struct {
   DownlinkNonUEAssociatedNRPPaTransportIEs_t protocolIEs;
} DownlinkNonUEAssociatedNRPPaTransport_t;

/* UplinkNonUEAssociatedNRPPaTransportIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   RoutingID_t   RoutingID;
   NRPPa_PDU_t   NRPPa_PDU;
} UplinkNonUEAssociatedNRPPaTransportIEs_t;

/* UplinkNonUEAssociatedNRPPaTransport - Sequence Format 2 */
typedef struct {
   UplinkNonUEAssociatedNRPPaTransportIEs_t protocolIEs;
} UplinkNonUEAssociatedNRPPaTransport_t;

/* TraceStartIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int      AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int      RAN_UE_NGAP_ID;
   unsigned char     TraceActivation_Present;
   TraceActivation_t TraceActivation;
} TraceStartIEs_t;

/* TraceStart - Sequence Format 2 */
typedef struct {
   TraceStartIEs_t        protocolIEs;
} TraceStart_t;

/* TraceFailureIndicationIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int     AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int     RAN_UE_NGAP_ID;
   unsigned char    NGRANTraceID_Present;
   NGRANTraceID_t   NGRANTraceID;
   unsigned char    Cause_Present;
   Cause_t          Cause;
} TraceFailureIndicationIEs_t;

/* TraceFailureIndication - Sequence Format 2 */
typedef struct {
   TraceFailureIndicationIEs_t protocolIEs;
} TraceFailureIndication_t;

/* DeactivateTraceIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int     AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int     RAN_UE_NGAP_ID;
   unsigned char    NGRANTraceID_Present;
   NGRANTraceID_t   NGRANTraceID;
} DeactivateTraceIEs_t;

/* DeactivateTrace - Sequence Format 2 */
typedef struct {
   DeactivateTraceIEs_t   protocolIEs;
} DeactivateTrace_t;

/* CellTrafficTraceIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int              AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int              RAN_UE_NGAP_ID;
   unsigned char             NGRANTraceID_Present;
   NGRANTraceID_t            NGRANTraceID;
   unsigned char             NGRAN_CGI_Present;
   NGRAN_CGI_t               NGRAN_CGI;
   /* TransportLayerAddress: BIT STRING (SIZE(1..160)) */
   unsigned char             TraceCollectionEntityIPAddress_Present;
   TransportLayerAddress_t   TraceCollectionEntityIPAddress;
} CellTrafficTraceIEs_t;

/* CellTrafficTrace - Sequence Format 2 */
typedef struct {
   CellTrafficTraceIEs_t  protocolIEs;
} CellTrafficTrace_t;

/* LocationReportingControlIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int                   AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int                   RAN_UE_NGAP_ID;
   unsigned char                  LocationReportingRequestType_Present;
   LocationReportingRequestType_t LocationReportingRequestType;
} LocationReportingControlIEs_t;

/* LocationReportingControl - Sequence Format 2 */
typedef struct {
   LocationReportingControlIEs_t protocolIEs;
} LocationReportingControl_t;

/* LocationReportingFailureIndicationIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int     AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int     RAN_UE_NGAP_ID;
   unsigned char    Cause_Present;
   Cause_t          Cause;
} LocationReportingFailureIndicationIEs_t;

/* LocationReportingFailureIndication - Sequence Format 2 */
typedef struct {
   LocationReportingFailureIndicationIEs_t protocolIEs;
} LocationReportingFailureIndication_t;

/* UEPresence - Enumerations */
#define UEPRESENCE_IN        0
#define UEPRESENCE_OUT       1
#define UEPRESENCE_UNKNOWN   2
#define UEPRESENCE_EXT_START 3

/* UEPresenceInAreaOfInterestItem - Sequence Format 2 */
typedef struct {
   /* LocationReportingReferenceID: INTEGER (1..64) */
   unsigned int     locationReportingReferenceID;
   /* Enumerates UEPresence with 3 enums */
   unsigned int     uEPresence;
} UEPresenceInAreaOfInterestItem_t;

/* UEPresenceInAreaOfInterestList - Sequence (1 .. 64) Of UEPresenceInAreaOfInterestItem */
typedef struct {
   int                              nbrInstances;  /* 1 .. 64 */
   /* NOTE: Max number of item is changed from 64 to 4 for UEPresenceInAreaOfInterestItem_t */
   UEPresenceInAreaOfInterestItem_t  UEPresenceInAreaOfInterestItem[4];
} UEPresenceInAreaOfInterestList_t;

/* LocationReportIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int                     AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int                     RAN_UE_NGAP_ID;
   unsigned char                    UserLocationInformation_Present;
   UserLocationInformation_t        UserLocationInformation;
   /* TimeStamp: OCTET STRING (SIZE(4..4)) */
   unsigned char                    TimeStamp_Present;
   unsigned int                     TimeStamp;
   unsigned char                    UEPresenceInAreaOfInterestList_Present;
   UEPresenceInAreaOfInterestList_t UEPresenceInAreaOfInterestList;
   unsigned char                    LocationReportingRequestType_Present;
   LocationReportingRequestType_t   LocationReportingRequestType;
} LocationReportIEs_t;

/* LocationReport - Sequence Format 2 */
typedef struct {
   LocationReportIEs_t    protocolIEs;
} LocationReport_t;

/* UETNLABindingReleaseRequestIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int     AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int     RAN_UE_NGAP_ID;
} UETNLABindingReleaseRequestIEs_t;

/* UETNLABindingReleaseRequest - Sequence Format 2 */
typedef struct {
   UETNLABindingReleaseRequestIEs_t protocolIEs;
} UETNLABindingReleaseRequest_t;

/* UECapabilityInfoIndicationIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int                   AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int                   RAN_UE_NGAP_ID;
   unsigned char                  UERadioCapability_Present;
   UERadioCapability_t            UERadioCapability;
   unsigned char                  UERadioCapabilityForPaging_Present;
   UERadioCapabilityForPaging_t   UERadioCapabilityForPaging;
} UECapabilityInfoIndicationIEs_t;

/* UECapabilityInfoIndication - Sequence Format 2 */
typedef struct {
   UECapabilityInfoIndicationIEs_t protocolIEs;
} UECapabilityInfoIndication_t;

/* UERadioCapabilityCheckRequestIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int          AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned int          RAN_UE_NGAP_ID;
   unsigned char         UERadioCapability_Present;
   UERadioCapability_t   UERadioCapability;
} UERadioCapabilityCheckRequestIEs_t;

/* UERadioCapabilityCheckRequest - Sequence Format 2 */
typedef struct {
   UERadioCapabilityCheckRequestIEs_t protocolIEs;
} UERadioCapabilityCheckRequest_t;

/* IMSVoiceSupportIndicator - Enumerations */
#define IMSVOICESUPPORTINDICATOR_SUPPORTED     0
#define IMSVOICESUPPORTINDICATOR_NOT_SUPPORTED 1
#define IMSVOICESUPPORTINDICATOR_EXT_START     2

/* UERadioCapabilityCheckResponseIEs - Class Instance NGAP-PROTOCOL-IES */
typedef struct {
   /* AMF-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned char              AMF_UE_NGAP_ID_Present;
   unsigned int               AMF_UE_NGAP_ID;
   /* RAN-UE-NGAP-ID: INTEGER (0..4294967295) */
   unsigned char              RAN_UE_NGAP_ID_Present;
   unsigned int               RAN_UE_NGAP_ID;
   /* Enumerates IMSVoiceSupportIndicator with 2 enums */
   unsigned int               IMSVoiceSupportIndicator;
   unsigned char              CriticalityDiagnostics_Present;
   CriticalityDiagnostics_t   CriticalityDiagnostics;
} UERadioCapabilityCheckResponseIEs_t;

/* UERadioCapabilityCheckResponse - Sequence Format 2 */
typedef struct {
   UERadioCapabilityCheckResponseIEs_t protocolIEs;
} UERadioCapabilityCheckResponse_t;
#endif /* LTE_NGAP_IE_H_ */
