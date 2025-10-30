int __fastcall sub_C1958(int a1, int a2)
{
  bool v2; // zf
  int (*v3)(void); // r4
  int result; // r0

  v2 = a2 == 0;
  if ( a2 )
    v2 = a1 == 0;
  if ( v2 )
  {
    sub_D0048(37, 108, 67, "crypto/dso/dso_lib.c", 178);
    return 0;
  }
  else
  {
    v3 = *(int (**)(void))(*(_DWORD *)a1 + 12);
    if ( v3 )
    {
      result = v3();
      if ( !result )
      {
        sub_D0048(37, 108, 106, "crypto/dso/dso_lib.c", 186);
        return 0;
      }
    }
    else
    {
      sub_D0048(37, 108, 108, "crypto/dso/dso_lib.c", 182);
      return 0;
    }
  }
  return result;
}
