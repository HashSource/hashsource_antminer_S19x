int __fastcall sub_60A30(char *s2, int a2)
{
  int v4; // r4

  v4 = 0;
  while ( ((a2 >> v4) & 1) == 0 || strcmp(off_B4B64[v4], s2) )
  {
    if ( ++v4 == 25 )
      return -1;
  }
  return v4;
}
