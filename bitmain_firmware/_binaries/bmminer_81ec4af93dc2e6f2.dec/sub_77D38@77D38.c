int __fastcall sub_77D38(int a1)
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
  int v18; // [sp+14h] [bp-200h] BYREF
  pthread_t newthread; // [sp+18h] [bp-1FCh] BYREF
  _BYTE v20[8]; // [sp+1Ch] [bp-1F8h] BYREF
  int v21; // [sp+24h] [bp-1F0h]
  int v22; // [sp+28h] [bp-1ECh]
  char src[4]; // [sp+2Ch] [bp-1E8h] BYREF
  int v24; // [sp+30h] [bp-1E4h]
  int v25; // [sp+34h] [bp-1E0h]
  int v26; // [sp+38h] [bp-1DCh]
  int v27; // [sp+3Ch] [bp-1D8h]
  int v28; // [sp+40h] [bp-1D4h]
  int v29; // [sp+44h] [bp-1D0h]
  int v30; // [sp+48h] [bp-1CCh]
  char s1[4]; // [sp+4Ch] [bp-1C8h] BYREF
  int v32; // [sp+50h] [bp-1C4h]
  int v33; // [sp+54h] [bp-1C0h]
  int v34; // [sp+58h] [bp-1BCh]
  int v35; // [sp+5Ch] [bp-1B8h]
  int v36; // [sp+60h] [bp-1B4h]
  int v37; // [sp+64h] [bp-1B0h]
  int v38; // [sp+68h] [bp-1ACh]
  pthread_attr_t attr; // [sp+6Ch] [bp-1A8h] BYREF
  _DWORD buf[32]; // [sp+90h] [bp-184h] BYREF
  char v41[4]; // [sp+110h] [bp-104h] BYREF
  _BYTE v42[252]; // [sp+114h] [bp-100h] BYREF

  v2 = pthread_self();
  pthread_detach(v2);
  v22 = 0;
  qmemcpy(v20, "ct_b/mai", sizeof(v20));
  v21 = *(unsigned __int16 *)"n";
  prctl(15, v20);
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
      v6 = dword_5B2344 + 1;
      memcpy((char *)&unk_5B236C + 128 * dword_5B2344, buf, 0x80u);
      dword_5B2344 = v6;
    }
    else
    {
      v7 = calloc(0x98u, 1u);
      v8 = dword_5B2348;
      v9 = v7;
      if ( !dword_5B2348 )
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
      v12 = *((_DWORD *)&unk_5B636C + 34 * v5 + 33);
      v9[3] = *((_DWORD *)&unk_5B636C + 34 * v5);
      v9[37] = v12;
LABEL_11:
      if ( v8 == v5 )
      {
LABEL_18:
        *(_DWORD *)v41 = 0;
        memset(v42, 0, sizeof(v42));
        sprintf(v41, "%x %d %s %s %s", 63, 0, "reg_resp", "no_name", src);
        v17 = strlen(v41);
        send(v3, v41, v17 + 1, 0);
        free(v9);
      }
      else
      {
        *v9 = dword_B0E48;
        v13 = strlen(src);
        memcpy(v9 + 4, src, v13 + 1);
        v9[36] = 0;
        pthread_create(&newthread, &attr, (void *(*)(void *))sub_77A80, v9);
        while ( !v9[36] )
          usleep(0x2710u);
        v14 = *v9;
        *(_DWORD *)v41 = 0;
        if ( v14 != dword_B0E48 )
          dword_B0E48 = v14;
        memset(v42, 0, sizeof(v42));
        sprintf(v41, "%x %d %s %s %s", 63, v14, "reg_resp", "OK", src);
        v15 = strlen(v41);
        send(v3, v41, v15 + 1, 0);
        ++dword_B0E48;
      }
    }
  }
}
