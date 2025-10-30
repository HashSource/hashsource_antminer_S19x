int __fastcall sub_13B954(int **a1, char *s, int a3)
{
  size_t v6; // r0
  size_t v7; // r4
  int v8; // r2
  void *v9; // r6
  int v10; // r4
  int v11; // r2
  int *v12; // r6
  int result; // r0
  void *v14; // r0
  int v15; // r0
  char *v16; // r4
  void *v17; // [sp+Ch] [bp-8h] BYREF

  if ( !a1 )
  {
    sub_D0048(50, 118, 7, (int)"crypto/ct/ct_b64.c", 143);
    return 0;
  }
  v6 = strlen(s);
  v7 = v6;
  v8 = v6;
  v9 = (void *)v6;
  if ( v6 )
  {
    v14 = CRYPTO_malloc((void *)(3 * (v6 >> 2)));
    v9 = v14;
    if ( v14 )
    {
      v15 = sub_15DD90(v14, s, v7);
      if ( v15 < 0 )
      {
        sub_D0048(50, 124, 108, (int)"crypto/ct/ct_b64.c", 44);
      }
      else
      {
        v16 = &s[v7];
        if ( *(v16 - 1) != 61 )
        {
          v8 = v15;
          goto LABEL_3;
        }
        v8 = v15 - 1;
        if ( *(v16 - 2) != 61 || (v8 = v15 - 2, *(v16 - 3) != 61) )
        {
          if ( v8 >= 0 )
            goto LABEL_3;
LABEL_13:
          v11 = 149;
          goto LABEL_14;
        }
      }
    }
    else
    {
      sub_D0048(50, 124, 65, (int)"crypto/ct/ct_b64.c", 38);
    }
    CRYPTO_free(v9);
    goto LABEL_13;
  }
LABEL_3:
  v17 = v9;
  v10 = d2i_PUBKEY(0, &v17, v8);
  CRYPTO_free(v9);
  v11 = 157;
  if ( !v10 )
  {
LABEL_14:
    sub_D0048(50, 118, 110, (int)"crypto/ct/ct_b64.c", v11);
    return 0;
  }
  v12 = sub_BC610(v10, a3);
  *a1 = v12;
  result = 1;
  if ( !v12 )
  {
    sub_DA240(v10);
    return 0;
  }
  return result;
}
