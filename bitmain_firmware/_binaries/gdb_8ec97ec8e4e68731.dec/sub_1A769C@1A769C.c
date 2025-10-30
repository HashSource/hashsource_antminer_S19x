int __fastcall sub_1A769C(int a1, int a2)
{
  int v4; // r7
  char *v5; // r5
  int result; // r0
  int *v7; // r5
  int v8; // r1
  int v9; // r3
  char v10; // r2
  char *v11; // r3
  int v12; // r0
  bool v13; // zf
  int v14; // r3
  int *v15; // r0
  int v16; // r6
  int v17; // r0
  int v18; // r6
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int *v24; // r0

  v4 = sub_1B7250(a2);
  v5 = (char *)sub_1B6B24(a2, dword_487AC8);
  if ( !v5 )
  {
    v8 = *(_DWORD *)(a2 + 64);
    v9 = *(_DWORD *)(a2 + 60);
    v10 = v8 - v9;
    if ( (unsigned int)(v8 - v9) <= 0xFF )
    {
      obstack_newchunk((struct obstack *)(a2 + 48), 256);
      v9 = *(_DWORD *)(a2 + 60);
      v8 = *(_DWORD *)(a2 + 64);
    }
    v5 = *(char **)(a2 + 56);
    v11 = (char *)(v9 + 256);
    v12 = *(_DWORD *)(a2 + 72);
    *(_DWORD *)(a2 + 60) = v11;
    v13 = v11 == v5;
    if ( v11 == v5 )
      v10 = *(_BYTE *)(a2 + 88);
    v14 = (unsigned int)&v11[v12] & ~v12;
    *(_DWORD *)(a2 + 60) = v14;
    if ( v13 )
      *(_BYTE *)(a2 + 88) = v10 | 2;
    if ( v14 - *(_DWORD *)(a2 + 52) > (unsigned int)(v8 - *(_DWORD *)(a2 + 52)) )
    {
      v14 = v8;
      *(_DWORD *)(a2 + 60) = v8;
    }
    *(_DWORD *)(a2 + 56) = v14;
    memset(v5, 0, 0x100u);
    sub_1B6B1C(a2, dword_487AC8, v5);
  }
  result = *(_DWORD *)&v5[4 * a1];
  v7 = (int *)&v5[4 * a1];
  if ( !result )
  {
    switch ( a1 )
    {
      case 0:
      case 26:
        result = *(_DWORD *)sub_1780C4(a2);
        break;
      case 1:
        v15 = (int *)sub_1780C4(a2);
        result = sub_17366C(a2, 32, (int)"adr_32", *v15);
        break;
      case 2:
        result = sub_173564(a2, 8, 0);
        *(_BYTE *)(*(_DWORD *)(result + 24) + 1) |= 2u;
        break;
      case 3:
        result = sub_173564(a2, 8, 1);
        break;
      case 4:
        result = sub_173564(a2, 16, 0);
        break;
      case 5:
        result = sub_173564(a2, 16, 1);
        break;
      case 6:
      case 8:
        result = sub_173564(a2, 32, 0);
        break;
      case 7:
      case 9:
        result = sub_173564(a2, 32, 1);
        break;
      case 10:
        v16 = ((int (__fastcall *)(int))loc_166138)(v4);
        v17 = ((int (__fastcall *)(int))loc_1661B0)(v4);
        result = sub_1735E8(a2, v16, (int)"float", v17);
        break;
      case 11:
        v18 = ((int (__fastcall *)(int))loc_166228)(v4);
        v19 = ((int (__fastcall *)(int))loc_1662A0)(v4);
        result = sub_1735E8(a2, v18, (int)"double", v19);
        break;
      case 18:
        v20 = sub_1A769C(10, a2);
        result = sub_173644(a2, (int)"complex", v20);
        break;
      case 19:
        v21 = sub_1A769C(10, a2);
        result = sub_173644(a2, (int)"double complex", v21);
        break;
      case 21:
        v22 = ((int (__fastcall *)(int))loc_165E68)(v4);
        result = sub_173564(a2, v22, 0);
        break;
      case 22:
        v23 = ((int (__fastcall *)(int))loc_166228)(v4);
        result = ((int (__fastcall *)(int, int, int, const char *))loc_1734E0)(a2, 14, v23, "floating decimal");
        break;
      case 23:
        result = ((int (__fastcall *)(int, int, int, char *))loc_1734E0)(a2, 13, 8, "string");
        break;
      case 30:
      case 32:
      case 35:
        result = sub_173564(a2, 64, 0);
        break;
      case 31:
      case 33:
      case 36:
        result = sub_173564(a2, 64, 1);
        break;
      case 34:
        v24 = (int *)sub_1780C4(a2);
        result = sub_17366C(a2, 64, (int)"adr_64", *v24);
        break;
      default:
        break;
    }
    *v7 = result;
  }
  return result;
}
