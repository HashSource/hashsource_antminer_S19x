int __fastcall sub_30BCCC(unsigned int a1, unsigned int a2, int a3, int a4)
{
  unsigned int v6; // r3
  int v7; // r2
  unsigned int v8; // r1
  int v9; // r4
  int v10; // r2
  unsigned int v11; // r3
  int v12; // r2
  unsigned int v13; // r0

  if ( a4 < 0 )
    return -1;
  sub_347ED4(a3, a4, 65521, 0);
  v6 = HIWORD(a2);
  v8 = (unsigned __int16)a1 * v7;
  v9 = (unsigned __int16)a2 + (unsigned __int16)a1;
  v10 = v6 + HIWORD(a1) - v7;
  v11 = v8 % 0xFFF1;
  v12 = v10 + v8 % 0xFFF1;
  if ( !v9 )
    v11 = 65520;
  v13 = v12 + 65521;
  if ( v9 )
  {
    v11 = v9 - 1;
    if ( (unsigned int)(v9 - 1) > 0xFFF0 )
      v11 = v9 - 65522;
  }
  if ( v13 > 0x1FFE1 )
    v13 = v12 - 65521;
  if ( v13 > 0xFFF0 )
    v13 -= 65521;
  return v11 | (v13 << 16);
}
