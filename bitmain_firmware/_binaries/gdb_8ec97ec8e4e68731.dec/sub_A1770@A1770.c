int __fastcall sub_A1770(int a1, int a2)
{
  int v3; // r0
  int v4; // r6
  char *v5; // r3
  int v6; // r2
  int v8; // r0
  _BOOL4 v9; // r3
  int v10; // r5

  v3 = sub_A0A60(a1);
  v4 = v3;
  v5 = *(char **)(v3 + 24);
  v6 = *v5;
  if ( v6 == 3 )
  {
    v10 = sub_A0FB0(v3);
    v8 = sub_A15F8(v4);
    if ( v8 )
    {
      v9 = a2 >= 0;
      if ( a2 >= v8 )
        v9 = 0;
      if ( !v9 )
        a2 = v8;
      if ( a2 <= 0 )
        return v10;
      while ( v10 )
      {
        --a2;
        v10 = sub_A0870(*(_DWORD *)(*(_DWORD *)(v10 + 24) + 20));
        if ( !a2 )
          return v10;
      }
    }
  }
  else if ( v6 == 2 )
  {
    if ( !a2 )
      return v3;
    do
    {
      --a2;
      v10 = *((_DWORD *)v5 + 5);
      if ( !a2 )
        break;
      v5 = *(char **)(v10 + 24);
    }
    while ( *v5 == 2 );
    return v10;
  }
  return 0;
}
