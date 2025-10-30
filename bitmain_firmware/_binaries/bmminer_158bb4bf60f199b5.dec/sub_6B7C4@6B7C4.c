int __fastcall sub_6B7C4(int a1, int *a2, char *s2, int a4)
{
  int v4; // r4
  bool v8; // zf
  int result; // r0

  v4 = *a2;
  if ( *a2 != a1 + 12 || v4 != a2[1] )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(v4 - 4) == a4 )
      {
        v8 = strcmp((const char *)(v4 + 16), s2) == 0;
        result = v4 - 4;
        if ( v8 )
          return result;
        if ( a2[1] == v4 )
          return 0;
      }
      else if ( a2[1] == v4 )
      {
        return 0;
      }
      v4 = *(_DWORD *)(v4 + 4);
    }
  }
  return 0;
}
