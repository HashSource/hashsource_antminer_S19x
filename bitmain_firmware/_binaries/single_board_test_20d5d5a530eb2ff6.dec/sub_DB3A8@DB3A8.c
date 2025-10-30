int __fastcall sub_DB3A8(int a1)
{
  int v1; // r1
  int v2; // r4
  int v4; // r2
  int v5; // r0

  v1 = a1;
  v2 = dword_6E1948;
  if ( dword_6E1948 || (v5 = sub_10BFD4(sub_DB284), v1 = a1, v2 = v5, (dword_6E1948 = v5) != 0) )
  {
    if ( sub_10BD3C(v2, v1) )
    {
      sub_10C070(dword_6E1948);
      return 1;
    }
    v4 = 309;
  }
  else
  {
    v4 = 304;
  }
  sub_D0048(6, 194, 65, (int)"crypto/evp/pmeth_lib.c", v4);
  return 0;
}
