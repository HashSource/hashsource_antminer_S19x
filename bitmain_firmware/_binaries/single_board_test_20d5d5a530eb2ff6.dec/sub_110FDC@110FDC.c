int __fastcall sub_110FDC(int *a1, int a2, int a3)
{
  int v4; // r0

  v4 = sub_110F34(a2, *(_DWORD **)(a2 + 20), a3);
  *a1 = v4;
  if ( v4 && sub_10FD18(v4) )
    return 1;
  *a1 = 0;
  return 0;
}
