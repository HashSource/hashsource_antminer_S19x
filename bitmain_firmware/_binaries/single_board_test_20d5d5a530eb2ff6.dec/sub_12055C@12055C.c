int __fastcall sub_12055C(int a1, int *a2)
{
  int v3; // r0
  int v5; // r1
  int v7; // r0
  _DWORD *v8; // r5
  int v9; // r4
  _DWORD *v10; // r0
  bool v11; // cc
  unsigned int v12; // r1
  int v13; // r4
  int v14; // r0

  if ( !a2 )
    return 0;
  v3 = *a2;
  if ( *a2 )
  {
    v5 = *(_DWORD *)(a1 + 144);
    if ( v5 )
    {
      if ( sub_1280A0(v3, v5) )
        return 30;
    }
  }
  if ( a2[2] )
  {
    v7 = sub_10E664(a1);
    if ( sub_126528(v7, a2[2]) )
      return 31;
  }
  v8 = (_DWORD *)a2[1];
  if ( v8 )
  {
    v9 = 0;
    while ( 1 )
    {
      v11 = v9 < sub_10C010((int)v8);
      v12 = v9++;
      if ( !v11 )
        break;
      v10 = (_DWORD *)sub_10C01C(v8, v12);
      if ( *v10 == 4 )
      {
        v13 = v10[1];
        if ( v13 )
        {
          v14 = sub_10E65C(a1);
          if ( sub_10E6E0(v13, v14) )
            return 31;
        }
        return 0;
      }
    }
  }
  return 0;
}
