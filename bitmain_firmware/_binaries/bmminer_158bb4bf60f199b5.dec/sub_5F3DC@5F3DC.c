void __fastcall sub_5F3DC(int a1)
{
  int v2; // r8
  int v3; // r3
  int v4; // r3
  int v5; // r9
  int v6; // r11
  __int64 v7; // r6
  void **v8; // r3
  double v9; // d7
  void **v10; // r2
  int *v11; // r5
  struct timeval *v12; // r0
  __int64 v13; // r4
  __suseconds_t tv_usec; // r4
  __time_t tv_sec; // r3
  int v16; // r1
  int v17; // r5
  bool v18; // nf
  int v19; // r4
  int v20; // r4
  int v21; // r3
  bool v22; // cc
  __int64 v23; // r2
  _BOOL4 v24; // r1
  int v25; // r3
  unsigned int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // [sp+Ch] [bp-868h]
  _DWORD *v31; // [sp+10h] [bp-864h]
  _DWORD *v32; // [sp+14h] [bp-860h]
  unsigned int v33; // [sp+18h] [bp-85Ch]
  int v34; // [sp+24h] [bp-850h]
  void *v35; // [sp+28h] [bp-84Ch]
  __time_t v36; // [sp+2Ch] [bp-848h]
  __time_t v37; // [sp+2Ch] [bp-848h]
  __time_t v38; // [sp+2Ch] [bp-848h]
  struct timespec *remaining; // [sp+30h] [bp-844h]
  int v40; // [sp+44h] [bp-830h]
  void **v41; // [sp+4Ch] [bp-828h] BYREF
  struct timeval v42; // [sp+50h] [bp-824h] BYREF
  struct timeval v43; // [sp+58h] [bp-81Ch] BYREF
  struct timeval v44; // [sp+60h] [bp-814h] BYREF
  struct timeval v45; // [sp+68h] [bp-80Ch] BYREF
  struct timespec requested_time; // [sp+70h] [bp-804h] BYREF

  v2 = *(_DWORD *)(a1 + 36);
  v30 = *(_DWORD *)(v2 + 4);
  v3 = dword_9ED78 / 5;
  if ( (int)((unsigned __int64)(1717986919LL * dword_9ED78) >> 32) >> 1 == dword_9ED78 >> 31 )
    v3 = 1;
  v34 = v3;
  if ( *(_DWORD *)(a1 + 4) )
    v4 = *(unsigned __int8 *)(a1 + 8);
  else
    v4 = 1;
  v35 = *(void **)a1;
  remaining = (struct timespec *)v4;
  v33 = (*(int (__fastcall **)(int))(v30 + 48))(a1);
  sub_4A60C(&v42);
  sub_4A60C(&v45);
  if ( *(_BYTE *)(v2 + 364) )
    goto LABEL_51;
  v5 = *(unsigned __int8 *)(v2 + 364);
  v6 = v5;
  v7 = 0;
  do
  {
    v41 = sub_5BB20(a1, v35);
    *(_BYTE *)(a1 + 62) = 0;
    *(_BYTE *)(v2 + 172) = 1;
    sub_4A60C(&v44);
    v41[62] = 0;
    *(_QWORD *)(v2 + 160) = 0;
    if ( !(*(int (__fastcall **)(int))(v30 + 56))(a1) )
    {
      if ( byte_244080 || byte_1AECC4 || dword_9E320 > 2 )
      {
        snprintf((char *)&requested_time, 0x800u, "work prepare failed, exiting mining thread %d", v35);
        sub_47AB4(3, (const char *)&requested_time, 0);
      }
      break;
    }
    v8 = v41;
    v32 = (_DWORD *)(v2 + 304);
    v9 = *(double *)(v30 + 104);
    v31 = (_DWORD *)(v2 + 312);
    if ( v9 > *((double *)v41 + 47) )
      v9 = *((double *)v41 + 47);
    *((double *)v41 + 28) = v9;
    if ( *(double *)(v30 + 112) > v9 )
      v9 = *(double *)(v30 + 112);
    *((double *)v8 + 28) = v9;
    while ( 1 )
    {
      sub_4A60C(&v43);
      sub_4A22C(&v43, &v42.tv_sec);
      sub_4A260(&v42, (int *)(v2 + 296));
      if ( sub_4A2A4(&v42, v32) )
        sub_4C460(v32, &v42);
      if ( sub_4A2D8(&v42, v31) )
        sub_4C460(v31, &v42);
      v10 = v41;
      ++*(_DWORD *)(v2 + 292);
      v11 = (int *)v10[65];
      sub_4A260(&v42, v11 + 97);
      if ( sub_4A2A4(&v42, v11 + 99) )
        sub_4C460(v11 + 99, &v42);
      if ( sub_4A2D8(&v42, v11 + 101) )
        sub_4C460(v11 + 101, &v42);
      v12 = (struct timeval *)v41;
      ++v11[96];
      sub_4A60C(v12 + 53);
      pthread_setcancelstate(1, 0);
      sub_51AE4(a1);
      v13 = ((__int64 (__fastcall *)(int, void **, char *, _DWORD))*(_DWORD *)(v30 + 64))(
              a1,
              v41,
              (char *)v41[62] + v33,
              0);
      sub_51AAC(a1);
      pthread_setcancelstate(0, 0);
      pthread_testcancel();
      sub_4A60C(&v42);
      if ( v13 == -1 )
        break;
      v7 += v13;
      if ( *(_QWORD *)(v2 + 160) < v13 )
        *(_QWORD *)(v2 + 160) = v13;
      tv_usec = v42.tv_usec;
      tv_sec = v42.tv_sec;
      v16 = v42.tv_sec - v43.tv_sec;
      v5 += v42.tv_usec - v43.tv_usec + (v42.tv_usec - v43.tv_usec < 0 ? 0xF4240 : 0);
      if ( v42.tv_usec - v43.tv_usec < 0 )
        --v16;
      v6 += v16;
      if ( v5 > (int)&unk_F4240 )
      {
        ++v6;
        v5 -= 1000000;
      }
      v17 = v42.tv_sec - v44.tv_sec;
      if ( v42.tv_usec - v44.tv_usec < 0 )
        --v17;
      if ( v34 > v6 )
      {
        if ( v33 == -1 )
          goto LABEL_46;
        v36 = v42.tv_sec;
        v40 = (sub_772E8(&unk_F4240) + 16) * v34;
        v26 = sub_77070(-1024, v40, v40);
        tv_sec = v36;
        if ( v26 >= v33 )
          v33 = (v33 * v40) >> 10;
        else
          v33 = -1;
      }
      else if ( v34 < v6 )
      {
        v37 = v42.tv_sec;
        v27 = sub_77070(v34 * v33, v6, v33);
        tv_sec = v37;
        v33 = v27;
      }
      else if ( v5 > 100000 )
      {
        v38 = v42.tv_sec;
        v28 = sub_772E8((_DWORD)&unk_F4240 * v34 + v5);
        v29 = sub_77070(v33 << 10, v28, v33 << 10);
        tv_sec = v38;
        v33 = v29;
      }
      v19 = tv_usec - v45.tv_usec;
      v18 = v19 < 0;
      v20 = v19 + (v19 < 0 ? 0xF4000 : 0);
      v21 = tv_sec - v45.tv_sec;
      if ( v18 )
      {
        --v21;
        v20 += 576;
      }
      if ( v7 )
      {
        v22 = v21 <= 0;
        if ( v21 <= 0 )
          v22 = v20 <= 200000;
        if ( !v22 )
          goto LABEL_41;
      }
      if ( dword_9ED78 <= v21 )
      {
LABEL_41:
        v23 = v7;
        v7 = 0;
        sub_5E2EC((int)v35, v23);
        sub_4C460(&v45, &v42);
        if ( *(_BYTE *)(a1 + 62) )
          goto LABEL_54;
      }
      else if ( *(_BYTE *)(a1 + 62) )
      {
LABEL_54:
        if ( !remaining )
        {
          v25 = *(_DWORD *)(a1 + 4);
          requested_time.tv_sec = 0;
          requested_time.tv_nsec = 250000000 * v25;
          nanosleep(&requested_time, 0);
        }
        goto LABEL_50;
      }
      if ( *(_BYTE *)(a1 + 60) || (v5 = *(_DWORD *)(v2 + 32)) != 0 )
      {
        v5 = 0;
        v6 = 0;
        sub_524EC(a1, (int)v35, (int (__fastcall **)(int))(v30 + 92));
      }
      else
      {
        v6 = 0;
      }
LABEL_46:
      v24 = *(_QWORD *)(v2 + 160) > 0xFFFFFFFD;
      if ( dword_9ED98 < v17 )
        v24 = 1;
      if ( v24 || sub_5B638((int)v41, 0) )
        goto LABEL_50;
    }
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 2 )
    {
      snprintf(
        (char *)&requested_time,
        0x800u,
        "%s %d failure, disabling!",
        *(const char **)(v30 + 8),
        *(_DWORD *)(v2 + 8));
      sub_47AB4(3, (const char *)&requested_time, 0);
    }
    *(_DWORD *)(v2 + 32) = 1;
    sub_4BA2C((_DWORD *)v2, 1);
    *(_BYTE *)(v2 + 364) = 1;
LABEL_50:
    sub_53084(&v41, "cgminer.c", "hash_sole_work", 9345);
  }
  while ( !*(_BYTE *)(v2 + 364) );
LABEL_51:
  *(_DWORD *)(v2 + 32) = 1;
}
