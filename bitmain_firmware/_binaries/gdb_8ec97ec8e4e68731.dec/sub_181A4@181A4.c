_DWORD *sub_181A4()
{
  _DWORD *result; // r0

  dword_48FEF0 = 0;
  dword_48FEF4 = 0;
  dword_48FEF8 = 0;
  dword_48FEFC = 0;
  dword_48FF00 = 0;
  dword_48FF04 = 0;
  dword_48FF10 = 20224;
  result = malloc(0x4F00u);
  dword_48FF0C = (int)result;
  if ( result )
  {
    dword_48FF08 = (int)result;
    *result = 20224;
    result[1] = 0;
  }
  else
  {
    dword_48FF10 = 0;
    dword_48FF08 = 0;
  }
  return result;
}
