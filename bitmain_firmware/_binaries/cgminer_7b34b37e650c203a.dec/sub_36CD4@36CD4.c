void **__fastcall sub_36CD4(int a1, void *a2)
{
  _DWORD *v4; // r5
  time_t v5; // r9
  int v6; // r9
  int v7; // r3
  void **v8; // r0
  int v9; // r3
  void **v10; // r3
  void **result; // r0
  double v12; // d7
  int v13; // r2
  int v14; // r3
  int v15; // r3
  int v16; // r2
  char *v17; // r1
  int v18; // r3
  bool v19; // cc
  void **v20; // [sp+Ch] [bp-804h] BYREF
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  v20 = 0;
  v4 = *(_DWORD **)(a1 + 36);
  sub_2AE8C(a1);
  if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
  {
    strcpy(s, "Popping work from get queue to get work");
    sub_20F58(7, s, 0);
  }
  v5 = time(0);
  while ( !v20 )
  {
    v20 = (void **)sub_355FC(1);
    if ( sub_367EC((int)v20, 0) )
    {
      sub_2CEA0(&v20, "cgminer.c", "get_work", 8644);
      sub_2F9C0();
    }
  }
  v6 = time(0) - v5;
  v7 = (unsigned __int8)byte_68BD5;
  if ( v6 <= 0 )
  {
LABEL_16:
    if ( !v7 )
      goto LABEL_20;
    goto LABEL_17;
  }
  if ( !byte_68BD5 )
  {
    v4[58] += v6;
    goto LABEL_20;
  }
  if ( byte_74500 || byte_68BD4 || dword_67DB4 > 6 )
  {
    snprintf(s, 0x800u, "Get work blocked for %ld seconds", v6);
    sub_20F58(7, s, 0);
    v7 = (unsigned __int8)byte_68BD5;
    v4[58] += v6;
    goto LABEL_16;
  }
  v4[58] += v6;
LABEL_17:
  if ( byte_74500 || byte_68BD4 || dword_67DB4 > 6 )
  {
    snprintf(s, 0x800u, "Got work from get queue to get work for thread %d", a2);
    sub_20F58(7, s, 0);
  }
LABEL_20:
  v8 = v20;
  v9 = (unsigned __int8)byte_6917C;
  v20[64] = a2;
  if ( !v9 )
    goto LABEL_21;
  v14 = v4[95] + v4[96];
  v4[95] = v14;
  if ( v14 <= 0 )
  {
    v4[96] = 1;
LABEL_40:
    sub_254E8(v8, (char *)&unk_69BB0 + 160 * v14, 0xA0u, (int)"cgminer.c", (int)"set_benchmark_work", 8625);
    goto LABEL_21;
  }
  if ( v14 <= 15 )
    goto LABEL_40;
  v15 = v4[94];
  v16 = -1;
  v17 = (char *)&unk_691B0;
  v4[96] = -1;
  v18 = v15 + 1;
  v19 = v18 <= 15;
  if ( v18 > 15 )
    v18 = 0;
  else
    v16 = 5 * v18;
  v4[94] = v18;
  if ( v19 )
    v17 = (char *)&unk_691B0 + 32 * v16;
  sub_254E8(v8, v17, 0xA0u, (int)"cgminer.c", (int)"set_benchmark_work", 8621);
LABEL_21:
  sub_2AEC4(a1);
  v10 = v20;
  *((_BYTE *)v20 + 272) = 1;
  result = v10;
  v12 = *(double *)(v4[1] + 104);
  if ( v12 > *((double *)v10 + 47) )
    v12 = *((double *)v10 + 47);
  *((double *)v10 + 28) = v12;
  v13 = v4[1];
  if ( *(double *)(v13 + 112) > v12 )
    v12 = *(double *)(v13 + 112);
  *((double *)v10 + 28) = v12;
  return result;
}
