int __fastcall sub_39D80(int a1, int a2)
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
  unsigned int v13; // r7
  unsigned int v14; // r1
  int v15; // r5
  int result; // r0
  int *v17; // lr
  int *v18; // r3
  int v19; // t1

  v4 = sub_26A74();
  sub_26AA4();
  v5 = sub_8F800(v4);
  v6 = sub_26AA4();
  v7 = sub_8F588(a2, v6);
  v8 = sub_26A54() * v7;
  v9 = sub_26AA4();
  sub_8F7E4(a2, v9);
  v11 = v5 * v10;
  v12 = sub_26A54();
  v13 = v11 + v5;
  v14 = v8 + v12;
  if ( v8 >= v8 + v12 )
    return 0;
  v15 = v5;
  result = 0;
  v17 = &dword_B706C[1024 * (v8 + (a1 << 8)) + 1027 + v11];
  do
  {
    if ( v11 < v13 )
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
  while ( v8 != v14 );
  return result;
}
