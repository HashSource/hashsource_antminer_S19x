unsigned int *__fastcall sub_66AA8(unsigned int *a1, signed int a2, _BOOL4 *a3)
{
  int v3; // r4
  int v6; // r1
  unsigned int v7; // r4
  unsigned int v8; // r1
  unsigned int v9; // r3
  unsigned int v10; // r2
  unsigned int v11; // r1
  _BOOL4 v12; // r3
  int *v14; // r0

  v3 = a2 >> 31;
  if ( ((a2 >> 31) ^ (unsigned int)a2) > 0x3FFFFFFF )
  {
    v14 = _errno_location();
    a2 = ~(v3 ^ 0xC0000000);
    *v14 = 33;
  }
  v6 = (4 * a2) | 3;
  v7 = v3 ^ ((v6 ^ (unsigned int)v3) / 0x23AB1);
  v8 = (v6 - 146097 * v7) | 3;
  v9 = v8 / 0x5B5;
  v10 = v8 / 0x5B5 + 100 * v7;
  v11 = (v8 % 0x5B5) >> 2;
  if ( a3 )
  {
    if ( ((v9 + 1) & 3) != 0 )
      v12 = 0;
    else
      v12 = v9 != 99 || ((v7 + 1) & 3) == 0;
    *a3 = v12;
  }
  *a1 = v10;
  a1[1] = v11;
  return a1;
}
