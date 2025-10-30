bool __fastcall sub_26FC94(_DWORD *a1, unsigned int a2)
{
  unsigned int v2; // r3
  bool v4; // zf

  v2 = (a1[24] - a1[23]) >> 2;
  if ( a2 < v2 )
    return 1;
  v4 = a2 == -1;
  if ( a2 != -1 )
    v4 = a2 == v2;
  return v4 && *(_DWORD *)(a1[38] + 16) != 0;
}
