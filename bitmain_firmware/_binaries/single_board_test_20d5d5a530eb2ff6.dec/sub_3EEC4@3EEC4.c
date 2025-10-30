int __fastcall sub_3EEC4(int a1)
{
  int v1; // r6
  int v2; // r2
  _DWORD *v3; // r5
  int v4; // r0
  int v5; // r3
  char v6; // r6
  int v7; // r1
  char *v8; // r4
  int v9; // r11
  int v10; // r10
  int v11; // r5
  int v12; // r4
  char *v13; // r6
  char v14; // r5
  char v15; // r0
  pthread_t v16; // r0
  int v18; // r6
  int v19; // r0
  int v20; // r6
  int v21; // r0
  unsigned __int8 v23; // [sp+18h] [bp-4Ch]
  int v24; // [sp+1Ch] [bp-48h]
  __int16 v25; // [sp+28h] [bp-3Ch] BYREF
  _WORD v26[2]; // [sp+2Ch] [bp-38h] BYREF
  char v27[52]; // [sp+30h] [bp-34h] BYREF

  v1 = a1 + 138240;
  v24 = a1 + 138240;
  v26[0] = 0;
  v25 = -1;
  sub_1E938(v27, 0x30u);
  printf("%s ", v27);
  printf("%s : Start %s\n", "pt_read_temp", "pt_read_temp");
  snprintf(byte_6371CC, 0x100u, "Start %s", "pt_read_temp");
  sub_3CC5C((int)byte_6371CC, v27);
  v2 = *(_DWORD *)(*(_DWORD *)(v1 + 664) + 148);
  if ( v2 > 0 )
  {
    v3 = (_DWORD *)dword_705300;
    v4 = 0;
    LOBYTE(v5) = 0;
    v6 = *(_BYTE *)(dword_705300 + 140);
    do
    {
      v5 = (unsigned __int8)(v5 + 1);
      v7 = v3[v4 + 31];
      v8 = &v27[v4 + 48];
      v4 = v5;
      *(v8 - 52) = v7 + v6;
    }
    while ( v5 < v2 );
  }
  else
  {
    v3 = (_DWORD *)dword_705300;
  }
  if ( sub_7619C(*v3, v26) < 0 )
  {
    sub_1E938(v27, 0x30u);
    printf("%s ", v27);
    printf("%s : %s: chain %d tsensor_open failed\n", "pt_read_temp", "pt_read_temp", *(_DWORD *)dword_705300);
    snprintf(byte_6372CC, 0x100u, "%s: chain %d tsensor_open failed", "pt_read_temp", *(_DWORD *)dword_705300);
    sub_3CC5C((int)byte_6372CC, v27);
    sub_1E938(v27, 0x30u);
    printf("%s ", v27);
    printf("%s : WARNING CAN NOT OPEN TEMP SENSOR ...\n", "pt_read_temp");
    strcpy(byte_6373CC, "WARNING CAN NOT OPEN TEMP SENSOR ...");
    sub_3CC5C((int)byte_6373CC, v27);
    sub_2B420("sensor err");
  }
  if ( *(_DWORD *)(v24 + 732) )
  {
    v9 = 0;
    v10 = a1 + 138904;
    v23 = 0;
    do
    {
      if ( *(int *)(*(_DWORD *)v10 + 148) > 0 )
      {
        v11 = 0;
        LOBYTE(v12) = 0;
        do
        {
          v13 = &v27[v11 + 48];
          v25 = -1;
          if ( sub_76468(
                 *(_DWORD *)dword_705300,
                 *((unsigned __int8 *)v26 + v11),
                 *(unsigned __int8 *)(dword_705300 + 144),
                 &v25,
                 2) == 2 )
          {
            if ( (unsigned __int8)(v25 + 1) <= 1u )
            {
              ++v9;
              sub_1E938(v27, 0x30u);
              printf("%s ", v27);
              printf("%s : Read sensor[%d] fail,addr: %d\n", "pt_read_temp", v11, (unsigned __int8)*(v13 - 52));
              snprintf(byte_6376CC, 0x100u, "Read sensor[%d] fail,addr: %d", v11, (unsigned __int8)*(v13 - 52));
              sub_3CC5C((int)byte_6376CC, v27);
            }
            else
            {
              *(_BYTE *)(a1 + v11 + 138952) = v25;
              if ( v23 <= 2u || !(v23 % 3u) )
              {
                sub_1E938(v27, 0x30u);
                printf("%s ", v27);
                printf("%s : temp [%d] %d\n", "pt_read_temp", v11, (char)v25);
                snprintf(byte_6375CC, 0x100u, "temp [%d] %d", v11, (char)v25);
                sub_3CC5C((int)byte_6375CC, v27);
              }
            }
          }
          else
          {
            ++v9;
            sub_1E938(v27, 0x30u);
            printf("%s ", v27);
            printf("%s : Read sensor[%d] fail,addr: %d\n", "pt_read_temp", v11, (unsigned __int8)*(v13 - 52));
            snprintf(byte_6374CC, 0x100u, "Read sensor[%d] fail,addr: %d", v11, (unsigned __int8)*(v13 - 52));
            sub_3CC5C((int)byte_6374CC, v27);
          }
          v12 = (unsigned __int8)(v12 + 1);
          v11 = v12;
        }
        while ( v12 < *(_DWORD *)(*(_DWORD *)v10 + 148) );
      }
      if ( byte_6377CC )
        sub_3EEA4();
      if ( v9 )
      {
        sub_1E938(v27, 0x30u);
        printf("%s ", v27);
        printf("%s : WARNING READ TEMP SENSOR ERR...\n", "pt_read_temp");
        strcpy(byte_6377D0, "WARNING READ TEMP SENSOR ERR...");
        sub_3CC5C((int)byte_6377D0, v27);
        sub_2B420("sensor err");
      }
      v14 = sub_3DD40(&byte_705330, *(_DWORD *)(dword_705300 + 148));
      v15 = sub_3DD78(&byte_705330, *(_DWORD *)(dword_705300 + 148));
      if ( !sub_62F38(v14, v15) )
      {
        sub_1E938(v27, 0x30u);
        printf("%s ", v27);
        printf("%s : WARNING TEMP OUT OF PROTECT...\n", "pt_read_temp");
        strcpy(byte_6378D0, "WARNING TEMP OUT OF PROTECT...");
        sub_3CC5C((int)byte_6378D0, v27);
        sub_1E938(v27, 0x30u);
        printf("%s ", v27);
        v18 = sub_3DD40(&byte_705330, *(_DWORD *)(dword_705300 + 148));
        v19 = sub_3DD78(&byte_705330, *(_DWORD *)(dword_705300 + 148));
        printf("%s : WARNING temp max:%d,temp min:%d\n", "pt_read_temp", v18, v19);
        v20 = sub_3DD40(&byte_705330, *(_DWORD *)(dword_705300 + 148));
        v21 = sub_3DD78(&byte_705330, *(_DWORD *)(dword_705300 + 148));
        snprintf(byte_6379D0, 0x100u, "WARNING temp max:%d,temp min:%d", v20, v21);
        sub_3CC5C((int)byte_6379D0, v27);
        sub_2B420("sensor err");
      }
      ++v23;
      sleep(1u);
    }
    while ( *(_DWORD *)(v24 + 732) );
  }
  sub_1E938(v27, 0x30u);
  printf("%s ", v27);
  printf("%s : %s stop\n", "pt_read_temp", "pt_read_temp");
  snprintf(byte_637AD0, 0x100u, "%s stop", "pt_read_temp");
  sub_3CC5C((int)byte_637AD0, v27);
  v16 = pthread_self();
  pthread_detach(v16);
  return 0;
}
