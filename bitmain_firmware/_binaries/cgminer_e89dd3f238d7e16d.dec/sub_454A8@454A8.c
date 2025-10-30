void __fastcall sub_454A8(int a1)
{
  int v1; // r3
  bool v2; // r3
  __int64 v3; // r2
  __int64 v4; // r2
  int v5; // r3
  int v6; // r0
  unsigned int v7; // r0
  unsigned int v8; // r6
  int v9; // r0
  char v11[4]; // [sp+10h] [bp-894h] BYREF
  struct timespec requested_time; // [sp+810h] [bp-94h] BYREF
  _DWORD *v13; // [sp+818h] [bp-8Ch] BYREF
  int v14; // [sp+81Ch] [bp-88h] BYREF
  int v15; // [sp+820h] [bp-84h]
  int v16; // [sp+824h] [bp-80h]
  int v17; // [sp+828h] [bp-7Ch]
  int v18; // [sp+82Ch] [bp-78h]
  int v19; // [sp+830h] [bp-74h]
  __time_t v20[2]; // [sp+834h] [bp-70h] BYREF
  __time_t v21[2]; // [sp+83Ch] [bp-68h] BYREF
  __time_t v22[2]; // [sp+844h] [bp-60h] BYREF
  __time_t v23[2]; // [sp+84Ch] [bp-58h] BYREF
  int v24; // [sp+854h] [bp-50h]
  __int64 v25; // [sp+858h] [bp-4Ch]
  _DWORD *v26; // [sp+860h] [bp-44h]
  __time_t *v27; // [sp+864h] [bp-40h]
  bool v28; // [sp+86Bh] [bp-39h]
  int v29; // [sp+86Ch] [bp-38h]
  _DWORD *v30; // [sp+870h] [bp-34h]
  int v31; // [sp+874h] [bp-30h]
  _DWORD *v32; // [sp+878h] [bp-2Ch]
  int v33; // [sp+87Ch] [bp-28h]
  __int64 v34; // [sp+880h] [bp-24h]
  unsigned int v35; // [sp+88Ch] [bp-18h]

  v33 = *(_DWORD *)a1;
  v32 = *(_DWORD **)(a1 + 36);
  v31 = v32[1];
  v30 = v32 + 73;
  v1 = dword_85A88 / 5;
  if ( !(dword_85A88 / 5) )
    v1 = 1;
  v29 = v1;
  v2 = !*(_DWORD *)(a1 + 4) || *(_BYTE *)(a1 + 8);
  v28 = v2;
  v14 = 0;
  v15 = 0;
  v35 = (*(int (__fastcall **)(int))(v31 + 48))(a1);
  v34 = 0;
  v27 = v23;
  sub_21AC0(v23);
  v19 = 0;
  v18 = 0;
  sub_21AC0(v20);
  while ( *((_BYTE *)v32 + 364) != 1 )
  {
    v13 = sub_433C4(a1, v33);
    *(_BYTE *)(a1 + 62) = 0;
    *((_BYTE *)v32 + 172) = 1;
    sub_21AC0(v21);
    v13[62] = 0;
    *((_QWORD *)v32 + 20) = 0;
    if ( (*(unsigned __int8 (__fastcall **)(int, _DWORD *))(v31 + 56))(a1, v13) != 1 )
    {
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
      {
        snprintf(v11, 0x800u, "work prepare failed, exiting mining thread %d", v33);
        sub_1DB6C(3, v11, 0);
      }
      break;
    }
    if ( *(double *)(v31 + 104) <= *((double *)v13 + 47) )
      v3 = *(_QWORD *)(v31 + 104);
    else
      v3 = *((_QWORD *)v13 + 47);
    *((_QWORD *)v13 + 28) = v3;
    if ( *(double *)(v31 + 112) <= *((double *)v13 + 28) )
      v4 = *((_QWORD *)v13 + 28);
    else
      v4 = *(_QWORD *)(v31 + 112);
    *((_QWORD *)v13 + 28) = v4;
    while ( 1 )
    {
      sub_21AC0(v22);
      sub_211F8(v22, v23);
      sub_21290(v23, v30 + 1);
      if ( sub_21330(v23, v30 + 3) )
        sub_21430((int)(v30 + 3), (int)v23);
      if ( sub_213B0(v23, v30 + 5) )
        sub_21430((int)(v30 + 5), (int)v23);
      ++*v30;
      v26 = (_DWORD *)(v13[65] + 384);
      sub_21290(v23, v26 + 1);
      if ( sub_21330(v23, v26 + 3) )
        sub_21430((int)(v26 + 3), (int)v23);
      if ( sub_213B0(v23, v26 + 5) )
        sub_21430((int)(v26 + 5), (int)v23);
      ++*v26;
      sub_21AC0(v13 + 106);
      pthread_setcancelstate(1, 0);
      sub_3BAB4(a1);
      v25 = ((__int64 (__fastcall *)(int, _DWORD *, unsigned int, _DWORD))*(_DWORD *)(v31 + 64))(
              a1,
              v13,
              v13[62] + v35,
              0);
      sub_3BB14(a1);
      pthread_setcancelstate(0, 0);
      pthread_testcancel();
      sub_21AC0(v23);
      if ( v25 == -1 )
      {
        if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
        {
          snprintf(v11, 0x800u, "%s %d failure, disabling!", *(const char **)(v31 + 8), v32[2]);
          sub_1DB6C(3, v11, 0);
        }
        v32[8] = 1;
        sub_2A5A0(v32, 1);
        *((_BYTE *)v32 + 364) = 1;
        goto LABEL_68;
      }
      v34 += v25;
      if ( *((_QWORD *)v32 + 20) < v25 )
        *((_QWORD *)v32 + 20) = v25;
      v16 = *v27 - v22[0];
      v17 = v27[1] - v22[1];
      if ( v17 < 0 )
      {
        --v16;
        v17 += 1000000;
      }
      v18 += v16;
      v19 += v17;
      if ( v19 > 1000000 )
      {
        ++v18;
        v19 -= 1000000;
      }
      v14 = *v27 - v21[0];
      v15 = v27[1] - v21[1];
      if ( v15 < 0 )
      {
        --v14;
        v15 += 1000000;
      }
      if ( v29 <= v18 )
        break;
      if ( v35 != -1 )
      {
        v5 = v19 + 1024;
        if ( v19 + 1024 < 0 )
          v5 = v19 + 2047;
        v6 = sub_67C48(1000000, v5 >> 10);
        v24 = v29 * (v6 + 16);
        v7 = sub_679D0(-1024, v24);
        if ( v35 <= v7 )
          v35 = (v35 * v24) >> 10;
        else
          v35 = -1;
        goto LABEL_53;
      }
LABEL_67:
      if ( sub_45244((int)v13, &v14, *((_QWORD *)v32 + 20)) )
        goto LABEL_68;
    }
    if ( v29 >= v18 )
    {
      if ( v19 > 100000 )
      {
        v8 = v35 << 10;
        v9 = sub_67C48(1000000 * v29 + v19, 1000000 * v29 / 1024);
        v35 = sub_679D0(v8, v9);
      }
    }
    else
    {
      v35 = sub_679D0(v35 * v29, v18);
    }
LABEL_53:
    v16 = *v27 - v20[0];
    v17 = v27[1] - v20[1];
    if ( v17 < 0 )
    {
      --v16;
      v17 += 1000000;
    }
    if ( v34 && (v16 > 0 || v17 > 200000) || v16 >= dword_85A88 )
    {
      sub_3BB74(v33, v34);
      v34 = 0;
      sub_21430((int)v20, (int)v27);
    }
    if ( !*(_BYTE *)(a1 + 62) )
    {
      if ( *(_BYTE *)(a1 + 60) || v32[8] )
        sub_452C0(a1, v33, v31);
      v19 = 0;
      v18 = 0;
      goto LABEL_67;
    }
    if ( !v28 )
    {
      requested_time.tv_sec = 0;
      requested_time.tv_nsec = 250000000 * *(_DWORD *)(a1 + 4);
      nanosleep(&requested_time, 0);
    }
LABEL_68:
    sub_30E0C((void **)&v13, "cgminer.c", "hash_sole_work", 9427);
  }
  v32[8] = 1;
}
