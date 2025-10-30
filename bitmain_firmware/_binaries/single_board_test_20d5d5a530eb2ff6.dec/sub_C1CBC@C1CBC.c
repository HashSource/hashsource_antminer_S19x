int __fastcall sub_C1CBC(_DWORD *a1, int a2)
{
  bool v2; // zf
  int (*v3)(void); // r3

  v2 = a2 == 0;
  if ( a2 )
    v2 = a1 == 0;
  if ( v2 )
  {
    sub_D0048(37, 132, 67, "crypto/dso/dso_lib.c", 268);
  }
  else if ( (a1[3] & 1) == 0 )
  {
    if ( a1[6] )
    {
      v3 = (int (*)(void))a1[6];
      return v3();
    }
    v3 = *(int (**)(void))(*a1 + 24);
    if ( v3 )
      return v3();
  }
  return 0;
}
