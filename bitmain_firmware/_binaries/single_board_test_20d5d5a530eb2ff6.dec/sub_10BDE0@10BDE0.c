void **__fastcall sub_10BDE0(int *a1)
{
  void **result; // r0
  void **v3; // r6
  void *v4; // r1
  void *v5; // r2
  void *v6; // r3
  void *v7; // r3
  void *v8; // r0

  result = (void **)CRYPTO_malloc((void *)0x14);
  v3 = result;
  if ( result )
  {
    v4 = (void *)a1[1];
    v5 = (void *)a1[2];
    v6 = (void *)a1[3];
    *result = (void *)*a1;
    result[1] = v4;
    result[2] = v5;
    result[3] = v6;
    v7 = (void *)*a1;
    result[4] = (void *)a1[4];
    if ( v7 )
    {
      v8 = CRYPTO_malloc((void *)(4 * a1[3]));
      v3[1] = v8;
      if ( v8 )
      {
        memcpy(v8, (const void *)a1[1], 4 * *a1);
        return v3;
      }
      else
      {
        sub_10BDB4(v3);
        return 0;
      }
    }
    else
    {
      result[1] = 0;
      result[3] = 0;
    }
  }
  else
  {
    sub_D0048(15, 128, 65, (int)"crypto/stack/stack.c", 50);
    return 0;
  }
  return result;
}
