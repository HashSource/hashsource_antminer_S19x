_DWORD *sub_1C364()
{
  _DWORD *result; // r0

  result = (_DWORD *)dword_B93D8;
  if ( dword_B93D8 )
  {
    if ( *(_DWORD *)dword_B93D8 )
    {
      dword_B93D8 = *(_DWORD *)dword_B93D8;
      sub_1BDD8(result);
      return &dword_0 + 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
