int __fastcall sub_175FD8(int a1, _DWORD *a2, _DWORD *a3, int ***a4)
{
  int v8; // r4
  int *v9; // r5
  int v10; // r6
  int v11; // r4

  v8 = sub_B85BC(a3) + 1;
  v9 = (int *)CRYPTO_malloc((void *)(4 * v8));
  if ( v9 )
  {
    v10 = sub_1759E8((int)a3, v9, v8);
    v11 = v8 < v10;
    if ( !v10 )
      v11 |= 1u;
    if ( v11 )
      sub_D0048(3, 136, 106, (int)"crypto/bn/bn_gf2m.c", 536);
    else
      v10 = sub_174FF4(a1, a2, v9, a4);
  }
  else
  {
    v10 = 0;
  }
  CRYPTO_free(v9);
  return v10;
}
