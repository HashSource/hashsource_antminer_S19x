int __fastcall sub_3391D0(int a1, int a2, int a3, int a4, int a5)
{
  int v7; // r6
  int i; // r5
  int v9; // r4
  int result; // r0

  if ( a3 == a5 && sub_33A848(a1, a4) )
    return 6;
  v7 = *(_DWORD *)(a1 + 12);
  for ( i = a1 + 8 * v7; ; i -= 8 )
  {
    if ( !v7 )
      return 1;
    --v7;
    if ( (*(_DWORD *)(i + 12) & 2) != 0 )
    {
      v9 = *(_DWORD *)(i + 12) & 1;
      if ( !v9 || a2 != -3 )
      {
        result = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(i + 8) + 32))(*(_DWORD *)(i + 8));
        if ( result > 3 )
          break;
      }
    }
  }
  if ( v9 )
    return result | 1;
  return result;
}
