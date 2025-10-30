void __fastcall sub_1F8F04(_DWORD *a1, char *a2, int a3, int a4)
{
  int v5; // r0
  _DWORD *v9; // r2
  int v10; // r7
  int v11; // r2
  unsigned int v12; // r7
  unsigned int v13; // r8

  v5 = *(_DWORD *)a2;
  v9 = &a1[4 * *(_DWORD *)a2];
  switch ( v9[4] )
  {
    case 'S':
      v10 = sub_26725C(v9[8], v9[9]);
      *(_DWORD *)a2 += 3;
      sub_154CA8((int)a1);
      sub_25A418(a3, ".%d", v10);
      break;
    case 'Y':
      v12 = v9[8];
      v13 = v9[9];
      sub_25A6BC(&a1[4 * v5 + 12], a3);
      *(_DWORD *)a2 += 4
                     + ((((((int)((__PAIR64__(v13, v12) + 16) >> 32) >> 31) & 0xF) + v12 + 16) >> 4)
                      | ((((__PAIR64__(v13, v12) + 16) >> 32)
                        + __CFADD__(((int)((__PAIR64__(v13, v12) + 16) >> 32) >> 31) & 0xF, v12 + 16)) << 28));
      break;
    case '`':
      *(_DWORD *)a2 = v5 + 1;
      sub_25A418(a3, "[");
      sub_1F8F04(a1, a2, a3, a4);
      sub_25A418(a3, "; ");
      sub_1F8F04(a1, a2, a3, a4);
      sub_25A418(a3, (const char *)&word_419FC8, v11);
      break;
    case 'q':
      sub_26725C(v9[12], v9[13]);
      sub_255DB0(a1[4 * *(_DWORD *)a2 + 8], "", a3, 0);
    case 'r':
      sub_25A6BC("<<others>> (", a3);
      ++*(_DWORD *)a2;
      sub_1F8F04(a1, a2, a3, a4);
      sub_25A6BC(")", a3);
      break;
    default:
      sub_154CC4(a1, a2, a3, a4);
      break;
  }
}
