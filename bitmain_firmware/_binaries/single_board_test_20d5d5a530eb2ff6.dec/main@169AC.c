int __fastcall main(int argc, const char **argv, const char **envp)
{
  void *v5; // r0
  int v6; // r0
  int v7; // r11
  const char *v9; // r4
  int v10; // r0
  int v11; // r0
  int v12; // r0
  size_t v13; // r0
  size_t v14; // r0
  size_t v15; // r0
  size_t v16; // r0
  size_t v17; // r0
  size_t v18; // r0
  size_t v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  const char *v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int i; // r7
  int v32; // r0
  int v33; // r0
  int v34; // r7
  int v35; // r8
  int v36; // r0
  int v37; // r11
  int v38; // r7
  int v39; // r8
  unsigned int v40; // r0
  __int16 v41; // r10
  unsigned int v42; // r8
  unsigned int v43; // r8
  int v44; // r0
  int v45; // r0
  const char *v46; // r1
  int v47; // r0
  unsigned int v48; // r0
  int v49; // r7
  int v50; // r0
  int v51; // r8
  unsigned int v52; // r0
  __int16 v53; // r11
  unsigned int v54; // r10
  unsigned int v55; // r10
  int v56; // r0
  int v57; // r0
  int v58; // r3
  unsigned int v59; // r0
  __int16 v60; // r11
  unsigned int v61; // r9
  unsigned int v62; // r9
  int v63; // r0
  char *v64; // r0
  int v65; // r0
  int v66; // r0
  unsigned int v67; // r0
  __int16 v68; // r11
  unsigned int v69; // r9
  unsigned int v70; // r9
  int v71; // r0
  int v72; // r10
  unsigned int v73; // r0
  __int16 v74; // r11
  unsigned int v75; // r10
  unsigned int v76; // r10
  int v77; // r0
  char *v78; // r0
  int v79; // r0
  int v80; // r0
  int v81; // r3
  char *v82; // r0
  int v83; // r0
  int v84; // r3
  unsigned int v85; // r0
  __int16 v86; // r11
  unsigned int v87; // r10
  unsigned int v88; // r10
  int v89; // r0
  char *v90; // r0
  int v91; // r0
  int v92; // [sp+28h] [bp-22Ch] BYREF
  char dest[4]; // [sp+2Ch] [bp-228h] BYREF
  int v94; // [sp+30h] [bp-224h]
  int v95; // [sp+34h] [bp-220h]
  int v96; // [sp+38h] [bp-21Ch]
  int v97; // [sp+3Ch] [bp-218h]
  char v98[4]; // [sp+40h] [bp-214h] BYREF
  int v99; // [sp+44h] [bp-210h]
  int v100; // [sp+48h] [bp-20Ch]
  int v101; // [sp+4Ch] [bp-208h]
  char s[100]; // [sp+70h] [bp-1E4h] BYREF
  char v103[100]; // [sp+D4h] [bp-180h] BYREF
  struct sigaction act; // [sp+138h] [bp-11Ch] BYREF
  struct sigaction v105; // [sp+1C4h] [bp-90h] BYREF

  act.sa_handler = (__sighandler_t)sub_186A8;
  act.sa_flags = 0;
  sigemptyset(&act.sa_mask);
  sigaction(15, &act, &stru_6E2F94);
  sigaction(2, &act, &stru_6E315C);
  sigaction(6, &act, &stru_6E31E8);
  sigaction(11, &act, &stru_6E3020);
  sigaction(4, &act, &stru_6E3020);
  sigaction(8, &act, &stru_6E3020);
  v105.sa_handler = (__sighandler_t)nullsub_9;
  sigemptyset(&v105.sa_mask);
  v105.sa_flags = 0;
  sigaction(13, &v105, 0);
  if ( access("/mnt/card", 0) )
  {
    system("rm -r /mnt");
    system("ln -s /tmp  /mnt");
  }
  sub_1E938(v103, 48);
  printf("%s ", v103);
  printf("%s : xyf 20250617 build\n", "main");
  strcpy(byte_220578, "xyf 20250617 build");
  sub_3CC5C(byte_220578, v103);
  sub_1E938(v103, 48);
  printf("%s ", v103);
  printf(
    "%s : build version information::  %s.\n\n",
    "main",
    "version: 5b36a31bfedc7057992454b37753104cfdd7f4dd commit: 2024-02-22 16:37:10 build: 2025-06-21 15:30:42");
  snprintf(
    byte_220678,
    0x100u,
    "build version information::  %s.\n",
    "version: 5b36a31bfedc7057992454b37753104cfdd7f4dd commit: 2024-02-22 16:37:10 build: 2025-06-21 15:30:42");
  sub_3CC5C(byte_220678, v103);
  sub_1E938(v103, 48);
  printf("%s ", v103);
  printf("%s : author information::  %s.\n\n", "main", "author: yonghong.you      email: yonghong.you@bitmain.com");
  snprintf(
    &byte_220678[256],
    0x100u,
    "author information::  %s.\n",
    "author: yonghong.you      email: yonghong.you@bitmain.com");
  v5 = (void *)sub_3CC5C(&byte_220678[256], v103);
  if ( argc == 2 )
  {
    dword_21B3A0 = strtol(argv[1], 0, 10);
    v20 = printf("force to use chain %d\n", dword_21B3A0);
    if ( dword_21B3A0 > 3 )
    {
      if ( dword_21B3A0 == 112 )
        sub_6991C(v20);
      v7 = -1;
      printf("chain ID error, should < 3");
      return v7;
    }
    sub_1E938(v103, 48);
    printf("%s ", v103);
    printf("%s : user chain ID %d\n", "main", dword_21B3A0);
    snprintf(&byte_220678[512], 0x100u, "user chain ID %d", dword_21B3A0);
    v5 = (void *)sub_3CC5C(&byte_220678[512], v103);
  }
  else if ( argc > 2 )
  {
    dword_21B3A0 = strtol(argv[1], 0, 10);
    v5 = memset(byte_6E30AC, 0, 0xB0u);
    if ( argc != 3 )
    {
      v13 = strlen(argv[3]);
      memcpy(&byte_6E3138, argv[3], v13);
      sub_1E938(v103, 48);
      printf("%s ", v103);
      printf("%s : input board_sn %s\n", "main", &byte_6E3138);
      snprintf(&byte_220678[768], 0x100u, "input board_sn %s", &byte_6E3138);
      sub_3CC5C(&byte_220678[768], v103);
      v14 = strlen(argv[4]);
      memcpy(byte_6E30CC, argv[4], v14);
      sub_1E938(v103, 48);
      printf("%s ", v103);
      printf("%s : input chip_die %s\n", "main", byte_6E30CC);
      snprintf(&byte_220678[1024], 0x100u, "input chip_die %s", byte_6E30CC);
      sub_3CC5C(&byte_220678[1024], v103);
      v15 = strlen(argv[5]);
      memcpy(&byte_6E30CC[16], argv[5], v15);
      sub_1E938(v103, 48);
      printf("%s ", v103);
      printf("%s : input chip_marking %s\n", "main", &byte_6E30CC[16]);
      snprintf(&byte_220678[1280], 0x100u, "input chip_marking %s", &byte_6E30CC[16]);
      sub_3CC5C(&byte_220678[1280], v103);
      v16 = strlen(argv[6]);
      memcpy(&byte_6E30CC[32], argv[6], v16);
      sub_1E938(v103, 48);
      printf("%s ", v103);
      printf("%s : input chip_ftversion %s\n", "main", &byte_6E30CC[32]);
      snprintf(&byte_220678[1536], 0x100u, "input chip_ftversion %s", &byte_6E30CC[32]);
      sub_3CC5C(&byte_220678[1536], v103);
      v17 = strlen(argv[7]);
      memcpy(&byte_6E30CC[96], argv[7], v17);
      sub_1E938(v103, 48);
      printf("%s ", v103);
      printf("%s : input chip_tech %s\n", "main", &byte_6E30CC[96]);
      snprintf(&byte_220678[1792], 0x100u, "input chip_tech %s", &byte_6E30CC[96]);
      sub_3CC5C(&byte_220678[1792], v103);
      v18 = strlen(argv[8]);
      memcpy(&byte_6E30CC[99], argv[8], v18);
      sub_1E938(v103, 48);
      printf("%s ", v103);
      printf("%s : input board_name %s\n", "main", &byte_6E30CC[99]);
      snprintf(&byte_220678[2048], 0x100u, "input board_name %s", &byte_6E30CC[99]);
      sub_3CC5C(&byte_220678[2048], v103);
      v19 = strlen(argv[9]);
      memcpy(byte_6E30AC, argv[9], v19);
      sub_1E938(v103, 48);
      printf("%s ", v103);
      printf("%s : input factory_job %s\n", "main", byte_6E30AC);
      snprintf(&byte_220678[2304], 0x100u, "input factory_job %s", byte_6E30AC);
      sub_3CC5C(&byte_220678[2304], v103);
      dword_6E3158 = strtol(argv[10], 0, 10);
      sub_1E938(v103, 48);
      printf("%s ", v103);
      printf("%s : input chip_bin %d\n", "main", dword_6E3158);
      snprintf(&byte_220678[2560], 0x100u, "input chip_bin %d", dword_6E3158);
      v5 = (void *)sub_3CC5C(&byte_220678[2560], v103);
    }
  }
  sub_3D7F4(v5);
  v92 = 0;
  sub_6E060(0, &v92);
  sub_1E938(v103, 48);
  printf("%s ", v103);
  printf("%s : FPGA hardware ver:%x\n", "main", v92);
  snprintf(::s, 0x100u, "FPGA hardware ver:%x", v92);
  v6 = sub_3CC5C(::s, v103);
  if ( sub_1FDD0(v6) && sub_1E80C() && sub_5E6CC() )
  {
    v9 = (const char *)dword_223680;
    if ( !strncmp((const char *)dword_223680, "PT2", 3u) || !strncmp(v9, "SWEEP", 5u) || !strncmp(v9, "PT3", 3u) )
    {
      if ( !sub_63130() )
      {
        sub_1E938(v103, 48);
        printf("%s ", v103);
        printf("%s : pt2 test,fan speed err,exit.\n", "main");
        v7 = 0;
        strcpy(byte_221278, "pt2 test,fan speed err,exit.");
        sub_3CC5C(byte_221278, v103);
        sub_2146C("Check fan", "restart", 0);
        return v7;
      }
      sub_1E938(v103, 48);
      printf("%s ", v103);
      printf("%s : fan speed ok.\n", "main");
      strcpy(byte_221378, "fan speed ok.");
      sub_3CC5C(byte_221378, v103);
    }
    v10 = sub_2146C("Read Power Ver", 0, 0);
    v11 = sub_6F490(v10);
    dword_6E3304 = sub_7495C(v11);
    sub_1E938(v103, 48);
    printf("%s ", v103);
    printf("%s : g_apw_power_version:%d\n", "main", dword_6E3304);
    snprintf(byte_221478, 0x100u, "g_apw_power_version:%d", dword_6E3304);
    sub_3CC5C(byte_221478, v103);
    if ( !dword_6E3304 )
    {
      v7 = 12;
      v12 = sub_2146C("Power version", "err", 0);
      sub_6F490(v12);
      return v7;
    }
    sub_1E938(v103, 48);
    printf("%s ", v103);
    printf("%s : enable power calibration.\n", "main");
    strcpy(byte_221578, "enable power calibration.");
    v21 = sub_3CC5C(byte_221578, v103);
    v22 = sub_2BBA8(v21);
    if ( !v22 )
    {
      if ( (sub_2146C("Power is not", "calibrated", 0), v22 = dword_223680, *(_BYTE *)dword_223680 == 80)
        && *(_BYTE *)(dword_223680 + 1) == 84
        && ((v84 = *(unsigned __int8 *)(dword_223680 + 2), v84 == 50) || v84 == 51)
        && !*(_BYTE *)(dword_223680 + 3)
        || (v22 = strcmp((const char *)dword_223680, "SWEEP")) == 0 )
      {
        sub_6F490(v22);
        return 12;
      }
    }
    v23 = sub_6F490(v22);
    if ( sub_1FF68(v23) )
    {
      sub_1E938(v103, 48);
      printf("%s ", v103);
      printf("%s : prepare_test_process\n", "main");
      strcpy(byte_221678, "prepare_test_process");
      v24 = sub_3CC5C(byte_221678, v103);
      v25 = sub_29DE8(v24);
      sub_6F490(v25);
      while ( 1 )
      {
        while ( 1 )
        {
          v26 = (const char *)dword_223680;
          if ( !*(_BYTE *)(dword_223680 + 261) )
            break;
LABEL_66:
          v26 = (const char *)strncmp(v26, "PT2", 3u);
          if ( v26 || (v26 = (const char *)sub_204F8()) == 0 )
          {
LABEL_35:
            v27 = sub_6FB00(v26);
            if ( v27 )
              goto LABEL_59;
            sub_1E938(v103, 48);
            printf("%s ", v103);
            printf("%s : got user input \n", "main");
            strcpy(byte_221878, "got user input ");
            v28 = sub_3CC5C(byte_221878, v103);
            sub_6FBF4(v28);
            v29 = sub_1F650(0, "Start Test");
            v30 = sub_20CBC(v29);
            for ( i = v30; !v30; i = v30 )
            {
              sub_6FBF4(v30);
              sub_1F650(i, dword_223680 + 32);
              sub_1F650(1, "No Hashboard");
              sub_1F650(2, "Insert Board 1st");
              sub_1F650(3, "Press Start Key");
              sub_1E938(v103, 48);
              printf("%s ", v103);
              printf("%s : Didn't detect hashboard\n", "main");
              strcpy(byte_221978, "Didn't detect hashboard");
              v32 = sub_3CC5C(byte_221978, v103);
              do
                v32 = sub_6FB00(v32);
              while ( v32 );
              v30 = sub_20CBC(0);
            }
            byte_5FE77C = 0;
            byte_622648 = 0;
            v33 = sub_288C4();
            v34 = dword_223680;
            v35 = v33;
            if ( !*(_BYTE *)(dword_223680 + 261) )
              goto LABEL_46;
            if ( v33 )
            {
              if ( *(_BYTE *)dword_223680 == 80
                && *(_BYTE *)(dword_223680 + 1) == 84
                && ((v58 = *(unsigned __int8 *)(dword_223680 + 2), v58 == 50) || v58 == 51)
                && !*(_BYTE *)(dword_223680 + 3)
                || !strcmp((const char *)dword_223680, "SWEEP") )
              {
                if ( *(_BYTE *)(v34 + 260) && !sub_3403C() )
                  goto LABEL_95;
              }
              v36 = sub_1D474();
              byte_622648 = 1;
              sub_6FBF4(v36);
              sub_1F650(0, dword_223680 + 32);
              sub_1F650(1, "Find test");
              sub_1F650(2, "standard");
              sub_1F650(3, "Press Start Key");
              sub_1E938(v103, 48);
              printf("%s ", v103);
              printf("%s : found test standard, Press Start Key to Begin Test\n", "main");
              strcpy(byte_221D7C, "found test standard, Press Start Key to Begin Test");
              sub_3CC5C(byte_221D7C, v103);
LABEL_46:
              sub_1E938(v103, 48);
              printf("%s ", v103);
              printf(
                "%s : build version information::  %s.\n\n",
                "main",
                "version: 5b36a31bfedc7057992454b37753104cfdd7f4dd commit: 2024-02-22 16:37:10 build: 2025-06-21 15:30:42");
              snprintf(
                byte_221E7C,
                0x100u,
                "build version information::  %s.\n",
                "version: 5b36a31bfedc7057992454b37753104cfdd7f4dd commit: 2024-02-22 16:37:10 build: 2025-06-21 15:30:42");
              sub_3CC5C(byte_221E7C, v103);
              sub_1E938(v103, 48);
              printf("%s ", v103);
              printf(
                "%s : author information::  %s.\n\n",
                "main",
                "author: yonghong.you      email: yonghong.you@bitmain.com");
              snprintf(
                byte_221F7C,
                0x100u,
                "author information::  %s.\n",
                "author: yonghong.you      email: yonghong.you@bitmain.com");
              sub_3CC5C(byte_221F7C, v103);
              v37 = dword_223680;
              v38 = 80 - *(unsigned __int8 *)dword_223680;
              if ( !v38 && *(_BYTE *)(dword_223680 + 1) == 84 && *(_BYTE *)(dword_223680 + 2) == 49 )
              {
                v39 = *(unsigned __int8 *)(dword_223680 + 3);
                if ( !*(_BYTE *)(dword_223680 + 3) )
                {
                  memset(s, *(unsigned __int8 *)(dword_223680 + 3), sizeof(s));
                  memset(v103, v39, sizeof(v103));
                  *(_DWORD *)dest = v39;
                  v94 = v39;
                  v95 = v39;
                  v96 = v39;
                  v97 = v39;
                  strncpy(dest, src, 0x14u);
                  if ( sub_2E844(dest, s) )
                  {
                    sub_1E938(v98, 48);
                    printf("%s ", v98);
                    printf("%s : SN:%s %s test is disallowed by MES, response_msg:%s\n", "main", dest, "PT1", s);
                    snprintf(byte_22227C, 0x100u, "SN:%s %s test is disallowed by MES, response_msg:%s", dest, "PT1", s);
                    v80 = sub_3CC5C(byte_22227C, v98);
                    sub_6FBF4(v80);
                    sub_1F650(v39, "mes disallowed");
                    *(_DWORD *)v98 = v39;
                    v99 = v39;
                    v100 = v39;
                    v101 = v39;
                    snprintf(v98, 0x10u, "%s", s);
                    sub_1F650(1, v98);
                  }
                  else
                  {
                    v40 = sub_604A8();
                    v41 = v40;
                    v42 = __clz(v40);
                    memset(v103, 0, sizeof(v103));
                    v43 = v42 >> 5;
                    memset(s, 0, sizeof(s));
                    v44 = sub_2E848(dest, v43, (unsigned __int8)v41, HIBYTE(v41), v103, s);
                    if ( v44 )
                    {
                      if ( v44 != 4660 )
                      {
                        sub_1E938(v98, 48);
                        printf("%s ", v98);
                        printf(
                          "%s : SN:%s  %s result:%d send failed to mes, response_msg:%s\n",
                          "main",
                          dest,
                          "PT1",
                          v43,
                          s);
                        snprintf(
                          byte_22217C,
                          0x100u,
                          "SN:%s  %s result:%d send failed to mes, response_msg:%s",
                          dest,
                          "PT1",
                          v43,
                          s);
                        v45 = sub_3CC5C(byte_22217C, v98);
                        sub_6FBF4(v45);
                        v46 = "send mes failed";
                        goto LABEL_54;
                      }
                    }
                    else
                    {
                      sub_1E938(v98, 48);
                      printf("%s ", v98);
                      printf("%s : SN:%s %s result:%d send ok to mes\n", "main", dest, "PT1", v43);
                      snprintf(byte_22207C, 0x100u, "SN:%s %s result:%d send ok to mes", dest, "PT1", v43);
                      sub_3CC5C(byte_22207C, v98);
                    }
                  }
LABEL_55:
                  sub_1E938(v103, 48);
                  printf("%s ", v103);
                  printf(
                    "%s : build version information::  %s.\n\n",
                    "main",
                    "version: 5b36a31bfedc7057992454b37753104cfdd7f4dd commit: 2024-02-22 16:37:10 build: 2025-06-21 15:30:42");
                  snprintf(
                    byte_22327C,
                    0x100u,
                    "build version information::  %s.\n",
                    "version: 5b36a31bfedc7057992454b37753104cfdd7f4dd commit: 2024-02-22 16:37:10 build: 2025-06-21 15:30:42");
                  sub_3CC5C(byte_22327C, v103);
                  sub_1E938(v103, 48);
                  printf("%s ", v103);
                  printf(
                    "%s : author information::  %s.\n\n",
                    "main",
                    "author: yonghong.you      email: yonghong.you@bitmain.com");
                  snprintf(
                    byte_22337C,
                    0x100u,
                    "author information::  %s.\n",
                    "author: yonghong.you      email: yonghong.you@bitmain.com");
                  sub_3CC5C(byte_22337C, v103);
                  sub_1E938(v103, 48);
                  printf("%s ", v103);
                  printf("%s : TEST OVER...\n", "main");
                  strcpy(byte_22347C, "TEST OVER...");
                  v47 = sub_3CC5C(byte_22347C, v103);
                  v27 = sub_3D790(v47);
                  byte_221D78 = 1;
                  if ( dword_21B3A0 != 255 )
                  {
                    v7 = 0;
                    sub_1E938(v103, 48);
                    printf("%s ", v103);
                    printf("%s : g_user_chain:%d,exit test.\n", "main", dword_21B3A0);
                    snprintf(byte_22357C, 0x100u, "g_user_chain:%d,exit test.", dword_21B3A0);
                    sub_3CC5C(byte_22357C, v103);
                    sleep(0xAu);
                    return v7;
                  }
                  goto LABEL_59;
                }
              }
              if ( !strcmp((const char *)dword_223680, "PT1new") )
              {
                sub_3D008("PT1new", src, v37 + 16, v37 + 32);
                memset(s, 0, sizeof(s));
                memset(v103, 0, sizeof(v103));
                *(_DWORD *)dest = 0;
                v94 = 0;
                v95 = 0;
                v96 = 0;
                v97 = 0;
                strncpy(dest, src, 0x14u);
                if ( !sub_2E844(dest, s) )
                {
                  v59 = sub_6128C();
                  v60 = v59;
                  v61 = __clz(v59);
                  memset(v103, 0, sizeof(v103));
                  v62 = v61 >> 5;
                  memset(s, 0, sizeof(s));
                  v63 = sub_2E848(dest, v62, (unsigned __int8)v60, HIBYTE(v60), v103, s);
                  if ( !v63 )
                  {
                    sub_1E938(v98, 48);
                    printf("%s ", v98);
                    printf("%s : SN:%s %s result:%d send ok to mes\n", "main", dest, "PT1new", v62);
                    snprintf(byte_22237C, 0x100u, "SN:%s %s result:%d send ok to mes", dest, "PT1new", v62);
                    sub_3CC5C(byte_22237C, v98);
                    goto LABEL_55;
                  }
                  if ( v63 == 4660 )
                    goto LABEL_55;
                  sub_1E938(v98, 48);
                  printf("%s ", v98);
                  printf(
                    "%s : SN:%s  %s result:%d send failed to mes, response_msg:%s\n",
                    "main",
                    dest,
                    "PT1new",
                    v62,
                    s);
                  snprintf(
                    byte_22247C,
                    0x100u,
                    "SN:%s  %s result:%d send failed to mes, response_msg:%s",
                    dest,
                    "PT1new",
                    v62,
                    s);
                  v64 = byte_22247C;
                  goto LABEL_90;
                }
                sub_1E938(v98, 48);
                printf("%s ", v98);
                printf("%s : SN:%s %s test is disallowed by MES, response_msg:%s\n", "main", dest, "PT1new", s);
                snprintf(byte_22257C, 0x100u, "SN:%s %s test is disallowed by MES, response_msg:%s", dest, "PT1new", s);
                v82 = byte_22257C;
              }
              else
              {
                if ( strcmp((const char *)v37, "PT1+") )
                {
                  if ( v38 )
                  {
                    if ( strcmp((const char *)v37, "SWEEP") )
                      goto LABEL_92;
                  }
                  else
                  {
                    v51 = *(unsigned __int8 *)(v37 + 1);
                    if ( v51 == 84 && *(_BYTE *)(v37 + 2) == 50 && !*(_BYTE *)(v37 + 3) )
                    {
                      sub_3D008("PT2", src, v37 + 16, v37 + 32);
                      memset(s, 0, sizeof(s));
                      memset(v103, 0, sizeof(v103));
                      *(_DWORD *)dest = 0;
                      v94 = 0;
                      v95 = 0;
                      v96 = 0;
                      v97 = 0;
                      strncpy(dest, src, 0x14u);
                      if ( sub_2E850(dest, s) )
                      {
                        sub_1E938(v98, 48);
                        printf("%s ", v98);
                        printf("%s : SN:%s %s test is disallowed by MES, response_msg:%s\n", "main", dest, "PT2", s);
                        snprintf(
                          byte_222B7C,
                          0x100u,
                          "SN:%s %s test is disallowed by MES, response_msg:%s",
                          dest,
                          "PT2",
                          s);
                        v89 = sub_3CC5C(byte_222B7C, v98);
                        sub_6FBF4(v89);
                        v46 = "mes disallowed";
                      }
                      else
                      {
                        v52 = sub_69820();
                        v53 = v52;
                        v54 = __clz(v52);
                        memset(v103, 0, sizeof(v103));
                        v55 = v54 >> 5;
                        memset(s, 0, sizeof(s));
                        v56 = sub_2E854(dest, v55, (unsigned __int8)v53, HIBYTE(v53), v103, s);
                        if ( !v56 )
                        {
                          sub_1E938(v98, 48);
                          printf("%s ", v98);
                          printf("%s : SN:%s %s result:%d send ok to mes\n", "main", dest, "PT2", v55);
                          snprintf(byte_22297C, 0x100u, "SN:%s %s result:%d send ok to mes", dest, "PT2", v55);
                          sub_3CC5C(byte_22297C, v98);
                          goto LABEL_55;
                        }
                        if ( v56 == 4660 )
                          goto LABEL_55;
                        sub_1E938(v98, 48);
                        printf("%s ", v98);
                        printf(
                          "%s : SN:%s  %s result:%d send failed to mes, response_msg:%s\n",
                          "main",
                          dest,
                          "PT2",
                          v55,
                          s);
                        snprintf(
                          byte_222A7C,
                          0x100u,
                          "SN:%s  %s result:%d send failed to mes, response_msg:%s",
                          dest,
                          "PT2",
                          v55,
                          s);
                        v57 = sub_3CC5C(byte_222A7C, v98);
                        sub_6FBF4(v57);
                        v46 = "send mes failed";
                      }
LABEL_54:
                      sub_1F650(0, v46);
                      *(_DWORD *)v98 = 0;
                      v99 = 0;
                      v100 = 0;
                      v101 = 0;
                      snprintf(v98, 0x10u, "%s", s);
                      sub_1F650(1, v98);
                      goto LABEL_55;
                    }
                    if ( strcmp((const char *)v37, "SWEEP") )
                    {
                      if ( v51 == 84 && *(_BYTE *)(v37 + 2) == 51 )
                      {
                        v72 = *(unsigned __int8 *)(v37 + 3);
                        if ( !*(_BYTE *)(v37 + 3) )
                        {
                          sub_3D008("PT3", src, v37 + 16, v37 + 32);
                          memset(s, v72, sizeof(s));
                          memset(v103, v72, sizeof(v103));
                          *(_DWORD *)dest = v72;
                          v94 = v72;
                          v95 = v72;
                          v96 = v72;
                          v97 = v72;
                          strncpy(dest, src, 0x14u);
                          if ( !sub_2E850(dest, s) )
                          {
                            v73 = sub_69CD8();
                            v74 = v73;
                            v75 = __clz(v73);
                            memset(v103, 0, sizeof(v103));
                            v76 = v75 >> 5;
                            memset(s, 0, sizeof(s));
                            v77 = sub_2E854(dest, v76, (unsigned __int8)v74, HIBYTE(v74), v103, s);
                            if ( v77 )
                            {
                              if ( v77 != 4660 )
                              {
                                sub_1E938(v98, 48);
                                printf("%s ", v98);
                                printf(
                                  "%s : SN:%s  %s result:%d send failed to mes, response_msg:%s\n",
                                  "main",
                                  dest,
                                  "PT3",
                                  v76,
                                  s);
                                snprintf(
                                  byte_22307C,
                                  0x100u,
                                  "SN:%s  %s result:%d send failed to mes, response_msg:%s",
                                  dest,
                                  "PT3",
                                  v76,
                                  s);
                                v78 = byte_22307C;
                                goto LABEL_108;
                              }
                            }
                            else
                            {
                              sub_1E938(v98, 48);
                              printf("%s ", v98);
                              printf("%s : SN:%s %s result:%d send ok to mes\n", "main", dest, "PT3", v76);
                              snprintf(byte_222F7C, 0x100u, "SN:%s %s result:%d send ok to mes", dest, "PT3", v76);
                              v77 = sub_3CC5C(byte_222F7C, v98);
                            }
                            goto LABEL_109;
                          }
                          sub_1E938(v98, 48);
                          printf("%s ", v98);
                          printf("%s : SN:%s %s test is disallowed by MES, response_msg:%s\n", "main", dest, "PT3", s);
                          snprintf(
                            byte_22317C,
                            0x100u,
                            "SN:%s %s test is disallowed by MES, response_msg:%s",
                            dest,
                            "PT3",
                            s);
                          v90 = byte_22317C;
                          goto LABEL_135;
                        }
                      }
LABEL_92:
                      v66 = strcmp((const char *)v37, "Reset_Low");
                      if ( v66 )
                      {
                        sub_6FBF4(v66);
                        sub_1F650(0, dword_223680 + 32);
                        sub_1F650(1, "Test Process");
                        sub_1F650(2, "error");
                      }
                      else
                      {
                        sub_60F84();
                      }
                      goto LABEL_55;
                    }
                  }
                  sub_3D008("SWEEP", src, v37 + 16, v37 + 32);
                  v72 = 0;
                  memset(s, 0, sizeof(s));
                  memset(v103, 0, sizeof(v103));
                  *(_DWORD *)dest = 0;
                  v94 = 0;
                  v95 = 0;
                  v96 = 0;
                  v97 = 0;
                  strncpy(dest, src, 0x14u);
                  if ( !sub_2E850(dest, s) )
                  {
                    v85 = sub_69BA8();
                    v86 = v85;
                    v87 = __clz(v85);
                    memset(v103, 0, sizeof(v103));
                    v88 = v87 >> 5;
                    memset(s, 0, sizeof(s));
                    v77 = sub_2E854(dest, v88, (unsigned __int8)v86, HIBYTE(v86), v103, s);
                    if ( v77 )
                    {
                      if ( v77 != 4660 )
                      {
                        sub_1E938(v98, 48);
                        printf("%s ", v98);
                        printf(
                          "%s : SN:%s  %s result:%d send failed to mes, response_msg:%s\n",
                          "main",
                          dest,
                          "SWEEP",
                          v88,
                          s);
                        snprintf(
                          byte_222D7C,
                          0x100u,
                          "SN:%s  %s result:%d send failed to mes, response_msg:%s",
                          dest,
                          "SWEEP",
                          v88,
                          s);
                        v78 = byte_222D7C;
LABEL_108:
                        v79 = sub_3CC5C(v78, v98);
                        sub_6FBF4(v79);
                        sub_1F650(0, "send mes failed");
                        *(_DWORD *)v98 = 0;
                        v99 = 0;
                        v100 = 0;
                        v101 = 0;
                        snprintf(v98, 0x10u, "%s", s);
                        v77 = sub_1F650(1, v98);
                      }
                    }
                    else
                    {
                      sub_1E938(v98, 48);
                      printf("%s ", v98);
                      printf("%s : SN:%s %s result:%d send ok to mes\n", "main", dest, "SWEEP", v88);
                      snprintf(byte_222C7C, 0x100u, "SN:%s %s result:%d send ok to mes", dest, "SWEEP", v88);
                      v77 = sub_3CC5C(byte_222C7C, v98);
                    }
LABEL_109:
                    sub_4813C(v77);
                    goto LABEL_55;
                  }
                  sub_1E938(v98, 48);
                  printf("%s ", v98);
                  printf("%s : SN:%s %s test is disallowed by MES, response_msg:%s\n", "main", dest, "SWEEP", s);
                  snprintf(byte_222E7C, 0x100u, "SN:%s %s test is disallowed by MES, response_msg:%s", dest, "SWEEP", s);
                  v90 = byte_222E7C;
LABEL_135:
                  v91 = sub_3CC5C(v90, v98);
                  sub_6FBF4(v91);
                  sub_1F650(v72, "mes disallowed");
                  *(_DWORD *)v98 = v72;
                  v99 = v72;
                  v100 = v72;
                  v101 = v72;
                  snprintf(v98, 0x10u, "%s", s);
                  v77 = sub_1F650(1, v98);
                  goto LABEL_109;
                }
                sub_3D008("PT1+", src, v37 + 16, v37 + 32);
                memset(s, 0, sizeof(s));
                memset(v103, 0, sizeof(v103));
                *(_DWORD *)dest = 0;
                v94 = 0;
                v95 = 0;
                v96 = 0;
                v97 = 0;
                strncpy(dest, src, 0x14u);
                if ( !sub_2E844(dest, s) )
                {
                  v67 = sub_65DC8();
                  v68 = v67;
                  v69 = __clz(v67);
                  memset(v103, 0, sizeof(v103));
                  v70 = v69 >> 5;
                  memset(s, 0, sizeof(s));
                  v71 = sub_2E848(dest, v70, (unsigned __int8)v68, HIBYTE(v68), v103, s);
                  if ( !v71 )
                  {
                    sub_1E938(v98, 48);
                    printf("%s ", v98);
                    printf("%s : SN:%s %s result:%d send ok to mes\n", "main", dest, "PT1+", v70);
                    snprintf(byte_22267C, 0x100u, "SN:%s %s result:%d send ok to mes", dest, "PT1+", v70);
                    sub_3CC5C(byte_22267C, v98);
                    goto LABEL_55;
                  }
                  if ( v71 == 4660 )
                    goto LABEL_55;
                  sub_1E938(v98, 48);
                  printf("%s ", v98);
                  printf("%s : SN:%s  %s result:%d send failed to mes, response_msg:%s\n", "main", dest, "PT1+", v70, s);
                  snprintf(
                    byte_22277C,
                    0x100u,
                    "SN:%s  %s result:%d send failed to mes, response_msg:%s",
                    dest,
                    "PT1+",
                    v70,
                    s);
                  v64 = byte_22277C;
LABEL_90:
                  v65 = sub_3CC5C(v64, v98);
                  sub_6FBF4(v65);
                  sub_1F650(0, "send mes failed");
                  *(_DWORD *)v98 = 0;
                  v99 = 0;
                  v100 = 0;
                  v101 = 0;
                  snprintf(v98, 0x10u, "%s", s);
                  sub_1F650(1, v98);
                  goto LABEL_55;
                }
                sub_1E938(v98, 48);
                printf("%s ", v98);
                printf("%s : SN:%s %s test is disallowed by MES, response_msg:%s\n", "main", dest, "PT1+", s);
                snprintf(byte_22287C, 0x100u, "SN:%s %s test is disallowed by MES, response_msg:%s", dest, "PT1+", s);
                v82 = byte_22287C;
              }
              v83 = sub_3CC5C(v82, v98);
              sub_6FBF4(v83);
              v46 = "mes disallowed";
              goto LABEL_54;
            }
            sub_6FBF4(0);
            sub_1F650(v35, dword_223680 + 32);
            sub_1F650(1, "eeprom/pic error");
            sub_1E938(v103, 48);
            printf("%s ", v103);
            printf("%s : can't decode eeprom data, maybe pic lost firmware\n", "main");
            strcpy(byte_221A78, "can't decode eeprom data, maybe pic lost firmware");
            sub_3CC5C(byte_221A78, v103);
            if ( dword_21B3A0 != 255 )
            {
              sub_1F650(2, "try PT1 again");
              sub_1E938(v103, 48);
              printf("%s ", v103);
              printf("%s : try do PT1 with scan gun\n", "main");
              v7 = -1;
              strcpy(byte_221B78, "try do PT1 with scan gun");
              sub_3CC5C(byte_221B78, v103);
              return v7;
            }
            sub_1F650(3, "try another board");
            byte_5FE77C = v35;
            sub_1E938(v103, 48);
            printf("%s ", v103);
            printf("%s : try another hash board\n", "main");
            strcpy(byte_221C78, "try another hash board");
            v27 = sub_3CC5C(byte_221C78, v103);
            byte_221D78 = 1;
LABEL_59:
            while ( byte_221D78 )
            {
              v27 = sub_212A4(v27);
              if ( byte_22367C )
              {
                v48 = sleep(1u);
                v27 = sub_1F7E8(v48);
                byte_221D78 = 0;
                byte_22367C = 0;
              }
            }
          }
          else
          {
            sub_2146C("PT2 test no", "need scan gun", "on J4");
            sleep(1u);
          }
        }
        if ( byte_622648 )
          goto LABEL_35;
        if ( sub_214B0() )
        {
          v49 = dword_223680;
          if ( (*(_BYTE *)dword_223680 != 80
             || *(_BYTE *)(dword_223680 + 1) != 84
             || (v81 = *(unsigned __int8 *)(dword_223680 + 2), v81 != 50) && v81 != 51
             || *(_BYTE *)(dword_223680 + 3))
            && strcmp((const char *)dword_223680, "SWEEP")
            || !*(_BYTE *)(v49 + 260)
            || sub_3403C() )
          {
            v50 = sub_1D474();
            byte_622648 = 1;
            sub_6FBF4(v50);
            sub_1F650(0, dword_223680 + 32);
            sub_1F650(1, "Find test std");
            sub_1F650(2, "Insert Board");
            sub_1F650(3, "Press Start Key");
            sub_1E938(v103, 48);
            printf("%s ", v103);
            printf("%s : found test standard, Press Start Key to Begin Test\n", "main");
            strcpy(byte_221778, "found test standard, Press Start Key to Begin Test");
            sub_3CC5C(byte_221778, v103);
            v26 = (const char *)dword_223680;
            if ( !*(_BYTE *)(dword_223680 + 261) )
              goto LABEL_35;
            goto LABEL_66;
          }
LABEL_95:
          byte_5FE77C = 0;
        }
        else
        {
          byte_622648 = 0;
        }
      }
    }
  }
  return 0;
}
