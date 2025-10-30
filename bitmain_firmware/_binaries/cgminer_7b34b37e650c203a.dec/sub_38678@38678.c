void __fastcall sub_38678(int a1)
{
  int v2; // r8
  int v3; // r3
  int v4; // r3
  int v5; // r9
  int v6; // r11
  __int64 v7; // r6
  int v8; // r3
  void **v9; // r3
  double v10; // d7
  void **v11; // r2
  int *v12; // r5
  struct timeval *v13; // r0
  __int64 v14; // r4
  __suseconds_t tv_usec; // r4
  __time_t tv_sec; // r3
  int v17; // r1
  int v18; // r5
  bool v19; // nf
  int v20; // r4
  int v21; // r4
  int v22; // r3
  bool v23; // cc
  __int64 v24; // r2
  _BOOL4 v25; // r1
  int v26; // r3
  int v27; // r1
  unsigned int v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r0
  int v32; // [sp+Ch] [bp-868h]
  _DWORD *v33; // [sp+10h] [bp-864h]
  _DWORD *v34; // [sp+14h] [bp-860h]
  unsigned int v35; // [sp+18h] [bp-85Ch]
  int v36; // [sp+24h] [bp-850h]
  void *v37; // [sp+28h] [bp-84Ch]
  __time_t v38; // [sp+2Ch] [bp-848h]
  __time_t v39; // [sp+2Ch] [bp-848h]
  __time_t v40; // [sp+2Ch] [bp-848h]
  struct timespec *remaining; // [sp+30h] [bp-844h]
  int v42; // [sp+38h] [bp-83Ch]
  int v43; // [sp+44h] [bp-830h]
  void **v44; // [sp+4Ch] [bp-828h] BYREF
  struct timeval v45; // [sp+50h] [bp-824h] BYREF
  struct timeval v46; // [sp+58h] [bp-81Ch] BYREF
  struct timeval v47; // [sp+60h] [bp-814h] BYREF
  struct timeval v48; // [sp+68h] [bp-80Ch] BYREF
  struct timespec requested_time; // [sp+70h] [bp-804h] BYREF

  v2 = *(_DWORD *)(a1 + 36);
  v32 = *(_DWORD *)(v2 + 4);
  v3 = dword_68730 / 5;
  if ( (int)((unsigned __int64)(1717986919LL * dword_68730) >> 32) >> 1 == dword_68730 >> 31 )
    v3 = 1;
  v36 = v3;
  if ( *(_DWORD *)(a1 + 4) )
    v4 = *(unsigned __int8 *)(a1 + 8);
  else
    v4 = 1;
  v37 = *(void **)a1;
  remaining = (struct timespec *)v4;
  v35 = (*(int (__fastcall **)(int))(v32 + 48))(a1);
  sub_239A4(&v45);
  sub_239A4(&v48);
  if ( *(_BYTE *)(v2 + 364) )
    goto LABEL_53;
  v5 = *(unsigned __int8 *)(v2 + 364);
  v6 = v5;
  v7 = 0;
  v8 = 1000000 * v36 + 1023;
  if ( 1000000 * v36 >= 0 )
    v8 = 1000000 * v36;
  v42 = v8 >> 10;
  do
  {
    v44 = sub_36CD4(a1, v37);
    *(_BYTE *)(a1 + 62) = 0;
    *(_BYTE *)(v2 + 172) = 1;
    sub_239A4(&v47);
    v44[62] = 0;
    *(_QWORD *)(v2 + 160) = 0;
    if ( !(*(int (__fastcall **)(int))(v32 + 56))(a1) )
    {
      if ( byte_74500 || byte_68BD4 || dword_67DB4 > 2 )
      {
        snprintf((char *)&requested_time, 0x800u, "work prepare failed, exiting mining thread %d", v37);
        sub_20F58(3, (const char *)&requested_time, 0);
      }
      break;
    }
    v9 = v44;
    v34 = (_DWORD *)(v2 + 304);
    v10 = *(double *)(v32 + 104);
    v33 = (_DWORD *)(v2 + 312);
    if ( v10 > *((double *)v44 + 47) )
      v10 = *((double *)v44 + 47);
    *((double *)v44 + 28) = v10;
    if ( *(double *)(v32 + 112) > v10 )
      v10 = *(double *)(v32 + 112);
    *((double *)v9 + 28) = v10;
    while ( 1 )
    {
      sub_239A4(&v46);
      sub_235C4(&v46, &v45.tv_sec);
      sub_235F8(&v45, (int *)(v2 + 296));
      if ( sub_2363C(&v45, v34) )
        sub_257F8(v34, &v45);
      if ( sub_23670(&v45, v33) )
        sub_257F8(v33, &v45);
      v11 = v44;
      ++*(_DWORD *)(v2 + 292);
      v12 = (int *)v11[65];
      sub_235F8(&v45, v12 + 97);
      if ( sub_2363C(&v45, v12 + 99) )
        sub_257F8(v12 + 99, &v45);
      if ( sub_23670(&v45, v12 + 101) )
        sub_257F8(v12 + 101, &v45);
      v13 = (struct timeval *)v44;
      ++v12[96];
      sub_239A4(v13 + 53);
      pthread_setcancelstate(1, 0);
      sub_2AEC4(a1);
      v14 = ((__int64 (__fastcall *)(int, void **, char *, _DWORD))*(_DWORD *)(v32 + 64))(
              a1,
              v44,
              (char *)v44[62] + v35,
              0);
      sub_2AE8C(a1);
      pthread_setcancelstate(0, 0);
      pthread_testcancel();
      sub_239A4(&v45);
      if ( v14 == -1 )
        break;
      v7 += v14;
      if ( *(_QWORD *)(v2 + 160) < v14 )
        *(_QWORD *)(v2 + 160) = v14;
      tv_usec = v45.tv_usec;
      tv_sec = v45.tv_sec;
      v17 = v45.tv_sec - v46.tv_sec;
      v5 += v45.tv_usec - v46.tv_usec + (v45.tv_usec - v46.tv_usec < 0 ? 0xF4240 : 0);
      if ( v45.tv_usec - v46.tv_usec < 0 )
        --v17;
      v6 += v17;
      if ( v5 > 1000000 )
      {
        ++v6;
        v5 -= 1000000;
      }
      v18 = v45.tv_sec - v47.tv_sec;
      if ( v45.tv_usec - v47.tv_usec < 0 )
        --v18;
      if ( v36 > v6 )
      {
        if ( v35 == -1 )
          goto LABEL_48;
        v27 = v5 + 1024;
        v38 = v45.tv_sec;
        if ( v5 + 1024 < 0 )
          v27 = v5 + 2047;
        v43 = (sub_49B50(1000000, v27 >> 10) + 16) * v36;
        v28 = sub_498D8(-1024, v43);
        tv_sec = v38;
        if ( v28 >= v35 )
          v35 = (v35 * v43) >> 10;
        else
          v35 = -1;
      }
      else if ( v36 < v6 )
      {
        v39 = v45.tv_sec;
        v29 = sub_498D8(v36 * v35, v6);
        tv_sec = v39;
        v35 = v29;
      }
      else if ( v5 > 100000 )
      {
        v40 = v45.tv_sec;
        v30 = sub_49B50(1000000 * v36 + v5, v42);
        v31 = sub_498D8(v35 << 10, v30);
        tv_sec = v40;
        v35 = v31;
      }
      v20 = tv_usec - v48.tv_usec;
      v19 = v20 < 0;
      v21 = v20 + (v20 < 0 ? 0xF4000 : 0);
      v22 = tv_sec - v48.tv_sec;
      if ( v19 )
      {
        --v22;
        v21 += 576;
      }
      if ( v7 )
      {
        v23 = v22 <= 0;
        if ( v22 <= 0 )
          v23 = v21 <= 200000;
        if ( !v23 )
          goto LABEL_43;
      }
      if ( dword_68730 <= v22 )
      {
LABEL_43:
        v24 = v7;
        v7 = 0;
        sub_375EC((int)v37, v24);
        sub_257F8(&v48, &v45);
        if ( *(_BYTE *)(a1 + 62) )
          goto LABEL_56;
      }
      else if ( *(_BYTE *)(a1 + 62) )
      {
LABEL_56:
        if ( !remaining )
        {
          v26 = *(_DWORD *)(a1 + 4);
          requested_time.tv_sec = 0;
          requested_time.tv_nsec = 250000000 * v26;
          nanosleep(&requested_time, 0);
        }
        goto LABEL_52;
      }
      if ( *(_BYTE *)(a1 + 60) || (v5 = *(_DWORD *)(v2 + 32)) != 0 )
      {
        v5 = 0;
        v6 = 0;
        sub_2BF50(a1, (int)v37, (int (__fastcall **)(int))(v32 + 92));
      }
      else
      {
        v6 = 0;
      }
LABEL_48:
      v25 = *(_QWORD *)(v2 + 160) > 0xFFFFFFFD;
      if ( dword_68754 < v18 )
        v25 = 1;
      if ( v25 || sub_367EC((int)v44, 0) )
        goto LABEL_52;
    }
    if ( byte_74500 || byte_68BD4 || dword_67DB4 > 2 )
    {
      snprintf(
        (char *)&requested_time,
        0x800u,
        "%s %d failure, disabling!",
        *(const char **)(v32 + 8),
        *(_DWORD *)(v2 + 8));
      sub_20F58(3, (const char *)&requested_time, 0);
    }
    *(_DWORD *)(v2 + 32) = 1;
    sub_24DC4((_DWORD *)v2, 1);
    *(_BYTE *)(v2 + 364) = 1;
LABEL_52:
    sub_2CBA8(&v44, "cgminer.c", "hash_sole_work", 9351);
  }
  while ( !*(_BYTE *)(v2 + 364) );
LABEL_53:
  *(_DWORD *)(v2 + 32) = 1;
}
