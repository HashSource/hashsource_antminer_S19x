int __fastcall sub_11DE64(int a1)
{
  int v1; // r1
  int *v2; // r4
  int v4; // r2
  void **v5; // r0

  v1 = a1;
  v2 = (int *)dword_6E1C58;
  if ( dword_6E1C58 || (v5 = sub_10BFD4(sub_11DE58), v1 = a1, v2 = (int *)v5, (dword_6E1C58 = (int)v5) != 0) )
  {
    if ( sub_10BD3C(v2, v1) )
      return 1;
    v4 = 33;
  }
  else
  {
    v4 = 29;
  }
  sub_D0048(34, 104, 65, (int)"crypto/x509v3/v3_lib.c", v4);
  return 0;
}
