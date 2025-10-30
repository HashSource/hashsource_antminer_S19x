int __fastcall sub_318D8(unsigned int a1, __int16 a2)
{
  _BOOL4 v2; // lr
  int v3; // r2

  v2 = (a2 & 0x200) == 0;
  if ( (a2 & 0x1000) != 0 )
    v3 = v2 + 1;
  else
    v3 = v2 + 2;
  if ( (a2 & 0x800) == 0 )
    ++v3;
  if ( (a2 & 0x400) == 0 )
    ++v3;
  if ( a1 > 2 && a1 != 5 )
    ++v3;
  return v3;
}
