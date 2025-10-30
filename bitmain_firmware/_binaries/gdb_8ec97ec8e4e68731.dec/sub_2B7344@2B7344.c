_BYTE *__fastcall sub_2B7344(int a1, int a2, char a3, _BYTE *a4, unsigned int a5)
{
  _BYTE *v5; // r4
  char v6; // r2
  int v9; // r0
  int v10; // r1
  _BYTE *v11; // r3

  v5 = a4;
  if ( (unsigned int)a4 < a5 )
  {
    v6 = (_BYTE)a4 - a3;
    v9 = *(_DWORD *)(a1 + 364);
    v10 = *(_DWORD *)(a2 + 4);
    if ( (v6 & 1) == 0 && (v6 & 3) != 0 )
    {
      v5 = a4 + 2;
      sub_2B72C4(v9, v10, 56832, a4);
      if ( a5 <= (unsigned int)v5 )
        return v5;
      v9 = *(_DWORD *)(a1 + 364);
      v10 = *(_DWORD *)(a2 + 4);
    }
    while ( 1 )
    {
      v11 = v5;
      v5 += 4;
      sub_2B72EC(v9, v10, -135225344, v11);
      if ( a5 <= (unsigned int)v5 )
        break;
      v9 = *(_DWORD *)(a1 + 364);
      v10 = *(_DWORD *)(a2 + 4);
    }
  }
  return v5;
}
