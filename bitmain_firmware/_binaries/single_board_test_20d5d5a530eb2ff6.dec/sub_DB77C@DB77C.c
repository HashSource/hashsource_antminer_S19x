int __fastcall sub_DB77C(int a1, int a2, int a3)
{
  _DWORD *v3; // r4
  int (*v4)(void); // r5
  int result; // r0
  int v6; // r1

  if ( !a1 || (v3 = *(_DWORD **)a1) == 0 || (v4 = (int (*)(void))v3[25]) == 0 )
  {
    sub_D0048(6, 137, 147, (int)"crypto/evp/pmeth_lib.c", 372);
    return -2;
  }
  if ( a2 != -1 && a2 != *v3 )
    return -1;
  if ( !v3[32] )
  {
    v6 = *(_DWORD *)(a1 + 16);
    if ( !v6 )
    {
      sub_D0048(6, 137, 149, (int)"crypto/evp/pmeth_lib.c", 383);
      return -1;
    }
    if ( a3 != -1 && (v6 & a3) == 0 )
    {
      sub_D0048(6, 137, 148, (int)"crypto/evp/pmeth_lib.c", 388);
      return -1;
    }
  }
  result = v4();
  if ( result == -2 )
  {
    sub_D0048(6, 137, 147, (int)"crypto/evp/pmeth_lib.c", 396);
    return -2;
  }
  return result;
}
