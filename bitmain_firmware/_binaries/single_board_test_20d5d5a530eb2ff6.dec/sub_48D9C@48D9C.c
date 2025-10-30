int __fastcall sub_48D9C(unsigned int a1)
{
  if ( a1 > 0x7E000000 )
    return 0;
  else
    return a1 + (int)a1 / 255 + 16;
}
