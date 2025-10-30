int sub_69CC0()
{
  int result; // r0
  _DWORD *v1; // r3

  if ( !dword_1B13B4 )
    return -1;
  for ( result = 0; result != 16; ++result )
  {
    if ( dword_1B125C[4 * result] == 255 )
    {
      v1 = &dword_1B125C[4 * result];
      if ( v1[1] == 255 && v1[2] == 255 && v1[3] == 255 )
        break;
    }
  }
  return result;
}
