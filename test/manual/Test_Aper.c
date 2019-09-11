
#include <memory.h>
#include "Test_Aper.h"
#include <sys/time.h>

#include "../ngap_codes/LTE_NGAP_TST.h"

int TestAll(FILE *fp, int run_times) {
	/* TEST HandoverRequest */
	//LTE_APER_TST_HandoverRequest(fp, run_times);

	/* TEST HandoverRequestAcknowledge */
	LTE_APER_TST_HandoverRequestAcknowledge(fp, run_times);

#if 0
	LTE_APER_TST_PDUSessionResourceSetupRequest(fp, run_times);

	LTE_APER_TST_PDUSessionResourceSetupResponse(fp, run_times);

	LTE_APER_TST_PDUSessionResourceReleaseCommand(fp, run_times);

	LTE_APER_TST_PDUSessionResourceReleaseResponse(fp, run_times);

	LTE_APER_TST_PDUSessionResourceModifyRequest(fp, run_times);

	LTE_APER_TST_PDUSessionResourceModifyResponse(fp, run_times);

	LTE_APER_TST_PDUSessionResourceNotify(fp, run_times);

	LTE_APER_TST_PDUSessionResourceModifyIndication(fp, run_times);

	LTE_APER_TST_PDUSessionResourceModifyConfirm(fp, run_times);

	LTE_APER_TST_InitialContextSetupRequest(fp, run_times);

	LTE_APER_TST_InitialContextSetupResponse(fp, run_times);

	LTE_APER_TST_InitialContextSetupFailure(fp, run_times);

	LTE_APER_TST_UEContextReleaseRequest(fp, run_times);

	LTE_APER_TST_UEContextReleaseCommand(fp, run_times);

	LTE_APER_TST_UEContextReleaseComplete(fp, run_times);

	LTE_APER_TST_UEContextModificationRequest(fp, run_times);

	LTE_APER_TST_UEContextModificationResponse(fp, run_times);

	LTE_APER_TST_UEContextModificationFailure(fp, run_times);

	LTE_APER_TST_HandoverRequired(fp, run_times);

	LTE_APER_TST_HandoverCommand(fp, run_times);

	LTE_APER_TST_HandoverPreparationFailure(fp, run_times);

	LTE_APER_TST_HandoverRequest(fp, run_times);

	LTE_APER_TST_HandoverRequestAcknowledge(fp, run_times);

	LTE_APER_TST_HandoverFailure(fp, run_times);

	LTE_APER_TST_HandoverNotify(fp, run_times);

	LTE_APER_TST_PathSwitchRequest(fp, run_times);

	LTE_APER_TST_PathSwitchRequestAcknowledge(fp, run_times);

	LTE_APER_TST_PathSwitchRequestFailure(fp, run_times);

	LTE_APER_TST_HandoverCancel(fp, run_times);

	LTE_APER_TST_HandoverCancelAcknowledge(fp, run_times);

	LTE_APER_TST_UplinkRANStatusTransfer(fp, run_times);

	LTE_APER_TST_DownlinkRANStatusTransfer(fp, run_times);

	LTE_APER_TST_Paging(fp, run_times);

	LTE_APER_TST_InitialUEMessage(fp, run_times);

	LTE_APER_TST_DownlinkNASTransport(fp, run_times);

	LTE_APER_TST_UplinkNASTransport(fp, run_times);

	LTE_APER_TST_NASNonDeliveryIndication(fp, run_times);

	LTE_APER_TST_RerouteNASRequest(fp, run_times);

	LTE_APER_TST_NGSetupRequest(fp, run_times);

	LTE_APER_TST_NGSetupResponse(fp, run_times);

	LTE_APER_TST_NGSetupFailure(fp, run_times);

	LTE_APER_TST_RANConfigurationUpdate(fp, run_times);

	LTE_APER_TST_RANConfigurationUpdateAcknowledge(fp, run_times);

	LTE_APER_TST_RANConfigurationUpdateFailure(fp, run_times);

	LTE_APER_TST_AMFConfigurationUpdate(fp, run_times);

	LTE_APER_TST_AMFConfigurationUpdateAcknowledge(fp, run_times);

	LTE_APER_TST_AMFConfigurationUpdateFailure(fp, run_times);

	LTE_APER_TST_AMFStatusIndication(fp, run_times);

	LTE_APER_TST_NGReset(fp, run_times);

	LTE_APER_TST_NGResetAcknowledge(fp, run_times);

	LTE_APER_TST_ErrorIndication(fp, run_times);

	LTE_APER_TST_UplinkRANConfigurationTransfer(fp, run_times);

	LTE_APER_TST_DownlinkRANConfigurationTransfer(fp, run_times);

	LTE_APER_TST_WriteReplaceWarningRequest(fp, run_times);

	LTE_APER_TST_WriteReplaceWarningResponse(fp, run_times);

	LTE_APER_TST_PWSCancelRequest(fp, run_times);

	LTE_APER_TST_PWSCancelResponse(fp, run_times);

	LTE_APER_TST_PWSRestartIndication(fp, run_times);

	LTE_APER_TST_PWSFailureIndication(fp, run_times);

	LTE_APER_TST_DownlinkUEAssociatedNRPPaTransport(fp, run_times);

	LTE_APER_TST_UplinkUEAssociatedNRPPaTransport(fp, run_times);

	LTE_APER_TST_DownlinkNonUEAssociatedNRPPaTransport(fp, run_times);

	LTE_APER_TST_UplinkNonUEAssociatedNRPPaTransport(fp, run_times);

	LTE_APER_TST_TraceStart(fp, run_times);

	LTE_APER_TST_TraceFailureIndication(fp, run_times);

	LTE_APER_TST_DeactivateTrace(fp, run_times);

	LTE_APER_TST_CellTrafficTrace(fp, run_times);

	LTE_APER_TST_LocationReportingControl(fp, run_times);

	LTE_APER_TST_LocationReportingFailureIndication(fp, run_times);

	LTE_APER_TST_LocationReport(fp, run_times);

	LTE_APER_TST_UETNLABindingReleaseRequest(fp, run_times);

	LTE_APER_TST_UECapabilityInfoIndication(fp, run_times);

	LTE_APER_TST_UERadioCapabilityCheckRequest(fp, run_times);

	LTE_APER_TST_UERadioCapabilityCheckResponse(fp, run_times);
#endif


#if 0
LTE_APER_TST_HandoverRequired(fp, run_times);

/* TEST HandoverCommand */
LTE_APER_TST_HandoverCommand(fp, run_times);

/* TEST HandoverPreparationFailure */
LTE_APER_TST_HandoverPreparationFailure(fp, run_times);

/* TEST HandoverRequest */
LTE_APER_TST_HandoverRequest(fp, run_times);

/* TEST HandoverRequestAcknowledge */
LTE_APER_TST_HandoverRequestAcknowledge(fp, run_times);

/* TEST HandoverFailure */
LTE_APER_TST_HandoverFailure(fp, run_times);

/* TEST HandoverNotify */
LTE_APER_TST_HandoverNotify(fp, run_times);

/* TEST PathSwitchRequest */
LTE_APER_TST_PathSwitchRequest(fp, run_times);

/* TEST PathSwitchRequestAcknowledge */
LTE_APER_TST_PathSwitchRequestAcknowledge(fp, run_times);

/* TEST PathSwitchRequestFailure */
LTE_APER_TST_PathSwitchRequestFailure(fp, run_times);

/* TEST HandoverCancel */
LTE_APER_TST_HandoverCancel(fp, run_times);

/* TEST HandoverCancelAcknowledge */
LTE_APER_TST_HandoverCancelAcknowledge(fp, run_times);

/* TEST E-RABSetupRequest */
LTE_APER_TST_E_RABSetupRequest(fp, run_times);

/* TEST E-RABSetupResponse */
LTE_APER_TST_E_RABSetupResponse(fp, run_times);

/* TEST E-RABModifyRequest */
LTE_APER_TST_E_RABModifyRequest(fp, run_times);

/* TEST E-RABModifyResponse */
LTE_APER_TST_E_RABModifyResponse(fp, run_times);

/* TEST E-RABReleaseCommand */
LTE_APER_TST_E_RABReleaseCommand(fp, run_times);

/* TEST E-RABReleaseResponse */
LTE_APER_TST_E_RABReleaseResponse(fp, run_times);

/* TEST E-RABReleaseIndication */
LTE_APER_TST_E_RABReleaseIndication(fp, run_times);

/* TEST InitialContextSetupRequest */
LTE_APER_TST_InitialContextSetupRequest(fp, run_times);

/* TEST InitialContextSetupResponse */
LTE_APER_TST_InitialContextSetupResponse(fp, run_times);

/* TEST InitialContextSetupFailure */
LTE_APER_TST_InitialContextSetupFailure(fp, run_times);

/* TEST Paging */
LTE_APER_TST_Paging(fp, run_times);

/* TEST UEContextReleaseRequest */
LTE_APER_TST_UEContextReleaseRequest(fp, run_times);

/* TEST UEContextReleaseCommand */
LTE_APER_TST_UEContextReleaseCommand(fp, run_times);

/* TEST UEContextReleaseComplete */
LTE_APER_TST_UEContextReleaseComplete(fp, run_times);

/* TEST UEContextModificationRequest */
LTE_APER_TST_UEContextModificationRequest(fp, run_times);

/* TEST UEContextModificationResponse */
LTE_APER_TST_UEContextModificationResponse(fp, run_times);

/* TEST UEContextModificationFailure */
LTE_APER_TST_UEContextModificationFailure(fp, run_times);

/* TEST UERadioCapabilityMatchRequest */
LTE_APER_TST_UERadioCapabilityMatchRequest(fp, run_times);

/* TEST UERadioCapabilityMatchResponse */
LTE_APER_TST_UERadioCapabilityMatchResponse(fp, run_times);

/* TEST DownlinkNASTransport */
LTE_APER_TST_DownlinkNASTransport(fp, run_times);

/* TEST InitialUEMessage */
LTE_APER_TST_InitialUEMessage(fp, run_times);

/* TEST UplinkNASTransport */
LTE_APER_TST_UplinkNASTransport(fp, run_times);

/* TEST NASNonDeliveryIndication */
LTE_APER_TST_NASNonDeliveryIndication(fp, run_times);

LTE_APER_TST_RerouteNASRequest(fp, run_times);

/* TEST Reset */
LTE_APER_TST_Reset(fp, run_times);

/* TEST ResetAcknowledge */
LTE_APER_TST_ResetAcknowledge(fp, run_times);

/* TEST ErrorIndication */
LTE_APER_TST_ErrorIndication(fp, run_times);

/* TEST S1SetupRequest */
LTE_APER_TST_S1SetupRequest(fp, run_times);

/* TEST S1SetupResponse */
LTE_APER_TST_S1SetupResponse(fp, run_times);

/* TEST S1SetupFailure */
LTE_APER_TST_S1SetupFailure(fp, run_times);

/* TEST ENBConfigurationUpdate */
LTE_APER_TST_ENBConfigurationUpdate(fp, run_times);

/* TEST ENBConfigurationUpdateAcknowledge */
LTE_APER_TST_ENBConfigurationUpdateAcknowledge(fp, run_times);

/* TEST ENBConfigurationUpdateFailure */
LTE_APER_TST_ENBConfigurationUpdateFailure(fp, run_times);

/* TEST MMEConfigurationUpdate */
LTE_APER_TST_MMEConfigurationUpdate(fp, run_times);

/* TEST MMEConfigurationUpdateAcknowledge */
LTE_APER_TST_MMEConfigurationUpdateAcknowledge(fp, run_times);

/* TEST MMEConfigurationUpdateFailure */
LTE_APER_TST_MMEConfigurationUpdateFailure(fp, run_times);

/* TEST DownlinkS1cdma2000tunneling */
LTE_APER_TST_DownlinkS1cdma2000tunnelling(fp, run_times);

/* TEST UplinkS1cdma2000tunneling */
LTE_APER_TST_UplinkS1cdma2000tunnelling(fp, run_times);

/* TEST UECapabilityInfoIndication */
LTE_APER_TST_UECapabilityInfoIndication(fp, run_times);

/* TEST ENBStatusTransfer */
LTE_APER_TST_ENBStatusTransfer(fp, run_times);

/* TEST MMEStatusTransfer */
LTE_APER_TST_MMEStatusTransfer(fp, run_times);

/* TEST TraceStart */
LTE_APER_TST_TraceStart(fp, run_times);

/* TEST TraceFailureIndication */
LTE_APER_TST_TraceFailureIndication(fp, run_times);

/* TEST DeactivateTrace */
LTE_APER_TST_DeactivateTrace(fp, run_times);

/* TEST CellTrafficTrace */
LTE_APER_TST_CellTrafficTrace(fp, run_times);

/* TEST LocationReportingControl */
LTE_APER_TST_LocationReportingControl(fp, run_times);

/* TEST LocationReportingFailureIndication */
LTE_APER_TST_LocationReportingFailureIndication(fp, run_times);

/* TEST LocationReport */
LTE_APER_TST_LocationReport(fp, run_times);

/* TEST OverloadStart */
LTE_APER_TST_OverloadStart(fp, run_times);

/* TEST OverloadStop */
LTE_APER_TST_OverloadStop(fp, run_times);

/* TEST WriteReplaceWarningRequest */
LTE_APER_TST_WriteReplaceWarningRequest(fp, run_times);

/* TEST WriteReplaceWarningResponse */
LTE_APER_TST_WriteReplaceWarningResponse(fp, run_times);

/* TEST ENBDirectInformationTransfer */
LTE_APER_TST_ENBDirectInformationTransfer(fp, run_times);

/* TEST MMEDirectInformationTransfer */
LTE_APER_TST_MMEDirectInformationTransfer(fp, run_times);

/* TEST ENBConfigurationTransfer */
LTE_APER_TST_ENBConfigurationTransfer(fp, run_times);

/* TEST MMEConfigurationTransfer */
LTE_APER_TST_MMEConfigurationTransfer(fp, run_times);

/* TEST KillRequest */
LTE_APER_TST_KillRequest(fp, run_times);

/* TEST KillResponse */
LTE_APER_TST_KillResponse(fp, run_times);

LTE_APER_TST_PWSRestartIndication(fp, run_times);

LTE_APER_TST_PWSFailureIndication(fp, run_times);

/* TEST DownlinkUEAssociatedLPPaTransport */
LTE_APER_TST_DownlinkUEAssociatedLPPaTransport(fp, run_times);

/* TEST UplinkUEAssociatedLPPaTransport */
LTE_APER_TST_UplinkUEAssociatedLPPaTransport(fp, run_times);

/* TEST DownlinkNonUEAssociatedLPPaTransport */
LTE_APER_TST_DownlinkNonUEAssociatedLPPaTransport(fp, run_times);

/* TEST UplinkNonUEAssociatedLPPaTransport */
LTE_APER_TST_UplinkNonUEAssociatedLPPaTransport(fp, run_times);

LTE_APER_TST_E_RABModificationIndication(fp, run_times);
LTE_APER_TST_E_RABModificationConfirm(fp, run_times);
LTE_APER_TST_UEContextModificationIndication(fp, run_times);
LTE_APER_TST_UEContextModificationConfirm(fp, run_times);
LTE_APER_TST_UEContextSuspendRequest(fp, run_times);
LTE_APER_TST_UEContextSuspendResponse(fp, run_times);
LTE_APER_TST_UEContextResumeRequest(fp, run_times);
LTE_APER_TST_UEContextResumeResponse(fp, run_times);
LTE_APER_TST_UEContextResumeFailure(fp, run_times);
LTE_APER_TST_ConnectionEstablishmentIndication(fp, run_times);
LTE_APER_TST_RetrieveUEInformation(fp, run_times);
LTE_APER_TST_UEInformationTransfer(fp, run_times);
LTE_APER_TST_ENBCPRelocationIndication(fp, run_times);
LTE_APER_TST_MMECPRelocationIndication(fp, run_times);

#endif

return 0;
}

