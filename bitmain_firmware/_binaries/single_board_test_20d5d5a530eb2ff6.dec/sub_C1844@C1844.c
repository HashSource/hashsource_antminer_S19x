_DWORD *sub_C1844()
{
  int v0; // r0
  _DWORD *v1; // r4
  int v2; // r0
  int v3; // r5
  _DWORD *result; // r0
  int (__fastcall *v5)(_DWORD *); // r3
  int v6; // r5

  if ( !dword_6DF3F0 )
    dword_6DF3F0 = sub_1414E8();
  v0 = sub_E0740(40, "crypto/dso/dso_lib.c", 27);
  v1 = (_DWORD *)v0;
  if ( v0 )
  {
    v2 = sub_10BFCC(v0);
    v1[1] = v2;
    if ( v2 )
    {
      *v1 = dword_6DF3F0;
      __dmb(0xBu);
      v1[2] = 1;
      __dmb(0xBu);
      v3 = sub_10C510(v2);
      v1[9] = v3;
      if ( v3 )
      {
        result = v1;
        v5 = *(int (__fastcall **)(_DWORD *))(*v1 + 28);
        if ( v5 )
        {
          v6 = v5(v1);
          result = v1;
          if ( !v6 )
          {
            sub_C1788(v1);
            return 0;
          }
        }
      }
      else
      {
        sub_D0048(37, 113, 65, "crypto/dso/dso_lib.c", 43);
        sub_10BDB4(v1[1]);
        CRYPTO_free(v1, "crypto/dso/dso_lib.c", 45);
        return 0;
      }
    }
    else
    {
      sub_D0048(37, 113, 65, "crypto/dso/dso_lib.c", 35);
      CRYPTO_free(v1, "crypto/dso/dso_lib.c", 36);
      return 0;
    }
  }
  else
  {
    sub_D0048(37, 113, 65, "crypto/dso/dso_lib.c", 29);
    return 0;
  }
  return result;
}
