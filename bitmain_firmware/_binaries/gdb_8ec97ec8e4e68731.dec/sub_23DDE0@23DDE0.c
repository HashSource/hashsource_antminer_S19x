int __fastcall sub_23DDE0(int result, int a2)
{
  int v2; // r4
  int v4; // r3
  int v5; // r2
  int v6; // r0
  bool v7; // zf
  int v8; // r3
  bool v9; // zf
  int v10; // r3

  v2 = result;
  if ( *(_DWORD *)(result + 336) )
    result = ((int (*)(void))loc_23DB1C)();
  if ( *(_DWORD *)(v2 + 44) != 2 )
  {
    sub_1B98C0(v2, a2);
    v4 = *(_DWORD *)(v2 + 48);
    v5 = 2;
    *(_DWORD *)(v2 + 44) = 2;
    v6 = *(_DWORD *)(v2 + 20);
    v7 = v4 == 0;
    if ( v4 )
    {
      v5 = 0;
      *(_DWORD *)(v4 + 20) = 1;
    }
    v8 = *(_DWORD *)(v2 + 52);
    if ( !v7 )
      *(_DWORD *)(v2 + 48) = v5;
    v9 = v8 == 0;
    if ( v8 )
    {
      v5 = 0;
      *(_DWORD *)(v8 + 20) = 1;
    }
    v10 = *(_DWORD *)(v2 + 56);
    if ( !v9 )
      *(_DWORD *)(v2 + 52) = v5;
    if ( v10 )
    {
      *(_DWORD *)(v10 + 20) = 1;
      *(_DWORD *)(v2 + 56) = 0;
    }
    sub_CFD7C(v6);
    sub_CE054((_DWORD **)(v2 + 136));
    sub_E14B8((_DWORD *)v2);
    return sub_23DDAC(v2);
  }
  return result;
}