#ifdef _SCTP_CAP_ON_
int CreateSctpSock(char *server, int port) {
	int connSock, ret, on = 1;
	struct sockaddr_in servaddr;
    struct sctp_initmsg initmsg;
    struct sctp_event_subscribe events;

	connSock = socket( AF_INET, SOCK_STREAM, IPPROTO_SCTP );

	if(connSock == -1) {
		printf(" >> CreateSctpSock: Error creating socket.\n");
		return -1;
	}
	memset( &initmsg, 0, sizeof(initmsg) );
	initmsg.sinit_num_ostreams = 2;
	initmsg.sinit_max_instreams = 2;
	initmsg.sinit_max_attempts = 4;
	ret = setsockopt( connSock, IPPROTO_SCTP, SCTP_INITMSG,
			&initmsg, sizeof(initmsg) );

	if (ret) {
		printf(" >> CreateSctpSock: Error setting socket option SCTP_INITMSG.\n");
		close(connSock);
		return -3;
	}

	/* set reuse addr */
	if(setsockopt(connSock, SOL_SOCKET, SO_REUSEADDR, &on, sizeof(on)) != 0)
	{
		printf(" >> CreateSctpSock: Error setting socket option SO_REUSEADDR.\n");
		close(connSock);
	    return -1;
	}


	/* Enable receipt of SCTP Snd/Rcv Data via sctp_recvmsg */
	memset( (void *)&events, 0, sizeof(events) );
	events.sctp_data_io_event = 1;
	ret = setsockopt( connSock, IPPROTO_SCTP, SCTP_EVENTS,
	(const void *)&events, sizeof(events) );
	if (ret) {
			printf(" >> CreateSctpSock: Error setting socket option SCTP_EVENTS.\n");
			close(connSock);
			return -3;
	}
	bzero( (void *)&servaddr, sizeof(servaddr) );
	servaddr.sin_family = AF_INET;
	servaddr.sin_port = htons(port);
	servaddr.sin_addr.s_addr = inet_addr(server);

	ret = connect( connSock, (struct sockaddr *)&servaddr, sizeof(servaddr) );

	if(ret == -1) {
		printf(" >> CreateSctpSock: Error connecting server.\n");
		close(connSock);
		return -2;
	}

	return connSock;
}

