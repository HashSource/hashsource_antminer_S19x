int sub_590EC()
{
  int i; // [sp+4h] [bp-8h]

  if ( !dword_B382C )
    return -1;
  for ( i = 0;
        i <= 15
     && (dword_B3830[4 * i] != -1
      || dword_B3830[4 * i + 1] != -1
      || dword_B3830[4 * i + 2] != -1
      || dword_B3830[4 * i + 3] != -1);
        ++i )
  {
    ;
  }
  return i;
}
