int __fastcall sub_2E66FC(int a1)
{
  _DWORD *v1; // r4
  int v2; // r3
  int result; // r0

  v1 = *(_DWORD **)(a1 + 56);
  if ( !v1 )
    return 1;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(v1[1] + 4) == 5 )
      {
        v2 = v1[25];
        if ( v2 )
        {
          if ( (*(_WORD *)(v2 + 24) & 0x380) != 0x200 )
            break;
        }
      }
      v1 = (_DWORD *)v1[39];
      if ( !v1 )
        return 1;
    }
    result = sub_2D4E6C((int)v1, (int)&off_470950);
    if ( !result )
      break;
    v1 = (_DWORD *)v1[39];
    if ( !v1 )
      return 1;
  }
  return result;
}
