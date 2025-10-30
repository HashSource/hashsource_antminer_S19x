int __fastcall sub_779B0(int a1, int a2, int a3, unsigned __int16 a4)
{
  unsigned int v4; // r4

  v4 = 0x80000000;
  if ( !a3 )
    v4 = 0;
  return sub_771FC(a1, 0, a2, 12, v4 & 0xFFFF0000 | a4);
}
