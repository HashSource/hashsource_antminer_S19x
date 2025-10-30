int __fastcall sub_205D34(int a1, int a2)
{
  int v4; // r0
  int result; // r0
  char *v6; // r7
  int *v7; // r7
  int v8; // r1
  int v9; // r3
  char v10; // r2
  char *v11; // r3
  int v12; // r0
  bool v13; // zf
  int v14; // r3
  int v15; // r0
  int v16; // r0

  v4 = sub_1B6B24(a2, (_DWORD *)dword_48942C);
  if ( (unsigned int)(a1 + 34) <= 0x21 )
  {
    v6 = (char *)v4;
    if ( !v4 )
    {
      v8 = *(_DWORD *)(a2 + 64);
      v9 = *(_DWORD *)(a2 + 60);
      v10 = v8 - v9;
      if ( (unsigned int)(v8 - v9) <= 0x8B )
      {
        obstack_newchunk((struct obstack *)(a2 + 48), 140);
        v9 = *(_DWORD *)(a2 + 60);
        v8 = *(_DWORD *)(a2 + 64);
      }
      v6 = *(char **)(a2 + 56);
      v11 = (char *)(v9 + 140);
      v12 = *(_DWORD *)(a2 + 72);
      *(_DWORD *)(a2 + 60) = v11;
      v13 = v11 == v6;
      if ( v11 == v6 )
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
      memset(v6, 0, 0x8Cu);
      sub_1B6B1C(a2, (_DWORD *)dword_48942C, (int)v6);
    }
    result = *(_DWORD *)&v6[-4 * a1];
    v7 = (int *)&v6[-4 * a1];
    if ( !result )
    {
      switch ( -a1 )
      {
        case 2:
          result = sub_173564(a2, 8, 0);
          *(_BYTE *)(*(_DWORD *)(result + 24) + 1) |= 2u;
          break;
        case 3:
        case 28:
          result = sub_173564(a2, 16, 0);
          break;
        case 5:
          result = sub_173564(a2, 8, 1);
          break;
        case 6:
        case 27:
          result = sub_173564(a2, 8, 0);
          break;
        case 7:
          result = sub_173564(a2, 16, 1);
          break;
        case 8:
        case 9:
        case 10:
          result = sub_173564(a2, 32, 1);
          break;
        case 11:
          result = ((int (__fastcall *)(int, int, int, char *))loc_1734E0)(a2, 10, 8, "void");
          break;
        case 12:
          result = sub_1735E8(a2, 32, (int)"float", (int)&off_46D508);
          break;
        case 13:
          result = sub_1735E8(a2, 64, (int)"double", (int)&off_46D500);
          break;
        case 14:
          result = sub_1735E8(a2, 64, (int)"long double", (int)&off_46D500);
          break;
        case 16:
        case 23:
        case 24:
          result = sub_1735BC(a2, 32, 1);
          break;
        case 17:
          result = sub_1735E8(a2, 32, (int)"short real", (int)&off_46D508);
          break;
        case 18:
          result = sub_1735E8(a2, 64, (int)"real", (int)&off_46D500);
          break;
        case 19:
          result = ((int (__fastcall *)(int, int, _DWORD, const char *))loc_1734E0)(a2, 14, 0, "stringptr");
          break;
        case 20:
          result = sub_173590(a2, 8, 1);
          break;
        case 21:
          result = sub_1735BC(a2, 8, 1);
          break;
        case 22:
          result = sub_1735BC(a2, 16, 1);
          break;
        case 25:
          v16 = sub_205D34(12, a2);
          result = sub_173644(a2, (int)"complex", v16);
          break;
        case 26:
          v15 = sub_205D34(13, a2);
          result = sub_173644(a2, (int)"double complex", v15);
          break;
        case 30:
          result = sub_173590(a2, 16, 0);
          break;
        case 31:
        case 34:
          result = sub_173564(a2, 64, 0);
          break;
        case 32:
        case 33:
          result = sub_173564(a2, 64, 1);
          break;
        default:
          result = sub_173564(a2, 32, 0);
          break;
      }
      *v7 = result;
    }
  }
  else
  {
    if ( dword_47AC88 > 0 )
      sub_F43B4(&off_46D334, "Unknown builtin type %d", a1);
    return *(_DWORD *)(sub_1780C4(a2) + 64);
  }
  return result;
}
