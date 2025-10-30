char *__fastcall sub_3D260(const char *a1)
{
  char *v2; // r4
  _BYTE *v3; // r5
  size_t v4; // r4
  size_t v5; // r0
  size_t v6; // r0
  size_t v7; // r0
  int v8; // t1
  int v9; // r5
  int v10; // r0
  unsigned int *v11; // r3
  unsigned int v12; // r1
  int v13; // r0
  unsigned int *v14; // r3
  unsigned int v15; // r1
  int v16; // r0
  unsigned int *v17; // r3
  unsigned int v18; // r1
  int v19; // r0
  unsigned int *v20; // r3
  unsigned int v21; // r1
  int v22; // r0
  unsigned int *v23; // r3
  unsigned int v24; // r1
  int v25; // r0
  unsigned int *v26; // r3
  unsigned int v27; // r1
  int v28; // r0
  unsigned int *v29; // r3
  unsigned int v30; // r1
  int v31; // r0
  unsigned int *v32; // r3
  unsigned int v33; // r1
  int v34; // r0
  unsigned int *v35; // r3
  unsigned int v36; // r2
  char *v37; // r6
  void *v38; // r0
  int v40; // r0
  unsigned int *v41; // r3
  unsigned int v42; // r1
  time_t timer; // [sp+8h] [bp-5CCh] BYREF
  char v44[20]; // [sp+Ch] [bp-5C8h] BYREF
  _DWORD v45[5]; // [sp+20h] [bp-5B4h] BYREF
  int v46; // [sp+34h] [bp-5A0h] BYREF
  _BYTE v47[32]; // [sp+38h] [bp-59Ch] BYREF
  char v48[32]; // [sp+58h] [bp-57Ch] BYREF
  char dest[100]; // [sp+78h] [bp-55Ch] BYREF
  char v50[100]; // [sp+DCh] [bp-4F8h] BYREF
  void *s[100]; // [sp+140h] [bp-494h] BYREF
  char v52[772]; // [sp+2D0h] [bp-304h] BYREF

  memset(s, 0, sizeof(s));
  strcpy((char *)s, a1);
  pthread_mutex_lock(&stru_634A68);
  v2 = (char *)sub_3CEA0((int)s);
  pthread_mutex_unlock(&stru_634A68);
  if ( v2 )
  {
    v2 = (char *)s[97];
    if ( s[97] )
    {
      time(&timer);
      memset(v52, 0, 0x300u);
      sub_3D10C(a1, v52);
      v3 = (char *)&v46 + 3;
      snprintf(v44, 0x14u, "%llu", 1000LL * timer);
      v4 = 100;
      printf("nonce:%s\n", v44);
      memset(dest, 0, sizeof(dest));
      memset(v47, 0, sizeof(v47));
      strncat(dest, &v52[512], 0x63u);
      v5 = strlen(dest);
      strncat(dest, "f5ece2e3-9b84-4052-a34a-645d3b5900a6", 99 - v5);
      v6 = strlen(dest);
      strncat(dest, v44, 99 - v6);
      v7 = strlen(dest);
      sub_3C7E0((int)v47, dest, v7, "7796B3FFF1ECBA69A3CCB913C48BBD45", 0x20u);
      do
      {
        v8 = (unsigned __int8)*++v3;
        snprintf(&v50[100 - v4], v4, "%02X", v8);
        v4 -= 2;
      }
      while ( v3 != &v47[31] );
      memset(v48, 0, sizeof(v48));
      if ( sub_2D854(v48) )
        strncpy(v48, "55.55.55.55", 0x1Fu);
      v9 = sub_7B284();
      v10 = sub_7B490(&v52[512]);
      if ( v10 && *(_DWORD *)(v10 + 4) != -1 )
      {
        v11 = (unsigned int *)(v10 + 4);
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 + 1, v11) );
        __dmb(0xBu);
      }
      sub_7BA38(v9, "userId");
      v13 = sub_7B490(v44);
      if ( v13 && *(_DWORD *)(v13 + 4) != -1 )
      {
        v14 = (unsigned int *)(v13 + 4);
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 + 1, v14) );
        __dmb(0xBu);
      }
      sub_7BA38(v9, "nonce");
      v16 = sub_7B490(v50);
      if ( v16 && *(_DWORD *)(v16 + 4) != -1 )
      {
        v17 = (unsigned int *)(v16 + 4);
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 + 1, v17) );
        __dmb(0xBu);
      }
      sub_7BA38(v9, "signature");
      v19 = sub_7B490(&v52[384]);
      if ( v19 && *(_DWORD *)(v19 + 4) != -1 )
      {
        v20 = (unsigned int *)(v19 + 4);
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 + 1, v20) );
        __dmb(0xBu);
      }
      sub_7BA38(v9, "minerType");
      v22 = sub_7B490(&v52[640]);
      if ( v22 && *(_DWORD *)(v22 + 4) != -1 )
      {
        v23 = (unsigned int *)(v22 + 4);
        do
          v24 = __ldrex(v23);
        while ( __strex(v24 + 1, v23) );
        __dmb(0xBu);
      }
      sub_7BA38(v9, "boardName");
      v25 = sub_7B490(&v52[256]);
      if ( v25 && *(_DWORD *)(v25 + 4) != -1 )
      {
        v26 = (unsigned int *)(v25 + 4);
        do
          v27 = __ldrex(v26);
        while ( __strex(v27 + 1, v26) );
        __dmb(0xBu);
      }
      sub_7BA38(v9, "sn");
      v28 = sub_7B490(v48);
      if ( v28 && *(_DWORD *)(v28 + 4) != -1 )
      {
        v29 = (unsigned int *)(v28 + 4);
        do
          v30 = __ldrex(v29);
        while ( __strex(v30 + 1, v29) );
        __dmb(0xBu);
      }
      sub_7BA38(v9, "ip");
      v31 = sub_7B490("1");
      if ( v31 && *(_DWORD *)(v31 + 4) != -1 )
      {
        v32 = (unsigned int *)(v31 + 4);
        do
          v33 = __ldrex(v32);
        while ( __strex(v33 + 1, v32) );
        __dmb(0xBu);
      }
      sub_7BA38(v9, "isCompress");
      v34 = sub_7B490(s[97]);
      if ( v34 )
      {
        if ( *(_DWORD *)(v34 + 4) != -1 )
        {
          v35 = (unsigned int *)(v34 + 4);
          do
            v36 = __ldrex(v35);
          while ( __strex(v36 + 1, v35) );
          __dmb(0xBu);
        }
      }
      else
      {
        v45[0] = -1;
        sub_3D1EC((const char *)s[97], -1, v45);
        v40 = sub_7B444(s[97]);
        if ( v40 && *(_DWORD *)(v40 + 4) != -1 )
        {
          v41 = (unsigned int *)(v40 + 4);
          do
            v42 = __ldrex(v41);
          while ( __strex(v42 + 1, v41) );
          __dmb(0xBu);
        }
      }
      sub_7BA38(v9, "log");
      v37 = (char *)sub_79414(v9, 512);
      v2 = v37;
      if ( !v37 )
        goto LABEL_59;
      v2 = 0;
      memset(v45, 0, sizeof(v45));
      v46 = 0;
      sub_3C940((char *)v45);
      if ( !strncmp("PT2", &v52[128], 3u)
        || !strncmp("PT1+", &v52[128], 4u)
        || !strncmp("SWEEP", &v52[128], 5u)
        || !strncmp("PT3", &v52[128], 3u) )
      {
        v2 = sub_2E818("https://mtcs.bitmain.vip:443/public/api/mtc/uploadPtTwo.json", v37);
      }
      else
      {
        if ( strncmp("PT1new", &v52[128], 6u) )
        {
          sub_3C940((char *)v45);
LABEL_58:
          sub_7B714(v9);
          free(v37);
LABEL_59:
          free(s[97]);
          return v2;
        }
        v2 = sub_2E818("https://mtcs.bitmain.vip:443/public/api/mtc/uploadPtOne.json", v37);
      }
      sub_3C940((char *)v45);
      if ( v2 )
      {
        v38 = v2;
        v2 = (char *)1;
        free(v38);
      }
      goto LABEL_58;
    }
  }
  return v2;
}
