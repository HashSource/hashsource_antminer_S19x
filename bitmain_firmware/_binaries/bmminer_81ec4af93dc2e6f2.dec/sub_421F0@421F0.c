char *sub_421F0()
{
  int i; // r4
  const char *v1; // r0

  for ( i = 0; i != 4; ++i )
  {
    if ( sub_266F0(i) )
      sub_19E58(i, &byte_4B6D00[64 * i], 0x40u);
  }
  v1 = (const char *)sub_6727C();
  return strncpy(&byte_4B6E00, v1, 0x40u);
}
