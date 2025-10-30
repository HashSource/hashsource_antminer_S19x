_DWORD *__fastcall sub_DB520(int a1)
{
  _DWORD *result; // r0
  int v3; // r3
  _DWORD *v4; // r4
  bool v5; // zf

  result = (_DWORD *)dword_478348;
  if ( dword_478348 )
  {
    do
    {
      while ( 1 )
      {
        v3 = result[3];
        v4 = (_DWORD *)result[2];
        v5 = v3 == 10;
        if ( v3 != 10 )
          v5 = v3 == 13;
        if ( v5 && result[28] == a1 )
          break;
        result = (_DWORD *)result[2];
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
