int __fastcall sub_396BC(int a1, int a2)
{
  int v4; // r4
  int v5; // r5
  int v6; // r0
  int v7; // r4
  unsigned int v8; // r4
  int v9; // r0
  int v10; // r1
  unsigned int v11; // r6
  int v12; // r0
  unsigned int v13; // r1
  unsigned int v14; // r7
  int v15; // r5
  int result; // r0
  int *v17; // lr
  int *v18; // r3
  int v19; // t1

  v4 = sub_26570();
  sub_265A0();
  v5 = sub_8C490(v4);
  v6 = sub_265A0();
  v7 = sub_8C218(a2, v6);
  v8 = v7 * sub_26550();
  v9 = sub_265A0();
  sub_8C474(a2, v9);
  v11 = v5 * v10;
  v12 = sub_26550();
  v13 = v12 + v8;
  v14 = v5 + v11;
  if ( v8 >= v12 + v8 )
    return 0;
  v15 = v5;
  result = 0;
  v17 = &dword_B42F4[1024 * (v8 + (a1 << 8)) + 1028 + v11];
  do
  {
    if ( v11 < v14 )
    {
      v18 = v17;
      do
      {
        v19 = v18[1];
        ++v18;
        result += v19;
      }
      while ( v18 != &v17[v15] );
    }
    ++v8;
    v17 += 1024;
  }
  while ( v13 != v8 );
  return result;
}
