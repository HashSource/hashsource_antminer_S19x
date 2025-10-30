int __fastcall sub_7B10C(int a1)
{
  pthread_t v2; // r0
  int v3; // r6
  ssize_t v4; // r0
  int v5; // r4
  int v6; // r5
  int *v7; // r9
  int v8; // r8
  const char *v9; // r5
  int v10; // r0
  char *v11; // r3
  int v12; // r2
  int v13; // r3
  size_t v14; // r0
  int v15; // r8
  size_t v16; // r0
  size_t v18; // r0
  int v19; // [sp+14h] [bp-200h] BYREF
  pthread_t newthread; // [sp+18h] [bp-1FCh] BYREF
  _BYTE v21[8]; // [sp+1Ch] [bp-1F8h] BYREF
  int v22; // [sp+24h] [bp-1F0h]
  int v23; // [sp+28h] [bp-1ECh]
  char src[4]; // [sp+2Ch] [bp-1E8h] BYREF
  int v25; // [sp+30h] [bp-1E4h]
  int v26; // [sp+34h] [bp-1E0h]
  int v27; // [sp+38h] [bp-1DCh]
  int v28; // [sp+3Ch] [bp-1D8h]
  int v29; // [sp+40h] [bp-1D4h]
  int v30; // [sp+44h] [bp-1D0h]
  int v31; // [sp+48h] [bp-1CCh]
  char s1[4]; // [sp+4Ch] [bp-1C8h] BYREF
  int v33; // [sp+50h] [bp-1C4h]
  int v34; // [sp+54h] [bp-1C0h]
  int v35; // [sp+58h] [bp-1BCh]
  int v36; // [sp+5Ch] [bp-1B8h]
  int v37; // [sp+60h] [bp-1B4h]
  int v38; // [sp+64h] [bp-1B0h]
  int v39; // [sp+68h] [bp-1ACh]
  pthread_attr_t attr; // [sp+6Ch] [bp-1A8h] BYREF
  _DWORD buf[32]; // [sp+90h] [bp-184h] BYREF
  char v42[4]; // [sp+110h] [bp-104h] BYREF
  _BYTE v43[252]; // [sp+114h] [bp-100h] BYREF

  v2 = pthread_self();
  pthread_detach(v2);
  v23 = 0;
  qmemcpy(v21, "ct_b/mai", sizeof(v21));
  v22 = *(unsigned __int16 *)"n";
  prctl(15, v21);
  pthread_attr_init(&attr);
  pthread_attr_setstacksize(&attr, 0x100000u);
  v3 = *(_DWORD *)(a1 + 8);
  while ( 1 )
  {
    memset(buf, 0, sizeof(buf));
    v4 = recv(v3, buf, 0x80u, 0);
    if ( v4 <= 0 )
      return 0;
    *((_BYTE *)buf + v4) = 0;
    *(_DWORD *)src = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    *(_DWORD *)s1 = 0;
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v38 = 0;
    v39 = 0;
    v19 = 0;
    _isoc99_sscanf(buf, "%x%s%s", &v19, s1, src);
    v5 = strcmp(s1, "regist");
    if ( v5 )
    {
      v6 = dword_5B7200[0] + 1;
      memcpy(&dword_5B7200[32 * dword_5B7200[0] + 1], buf, 0x80u);
      dword_5B7200[0] = v6;
    }
    else
    {
      v7 = (int *)malloc(0x98u);
      memset(v7, 0, 0x98u);
      v8 = dword_5BB204;
      if ( !dword_5BB204 )
        goto LABEL_18;
      v9 = s2;
      while ( 1 )
      {
        v10 = strcmp(src, v9);
        v9 += 136;
        if ( !v10 )
          break;
        if ( ++v5 == v8 )
          goto LABEL_11;
      }
      v11 = (char *)&unk_5BB1F0 + 136 * v5;
      v12 = *((_DWORD *)v11 + 6);
      v13 = *((_DWORD *)v11 + 39);
      v7[3] = v12;
      v7[37] = v13;
LABEL_11:
      if ( v5 == v8 )
      {
LABEL_18:
        *(_DWORD *)v42 = 0;
        memset(v43, 0, sizeof(v43));
        sprintf(v42, "%x %d %s %s %s", 63, 0, "reg_resp", "no_name", src);
        v18 = strlen(v42);
        send(v3, v42, v18 + 1, 0);
        free(v7);
      }
      else
      {
        *v7 = dword_B3BB4;
        v14 = strlen(src);
        memcpy(v7 + 4, src, v14 + 1);
        v7[36] = 0;
        pthread_create(&newthread, &attr, (void *(*)(void *))sub_7AE4C, v7);
        while ( !v7[36] )
          usleep(0x2710u);
        v15 = *v7;
        if ( *v7 != dword_B3BB4 )
          dword_B3BB4 = *v7;
        *(_DWORD *)v42 = 0;
        memset(v43, 0, sizeof(v43));
        sprintf(v42, "%x %d %s %s %s", 63, v15, "reg_resp", "OK", src);
        v16 = strlen(v42);
        send(v3, v42, v16 + 1, 0);
        ++dword_B3BB4;
      }
    }
  }
}
