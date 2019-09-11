#include "./manual/Test_Aper.h"
#include "./ngap_codes/LTE_NGAP_TST.h"
#include <pthread.h>

int sctp_client = -1; // make it global so that other modules can see it

extern int G_coverage_test;
extern unsigned int G_choice_test_step;
extern unsigned int G_choice_test_id  ;
extern unsigned int G_nbr_test_fail   ;
extern unsigned int G_log_info        ;
extern unsigned int G_nbr_test_pass   ;

typedef struct {
	struct {
		int ii;
		char cc;
	} _s1;

	union {
		int ff;
		char cc;
	} _u1;
	int kk;
} sss;

// linux-vm2:/workings/workspace_c/asn_codec_with_lib # lcov -b ./s1ap_15_codes -c -d ./Debug/ -o base1.info
// linux-vm2:/workings/workspace_c/asn_codec_with_lib # genhtml base1.info -o base1

int main()
{
	int ii;
	FILE *ftst = fopen("ngap_src_test.log", "wt");

	sss s1;
	s1._s1.cc = 'l';

#ifdef _SCTP_CAP_ON_

	int sctp_server_port = 38412;
	char *sctp_srv_ip = "192.168.42.129";

	int ret;
	pthread_t sctp_svr_thread;
	SctpServerPar sctp_server_par;

	//Create SCTP server and client if capture is required
	{
		// SCTP Server
		sctp_server_par.server_addr = NULL; // ANY is used
		sctp_server_par.server_port = sctp_server_port;
		sctp_server_par.running     = 1;

		ret = pthread_create(&sctp_svr_thread, NULL, SctpServerEchoThread, &sctp_server_par);
		if (ret) {
			printf(">> [ERROR] Sctp server thread creation failed: ret = %d\n", ret);
			return 1;
		}

		// Create client
		sleep(1); // wait server setup
		sctp_client = CreateSctpSock(sctp_srv_ip, sctp_server_port);
		if (sctp_client < 0) {
			fclose(ftst);
			sctp_server_par.running = 0;

			printf(">> [INFO ] Kill sctp server thread...\n");
			pthread_join(sctp_svr_thread, NULL);
			return 2;
		}
	}

	sleep(1);
#endif
	for (ii = 1; ii < 2; ii++) {
		printf(">> [INFO ] Choice bunch %d ...\n", ii);
		//G_choice_test_step = G_choice_test_id / 150;
		G_choice_test_step = ii / 150;
		G_choice_test_id = ii;
		fprintf(ftst, "\n======================== Round %d =====================\n", ii);
		TestAll(ftst, 1);
	}

#ifdef _SCTP_CAP_ON_
	//close server and client
	{
		SendToSctpServer(sctp_client, (unsigned char*)"Bye", 3, 60);
		close(sctp_client);
		printf(">> [INFO ] Stop sctp server thread...\n");
		pthread_join(sctp_svr_thread, NULL);
	}
#endif

	fclose(ftst);
	printf(" >> %d Test OK, %d Test failed.\n", G_nbr_test_pass, G_nbr_test_fail);
	return 0;
}

