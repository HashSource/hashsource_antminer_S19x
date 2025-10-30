_DWORD *__fastcall sub_16EFA8(int a1, int a2, int a3)
{
  int v6; // r4
  bool v7; // cc
  unsigned int v8; // r1
  _DWORD *v9; // r0
  _DWORD *v10; // r5

  v6 = 0;
  do
  {
    v7 = v6 < sub_10C010(*(_DWORD *)(a1 + 4));
    v8 = v6++;
    if ( !v7 )
      return 0;
    v9 = (_DWORD *)sub_10C01C(*(_DWORD **)(a1 + 4), v8);
    v10 = v9;
  }
  while ( v9[1] != a2 || sub_EB338(*(_DWORD *)(*v9 + 4), a3) );
  return v10;
}
