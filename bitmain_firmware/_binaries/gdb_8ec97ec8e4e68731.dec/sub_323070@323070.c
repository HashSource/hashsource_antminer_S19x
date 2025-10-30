int __fastcall sub_323070(int result, int a2, int a3, int a4, unsigned int a5, unsigned int a6)
{
  bool v6; // zf
  unsigned int v7; // r1
  int v9; // r3
  int v10; // r9
  int v11; // r2
  char v12; // r7
  int v13; // r4
  int v14; // lr
  int v15; // lr
  int v16; // r6
  unsigned int v17; // r12
  unsigned int v18; // r3
  unsigned int v19; // r12

  v6 = a2 == 0;
  v7 = a5;
  if ( v6 )
  {
    v16 = 1;
    v18 = a3 - a5 - a4;
    v19 = v18 >> 3;
  }
  else
  {
    v18 = a4 + a5;
    v16 = -1;
    v17 = v18 - 1;
    LOBYTE(v18) = a3 - v18;
    v19 = v17 >> 3;
  }
  v9 = v18 & 7;
  v10 = v9 + a5;
  if ( v9 + a5 >= 8 )
    v10 = 8;
  do
  {
    v11 = *(unsigned __int8 *)(result + v19);
    v12 = v10 - v9;
    v7 -= v10 - v9;
    v13 = (1 << (v10 - v9)) - 1;
    if ( v7 < 8 )
      v10 = v7;
    v14 = v11 ^ (a6 << v9);
    if ( v7 >= 8 )
      v10 = 8;
    a6 >>= v12;
    v15 = v14 & (v13 << v9);
    v9 = 0;
    *(_BYTE *)(result + v19) = v11 ^ v15;
    v19 += v16;
  }
  while ( v7 );
  return result;
}
