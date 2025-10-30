_DWORD *sub_CF310()
{
  _DWORD *result; // r0

  result = (_DWORD *)dword_478348;
  if ( dword_478348 )
  {
    while ( result[4] != 1 || result[3] != 6 || !result[7] )
    {
      result = (_DWORD *)result[2];
      if ( !result )
        return result;
    }
    return (_DWORD *)result[4];
  }
  return result;
}
