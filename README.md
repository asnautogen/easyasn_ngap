# EasyAsn

## Features
1. Easy to use (that is why we call it __EasyAsn__)
2. Automatically generate codec source codes (C style only for the moment) for 3GPP NGAP, S1AP, X2AP, XNAP etc.
3. Automatically generate dummy test source codes
4. Automatically generate wireshark-like message dumpping codes (for trouble-shootings)

## Quick Start
0. Prerequisite
   >> Any Linux style system with gcc 4.3.0 or above.
   
1. Clone project to local folder, saying /workings/tmp/easyasn_ngap
  
   __NOTE__: Do not change the sub folders' structure.

2. Generate example codec using the shipped tool __asn_aper_gen_v125__
```Bash
   linux-vm2:/ # cd /workings/tmp/easyasn_ngap/   
   linux-vm2:/workings/tmp/easyasn_ngap # ls   
   asn_aper_gen_v125  ngap_asn  README  test   
   linux-vm2:/workings/tmp/easyasn_ngap # ./asn_aper_gen_v125 NGAP ./ngap_asn/ngap-class-0.8.0.asn ./ngap_asn/ngap-const-0.8.0.asn ./ngap_asn/ngap-main-1.0.0.asn LTE_ ./test/ngap_codes/
   ```

3. Check that codes shall be generated in sub-folder __test/ngap_codes__

```Bash
   linux-vm2:/workings/tmp/easyasn_ngap # ls test/ngap_codes/
   LTE_NGAP_Dec.c  LTE_NGAP_Dec.h  LTE_NGAP_DISP.c  LTE_NGAP_DISP.h  LTE_NGAP_Enc.c  LTE_NGAP_Enc.h  LTE_NGAP_IE.h  LTE_NGAP_TST.c  LTE_NGAP_TST.h
```

4. Build test executable __ngap_code_tst__ based on the generated codes
```Bash 
   linux-vm2:/workings/tmp/easyasn_ngap # cd test/release/   
   linux-vm2:/workings/tmp/easyasn_ngap/test/release # make clean   
   linux-vm2:/workings/tmp/easyasn_ngap/test/release # make
   Building file: ../ngap_codes/LTE_NGAP_DISP.c   
   Invoking: GCC C Compiler   
   gcc -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"ngap_codes/LTE_NGAP_DISP.d" -MT"ngap_codes/LTE_NGAP_DISP.d" -o "ngap_codes/LTE_NGAP_DISP.o" "../ngap_codes/LTE_NGAP_DISP.c"   
   ...   
   Finished building target: ngap_code_tst
```

5. Run the test executable and generate a log file
```Bash
   linux-vm2:/workings/tmp/easyasn_ngap/test/release # ls   
   makefile  manual  ngap_codes  ngap_code_tst   
   linux-vm2:/workings/tmp/easyasn_ngap/test/release # ./ngap_code_tst    
   >> [INFO ] Choice bunch 1 ...   
   >> 1 Test OK, 0 Test failed.
  ```

6. The test result is logged into file __ngap_src_test.log__
```Bash
   linux-vm2:/workings/tmp/easyasn_ngap/test/release # ls
   
   makefile  manual  ngap_codes  ngap_code_tst  ngap_src_test.log
```

## Help

 1. For more usage of the tool please try:
```Bash
  linux-vm2:/workings/tmp/easyasn_ngap # ./asn_aper_gen_v125 -h
```
 2. For extended help, contact author via email (included in source codes generated).
 
