int __fastcall sub_BAD28(int a1, unsigned int a2)
{
  int v2; // r6
  unsigned int v5; // r4
  int v6; // r7
  int i; // r3
  unsigned int v8; // r2
  bool v9; // cf
  int *v10; // r2

  if ( !a2 )
    return 1;
  v5 = a2;
  if ( !sub_B85B0(a1) )
  {
    v2 = *(_DWORD *)(a1 + 12);
    if ( v2 )
    {
      *(_DWORD *)(a1 + 12) = 0;
      v2 = sub_BACA0((int **)a1, v5);
      if ( !sub_B85B0(a1) )
        *(_DWORD *)(a1 + 12) = *(_DWORD *)(a1 + 12) == 0;
      return v2;
    }
    v6 = *(_DWORD *)(a1 + 4);
    for ( i = 0; v6 > i; ++i )
    {
      v8 = *(_DWORD *)(*(_DWORD *)a1 + 4 * i) + v5;
      v9 = v8 >= v5;
      *(_DWORD *)(*(_DWORD *)a1 + 4 * i) = v8;
      v5 = v8 < v5;
      if ( v9 )
        return 1;
    }
    if ( v6 == i )
    {
      if ( sub_B89D8(a1, v6 + 1) )
      {
        v2 = 1;
        v10 = *(int **)a1;
        ++*(_DWORD *)(a1 + 4);
        v10[v6] = v5;
      }
      return v2;
    }
    return 1;
  }
  return sub_B8930((int **)a1, v5);
}
