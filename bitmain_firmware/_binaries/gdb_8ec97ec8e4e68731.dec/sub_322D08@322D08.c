int __fastcall sub_322D08(int a1, int a2, int a3, int a4, unsigned int a5)
{
  bool v5; // zf
  unsigned int v6; // r1
  int v7; // r2
  int v8; // r5
  int v9; // r4
  int v10; // r7
  int v11; // r12
  int v12; // r3
  int v13; // r3
  int v15; // r6
  unsigned int v16; // lr
  unsigned int v17; // r3
  unsigned int v18; // lr

  v5 = a2 == 0;
  v6 = a5;
  if ( v5 )
  {
    v15 = 1;
    v17 = a3 - a5 - a4;
    v18 = v17 >> 3;
  }
  else
  {
    v17 = a4 + a5;
    v15 = -1;
    v16 = v17 - 1;
    LOBYTE(v17) = a3 - v17;
    v18 = v16 >> 3;
  }
  v7 = v17 & 7;
  v8 = v7 + a5;
  v9 = 0;
  v10 = 0;
  if ( v7 + a5 >= 8 )
    v8 = 8;
  do
  {
    v11 = v8 - v7;
    v6 -= v8 - v7;
    v12 = (1 << (v8 - v7)) - 1;
    if ( v6 < 8 )
      v8 = v6;
    v13 = v12 & ((int)*(unsigned __int8 *)(a1 + v18) >> v7);
    if ( v6 >= 8 )
      v8 = 8;
    v10 |= v13 << v9;
    v18 += v15;
    v7 = 0;
    v9 += v11;
  }
  while ( v6 );
  return v10;
}
