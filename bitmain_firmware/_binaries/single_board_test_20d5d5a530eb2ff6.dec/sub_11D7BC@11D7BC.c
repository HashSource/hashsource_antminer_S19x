int __fastcall sub_11D7BC(int a1, int a2)
{
  int **v2; // r5
  _DWORD *v5; // r7
  int v6; // r0
  signed int v7; // r4
  int v8; // r0
  _BOOL4 v9; // r3

  if ( !a1 || *(_DWORD *)a1 != 1 )
    return 1;
  v5 = *(_DWORD **)(a1 + 4);
  v6 = sub_115E5C(a2);
  *(_DWORD *)(a1 + 8) = v6;
  if ( !v6 )
    return 0;
  v7 = 0;
  while ( v7 < sub_10C010((int)v5) )
  {
    v8 = sub_10C01C(v5, v7);
    v9 = v7++ == 0;
    v2 = sub_113D6C(*(int ***)(a1 + 8), v8, -1, v9);
    if ( !v2 )
    {
      X509_NAME_free(*(_DWORD *)(a1 + 8));
      *(_DWORD *)(a1 + 8) = 0;
      return (int)v2;
    }
  }
  if ( sub_115C40(*(size_t **)(a1 + 8), 0) >= 0 )
    return 1;
  v2 = 0;
  X509_NAME_free(*(_DWORD *)(a1 + 8));
  *(_DWORD *)(a1 + 8) = 0;
  return (int)v2;
}
