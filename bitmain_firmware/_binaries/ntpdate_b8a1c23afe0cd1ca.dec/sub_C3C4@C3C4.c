_DWORD *__fastcall sub_C3C4(_DWORD *a1, int a2)
{
  int v2; // r5
  unsigned int v3; // r4
  int v5; // r4
  unsigned int v6; // r5
  unsigned int v7; // r4

  v2 = a2 >> 31;
  v3 = a2;
  if ( (a2 ^ (unsigned int)(a2 >> 31)) > 0x3FFFFFFF )
  {
    v3 = ~(v2 ^ 0xC0000000);
    *_errno_location() = 33;
  }
  v5 = 4 * v3 + 2;
  v6 = v2 ^ ((v5 ^ (unsigned int)v2) / 0x5187);
  v7 = *(unsigned __int16 *)&a171005Jan14202[2 * (v6 & 3) + 152] + 157 * ((v5 - 20871 * v6) >> 2);
  *a1 = (v7 >> 13) + 100 * v6;
  a1[1] = (v7 & 0x1FFF) / 0x9D;
  return a1;
}
