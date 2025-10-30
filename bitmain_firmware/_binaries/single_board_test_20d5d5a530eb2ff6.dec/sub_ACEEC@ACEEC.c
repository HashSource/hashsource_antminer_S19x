int __fastcall sub_ACEEC(int a1)
{
  int v1; // r2
  int v2; // r6
  int v3; // r5
  _DWORD *v6; // r3
  int v7; // r2
  int v8; // r5
  int v9; // r0
  int v10; // r0
  int v11; // r7
  int v12; // r7
  int v13; // r9
  int v14; // r10
  int v15; // r11
  int v16; // r7
  int v17; // r0
  int v18; // r8
  int v19; // r1
  int v20; // r2
  int v21; // r2
  int v22; // [sp+10h] [bp-1Ch] BYREF
  int v23; // [sp+14h] [bp-18h] BYREF
  int v24; // [sp+18h] [bp-14h] BYREF
  int v25; // [sp+1Ch] [bp-10h] BYREF
  int v26; // [sp+20h] [bp-Ch] BYREF
  int v27; // [sp+24h] [bp-8h] BYREF

  v1 = *(_DWORD *)(a1 + 124);
  v25 = 0;
  v2 = *(_DWORD *)(v1 + 552);
  v26 = 0;
  if ( v2 )
    return 1;
  if ( sub_86258(*(int **)(a1 + 1140), &v22, &v23, &v25, &v26, &v24, *(_DWORD *)(a1 + 1448)) )
  {
    v6 = *(_DWORD **)(a1 + 124);
    v7 = v22;
    v8 = v23;
    v9 = v25;
    v6[143] = v26;
    v6[141] = v8;
    v6[142] = v9;
    v6[140] = v7;
    v10 = sub_D8AD0(v7);
    v11 = v26;
    v12 = 2 * (v11 + sub_D8940(v22) + v10);
    sub_A8DC4(a1);
    v13 = CRYPTO_malloc(v12, "ssl/t1_enc.c", 367);
    if ( !v13 )
    {
      v3 = 0;
      sub_95494((_DWORD *)a1, 80, 211, 65, (int)"ssl/t1_enc.c", 369);
      return v3;
    }
    v14 = *(_DWORD *)(a1 + 124);
    v15 = *(_DWORD *)(a1 + 1140);
    v27 = v12;
    *(_DWORD *)(v14 + 552) = v12;
    *(_DWORD *)(v14 + 556) = v13;
    v16 = *(_DWORD *)(v15 + 4);
    v3 = sub_86518(a1);
    if ( !v3 )
    {
      sub_95494((_DWORD *)a1, 80, 284, 68, (int)"ssl/t1_enc.c", 36);
      return v3;
    }
    v17 = sub_DB6A8(1021, 0);
    v18 = v17;
    if ( v17
      && sub_DAC94(v17) > 0
      && sub_DB77C(v18, -1, 1024, 4096, 0, v3) > 0
      && sub_DB77C(v18, -1, 1024, 4097, v16, v15 + 72) > 0
      && sub_DB77C(v18, -1, 1024, 4098, 13, "key expansion") > 0
      && sub_DB77C(v18, -1, 1024, 4098, 32, v14 + 140) > 0
      && sub_DB77C(v18, -1, 1024, 4098, 32, v14 + 172) > 0
      && sub_DB77C(v18, -1, 1024, 4098, 0, 0) > 0
      && sub_DB77C(v18, -1, 1024, 4098, 0, 0) > 0
      && sub_DAE14(v18, v13, &v27) > 0 )
    {
      sub_DB4BC(v18);
      if ( (*(_DWORD *)(a1 + 1260) & 0x800) == 0 && **(int **)(a1 + 4) <= 769 )
      {
        v3 = 1;
        v19 = *(_DWORD *)(a1 + 124);
        v20 = *(_DWORD *)(*(_DWORD *)(a1 + 1140) + 440);
        *(_DWORD *)(v19 + 204) = 1;
        if ( v20 )
        {
          v21 = *(_DWORD *)(v20 + 24);
          if ( v21 == 32 || v21 == 4 )
          {
            *(_DWORD *)(v19 + 204) = 0;
            return v3;
          }
        }
      }
      return 1;
    }
    sub_95494((_DWORD *)a1, 80, 284, 68, (int)"ssl/t1_enc.c", 53);
    sub_DB4BC(v18);
    return 0;
  }
  else
  {
    sub_95494((_DWORD *)a1, 80, 211, 138, (int)"ssl/t1_enc.c", 354);
    return 0;
  }
}
