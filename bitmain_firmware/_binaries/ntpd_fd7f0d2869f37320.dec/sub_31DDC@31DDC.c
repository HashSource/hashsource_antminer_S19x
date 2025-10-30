int __fastcall sub_31DDC(unsigned int a1, __int16 a2)
{
  int v2; // r3

  v2 = (a2 & 0x200) == 0;
  if ( (a2 & 0x1000) == 0 )
    ++v2;
  if ( (a2 & 0x800) == 0 )
    ++v2;
  if ( (a2 & 0x400) == 0 )
    ++v2;
  if ( a1 <= 2 || (++v2, a1 != 5) )
    ++v2;
  return v2;
}
