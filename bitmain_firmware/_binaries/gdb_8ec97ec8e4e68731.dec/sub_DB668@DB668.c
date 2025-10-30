int sub_DB668()
{
  int result; // r0
  int v1; // r4

  result = dword_478348;
  if ( dword_478348 )
  {
    do
    {
      while ( 1 )
      {
        v1 = *(_DWORD *)(result + 8);
        if ( *(_DWORD *)(result + 12) == 19 )
          break;
        result = *(_DWORD *)(result + 8);
        if ( !v1 )
          return result;
      }
      ((void (*)(void))loc_DB0B0)();
      result = v1;
    }
    while ( v1 );
  }
  return result;
}
