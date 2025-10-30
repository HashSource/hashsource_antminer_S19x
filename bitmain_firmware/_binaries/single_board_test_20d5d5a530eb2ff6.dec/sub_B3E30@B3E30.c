int __fastcall sub_B3E30(const void **a1, int *a2, size_t *a3, unsigned int *a4, char a5)
{
  size_t v5; // r4
  unsigned int v6; // r5
  int v8; // r3
  _BYTE *v12; // r3
  void *v14; // r0
  size_t v15; // r3
  int v16; // r0
  int v17; // r0
  int v18; // r3

  v5 = *a3;
  v6 = *a4;
  if ( *a3 > *a4 )
    return 0;
  v8 = (int)a2;
  if ( a2 )
    v8 = 1;
  if ( v5 != v6 )
    v8 = 0;
  if ( !v8 )
  {
LABEL_7:
    if ( v5 < v6 )
    {
      v12 = *a1;
      if ( *a1 )
      {
        *a3 = v5 + 1;
        v12[v5] = a5;
        return 1;
      }
      goto LABEL_21;
    }
    return 1;
  }
  if ( v6 > 0x7FFFFBFF )
    return 0;
  v16 = *a2;
  *a4 = v6 + 1024;
  if ( v16 )
  {
    v17 = CRYPTO_realloc(v16, v6 + 1024, "crypto/bio/b_print.c", 838);
    if ( v17 )
    {
      v6 = *a4;
      v5 = *a3;
      *a2 = v17;
      goto LABEL_7;
    }
    return 0;
  }
  v14 = (void *)CRYPTO_malloc(v6 + 1024, "crypto/bio/b_print.c", 826);
  *a2 = (int)v14;
  if ( v14 )
  {
    v5 = *a3;
    if ( *a3 )
    {
      if ( !*a1 )
        return 0;
      memcpy(v14, *a1, *a3);
      v5 = *a3;
    }
    v15 = *a4;
    *a1 = 0;
    if ( v5 < v15 )
    {
LABEL_21:
      v18 = *a2;
      *a3 = v5 + 1;
      *(_BYTE *)(v18 + v5) = a5;
      return 1;
    }
    return 1;
  }
  sub_D0048(32, 150, 65, "crypto/bio/b_print.c", 827);
  return 0;
}
