int sub_292A88()
{
  int result; // r0

  if ( dword_48B700 )
  {
    sub_297758(dword_48B700);
    dword_48B700 = 0;
  }
  result = dword_48B6F4;
  dword_48B6F8 = 0;
  dword_48B6FC = 0;
  if ( dword_48B6F4 )
    free((void *)dword_48B6F4);
  dword_48B6F4 = 0;
  dword_48B6F0 = 0;
  dword_48AAA0 &= ~0x1000u;
  return result;
}