// wrapper that is used to replace PrintBufferToFile
int SendBufferToServer(FILE *fp, unsigned char *buff, int len_ret) {
	return SendToSctpServer(sctp_client, buff, len_ret, SCTP_PPID);
}

// ppid = 18 (for S1AP), 60 (NGAP)
int SendToSctpServer(int connSock, unsigned char *msg_buff, int msg_len, int ppid) {
	int ret, flags;
	char buffer[4096];
	struct sctp_sndrcvinfo sndrcvinfo;

	if (msg_len <= 0) return 0;

	/*
	 int sctp_sendmsg(int sd, const void * msg, size_t len,
	                        struct sockaddr *to, socklen_t tolen,
	                        uint32_t ppid, uint32_t flags,
	                        uint16_t stream_no, uint32_t timetolive,
	                        uint32_t context);
    */
    ret = sctp_sendmsg( connSock, (void *)msg_buff, msg_len,
                       NULL, 0, htonl(ppid), 0, 1, 0, 0 );

    if (ret < 0) {
    	printf(" >> SendToSctpServer: Error sending message: Len = %d, ret = %d\n", msg_len, ret);
    	return -1;
    }

    ret = sctp_recvmsg( connSock, buffer, sizeof(buffer),
                        (struct sockaddr *)NULL, 0, &sndrcvinfo, &flags );
    if (ret < 0) {
    	printf(" >> SendToSctpServer: Error waiting for reply message.\n");
    	return -2;
    }

    usleep(10000);

    return ret;
}

