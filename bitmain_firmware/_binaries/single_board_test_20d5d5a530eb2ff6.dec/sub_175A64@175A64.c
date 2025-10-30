int __fastcall sub_175A64(int a1, int **a2, int **a3, _DWORD *a4, int ***a5)
{
  int v9; // r4
  int *v10; // r5
  int v11; // r6
  int v12; // r4

  v9 = sub_B85BC(a4) + 1;
  v10 = (int *)CRYPTO_malloc((void *)(4 * v9));
  if ( v10 )
  {
    v11 = sub_1759E8((int)a4, v10, v9);
    v12 = v9 < v11;
    if ( !v11 )
      v12 |= 1u;
    if ( v12 )
      sub_D0048(3, 133, 106, (int)"crypto/bn/bn_gf2m.c", 478);
    else
      v11 = sub_17513C(a1, a2, a3, v10, a5);
  }
  else
  {
    v11 = 0;
  }
  CRYPTO_free(v10);
  return v11;
}
