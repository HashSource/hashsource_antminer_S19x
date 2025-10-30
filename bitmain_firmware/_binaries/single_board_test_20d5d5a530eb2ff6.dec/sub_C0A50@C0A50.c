_DWORD *__fastcall sub_C0A50(int a1)
{
  int v2; // r0
  _DWORD *v3; // r4
  int v4; // r6
  int v5; // r0
  int v6; // r3
  int v7; // r0
  int v8; // r1
  int v9; // r2
  const char *v10; // r3
  int v11; // r0
  int v12; // r0
  _DWORD *result; // r0
  int (__fastcall *v14)(_DWORD *); // r3

  v2 = sub_E0740(56, "crypto/dsa/dsa_lib.c", 51);
  v3 = (_DWORD *)v2;
  if ( !v2 )
  {
    sub_D0048(10, 103, 65, "crypto/dsa/dsa_lib.c", 54);
    return 0;
  }
  __dmb(0xBu);
  *(_DWORD *)(v2 + 36) = 1;
  __dmb(0xBu);
  v4 = sub_10C510(v2);
  v3[13] = v4;
  if ( !v4 )
  {
    sub_D0048(10, 103, 65, "crypto/dsa/dsa_lib.c", 61);
    CRYPTO_free(v3, "crypto/dsa/dsa_lib.c", 62);
    return 0;
  }
  v5 = sub_C1748();
  v6 = *(_DWORD *)(v5 + 32);
  v3[11] = v5;
  v3[7] = v6 & 0xFFFFFBFF;
  if ( a1 )
  {
    v7 = sub_CDD6C(a1);
    v9 = 71;
    v10 = "crypto/dsa/dsa_lib.c";
    if ( !v7 )
      goto LABEL_17;
    v11 = a1;
    v3[12] = a1;
LABEL_6:
    v12 = sub_CF160(v11, v8, v9, v10);
    v3[11] = v12;
    if ( v12 )
      goto LABEL_7;
    v9 = 80;
LABEL_17:
    sub_D0048(10, 103, 38, "crypto/dsa/dsa_lib.c", v9);
    goto LABEL_13;
  }
  v11 = sub_CF150();
  v3[12] = v11;
  if ( v11 )
    goto LABEL_6;
  v12 = v3[11];
LABEL_7:
  v3[7] = *(_DWORD *)(v12 + 32) & 0xFFFFFBFF;
  if ( !sub_DBE44(7, v3, v3 + 10) )
  {
LABEL_13:
    sub_C09D0((int)v3);
    return 0;
  }
  result = v3;
  v14 = *(int (__fastcall **)(_DWORD *))(v3[11] + 24);
  if ( !v14 )
    return result;
  if ( !v14(v3) )
  {
    sub_D0048(10, 103, 70, "crypto/dsa/dsa_lib.c", 92);
    goto LABEL_13;
  }
  return v3;
}
