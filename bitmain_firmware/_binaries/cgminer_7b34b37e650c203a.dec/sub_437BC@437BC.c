int __fastcall sub_437BC(int a1)
{
  pthread_t v2; // r0
  int v3; // r7
  int v4; // r4
  int v5; // r4
  _DWORD *v6; // r0
  int v7; // r11
  _DWORD *v8; // r10
  const char *v9; // r5
  int v10; // r0
  int v11; // r3
  size_t v12; // r0
  int v13; // r10
  size_t v14; // r0
  size_t v16; // r0
  int v17; // [sp+10h] [bp-1DCh] BYREF
  pthread_t newthread; // [sp+14h] [bp-1D8h] BYREF
  _BYTE v19[8]; // [sp+18h] [bp-1D4h] BYREF
  int v20; // [sp+20h] [bp-1CCh]
  int v21; // [sp+24h] [bp-1C8h]
  char src[4]; // [sp+28h] [bp-1C4h] BYREF
  int v23; // [sp+2Ch] [bp-1C0h]
  int v24; // [sp+30h] [bp-1BCh]
  int v25; // [sp+34h] [bp-1B8h]
  int v26; // [sp+38h] [bp-1B4h]
  int v27; // [sp+3Ch] [bp-1B0h]
  int v28; // [sp+40h] [bp-1ACh]
  int v29; // [sp+44h] [bp-1A8h]
  char s1[4]; // [sp+48h] [bp-1A4h] BYREF
  int v31; // [sp+4Ch] [bp-1A0h]
  int v32; // [sp+50h] [bp-19Ch]
  int v33; // [sp+54h] [bp-198h]
  int v34; // [sp+58h] [bp-194h]
  int v35; // [sp+5Ch] [bp-190h]
  int v36; // [sp+60h] [bp-18Ch]
  int v37; // [sp+64h] [bp-188h]
  _DWORD buf[32]; // [sp+68h] [bp-184h] BYREF
  char v39[4]; // [sp+E8h] [bp-104h] BYREF
  _BYTE v40[252]; // [sp+ECh] [bp-100h] BYREF

  v2 = pthread_self();
  pthread_detach(v2);
  v21 = 0;
  qmemcpy(v19, "ct_a/mai", sizeof(v19));
  v20 = *(unsigned __int16 *)"n";
  prctl(15, v19);
  v3 = *(_DWORD *)(a1 + 8);
  while ( 1 )
  {
    memset(buf, 0, sizeof(buf));
    if ( recv(v3, buf, 0x80u, 0) <= 0 )
      return 0;
    *(_DWORD *)src = 0;
    v23 = 0;
    *(_DWORD *)s1 = 0;
    v31 = 0;
    v17 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v32 = 0;
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    _isoc99_sscanf(buf, "%x%s%s", &v17, s1, src);
    v4 = strcmp(s1, "regist");
    if ( v4 )
    {
      v5 = dword_6ACE0 + 1;
      memcpy((char *)&unk_6AD08 + 128 * dword_6ACE0, buf, 0x80u);
      dword_6ACE0 = v5;
    }
    else
    {
      v6 = calloc(0x98u, 1u);
      v7 = dword_6ACE4;
      v8 = v6;
      if ( !dword_6ACE4 )
        goto LABEL_18;
      v9 = s2;
      while ( 1 )
      {
        v10 = strcmp(src, v9);
        v9 += 136;
        if ( !v10 )
          break;
        if ( ++v4 == v7 )
          goto LABEL_11;
      }
      v11 = *((_DWORD *)&unk_6ED08 + 34 * v4 + 33);
      v8[3] = *((_DWORD *)&unk_6ED08 + 34 * v4);
      v8[37] = v11;
LABEL_11:
      if ( v7 == v4 )
      {
LABEL_18:
        *(_DWORD *)v39 = 0;
        memset(v40, 0, sizeof(v40));
        sprintf(v39, "%x %d %s %s %s", 63, 0, "reg_resp", "no_name", src);
        v16 = strlen(v39);
        send(v3, v39, v16 + 1, 0);
        free(v8);
      }
      else
      {
        *v8 = dword_68A40;
        v12 = strlen(src);
        memcpy(v8 + 4, src, v12 + 1);
        v8[36] = 0;
        pthread_create(&newthread, 0, (void *(*)(void *))sub_43ADC, v8);
        while ( !v8[36] )
          usleep(0x2710u);
        v13 = *v8;
        *(_DWORD *)v39 = 0;
        if ( v13 != dword_68A40 )
          dword_68A40 = v13;
        memset(v40, 0, sizeof(v40));
        sprintf(v39, "%x %d %s %s %s", 63, v13, "reg_resp", "OK", src);
        v14 = strlen(v39);
        send(v3, v39, v14 + 1, 0);
        ++dword_68A40;
      }
    }
  }
}
