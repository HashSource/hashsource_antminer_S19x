_DWORD *__fastcall sub_BFC24(int a1)
{
  int v2; // r0
  _DWORD *v3; // r4
  int v4; // r6
  char *v5; // r0
  int v6; // r3
  int v7; // r0
  int v8; // r1
  int v9; // r2
  const char *v10; // r3
  int v11; // r0
  int v12; // r0
  _DWORD *result; // r0
  int (__fastcall *v14)(_DWORD *); // r3

  v2 = sub_E0740(76, "crypto/dh/dh_lib.c", 44);
  v3 = (_DWORD *)v2;
  if ( !v2 )
  {
    sub_D0048(5, 105, 65, "crypto/dh/dh_lib.c", 47);
    return 0;
  }
  __dmb(0xBu);
  *(_DWORD *)(v2 + 56) = 1;
  __dmb(0xBu);
  v4 = sub_10C510(v2);
  v3[18] = v4;
  if ( !v4 )
  {
    sub_D0048(5, 105, 65, "crypto/dh/dh_lib.c", 54);
    CRYPTO_free(v3, "crypto/dh/dh_lib.c", 55);
    return 0;
  }
  v5 = sub_BFB58();
  v6 = *((_DWORD *)v5 + 6);
  v3[16] = v5;
  v3[7] = v6;
  if ( a1 )
  {
    v7 = sub_CDD6C(a1);
    v9 = 64;
    v10 = "crypto/dh/dh_lib.c";
    if ( !v7 )
      goto LABEL_17;
    v11 = a1;
    v3[17] = a1;
LABEL_6:
    v12 = sub_CF098(v11, v8, v9, v10);
    v3[16] = v12;
    if ( v12 )
      goto LABEL_7;
    v9 = 73;
LABEL_17:
    sub_D0048(5, 105, 38, "crypto/dh/dh_lib.c", v9);
    goto LABEL_13;
  }
  v11 = sub_CF088();
  v3[17] = v11;
  if ( v11 )
    goto LABEL_6;
  v12 = v3[16];
LABEL_7:
  v3[7] = *(_DWORD *)(v12 + 24);
  if ( !sub_DBE44(6, v3, v3 + 15) )
  {
LABEL_13:
    sub_BFB8C((int)v3);
    return 0;
  }
  result = v3;
  v14 = *(int (__fastcall **)(_DWORD *))(v3[16] + 16);
  if ( !v14 )
    return result;
  if ( !v14(v3) )
  {
    sub_D0048(5, 105, 70, "crypto/dh/dh_lib.c", 85);
    goto LABEL_13;
  }
  return v3;
}
