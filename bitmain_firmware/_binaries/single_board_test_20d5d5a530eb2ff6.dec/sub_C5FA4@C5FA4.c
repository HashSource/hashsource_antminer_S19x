int __fastcall sub_C5FA4(void *a1, int a2, int a3, int *a4, void (__fastcall *a5)(void *, size_t, void *, size_t *))
{
  int v5; // r5
  int (__fastcall *v6)(void **, size_t *); // r5
  int result; // r0
  void *v9; // r5
  size_t v10; // r4
  size_t v11; // r2
  size_t v12; // [sp+Ch] [bp-Ch] BYREF
  void *src; // [sp+10h] [bp-8h] BYREF
  size_t n; // [sp+14h] [bp-4h] BYREF

  v5 = *a4;
  v12 = a2;
  v6 = *(int (__fastcall **)(void **, size_t *))(v5 + 36);
  src = 0;
  if ( v6 )
  {
    if ( a2 < 0 )
    {
      sub_D0048(16, 246, 161, "crypto/ec/ec_kmeth.c", 139);
      return 0;
    }
    else
    {
      result = v6(&src, &n);
      if ( result )
      {
        if ( a5 )
        {
          a5(src, n, a1, &v12);
          v9 = src;
          v10 = n;
        }
        else
        {
          v11 = v12;
          v10 = n;
          v9 = src;
          if ( v12 > n )
          {
            v11 = n;
            v12 = n;
          }
          memcpy(a1, src, v11);
        }
        sub_E0758((int)v9, v10, (size_t)"crypto/ec/ec_kmeth.c");
        return v12;
      }
    }
  }
  else
  {
    sub_D0048(16, 246, 152, "crypto/ec/ec_kmeth.c", 135);
    return 0;
  }
  return result;
}
