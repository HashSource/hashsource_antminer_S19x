int __fastcall sub_B847C(int a1, int a2, int a3, int a4)
{
  int v4; // r4
  _DWORD *v5; // r4
  int *v8; // r4
  int *v9; // r4
  int v10; // t1

  v4 = a3 - 1;
  if ( a4 < 0 )
  {
    v8 = (int *)(a2 + 4 * (v4 - a4));
    v10 = *v8;
    v9 = v8 - 1;
    if ( v10 )
      return -1;
    while ( ++a4 )
    {
      if ( *v9-- )
        return -1;
    }
    return sub_B8414(a1, a2, a3);
  }
  if ( !a4 )
    return sub_B8414(a1, a2, a3);
  v5 = (_DWORD *)(a1 + 4 * (v4 + a4));
  while ( !*v5-- )
  {
    if ( !--a4 )
      return sub_B8414(a1, a2, a3);
  }
  return 1;
}
