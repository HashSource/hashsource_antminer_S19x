int __fastcall tls_construct_cert_verify(_DWORD *a1, int a2)
{
  int v2; // r2
  int v4; // r6
  int v5; // r3
  int v6; // r7
  int v8; // r0
  int v9; // r3
  int v10; // r4
  int v11; // r9
  unsigned int v13; // r3
  bool v14; // cc
  int v15; // r3
  int v16; // r3
  int v17; // [sp+0h] [bp-C0h]
  int v18; // [sp+8h] [bp-B8h] BYREF
  int v19; // [sp+Ch] [bp-B4h] BYREF
  int v20; // [sp+10h] [bp-B0h] BYREF
  int v21; // [sp+14h] [bp-ACh] BYREF
  int v22; // [sp+18h] [bp-A8h] BYREF
  char s[164]; // [sp+1Ch] [bp-A4h] BYREF

  v2 = a1[31];
  v18 = 0;
  v4 = *(_DWORD *)(v2 + 608);
  v19 = 0;
  v20 = 0;
  v21 = 0;
  if ( !v4 || (v5 = *(_DWORD *)(v2 + 612)) == 0 )
  {
    v9 = 244;
    goto LABEL_6;
  }
  v6 = *(_DWORD *)(v5 + 4);
  if ( !v6 || (v8 = sub_A2D04(v4, &v18)) == 0 )
  {
    v9 = 251;
LABEL_6:
    v10 = 0;
    v11 = 0;
    sub_95494(a1, 80, 496, 68, (int)"ssl/statem/statem_lib.c", v9);
    goto LABEL_7;
  }
  v11 = sub_D14F4(v8);
  if ( !v11 )
  {
    v10 = 0;
    sub_95494(a1, 80, 496, 65, (int)"ssl/statem/statem_lib.c", 258);
    goto LABEL_7;
  }
  if ( !sub_9B330(a1, s, &v22, &v20) )
  {
    v10 = 0;
    goto LABEL_7;
  }
  if ( (*(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) & 2) != 0 )
  {
    v10 = sub_A8450(a2, 2, *(unsigned __int16 *)(v4 + 4), 0, 2);
    if ( !v10 )
    {
      v15 = 270;
      goto LABEL_24;
    }
  }
  v21 = sub_D9AF8(v6);
  v10 = CRYPTO_malloc(v21, "ssl/statem/statem_lib.c", 274);
  if ( !v10 )
  {
    sub_95494(a1, 80, 496, 65, (int)"ssl/statem/statem_lib.c", 277);
    goto LABEL_7;
  }
  v17 = v6;
  if ( sub_D9454(v11, &v19, v18) <= 0 )
  {
    sub_95494(a1, 80, 496, 6, (int)"ssl/statem/statem_lib.c", 283);
    goto LABEL_7;
  }
  if ( *(_DWORD *)(v4 + 16) == 912 && (sub_F89C8(v19, -1, 4097, 6, 0) <= 0 || sub_F89C8(v19, 24, 4098, -1, 0) <= 0) )
  {
    v16 = 292;
LABEL_31:
    sub_95494(a1, 80, 496, 6, (int)"ssl/statem/statem_lib.c", v16);
    goto LABEL_7;
  }
  if ( *a1 == 768 )
  {
    if ( sub_D16D8(v11, v22, v20) <= 0
      || !sub_D1948(v11, 29, *(_DWORD *)(a1[285] + 4), a1[285] + 72, v17)
      || sub_D9644(v11, v10, &v21) <= 0 )
    {
      v16 = 304;
      goto LABEL_31;
    }
  }
  else if ( sub_D97AC(v11, v10, &v21, v22, v20) <= 0 )
  {
    v16 = 309;
    goto LABEL_31;
  }
  v13 = *(_DWORD *)(v4 + 16);
  v14 = v13 > 0x32B;
  if ( v13 != 811 )
    v14 = v13 - 979 > 1;
  if ( !v14 )
    sub_BB058(v10, 0, v21);
  if ( !sub_A8544(a2, v10, v21, 2) )
  {
    v15 = 326;
LABEL_24:
    sub_95494(a1, 80, 496, 68, (int)"ssl/statem/statem_lib.c", v15);
    goto LABEL_7;
  }
  if ( sub_A9244(a1, 0) )
  {
    CRYPTO_free(v10, "ssl/statem/statem_lib.c", 336);
    sub_D1504(v11);
    return 1;
  }
LABEL_7:
  CRYPTO_free(v10, "ssl/statem/statem_lib.c", 340);
  sub_D1504(v11);
  return 0;
}
