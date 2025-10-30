unsigned __int8 *__fastcall sub_9A254(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r12
  int v7; // r4
  bool v8; // nf
  int v9; // r1
  int v10; // r1
  unsigned __int8 *result; // r0
  int v12; // r1
  int v13; // lr
  int v14; // r3
  int v15; // lr
  unsigned __int8 *v16; // r5
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r4
  int v21; // t1
  int v22; // r6
  int v23; // r3
  int v24; // r3
  int v25; // r6
  int v26; // t1
  int v27; // lr
  int v28; // r4
  unsigned int v29; // r3
  int v30; // r6
  int v31; // lr

  v6 = a2 & 7;
  v7 = a2 + 7;
  if ( a2 >= 0 )
    v7 = a2;
  v9 = -a2;
  v8 = v9 < 0;
  v10 = v9 & 7;
  if ( !v8 )
    v6 = -v10;
  result = (unsigned __int8 *)(a1 + (v7 >> 3));
  if ( a4 < 0 )
    v12 = a4 + 7;
  else
    v12 = a4;
  v8 = -a4 < 0;
  v13 = -a4 & 7;
  v14 = a4 & 7;
  if ( !v8 )
    v14 = -v13;
  v15 = *(unsigned __int8 *)(a3 + (v12 >> 3));
  v16 = (unsigned __int8 *)(a3 + (v12 >> 3) + 1);
  v17 = 8 - v14;
  v18 = a5;
  if ( a6 )
  {
    if ( a5 > 0 )
    {
      do
      {
        v19 = 8 - v6;
        v21 = *v16++;
        v20 = v21;
        v22 = *result;
        if ( 8 - v6 >= v18 )
          v19 = v18;
        v17 = v17 + 8 - v19;
        v15 = v20 + (v15 << 8);
        v18 -= v19;
        v23 = (v22 ^ ((unsigned int)v15 >> (v17 - (8 - (v19 + v6))))) & (((1 << v19) - 1) << (8 - (v19 + v6)));
        v6 = 0;
        *result++ = v23 ^ v22;
      }
      while ( v18 > 0 );
    }
  }
  else
  {
    v24 = v15 >> v14;
    if ( a5 > 0 )
    {
      do
      {
        v26 = *v16++;
        v25 = v26;
        v27 = 8 - v6;
        v28 = *result;
        if ( 8 - v6 >= v18 )
          v27 = v18;
        v18 -= v27;
        v29 = v24 + (v25 << v17);
        v17 = v17 + 8 - v27;
        v30 = v28 ^ (v29 << v6);
        v24 = v29 >> v27;
        v31 = v30 & (((1 << v27) - 1) << v6);
        v6 = 0;
        *result++ = v28 ^ v31;
      }
      while ( v18 > 0 );
    }
  }
  return result;
}
