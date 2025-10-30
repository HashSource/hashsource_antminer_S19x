int sub_58104()
{
  int i; // [sp+4h] [bp-8h]

  if ( !dword_B0ACC )
    return -1;
  for ( i = 0;
        i <= 15
     && (dword_B0AD0[4 * i] != 255
      || dword_B0AD0[4 * i + 1] != 255
      || dword_B0AD0[4 * i + 2] != 255
      || dword_B0AD0[4 * i + 3] != 255);
        ++i )
  {
    ;
  }
  return i;
}
