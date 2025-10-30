int __fastcall sub_5A0F0(unsigned int a1, unsigned __int8 *a2, char a3, int a4)
{
  int v4; // r4
  int v5; // r2
  int v6; // r5
  int v7; // r5
  bool v8; // zf
  int v9; // r4
  int v10; // r3
  int v11; // r3
  int v13; // r5
  int v14; // r5
  bool v15; // zf
  int v16; // t2
  unsigned int v17; // r0
  int v18; // r5
  int v19; // r5
  bool v20; // zf
  int v21; // r3
  int v22; // t2
  unsigned int v23; // r0
  int v24; // r5
  int v25; // r5
  bool v26; // zf
  int v27; // r3
  int v28; // t2
  unsigned int v29; // r2

  v5 = (a3 & 0xF) - 1;
  switch ( v5 )
  {
    case 0:
      goto LABEL_19;
    case 1:
      goto LABEL_18;
    case 2:
      goto LABEL_17;
    case 3:
      goto LABEL_31;
    case 4:
      goto LABEL_46;
    case 5:
      goto LABEL_61;
    case 6:
      goto LABEL_12;
    case 7:
      goto LABEL_26;
    case 8:
      goto LABEL_41;
    case 9:
      goto LABEL_56;
    case 10:
      goto LABEL_7;
    case 11:
      LOWORD(v13) = -20931;
      if ( a4 == 1 )
        v5 = *(_DWORD *)a2;
      HIWORD(v13) = -15694;
      if ( a4 != 1 )
        v5 = *(_DWORD *)a2;
      a2 += 4;
      a1 = 668265263 * __ROR4__(a1 + v13 * v5, 15);
LABEL_26:
      LOWORD(v14) = -20931;
      if ( a4 == 1 )
        v5 = *(_DWORD *)a2;
      HIWORD(v14) = -15694;
      if ( a4 != 1 )
        v5 = *(_DWORD *)a2;
      a2 += 4;
      a1 = 668265263 * __ROR4__(a1 + v14 * v5, 15);
LABEL_31:
      v15 = a4 == 1;
      LOWORD(a4) = -20931;
      if ( v15 )
        v5 = *(_DWORD *)a2;
      HIWORD(a4) = -15694;
      if ( !v15 )
        v5 = *(_DWORD *)a2;
      v16 = __ROR4__(a1 + a4 * v5, 15);
      v17 = -2048144777 * ((668265263 * v16) ^ ((unsigned int)(668265263 * v16) >> 15));
      return (a4 * (v17 ^ (v17 >> 13))) ^ ((a4 * (v17 ^ (v17 >> 13))) >> 16);
    case 12:
      LOWORD(v18) = -20931;
      if ( a4 == 1 )
        v5 = *(_DWORD *)a2;
      HIWORD(v18) = -15694;
      if ( a4 != 1 )
        v5 = *(_DWORD *)a2;
      a2 += 4;
      a1 = 668265263 * __ROR4__(a1 + v18 * v5, 15);
LABEL_41:
      LOWORD(v19) = -20931;
      if ( a4 == 1 )
        v5 = *(_DWORD *)a2;
      HIWORD(v19) = -15694;
      if ( a4 != 1 )
        v5 = *(_DWORD *)a2;
      a2 += 4;
      a1 = 668265263 * __ROR4__(a1 + v19 * v5, 15);
LABEL_46:
      v20 = a4 == 1;
      if ( a4 == 1 )
        v5 = *(_DWORD *)a2;
      LOWORD(v21) = -20931;
      if ( !v20 )
        v5 = *(_DWORD *)a2;
      HIWORD(v21) = -15694;
      v22 = __ROR4__(374761393 * a2[4] + 668265263 * __ROR4__(a1 + v21 * v5, 15), 21);
      v23 = v21
          * ((-2048144777 * ((-1640531535 * v22) ^ ((unsigned int)(-1640531535 * v22) >> 15)))
           ^ ((-2048144777 * ((-1640531535 * v22) ^ ((unsigned int)(-1640531535 * v22) >> 15))) >> 13));
      return v23 ^ HIWORD(v23);
    case 13:
      LOWORD(v24) = -20931;
      if ( a4 == 1 )
        v5 = *(_DWORD *)a2;
      HIWORD(v24) = -15694;
      if ( a4 != 1 )
        v5 = *(_DWORD *)a2;
      a2 += 4;
      a1 = 668265263 * __ROR4__(a1 + v24 * v5, 15);
LABEL_56:
      LOWORD(v25) = -20931;
      if ( a4 == 1 )
        v5 = *(_DWORD *)a2;
      HIWORD(v25) = -15694;
      if ( a4 != 1 )
        v5 = *(_DWORD *)a2;
      v4 = 668265263;
      a2 += 4;
      a1 = 668265263 * __ROR4__(a1 + v25 * v5, 15);
LABEL_61:
      v26 = a4 == 1;
      if ( a4 == 1 )
        v4 = *(_DWORD *)a2;
      LOWORD(v27) = -20931;
      if ( !v26 )
        v4 = *(_DWORD *)a2;
      HIWORD(v27) = -15694;
      v28 = __ROR4__(
              374761393 * a2[5] - 1640531535 * __ROR4__(374761393 * a2[4] + 668265263 * __ROR4__(a1 + v27 * v4, 15), 21),
              21);
      v29 = -2048144777 * ((-1640531535 * v28) ^ ((unsigned int)(-1640531535 * v28) >> 15));
      return (v27 * (v29 ^ (v29 >> 13))) ^ ((v27 * (v29 ^ (v29 >> 13))) >> 16);
    case 14:
      LOWORD(v6) = -20931;
      if ( a4 == 1 )
        v5 = *(_DWORD *)a2;
      HIWORD(v6) = -15694;
      if ( a4 != 1 )
        v5 = *(_DWORD *)a2;
      a2 += 4;
      a1 = 668265263 * __ROR4__(a1 + v6 * v5, 15);
LABEL_7:
      LOWORD(v7) = -20931;
      if ( a4 == 1 )
        v5 = *(_DWORD *)a2;
      HIWORD(v7) = -15694;
      if ( a4 != 1 )
        v5 = *(_DWORD *)a2;
      a2 += 4;
      a1 = 668265263 * __ROR4__(a1 + v7 * v5, 15);
LABEL_12:
      v8 = a4 == 1;
      LOWORD(v9) = -20931;
      if ( a4 == 1 )
        a4 = *(_DWORD *)a2;
      HIWORD(v9) = -15694;
      if ( !v8 )
        a4 = *(_DWORD *)a2;
      a2 += 4;
      a1 = 668265263 * __ROR4__(a1 + v9 * a4, 15);
LABEL_17:
      v10 = *a2++;
      a1 = -1640531535 * __ROR4__(a1 + 374761393 * v10, 21);
LABEL_18:
      v11 = *a2++;
      a1 = -1640531535 * __ROR4__(a1 + 374761393 * v11, 21);
LABEL_19:
      a1 = -1640531535 * __ROR4__(a1 + 374761393 * *a2, 21);
      return (-1028477379 * ((-2048144777 * (a1 ^ (a1 >> 15))) ^ ((-2048144777 * (a1 ^ (a1 >> 15))) >> 13)))
           ^ ((-1028477379 * ((-2048144777 * (a1 ^ (a1 >> 15))) ^ ((-2048144777 * (a1 ^ (a1 >> 15))) >> 13))) >> 16);
    default:
      return (-1028477379 * ((-2048144777 * (a1 ^ (a1 >> 15))) ^ ((-2048144777 * (a1 ^ (a1 >> 15))) >> 13)))
           ^ ((-1028477379 * ((-2048144777 * (a1 ^ (a1 >> 15))) ^ ((-2048144777 * (a1 ^ (a1 >> 15))) >> 13))) >> 16);
  }
}
