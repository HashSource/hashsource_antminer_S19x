int __fastcall sub_CAAD8(int result, int a2, int a3, int (__fastcall *a4)(int, int, int))
{
  int v4; // r4
  int v5; // r2
  int v6; // r1

  v4 = result;
  if ( !result )
    return sub_946B0("bad breakpoint number at or near '%d'", 0);
  if ( a2 >= result )
  {
    do
    {
      if ( dword_478348 )
      {
        v5 = *(_DWORD *)(dword_478348 + 24);
        v6 = *(_DWORD *)(dword_478348 + 8);
        if ( v5 == v4 )
        {
          v6 = dword_478348;
LABEL_12:
          result = a4(a3, v6, v5);
          goto LABEL_10;
        }
        while ( v6 )
        {
          v5 = *(_DWORD *)(v6 + 8);
          if ( *(_DWORD *)(v6 + 24) == v4 )
            goto LABEL_12;
          v6 = *(_DWORD *)(v6 + 8);
        }
      }
      result = sub_259858("No breakpoint number %d.\n", v4);
LABEL_10:
      ++v4;
    }
    while ( a2 + 1 != v4 );
  }
  return result;
}
