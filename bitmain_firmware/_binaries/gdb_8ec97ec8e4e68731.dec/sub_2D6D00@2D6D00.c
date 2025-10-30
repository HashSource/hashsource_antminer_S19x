int __fastcall sub_2D6D00(int a1)
{
  int v1; // r5
  _DWORD *v2; // r4
  int i; // r6
  _DWORD *v4; // r3
  int v5; // r2
  bool v6; // zf
  int v7; // r0

  v1 = *(_DWORD *)(*(_DWORD *)(a1 + 160) + 2324);
  if ( v1 )
  {
    v2 = *(_DWORD **)(a1 + 100);
    for ( i = 4; v2; i += 4 * v7 )
    {
      while ( 1 )
      {
        v4 = (_DWORD *)v2[35];
        if ( v1 == v4[7] )
        {
          v5 = v4[1];
          v6 = v5 == 4;
          if ( v5 != 4 )
            v6 = v5 == 9;
          if ( v6 )
            break;
        }
        v2 = (_DWORD *)v2[3];
        if ( !v2 )
          return i;
      }
      v7 = sub_347418(v2[9], v4[10]);
      v2 = (_DWORD *)v2[3];
    }
  }
  else
  {
    i = -1;
    ((void (__fastcall *)(int))loc_2A6C48)(5);
  }
  return i;
}
