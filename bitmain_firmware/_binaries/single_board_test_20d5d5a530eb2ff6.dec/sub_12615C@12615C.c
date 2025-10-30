int __fastcall sub_12615C(int (__fastcall *a1)(int, void **), int a2, int a3)
{
  void *v6; // r0
  int v7; // r4
  void *v9; // r6
  int v10; // r5
  int v11; // r0
  bool v12; // zf
  int v13; // r4
  void *v14; // [sp+Ch] [bp-8h] BYREF

  v6 = (void *)a1(a3, 0);
  v7 = (int)v6;
  if ( (int)v6 <= 0 )
    return 0;
  v9 = CRYPTO_malloc(v6);
  if ( v9 )
  {
    v14 = v9;
    v10 = 0;
    a1(a3, &v14);
    do
    {
      v11 = sub_B69CC(a2, (int)v9 + v10, v7);
      v12 = v7 == v11;
      v10 += v11;
      v7 -= v11;
      if ( v12 )
      {
        v13 = 1;
        goto LABEL_9;
      }
    }
    while ( v11 > 0 );
    v13 = 0;
LABEL_9:
    CRYPTO_free(v9);
    return v13;
  }
  else
  {
    sub_D0048(13, 116, 65, (int)"crypto/asn1/a_i2d_fp.c", 46);
    return 0;
  }
}
