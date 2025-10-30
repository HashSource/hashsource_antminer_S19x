int __fastcall sub_F396C(int *a1)
{
  _DWORD *v3; // r3
  int v4; // r5

  if ( a1[23] )
  {
    sub_D0048(36, 119, 129, (int)"crypto/rand/drbg_lib.c", 812);
    return 0;
  }
  else
  {
    if ( *a1 )
      return 1;
    v3 = (_DWORD *)a1[1];
    if ( v3 && !*v3 )
    {
      sub_D0048(36, 119, 130, (int)"crypto/rand/drbg_lib.c", 819);
      return 0;
    }
    else
    {
      v4 = sub_10C510(a1);
      *a1 = v4;
      if ( v4 )
        return 1;
      sub_D0048(36, 119, 126, (int)"crypto/rand/drbg_lib.c", 826);
      return 0;
    }
  }
}
