_DWORD *__fastcall sub_67AB4(_DWORD *a1, signed int a2)
{
  int v2; // r4
  int *v4; // r0
  int v5; // r1
  unsigned int v6; // r4
  unsigned int v7; // r1

  v2 = a2 >> 31;
  if ( ((a2 >> 31) ^ (unsigned int)a2) > 0x3FFFFFFF )
  {
    v4 = _errno_location();
    a2 = ~(v2 ^ 0xC0000000);
    *v4 = 33;
  }
  v5 = 4 * a2 + 2;
  v6 = v2 ^ ((v5 ^ (unsigned int)v2) / 0x5187);
  v7 = *(unsigned __int16 *)&a164640Feb52025[2 * (v6 & 3) + 152] + 157 * ((v5 - 20871 * v6) >> 2);
  *a1 = 100 * v6 + (v7 >> 13);
  a1[1] = (v7 & 0x1FFF) / 0x9D;
  return a1;
}
