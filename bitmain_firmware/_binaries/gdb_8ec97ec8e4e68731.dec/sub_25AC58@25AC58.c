int __fastcall sub_25AC58(int a1, int a2)
{
  int v3; // r0

  v3 = ((int (*)(void))loc_16A05C)();
  if ( (unsigned int)(v3 - 1) > 0x1E )
    return a2;
  else
    return (a2 & ~(-1 << v3) ^ (1 << (v3 - 1))) - (1 << (v3 - 1));
}
