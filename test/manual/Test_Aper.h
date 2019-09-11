#ifndef _APER_TEST_HDR_
#define _APER_TEST_HDR_

#include "../ngap_codes/LTE_NGAP_IE.h"
#include "../ngap_codes/LTE_NGAP_Enc.h"
#include <string.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <memory.h>

//#define _SCTP_CAP_ON_

#ifdef _SCTP_CAP_ON_
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <netinet/sctp.h>
#include <arpa/inet.h>
#define MAX_BUFFER 1024
#define MY_PORT_NUM 12905 /* This can be changed to suit the need and should be same in server and client*/
#define TEST_BUFF_LEN 4000

#define SCTP_PPID 60

#endif

int TestAll(FILE *fp, int n);



#ifdef _SCTP_CAP_ON_

//Add support of tunnel encoded buffer to SCTP server, in order to wireshark it for testing purpose.

typedef struct _server_par {
	char * server_addr;
	int    server_port;
	int    running;
} SctpServerPar;


#define SCTP_BUFFER_LEN 4096
int CreateSctpSock(char *server, int port);
int SendToSctpServer(int sock, unsigned char *msg_buff, int msg_len, int ppid);

void* SctpServerEchoThread(void *par);

// Wrapper to replace PrintBufferToFile() call, need to replace all PrintBufferToFile to SendBufferToServer
extern int sctp_client;
int SendBufferToServer(FILE *fp, unsigned char *buff, int len_ret);

#else

// disable SCTP sending for Tests.
#define SendBufferToServer(a,b,c)

#endif

#endif
