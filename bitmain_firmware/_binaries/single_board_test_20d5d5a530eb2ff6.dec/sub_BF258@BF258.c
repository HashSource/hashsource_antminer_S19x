int __fastcall sub_BF258(_DWORD *a1, void **a2, int a3)
{
  int result; // r0
  _DWORD *v7; // r4
  int *v8; // r5
  int *v9; // r2
  int v10; // r1
  int v11; // r3
  int v12; // r6
  _DWORD *v13; // r7
  int v14; // r1
  int v15; // r0
  int v16; // r2

  result = sub_BFD20();
  v7 = (_DWORD *)result;
  if ( result )
  {
    v8 = (int *)sub_BF240(0, a2, a3);
    if ( v8 )
    {
      if ( a1 )
      {
        sub_BFB8C(*a1);
        *a1 = v7;
      }
      v9 = (int *)v8[4];
      v10 = v8[2];
      v11 = v8[3];
      v12 = *v8;
      v7[9] = v8[1];
      v7[2] = v12;
      v7[3] = v10;
      v7[10] = v11;
      if ( v9 )
      {
        v13 = (_DWORD *)v9[1];
        v14 = *(_DWORD *)(*v9 + 8);
        v15 = *v9;
        v16 = *(_DWORD *)*v9;
        v7[13] = v13;
        v7[11] = v14;
        v7[12] = v16;
        *(_DWORD *)(v15 + 8) = 0;
        j_ASN1_STRING_free_0(v15);
        CRYPTO_free(v8[4], "crypto/dh/dh_asn1.c", 110);
        v8[4] = 0;
      }
      CRYPTO_free(v8, "crypto/dh/dh_asn1.c", 114);
      return (int)v7;
    }
    else
    {
      sub_BFB8C(v7);
      return 0;
    }
  }
  return result;
}
