unsigned int *__fastcall sub_B348(unsigned int *a1, int a2, _BOOL4 *a3)
{
  int v3; // r8
  unsigned int v4; // r4
  int v7; // r4
  unsigned int v8; // r8
  unsigned int v9; // r4
  unsigned int v10; // r3
  unsigned int v11; // r2
  unsigned int v12; // r4
  _BOOL4 v13; // r3

  v3 = a2 >> 31;
  v4 = a2;
  if ( (a2 ^ (unsigned int)(a2 >> 31)) > 0x3FFFFFFF )
  {
    v4 = ~(v3 ^ 0xC0000000);
    *_errno_location() = 33;
  }
  v7 = (4 * v4) | 3;
  v8 = v3 ^ ((v7 ^ (unsigned int)v3) / 0x23AB1);
  v9 = (v7 - 146097 * v8) | 3;
  v10 = v9 / 0x5B5;
  v11 = v9 / 0x5B5 + 100 * v8;
  v12 = (v9 % 0x5B5) >> 2;
  if ( a3 )
  {
    if ( ((v10 + 1) & 3) != 0 )
      v13 = 0;
    else
      v13 = v10 != 99 || ((v8 + 1) & 3) == 0;
    *a3 = v13;
  }
  *a1 = v11;
  a1[1] = v12;
  return a1;
}
