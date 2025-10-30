unsigned int __fastcall sub_1FBB8(unsigned int result)
{
  __int16 v1; // r2
  unsigned int v2; // r3

  if ( result )
  {
    v1 = *(_WORD *)(result + 2);
    v2 = result + 8;
    result = v1 & 0x80;
    if ( (v1 & 0x80) != 0 )
    {
      return 0;
    }
    else
    {
      do
      {
        v2 += 8;
        ++result;
      }
      while ( (*(_WORD *)(v2 - 6) & 0x80) == 0 );
      if ( result >= 0x10000 )
        sub_6FC54("ntp_control.c", 5165, 1, "c <= (32767 * 2 + 1)");
      return (unsigned __int16)result;
    }
  }
  return result;
}
