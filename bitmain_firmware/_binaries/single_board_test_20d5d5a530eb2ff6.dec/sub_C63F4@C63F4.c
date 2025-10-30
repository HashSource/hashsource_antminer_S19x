_DWORD *__fastcall sub_C63F4(_DWORD *a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r4
  int v4; // r3
  int v5; // r2
  int (*v6)(void); // r3
  int v7; // r5
  _DWORD *result; // r0

  if ( a1 )
  {
    if ( *(_DWORD *)(*a1 + 44) )
    {
      v2 = (_DWORD *)sub_E0740(24, "crypto/ec/ec_lib.c", 663);
      v3 = v2;
      if ( v2 )
      {
        v4 = *a1;
        v5 = a1[4];
        *v2 = *a1;
        v6 = *(int (**)(void))(v4 + 44);
        v2[1] = v5;
        v7 = v6();
        result = v3;
        if ( !v7 )
        {
          CRYPTO_free(v3, "crypto/ec/ec_lib.c", 673);
          return 0;
        }
      }
      else
      {
        sub_D0048(16, 121, 65, "crypto/ec/ec_lib.c", 665);
        return 0;
      }
    }
    else
    {
      sub_D0048(16, 121, 66, "crypto/ec/ec_lib.c", 659);
      return 0;
    }
  }
  else
  {
    sub_D0048(16, 121, 67, "crypto/ec/ec_lib.c", 655);
    return 0;
  }
  return result;
}
