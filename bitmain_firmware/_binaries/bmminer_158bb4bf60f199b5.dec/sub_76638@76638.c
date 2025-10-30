int __fastcall sub_76638(int a1)
{
  pthread_t v2; // r0
  int v3; // r7
  ssize_t v4; // r0
  int v5; // r4
  int v6; // r4
  _DWORD *v7; // r0
  int v8; // r11
  _DWORD *v9; // r10
  const char *v10; // r5
  int v11; // r0
  int v12; // r3
  size_t v13; // r0
  int v14; // r10
  size_t v15; // r0
  size_t v17; // r0
  int v18; // [sp+10h] [bp-1DCh] BYREF
  pthread_t newthread; // [sp+14h] [bp-1D8h] BYREF
  _BYTE v20[8]; // [sp+18h] [bp-1D4h] BYREF
  int v21; // [sp+20h] [bp-1CCh]
  int v22; // [sp+24h] [bp-1C8h]
  char src[4]; // [sp+28h] [bp-1C4h] BYREF
  int v24; // [sp+2Ch] [bp-1C0h]
  int v25; // [sp+30h] [bp-1BCh]
  int v26; // [sp+34h] [bp-1B8h]
  int v27; // [sp+38h] [bp-1B4h]
  int v28; // [sp+3Ch] [bp-1B0h]
  int v29; // [sp+40h] [bp-1ACh]
  int v30; // [sp+44h] [bp-1A8h]
  char s1[4]; // [sp+48h] [bp-1A4h] BYREF
  int v32; // [sp+4Ch] [bp-1A0h]
  int v33; // [sp+50h] [bp-19Ch]
  int v34; // [sp+54h] [bp-198h]
  int v35; // [sp+58h] [bp-194h]
  int v36; // [sp+5Ch] [bp-190h]
  int v37; // [sp+60h] [bp-18Ch]
  int v38; // [sp+64h] [bp-188h]
  _DWORD buf[32]; // [sp+68h] [bp-184h] BYREF
  char v40[4]; // [sp+E8h] [bp-104h] BYREF
  _BYTE v41[252]; // [sp+ECh] [bp-100h] BYREF

  v2 = pthread_self();
  pthread_detach(v2);
  v22 = 0;
  qmemcpy(v20, "ct_b/mai", sizeof(v20));
  v21 = *(unsigned __int16 *)"n";
  prctl(15, v20);
  v3 = *(_DWORD *)(a1 + 8);
  while ( 1 )
  {
    memset(buf, 0, sizeof(buf));
    v4 = recv(v3, buf, 0x80u, 0);
    if ( v4 <= 0 )
      return 0;
    *((_BYTE *)buf + v4) = 0;
    *(_DWORD *)src = 0;
    v24 = 0;
    *(_DWORD *)s1 = 0;
    v32 = 0;
    v18 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v38 = 0;
    _isoc99_sscanf(buf, "%x%s%s", &v18, s1, src);
    v5 = strcmp(s1, "regist");
    if ( v5 )
    {
      v6 = dword_231D04 + 1;
      memcpy((char *)&unk_231D2C + 128 * dword_231D04, buf, 0x80u);
      dword_231D04 = v6;
    }
    else
    {
      v7 = calloc(0x98u, 1u);
      v8 = dword_231D08;
      v9 = v7;
      if ( !dword_231D08 )
        goto LABEL_18;
      v10 = s2;
      while ( 1 )
      {
        v11 = strcmp(src, v10);
        v10 += 136;
        if ( !v11 )
          break;
        if ( ++v5 == v8 )
          goto LABEL_11;
      }
      v12 = *((_DWORD *)&unk_235D2C + 34 * v5 + 33);
      v9[3] = *((_DWORD *)&unk_235D2C + 34 * v5);
      v9[37] = v12;
LABEL_11:
      if ( v8 == v5 )
      {
LABEL_18:
        *(_DWORD *)v40 = 0;
        memset(v41, 0, sizeof(v41));
        sprintf(v40, "%x %d %s %s %s", 63, 0, "reg_resp", "no_name", src);
        v17 = strlen(v40);
        send(v3, v40, v17 + 1, 0);
        free(v9);
      }
      else
      {
        *v9 = dword_9F7C4;
        v13 = strlen(src);
        memcpy(v9 + 4, src, v13 + 1);
        v9[36] = 0;
        pthread_create(&newthread, 0, (void *(*)(void *))sub_763AC, v9);
        while ( !v9[36] )
          usleep(0x2710u);
        v14 = *v9;
        *(_DWORD *)v40 = 0;
        if ( v14 != dword_9F7C4 )
          dword_9F7C4 = v14;
        memset(v41, 0, sizeof(v41));
        sprintf(v40, "%x %d %s %s %s", 63, v14, "reg_resp", "OK", src);
        v15 = strlen(v40);
        send(v3, v40, v15 + 1, 0);
        ++dword_9F7C4;
      }
    }
  }
}
