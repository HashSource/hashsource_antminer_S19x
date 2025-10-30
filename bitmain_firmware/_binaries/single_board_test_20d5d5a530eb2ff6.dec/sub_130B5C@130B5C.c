void __fastcall sub_130B5C(void **a1)
{
  int *v2; // r4
  int *v3; // r5
  int v4; // r3
  int *v5; // r0
  void *v6; // r0

  if ( a1 )
  {
    CRYPTO_free(a1[5]);
    v2 = (int *)*a1;
    for ( a1[5] = 0; v2; *a1 = v2 )
    {
      v3 = v2 + 80;
      do
      {
        v4 = *v2;
        v5 = v2;
        v2 += 5;
        if ( v4 )
          sub_B87C8(v5);
      }
      while ( v2 != v3 );
      v6 = *a1;
      a1[1] = (void *)*((_DWORD *)*a1 + 81);
      CRYPTO_free(v6);
      v2 = (int *)a1[1];
    }
    CRYPTO_free(a1);
  }
}
