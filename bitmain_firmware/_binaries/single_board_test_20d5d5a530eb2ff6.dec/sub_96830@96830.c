int __fastcall sub_96830(_DWORD *a1, int a2)
{
  int v2; // r6
  int v5; // r0
  int v6; // r4
  int v7; // r7
  int v8; // r0
  int v9; // r8
  int v10; // r0
  int v11; // r0
  int v12; // r1
  int v13; // r1
  unsigned int v14; // r2
  int v15; // r3
  _DWORD *v16; // r0
  int v17; // r3
  int v19; // r3
  int v20; // [sp+4h] [bp-12Ch]
  unsigned int v21; // [sp+8h] [bp-128h] BYREF
  _BYTE v22[4]; // [sp+Ch] [bp-124h] BYREF
  _BYTE v23[32]; // [sp+10h] [bp-120h] BYREF
  _BYTE v24[256]; // [sp+30h] [bp-100h] BYREF

  v2 = 809;
  if ( (*(_DWORD *)(*(_DWORD *)(a1[31] + 528) + 20) & 0x80) != 0 )
    v2 = 982;
  if ( !*(_DWORD *)(a1[285] + 412) )
  {
    sub_95494(a1, 40, 406, 330, (int)"ssl/statem/statem_clnt.c", 3199);
    return 0;
  }
  v5 = sub_10E89C(*(_DWORD *)(a1[285] + 412));
  v6 = sub_DB4F8(v5, 0);
  if ( !v6 )
  {
    sub_95494(a1, 80, 406, 65, (int)"ssl/statem/statem_clnt.c", 3206);
    return 0;
  }
  v7 = CRYPTO_malloc(32, "ssl/statem/statem_clnt.c", 3217);
  if ( !v7 )
  {
    v9 = 0;
    sub_95494(a1, 80, 406, 65, (int)"ssl/statem/statem_clnt.c", 3220);
    goto LABEL_24;
  }
  if ( sub_DAA54(v6) <= 0 || (v8 = sub_F497C(v7, 32), v8 <= 0) )
  {
    v15 = 3230;
    goto LABEL_22;
  }
  v9 = sub_D14F4(v8);
  if ( !v9
    || (v10 = sub_EAAB4(v2), v11 = sub_D99DC(v10), sub_D16C0(v9, v11) <= 0)
    || sub_D16D8(v9, a1[31] + 172, 32) <= 0
    || sub_D16D8(v9, a1[31] + 140, 32) <= 0
    || sub_D16E4(v9, v23, v22) <= 0 )
  {
    sub_95494(a1, 80, 406, 68, (int)"ssl/statem/statem_clnt.c", 3246);
    goto LABEL_24;
  }
  sub_D1504(v9);
  if ( sub_DB77C(v6, -1, 256, 8, 8, v23) < 0 )
  {
    v20 = 3254;
    v16 = a1;
    v17 = 274;
    goto LABEL_23;
  }
  v21 = 255;
  if ( sub_DAAA0(v6, v24, &v21, v7, 32) <= 0 )
  {
    v20 = 3264;
    v16 = a1;
    v17 = 274;
    goto LABEL_23;
  }
  if ( !sub_A8450(a2, v12, 48, 0, 1) )
    goto LABEL_20;
  v14 = v21;
  if ( v21 > 0x7F )
  {
    if ( sub_A8450(a2, v13, 129, 0, 1) )
    {
      v14 = v21;
      goto LABEL_19;
    }
LABEL_20:
    v15 = 3272;
LABEL_22:
    v20 = v15;
    v16 = a1;
    v17 = 68;
LABEL_23:
    v9 = 0;
    sub_95494(v16, 80, 406, v17, (int)"ssl/statem/statem_clnt.c", v20);
LABEL_24:
    sub_DB4BC(v6);
    sub_E0758(v7, 32, (size_t)"ssl/statem/statem_clnt.c");
    sub_D1504(v9);
    return 0;
  }
LABEL_19:
  if ( !sub_A8544(a2, v24, v14, 1) )
    goto LABEL_20;
  sub_DB4BC(v6);
  v19 = a1[31];
  *(_DWORD *)(v19 + 592) = v7;
  *(_DWORD *)(v19 + 596) = 32;
  return 1;
}
