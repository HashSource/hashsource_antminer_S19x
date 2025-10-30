char *__fastcall sub_25AC8C(int a1, int a2)
{
  unsigned int v3; // r0

  v3 = ((int (*)(void))loc_16666C)();
  if ( v3 <= 0x1F )
    a2 &= ~(-1 << v3);
  return sub_98B08(a2, 0);
}
