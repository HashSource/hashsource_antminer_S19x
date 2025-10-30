bool __fastcall sub_16F0E4(int a1, _DWORD **a2, int a3)
{
  _DWORD *v4; // r5
  int v5; // r4
  int v7; // r0
  bool v8; // cc
  unsigned int v9; // r1

  v4 = *a2;
  v5 = *(_DWORD *)(a1 + 12) & 0x400;
  if ( v5 || !(*v4 << 30) )
    return sub_EB338(v4[1], a3) == 0;
  do
  {
    v8 = v5 < sub_10C010(v4[3]);
    v9 = v5++;
    if ( !v8 )
      return 0;
    v7 = sub_10C01C((_DWORD *)v4[3], v9);
  }
  while ( sub_EB338(v7, a3) );
  return 1;
}
