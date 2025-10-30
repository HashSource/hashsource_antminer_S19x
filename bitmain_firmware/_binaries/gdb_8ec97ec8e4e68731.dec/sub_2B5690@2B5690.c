char *__fastcall sub_2B5690(int a1)
{
  unsigned int v1; // r0

  if ( a1 == 160 )
    return (char *)&unk_413754;
  v1 = a1 - 252;
  if ( v1 > 3 )
    return 0;
  else
    return (char *)&unk_413788 + 52 * v1;
}
