unsigned int __fastcall sub_1F95C(unsigned int result)
{
  unsigned int v1; // r3

  if ( result )
  {
    v1 = result + 8;
    result = *(_WORD *)(result + 2) & 0x80;
    if ( result )
    {
      return 0;
    }
    else
    {
      do
      {
        v1 += 8;
        ++result;
      }
      while ( (*(_WORD *)(v1 - 6) & 0x80) == 0 );
      if ( result >= 0x10000 )
        sub_6ECC0("ntp_control.c", 5165, 1, "c <= (0x7fff * 2 + 1)");
      return (unsigned __int16)result;
    }
  }
  return result;
}
