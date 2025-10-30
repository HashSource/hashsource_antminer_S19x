int __fastcall sub_19D84(int result, int a2)
{
  bool v2; // cc

  v2 = (unsigned int)(result - 150) > 1;
  if ( (unsigned int)(result - 150) > 1 )
    v2 = (unsigned int)(result - 130) > 1;
  if ( !v2 || result == 134 )
    *(_BYTE *)(a2 + 32) |= 0x20u;
  return result;
}
