_DWORD *sub_DB70C()
{
  _DWORD *result; // r0
  _DWORD *v1; // r4

  result = (_DWORD *)dword_478348;
  if ( dword_478348 )
  {
    do
    {
      while ( 1 )
      {
        v1 = (_DWORD *)result[2];
        if ( result[3] == 20 && *(_DWORD *)(result[7] + 48) == dword_487D2C )
          break;
        result = (_DWORD *)result[2];
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
