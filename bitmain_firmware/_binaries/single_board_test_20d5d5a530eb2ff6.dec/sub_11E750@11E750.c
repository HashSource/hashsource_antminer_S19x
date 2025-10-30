int __fastcall sub_11E750(_DWORD *a1, int *a2)
{
  int v2; // r7
  signed int i; // r4
  int v6; // r0
  int result; // r0
  int v8; // r4
  bool v9; // cc
  unsigned int v10; // r1
  int v11; // r0

  v2 = 0;
  for ( i = 0; i < sub_10C010(*a2); ++i )
  {
    v6 = sub_10C01C((_DWORD *)*a2, i);
    if ( *a1 == **(_DWORD **)v6 )
    {
      if ( *(_DWORD *)(v6 + 4) || *(_DWORD *)(v6 + 8) )
        return 49;
      if ( v2 == 2 )
        goto LABEL_13;
      if ( !v2 )
        v2 = 1;
      result = sub_11E404((int)a1, *(_DWORD **)v6);
      if ( !result )
      {
LABEL_13:
        v2 = 2;
      }
      else if ( result != 47 )
      {
        return result;
      }
    }
  }
  if ( v2 == 1 )
    return 47;
  v8 = 0;
  while ( 1 )
  {
    do
    {
      v9 = v8 < sub_10C010(a2[1]);
      v10 = v8++;
      if ( !v9 )
        return 0;
      v11 = sub_10C01C((_DWORD *)a2[1], v10);
    }
    while ( *a1 != **(_DWORD **)v11 );
    if ( *(_DWORD *)(v11 + 4) || *(_DWORD *)(v11 + 8) )
      return 49;
    result = sub_11E404((int)a1, *(_DWORD **)v11);
    if ( !result )
      break;
    if ( result != 47 )
      return result;
  }
  return 48;
}
