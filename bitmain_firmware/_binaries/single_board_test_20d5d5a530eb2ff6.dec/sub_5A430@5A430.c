int __fastcall sub_5A430(unsigned int a1, unsigned int a2, int a3)
{
  int v4; // r12
  int v5; // r4
  int v6; // r8
  unsigned int v7; // lr
  int v8; // r1
  int v9; // r3
  int v10; // r12
  int v11; // r4
  int v12; // r8
  unsigned int v13; // lr
  int v14; // r1
  int v15; // r3

  if ( a1 << 30 )
  {
    if ( a2 <= 0xF )
    {
      v15 = a3 + 374761393;
    }
    else
    {
      v10 = a3 + 606290984;
      v11 = a3 - 2048144777;
      v12 = a3 + 1640531535;
      v13 = a2 - 15 + a1;
      do
      {
        v14 = *(_DWORD *)(a1 + 8);
        a1 += 16;
        a3 = -1640531535 * __ROR4__(a3 - 2048144777 * v14, 19);
        v11 = -1640531535 * __ROR4__(v11 - 2048144777 * *(_DWORD *)(a1 - 12), 19);
        v12 = -1640531535 * __ROR4__(v12 - 2048144777 * *(_DWORD *)(a1 - 4), 19);
        v10 = -1640531535 * __ROR4__(v10 - 2048144777 * *(_DWORD *)(a1 - 16), 19);
      }
      while ( v13 > a1 );
      v15 = __ROR4__(v11, 25) + __ROR4__(v10, 31) + __ROR4__(a3, 20) + __ROR4__(v12, 14);
    }
    return sub_5A0F0(a2 + v15, (unsigned __int8 *)a1, a2 & 0xF, 1);
  }
  else
  {
    if ( a2 <= 0xF )
    {
      v9 = a3 + 374761393;
    }
    else
    {
      v4 = a3 + 606290984;
      v5 = a3 - 2048144777;
      v6 = a3 + 1640531535;
      v7 = a2 - 15 + a1;
      do
      {
        v8 = *(_DWORD *)(a1 + 8);
        a1 += 16;
        a3 = -1640531535 * __ROR4__(a3 - 2048144777 * v8, 19);
        v5 = -1640531535 * __ROR4__(v5 - 2048144777 * *(_DWORD *)(a1 - 12), 19);
        v6 = -1640531535 * __ROR4__(v6 - 2048144777 * *(_DWORD *)(a1 - 4), 19);
        v4 = -1640531535 * __ROR4__(v4 - 2048144777 * *(_DWORD *)(a1 - 16), 19);
      }
      while ( v7 > a1 );
      v9 = __ROR4__(v5, 25) + __ROR4__(v4, 31) + __ROR4__(a3, 20) + __ROR4__(v6, 14);
    }
    return sub_5A0F0(a2 + v9, (unsigned __int8 *)a1, a2 & 0xF, 0);
  }
}