void* SctpServerEchoThread(void *par) {
	  int listenSock, connSock, ret, in , flags;
	  struct sockaddr_in servaddr;
	  struct sockaddr_in client_addr;
	  struct sctp_initmsg initmsg;
	  struct sctp_sndrcvinfo sndrcvinfo;
	  struct sctp_event_subscribe events;

	  SctpServerPar *sctp_par = (SctpServerPar*)par;
	  char buffer[SCTP_BUFFER_LEN];
	  unsigned int addr_len = sizeof(client_addr);

	  int client_ip;
	  int port = sctp_par->server_port;
	  char reply_msg[] = "OK OK OK";
	  fd_set rfds, read_fds;
	  struct timeval tv;
	  int fdmax;


	  FD_ZERO(&rfds);

	  //* Wait up to five seconds.
	  tv.tv_sec = 2;
	  tv.tv_usec = 0;

	  listenSock = socket( AF_INET, SOCK_STREAM, IPPROTO_SCTP );
	  if (listenSock < 0) {
		  printf(" >> SctpServerEchoThread: Error creating socket.\n");
		  return NULL;
	  }

	  bzero( (void *)&servaddr, sizeof(servaddr) );
	  servaddr.sin_family = AF_INET;
	  servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
	  //servaddr.sin_addr.s_addr = inet_addr( "127.0.0.1" );
	  servaddr.sin_port = htons(port);

	  ret = bind( listenSock, (struct sockaddr *)&servaddr, sizeof(servaddr) );
	  if (ret) {
		  printf(" >> SctpServerEchoThread: Error bind().\n");
		  close(listenSock);
		  return NULL;
	  }

	  /* Specify that a maximum of 5 streams will be available per socket */
	  memset( &initmsg, 0, sizeof(initmsg) );
	  initmsg.sinit_num_ostreams  = 2;
	  initmsg.sinit_max_instreams = 2;
	  initmsg.sinit_max_attempts  = 4;
	  ret = setsockopt( listenSock, IPPROTO_SCTP, SCTP_INITMSG,
	                     &initmsg, sizeof(initmsg) );

	  if (ret) {
		  printf(" >> SctpServerEchoThread: Error setting socket option.\n");
		  close(listenSock);
		  return NULL;
	  }

	  /* Enable receipt of SCTP Snd/Rcv Data via sctp_recvmsg */
	  memset( (void *)&events, 0, sizeof(events) );
	  events.sctp_data_io_event = 1;
	  ret = setsockopt( listenSock, IPPROTO_SCTP, SCTP_EVENTS,
			  (const void *)&events, sizeof(events) );
	  if (ret) {
		  printf(" >> CreateSctpSock: Error setting socket option SCTP_EVENTS.\n");
		  close(listenSock);
		  return NULL;
	  }

	  ret = listen( listenSock, 5 );
	  if (ret) {
		  printf(" >> SctpServerEchoThread: Error Listen().\n");
		  close(listenSock);
		  return NULL;
	  }

	  // Main loop to wait for connection and read message.
	  FD_SET(listenSock, &rfds);
	  fdmax = listenSock + 1;

	  while(sctp_par->running) {

		  bzero(buffer, MAX_BUFFER + 1);
		  // socket to aaa (from either hss or pdg)

		  read_fds = rfds;
		  ret = select(fdmax, &read_fds, NULL, NULL, &tv);
		  if (ret < 0 ) {
		     printf(" >> SctpServerEchoThread:  select() failed !\n");
		     close(listenSock);
		     return NULL;
		  }
		  else if (ret == 0) {
			  continue; // nothing happens before timeout
		  }

		  printf(">> SctpServerEchoThread: new connection ...\n");

		  memset(&client_addr, 0, addr_len);
		  connSock = accept( listenSock, (struct sockaddr *)&client_addr, &addr_len);
		  if(connSock == -1) {
			  printf(" >> SctpServerEchoThread: Error accept().\n");
			  close(listenSock);
			  return NULL;
		  }
		  else {
			  client_ip = ntohl(client_addr.sin_addr.s_addr);

			  printf(">> SctpServerEchoThread: Info - New client connected from %d.%d.%d.%d:%d ...\n",
					   (client_ip >> 24)&0xff, (client_ip >> 16)&0xff, (client_ip >> 8)&0xff,(client_ip)&0xff,
					    ntohs(client_addr.sin_port));

			  while (1) {
				  in = sctp_recvmsg( connSock, buffer, sizeof(buffer),
						  (struct sockaddr *)NULL, 0, &sndrcvinfo, &flags );
				  if (in > 0) {
					  ret = sctp_sendmsg( connSock, (void *)reply_msg, (size_t)strlen(reply_msg), NULL, 0,  htonl(SCTP_PPID), 0, 1, 0, 0 );
					  //ret = sctp_sendmsg( connSock, (void *)buffer, in, NULL, 0,  htonl(18), 0, 1, 0, 0 );
					  // Check if exit instruction is received
					  if (memcmp(buffer, "Bye", 3) == 0) {
						  printf(">> SctpServerEchoThread: Info - Client %d closed as instructed!\n", connSock);
						  close(connSock);
						  connSock = -100;
						  break;
					  }
				  }
			  }
		  }

		  if (connSock == -100) {
			  break;
		  }
	  }

	  printf(">> SctpServerEchoThread: Info - Exit with status %d !\n", sctp_par->running);

	  close(listenSock);
	  return NULL;
}

#endif

