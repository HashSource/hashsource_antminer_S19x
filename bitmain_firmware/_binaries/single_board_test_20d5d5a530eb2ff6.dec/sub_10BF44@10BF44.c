void **__fastcall sub_10BF44(void *a1, int a2)
{
  void **v4; // r0
  void **v5; // r4
  void *v6; // r5
  void *v7; // r0
  int v8; // r5
  void *v9; // r0
  void *v11; // r0

  v4 = (void **)sub_E0740((void *)0x14);
  v5 = v4;
  if ( !v4 )
    return v5;
  v4[4] = a1;
  if ( a2 <= 0 )
    return v5;
  v6 = *v4;
  if ( 0x3FFFFFFF - (int)*v4 >= a2 )
  {
    v7 = v4[1];
    v8 = (int)v6 + a2;
    if ( v8 < 4 )
      v8 = 4;
    if ( v7 )
    {
      if ( (void *)v8 == v5[3] )
        return v5;
      v9 = CRYPTO_realloc(v7, (void *)(4 * v8), (int)"crypto/stack/stack.c", 198);
      if ( v9 )
      {
        v5[1] = v9;
LABEL_10:
        v5[3] = (void *)v8;
        return v5;
      }
    }
    else
    {
      v11 = sub_E0740((void *)(4 * v8));
      v5[1] = v11;
      if ( v11 )
        goto LABEL_10;
      sub_D0048(15, 129, 65, (int)"crypto/stack/stack.c", 181);
    }
  }
  sub_10BDB4(v5);
  return 0;
}
