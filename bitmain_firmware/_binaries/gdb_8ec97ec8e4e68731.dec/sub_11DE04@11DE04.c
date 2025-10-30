int __fastcall sub_11DE04(int result, int a2, int a3, char a4, int a5)
{
  int v5; // r7
  unsigned int v7; // r4
  int v8; // r11
  unsigned int v9; // r1
  int v11; // r6
  int v12; // r10

  v7 = 0;
  v8 = result;
  v9 = *(_DWORD *)(a2 + 28);
  do
  {
    if ( v7 < v9 )
    {
      result = sub_15C250(
                 *(_DWORD *)(a2 + 44) + v7 * *(unsigned __int8 *)(a2 + 26),
                 *(unsigned __int8 *)(a2 + 26),
                 *(_DWORD *)(a2 + 20));
      v11 = result;
      if ( !v7 )
        goto LABEL_3;
LABEL_7:
      v12 = *(_DWORD *)(dword_4872D8 + 348);
      result = sub_11CBDC(v8, a3, a4, v5, v11 - v5);
      *(_DWORD *)(v12 + 4 * (a5 + 0x3FFFFFFF + v7)) = result;
      goto LABEL_3;
    }
    v11 = *(_DWORD *)(a3 + 8);
    if ( v7 )
      goto LABEL_7;
LABEL_3:
    v9 = *(_DWORD *)(a2 + 28);
    ++v7;
    v5 = v11;
  }
  while ( v9 >= v7 );
  return result;
}
