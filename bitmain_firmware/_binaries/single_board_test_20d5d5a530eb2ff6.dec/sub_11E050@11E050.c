char *__fastcall sub_11E050(_DWORD *a1, char *a2, _DWORD *a3, signed int *a4)
{
  int v8; // r8
  int v9; // r4
  signed int i; // r4
  int v11; // r0
  bool v12; // cc
  unsigned int v13; // r1
  int v14; // r6
  int v15; // r0

  if ( !a1 )
  {
    if ( !a4 )
    {
LABEL_19:
      if ( a3 )
        *a3 = -1;
      return 0;
    }
LABEL_18:
    *a4 = -1;
    goto LABEL_19;
  }
  v8 = (int)a4;
  v9 = (int)a4;
  if ( a4 )
  {
    for ( i = (*a4 + 1) & ~((*a4 + 1) >> 31); i < sub_10C010((int)a1); ++i )
    {
      v8 = sub_10C01C(a1, i);
      v11 = sub_110544(v8);
      if ( sub_EAC84(v11) == a2 )
      {
        *a4 = i;
        if ( !v8 )
          goto LABEL_18;
        if ( a3 )
          goto LABEL_15;
        return sub_11E00C(v8);
      }
    }
    goto LABEL_18;
  }
  while ( 1 )
  {
    do
    {
      v12 = v9 < sub_10C010((int)a1);
      v13 = v9++;
      if ( !v12 )
      {
        if ( !v8 )
          goto LABEL_19;
        if ( a3 )
LABEL_15:
          *a3 = sub_110554(v8);
        return sub_11E00C(v8);
      }
      v14 = sub_10C01C(a1, v13);
      v15 = sub_110544(v14);
    }
    while ( a2 != sub_EAC84(v15) );
    if ( v8 )
      break;
    v8 = v14;
  }
  if ( !a3 )
    return 0;
  *a3 = -2;
  return 0;
}
