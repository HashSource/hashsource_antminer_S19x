int __fastcall sub_3398A4(char a1, int a2)
{
  unsigned int v2; // r0

  v2 = a1 & 0x70;
  if ( v2 == 32 )
    sub_3491BC(a2);
  if ( v2 <= 0x20 )
  {
    if ( v2 && v2 != 16 )
LABEL_12:
      abort();
  }
  else
  {
    if ( v2 == 64 )
      return sub_349194(a2);
    if ( v2 != 80 )
    {
      if ( v2 == 48 )
        sub_3491B4(a2);
      goto LABEL_12;
    }
  }
  return 0;
}
