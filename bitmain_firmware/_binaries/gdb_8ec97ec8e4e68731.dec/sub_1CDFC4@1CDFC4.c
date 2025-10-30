int __fastcall sub_1CDFC4(int a1, int a2, int a3, _DWORD *a4)
{
  _DWORD *v5; // r0
  _DWORD *v9; // r4
  int v10; // r9
  int result; // r0

  v5 = *(_DWORD **)(a1 + 8);
  if ( !v5 )
    return 0;
  v9 = v5;
  while ( 1 )
  {
    while ( v9[4] != 2 || v9[5] != a3 || v9[6] )
    {
      v9 = (_DWORD *)v9[1];
      if ( v5 == v9 )
        return 0;
    }
    v10 = v9[3];
    if ( v10 == ((int (__fastcall *)(int, int))loc_1DD420)(a2, a3) )
      break;
    v5 = *(_DWORD **)(a1 + 8);
    v9 = (_DWORD *)v9[1];
    if ( v5 == v9 )
      return 0;
  }
  result = 1;
  if ( a4 )
    *a4 = v9[2];
  return result;
}
