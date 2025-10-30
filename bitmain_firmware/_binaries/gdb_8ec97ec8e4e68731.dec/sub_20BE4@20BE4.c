int __fastcall sub_20BE4(int a1, int a2, int a3)
{
  int v5; // r0
  _BOOL4 v6; // r5
  int v7; // r8
  int result; // r0
  char v9; // r3
  int v10; // r7
  int v11; // r6
  bool v12; // zf
  int v13; // r3
  int v14; // r0
  int v15; // r5
  _DWORD *v16; // r0

  v5 = sub_20B88(a2, 25);
  v6 = sub_182E8((*(unsigned __int16 *)(a3 + 156) >> 5) & 0xF, v5);
  v7 = sub_182C0(*(_DWORD *)(a3 + 144));
  result = ((int (__fastcall *)(int))loc_165BB8)(a1);
  if ( v6 )
  {
    v9 = *(_BYTE *)(a3 + 156);
    v10 = result;
    v11 = *(_DWORD *)(a3 + 152);
    v12 = (v9 & 4) == 0;
    v13 = v9 & 8;
    if ( v12 )
    {
      if ( v13 )
        v11 -= 4;
    }
    else
    {
      v11 += 4 * v7;
      if ( v13 )
        v11 += 4;
    }
    v14 = sub_FA95C(v11, 4, result);
    v15 = v14 - *(_DWORD *)(a3 + 208);
    if ( dword_487978 )
    {
      v16 = (_DWORD *)sub_242FC8(v14);
      sub_2594B0(*v16, "displaced: detected PC offset %.8lx for STM instruction\n", v15);
    }
    return sub_FAB2C(v11, 4, v10, *(_DWORD *)(a3 + 204), v15 + *(_DWORD *)(a3 + 204), 0);
  }
  return result;
}
