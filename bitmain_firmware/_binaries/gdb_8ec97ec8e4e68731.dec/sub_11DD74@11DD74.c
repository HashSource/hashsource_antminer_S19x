int __fastcall sub_11DD74(int result, int a2, unsigned int a3, int a4, char a5, int a6)
{
  int v7; // r9
  unsigned int v10; // r5
  int v11; // r7
  int v12; // r6
  int v13; // r0
  int v14; // r3
  int v15; // r6

  if ( a3 )
  {
    v7 = result;
    v10 = 0;
    do
    {
      v11 = a6 + (v10 >> 1);
      v10 += 2;
      v12 = sub_15C250(a2, 8, 1);
      v13 = sub_15C250(a2 + 8, 8, 1);
      v14 = v12;
      a2 += 16;
      v15 = *(_DWORD *)(dword_4872D8 + 348);
      result = sub_11CBDC(v7, a4, a5, v14, v13);
      *(_DWORD *)(v15 + 4 * v11) = result;
    }
    while ( a3 > v10 );
  }
  return result;
}
