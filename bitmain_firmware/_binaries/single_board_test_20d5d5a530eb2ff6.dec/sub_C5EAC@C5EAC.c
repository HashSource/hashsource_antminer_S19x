_DWORD *__fastcall sub_C5EAC(int a1)
{
  int v2; // r0
  _DWORD *v3; // r4
  int v4; // r6
  int v5; // r0
  int v6; // r1
  int v7; // r2
  const char *v8; // r3
  int v9; // r0
  int v10; // r0
  _DWORD *result; // r0
  int (__fastcall *v12)(_DWORD *); // r3

  v2 = sub_E0740(48, "crypto/ec/ec_kmeth.c", 75);
  v3 = (_DWORD *)v2;
  if ( !v2 )
  {
    sub_D0048(16, 245, 65, "crypto/ec/ec_kmeth.c", 78);
    return 0;
  }
  __dmb(0xBu);
  *(_DWORD *)(v2 + 32) = 1;
  __dmb(0xBu);
  v4 = sub_10C510(v2);
  v3[11] = v4;
  if ( !v4 )
  {
    sub_D0048(16, 245, 65, "crypto/ec/ec_kmeth.c", 85);
    CRYPTO_free(v3, "crypto/ec/ec_kmeth.c", 86);
    return 0;
  }
  *v3 = sub_C5E58();
  if ( a1 )
  {
    v5 = sub_CDD6C(a1);
    v7 = 94;
    v8 = "crypto/ec/ec_kmeth.c";
    if ( !v5 )
      goto LABEL_17;
    v9 = a1;
    v3[1] = a1;
LABEL_6:
    v10 = sub_CF228(v9, v6, v7, v8);
    *v3 = v10;
    if ( v10 )
      goto LABEL_7;
    v7 = 103;
LABEL_17:
    sub_D0048(16, 245, 38, "crypto/ec/ec_kmeth.c", v7);
    goto LABEL_13;
  }
  v9 = sub_CF218();
  v3[1] = v9;
  if ( v9 )
    goto LABEL_6;
LABEL_7:
  v3[2] = 1;
  v3[7] = 4;
  if ( !sub_DBE44(8, v3, v3 + 10) )
  {
LABEL_13:
    sub_C5410((int)v3);
    return 0;
  }
  result = v3;
  v12 = *(int (__fastcall **)(_DWORD *))(*v3 + 8);
  if ( !v12 )
    return result;
  if ( !v12(v3) )
  {
    sub_D0048(16, 245, 70, "crypto/ec/ec_kmeth.c", 117);
    goto LABEL_13;
  }
  return v3;
}
