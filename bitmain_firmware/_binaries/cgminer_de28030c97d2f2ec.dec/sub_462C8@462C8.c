void __fastcall sub_462C8(int a1)
{
  int v1; // r3
  bool v2; // r3
  __int64 v3; // r2
  __int64 v4; // r2
  int v5; // r3
  int v6; // r0
  unsigned int v7; // r0
  unsigned int v8; // r4
  int v9; // r0
  char v11[12]; // [sp+10h] [bp-88Ch] BYREF
  struct timespec requested_time; // [sp+810h] [bp-8Ch] BYREF
  _DWORD *v13; // [sp+818h] [bp-84h] BYREF
  int v14; // [sp+81Ch] [bp-80h] BYREF
  int v15; // [sp+820h] [bp-7Ch]
  int v16; // [sp+824h] [bp-78h]
  int v17; // [sp+828h] [bp-74h]
  int v18; // [sp+82Ch] [bp-70h]
  int v19; // [sp+830h] [bp-6Ch]
  __time_t v20[2]; // [sp+834h] [bp-68h] BYREF
  __time_t v21[2]; // [sp+83Ch] [bp-60h] BYREF
  __time_t v22[2]; // [sp+844h] [bp-58h] BYREF
  __time_t v23[2]; // [sp+84Ch] [bp-50h] BYREF
  int v24; // [sp+854h] [bp-48h]
  __int64 v25; // [sp+858h] [bp-44h]
  _DWORD *v26; // [sp+860h] [bp-3Ch]
  __time_t *v27; // [sp+864h] [bp-38h]
  bool v28; // [sp+86Bh] [bp-31h]
  int v29; // [sp+86Ch] [bp-30h]
  _DWORD *v30; // [sp+870h] [bp-2Ch]
  int v31; // [sp+874h] [bp-28h]
  _DWORD *v32; // [sp+878h] [bp-24h]
  int v33; // [sp+87Ch] [bp-20h]
  __int64 v34; // [sp+880h] [bp-1Ch]
  unsigned int v35; // [sp+88Ch] [bp-10h]

  v33 = *(_DWORD *)a1;
  v32 = *(_DWORD **)(a1 + 36);
  v31 = v32[1];
  v30 = v32 + 73;
  v1 = dword_86C20 / 5;
  if ( !(dword_86C20 / 5) )
    v1 = 1;
  v29 = v1;
  v2 = !*(_DWORD *)(a1 + 4) || *(_BYTE *)(a1 + 8);
  v28 = v2;
  v14 = 0;
  v15 = 0;
  v35 = (*(int (__fastcall **)(int))(v31 + 48))(a1);
  v34 = 0;
  v27 = v23;
  sub_22308(v23);
  v19 = 0;
  v18 = 0;
  sub_22308(v20);
  while ( *((_BYTE *)v32 + 364) != 1 )
  {
    v13 = sub_44158(a1, v33);
    *(_BYTE *)(a1 + 62) = 0;
    *((_BYTE *)v32 + 172) = 1;
    sub_22308(v21);
    v13[62] = 0;
    *((_QWORD *)v32 + 20) = 0;
    if ( (*(unsigned __int8 (__fastcall **)(int, _DWORD *))(v31 + 56))(a1, v13) != 1 )
    {
      if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
      {
        snprintf(v11, 0x800u, "work prepare failed, exiting mining thread %d", v33);
        sub_1E4EC(3, v11, 0);
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
      sub_22308(v22);
      sub_21A70(v22, v23);
      sub_21B04(v23, v30 + 1);
      if ( sub_21BA0(v23, v30 + 3) )
        sub_21CA0((int)(v30 + 3), (int)v23);
      if ( sub_21C20(v23, v30 + 5) )
        sub_21CA0((int)(v30 + 5), (int)v23);
      ++*v30;
      v26 = (_DWORD *)(v13[65] + 384);
      sub_21B04(v23, v26 + 1);
      if ( sub_21BA0(v23, v26 + 3) )
        sub_21CA0((int)(v26 + 3), (int)v23);
      if ( sub_21C20(v23, v26 + 5) )
        sub_21CA0((int)(v26 + 5), (int)v23);
      ++*v26;
      sub_22308(v13 + 106);
      pthread_setcancelstate(1, 0);
      sub_3C9A4(a1);
      v25 = ((__int64 (__fastcall *)(int, _DWORD *, unsigned int, _DWORD))*(_DWORD *)(v31 + 64))(
              a1,
              v13,
              v13[62] + v35,
              0);
      sub_3CA00(a1);
      pthread_setcancelstate(0, 0);
      pthread_testcancel();
      sub_22308(v23);
      if ( v25 == -1 )
      {
        if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
        {
          snprintf(v11, 0x800u, "%s %d failure, disabling!", *(const char **)(v31 + 8), v32[2]);
          sub_1E4EC(3, v11, 0);
        }
        v32[8] = 1;
        sub_2B5B0(v32, 1);
        *((_BYTE *)v32 + 364) = 1;
        goto LABEL_69;
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
      if ( v18 >= v29 )
        break;
      if ( v35 != -1 )
      {
        v5 = v19 + 1024;
        if ( v19 + 1024 < 0 )
          v5 = v19 + 2047;
        v6 = sub_688C0(1000000, v5 >> 10);
        v24 = v29 * (v6 + 16);
        v7 = sub_68648(-1024, v24);
        if ( v7 >= v35 )
          v35 = (v35 * v24) >> 10;
        else
          v35 = -1;
        goto LABEL_53;
      }
LABEL_68:
      if ( sub_46068((int)v13, &v14, *((_QWORD *)v32 + 20)) )
        goto LABEL_69;
    }
    if ( v18 <= v29 )
    {
      if ( v19 > 100000 )
      {
        v8 = v35 << 10;
        v9 = sub_688C0(1000000 * v29 + v19, 1000000 * v29 / 1024);
        v35 = sub_68648(v8, v9);
      }
    }
    else
    {
      v35 = sub_68648(v35 * v29, v18);
    }
LABEL_53:
    v16 = *v27 - v20[0];
    v17 = v27[1] - v20[1];
    if ( v17 < 0 )
    {
      --v16;
      v17 += 1000000;
    }
    if ( v34 && (v16 > 0 || v17 > 200000) || v16 >= dword_86C20 )
    {
      sub_3CA5C(v33, v34);
      v34 = 0;
      sub_21CA0((int)v20, (int)v27);
    }
    if ( !*(_BYTE *)(a1 + 62) )
    {
      if ( *(_BYTE *)(a1 + 60) || v32[8] )
        sub_460E4(a1, v33, v31);
      v19 = 0;
      v18 = 0;
      goto LABEL_68;
    }
    if ( !v28 )
    {
      requested_time.tv_sec = 0;
      requested_time.tv_nsec = 250000000 * *(_DWORD *)(a1 + 4);
      nanosleep(&requested_time, 0);
    }
LABEL_69:
    sub_31F40((void **)&v13, "cgminer.c", "hash_sole_work", 9427);
  }
  v32[8] = 1;
}
