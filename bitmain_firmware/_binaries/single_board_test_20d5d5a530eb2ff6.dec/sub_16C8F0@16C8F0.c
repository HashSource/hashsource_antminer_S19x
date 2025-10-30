_DWORD *__fastcall sub_16C8F0(int a1)
{
  _DWORD *v2; // r4
  pthread_rwlock_t *v3; // r6
  int v4; // r5
  _DWORD *result; // r0

  v2 = sub_E0740((void *)0x18);
  if ( v2 )
  {
    v3 = sub_10C510();
    v2[5] = v3;
    if ( v3 )
    {
      if ( !a1 )
      {
        a1 = sub_16E1EC();
        if ( !a1 )
          a1 = sub_16DCF0();
      }
      *v2 = a1;
      v4 = sub_DBE44(0xBu, (int)v2, v2 + 3);
      result = v2;
      if ( !v4 )
      {
        CRYPTO_free(v2);
        return 0;
      }
    }
    else
    {
      sub_D0048(40, 104, 65, (int)"crypto/ui/ui_lib.c", 34);
      CRYPTO_free(v2);
      return 0;
    }
  }
  else
  {
    sub_D0048(40, 104, 65, (int)"crypto/ui/ui_lib.c", 28);
    return 0;
  }
  return result;
}
