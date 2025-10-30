_DWORD *sub_D8CD4()
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
        if ( result[18] == dword_487D2C && result[3] == 24 )
          break;
        result = (_DWORD *)result[2];
        if ( !v1 )
          return result;
      }
      sub_D8944(result, 19, &dword_4784E4, 1);
      result = v1;
    }
    while ( v1 );
  }
  return result;
}
