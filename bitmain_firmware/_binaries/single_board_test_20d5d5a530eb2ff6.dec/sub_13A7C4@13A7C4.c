int __fastcall sub_13A7C4(int *a1)
{
  int v2; // r4
  int result; // r0
  int v4; // r7
  signed int k; // r5
  _DWORD *v6; // r0
  int v7; // r0
  signed int i; // r5
  int v9; // r3
  int v10; // r5
  bool v11; // cc
  unsigned int v12; // r1
  signed int j; // r5
  int v14; // r0
  int v15; // r3
  int v16; // r3

  if ( sub_EAC84(*a1) == (char *)22 )
  {
    v2 = a1[1];
    result = v2;
    if ( v2 )
    {
      if ( *(_DWORD *)(*(_DWORD *)(v2 + 8) + 8) )
      {
        for ( i = 0; i < sub_10C010(*(_DWORD *)(v2 + 12)); ++i )
        {
          v9 = *(_DWORD *)sub_10C01C(*(_DWORD **)(v2 + 12), i);
          if ( v9 == 4 )
          {
            if ( *(int *)v2 <= 4 )
              *(_DWORD *)v2 = 5;
          }
          else if ( v9 == 3 )
          {
            if ( *(int *)v2 <= 3 )
              *(_DWORD *)v2 = 4;
          }
          else if ( v9 == 2 && *(int *)v2 <= 2 )
          {
            *(_DWORD *)v2 = 3;
          }
        }
        v10 = 0;
        while ( 1 )
        {
          v11 = v10 < sub_10C010(*(_DWORD *)(v2 + 16));
          v12 = v10++;
          if ( !v11 )
            break;
          if ( *(_DWORD *)sub_10C01C(*(_DWORD **)(v2 + 16), v12) == 1 && *(int *)v2 <= 4 )
            *(_DWORD *)v2 = 5;
        }
        if ( sub_EAC84(**(_DWORD **)(v2 + 8)) != (char *)21 && *(int *)v2 <= 2 )
          *(_DWORD *)v2 = 3;
        for ( j = 0; j < sub_10C010(*(_DWORD *)(v2 + 20)); ++j )
        {
          v14 = sub_10C01C(*(_DWORD **)(v2 + 20), j);
          v15 = *(_DWORD *)v14;
          if ( **(_DWORD **)(v14 + 4) == 1 )
          {
            v11 = v15 <= 2;
            v16 = *(_DWORD *)v2;
            if ( v11 )
              *(_DWORD *)v14 = 3;
            if ( v16 <= 2 )
              *(_DWORD *)v2 = 3;
          }
          else if ( v15 <= 0 )
          {
            *(_DWORD *)v14 = 1;
          }
        }
        if ( *(int *)v2 <= 0 )
          *(_DWORD *)v2 = 1;
      }
      v4 = 0;
      for ( k = 0; ; ++k )
      {
        if ( k >= sub_10C010(*(_DWORD *)(v2 + 4)) )
          return v4;
        v6 = (_DWORD *)sub_10C01C(*(_DWORD **)(v2 + 4), k);
        v7 = sub_1392A8(v6);
        if ( !v7 )
          break;
        if ( v4 )
          sub_B70C0(v4, v7);
        else
          v4 = v7;
      }
      sub_B717C(v4);
      return 0;
    }
  }
  else
  {
    sub_D0048(46, 133, 108, (int)"crypto/cms/cms_sd.c", 26);
    return 0;
  }
  return result;
}
