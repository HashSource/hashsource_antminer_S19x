int __fastcall sub_DBBA0(int *a1)
{
  int *i; // r4
  int v2; // r0
  int result; // r0
  int v4; // r4

  for ( i = a1; i; i = (int *)*i )
  {
    v2 = i[2];
    if ( v2 && !*(_DWORD *)(v2 + 20) )
    {
      if ( *((_BYTE *)i + 25) )
        ((void (*)(void))loc_DB0B0)();
    }
  }
  result = dword_478348;
  if ( dword_478348 )
  {
    do
    {
      while ( 1 )
      {
        v4 = *(_DWORD *)(result + 8);
        if ( *(_DWORD *)(result + 20) == 1 )
          break;
        result = *(_DWORD *)(result + 8);
        if ( !v4 )
          return result;
      }
      ((void (*)(void))loc_DB0B0)();
      result = v4;
    }
    while ( v4 );
  }
  return result;
}
