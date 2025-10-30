int __fastcall sub_10BA00(int *a1, int a2)
{
  int v2; // r4
  void *v4; // r0
  int v5; // r4
  void *v7; // r0
  void *v8; // r6

  if ( !a1 )
    return 0;
  if ( a2 < 0 )
    return 1;
  v2 = *a1;
  if ( 0x3FFFFFFF - *a1 < a2 )
    return 0;
  v4 = (void *)a1[1];
  v5 = v2 + a2;
  if ( v5 < 4 )
    v5 = 4;
  if ( v4 )
  {
    if ( v5 == a1[3] )
      return 1;
    v7 = CRYPTO_realloc(v4, (void *)(4 * v5), (int)"crypto/stack/stack.c", 198);
    if ( v7 )
    {
      a1[1] = (int)v7;
      a1[3] = v5;
      return 1;
    }
    return 0;
  }
  v8 = sub_E0740((void *)(4 * v5));
  a1[1] = (int)v8;
  if ( v8 )
  {
    a1[3] = v5;
    return 1;
  }
  else
  {
    sub_D0048(15, 129, 65, (int)"crypto/stack/stack.c", 181);
    return 0;
  }
}
