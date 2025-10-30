int __fastcall sub_C03B4(int a1, int a2)
{
  int *v2; // r4
  _DWORD *v4; // r5
  int v5; // r0
  int v6; // r8
  int v7; // r2
  size_t *v8; // r0
  int v9; // r6
  int v10; // r5
  int v11; // r0
  _BYTE *v13; // [sp+Ch] [bp-4h] BYREF

  v2 = *(int **)(a2 + 28);
  v4 = *(_DWORD **)(a2 + 24);
  v13 = 0;
  if ( v2 && (v2 = (int *)v4[2]) != 0 && (v2 = (int *)v4[3]) != 0 && (v2 = (int *)v4[4]) != 0 )
  {
    v2 = (int *)sub_AE1D0();
    if ( !v2 )
    {
      v7 = 91;
      goto LABEL_16;
    }
    v5 = i2d_DSAparams(v4);
    *v2 = v5;
    if ( v5 <= 0 )
    {
      v7 = 96;
LABEL_16:
      sub_D0048(10, 118, 65, "crypto/dsa/dsa_ameth.c", v7);
LABEL_14:
      CRYPTO_free(v13, "crypto/dsa/dsa_ameth.c", 126);
      ASN1_STRING_free((int)v2);
      return 0;
    }
    v6 = 16;
  }
  else
  {
    v6 = -1;
  }
  v8 = (size_t *)sub_126F3C(v4[5], 0);
  v9 = (int)v8;
  if ( !v8 )
  {
    v7 = 106;
    goto LABEL_16;
  }
  v10 = sub_B2090(v8, &v13);
  ASN1_INTEGER_free(v9);
  if ( v10 <= 0 )
  {
    v7 = 114;
    goto LABEL_16;
  }
  v11 = sub_EAA20(116);
  if ( !v11 || !sub_116448(a1, v11, v6, v2, v13, v10) )
    goto LABEL_14;
  return 1;
}
