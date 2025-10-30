int __fastcall sub_156C10(int *a1, int a2, int a3)
{
  int *v3; // r5
  int v7; // r7
  int v8; // r2
  char *v10; // r0
  int v11; // r8
  int v12; // r8
  char *v13; // r0
  int v14; // r5
  int v15; // r9
  int v16; // r8
  int v17; // r8
  int v18; // r8
  int v19; // r5
  int v20; // r2
  int v21; // r7
  __int64 v22; // r0
  int v23; // r5
  char *v24; // r0
  int v25; // r8
  int v26; // r8
  int v27; // r5
  const char *v28; // r0
  int v29; // r5
  int v30; // r0
  unsigned int v31; // r5
  int v32; // r5
  const char *v33; // r2
  const char *v34; // r2
  __int64 v35; // [sp+0h] [bp-14h]
  int v36; // [sp+8h] [bp-Ch]
  int v37; // [sp+Ch] [bp-8h]

  v3 = &a1[4 * a3];
  v7 = a3 + 1;
  switch ( v3[4] )
  {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
      goto LABEL_6;
    case 29:
      v36 = sub_26725C(v3[8], v3[9]);
      v37 = a3 + 3;
      v35 = *((_QWORD *)v3 + 6);
      v10 = sub_988AC(v35);
      sub_25A418(a2, "%s TypeInstance: ", v10);
      if ( v35 >= 1 )
      {
        sub_25A418(a2, "Type @");
        sub_25A44C(v3[16], a2);
        sub_25A418(a2, " (");
        sub_255DB0(v3[16], 0, a2, 0);
      }
      v11 = v35;
      if ( v35 < 0 )
        v11 = 0;
      v12 = v37 + v11;
      v13 = sub_98B08(v36, 0);
      sub_25A418(a2, " Flags: %s (", v13);
      if ( (v36 & 1) != 0 )
      {
        sub_25A418(a2, "%s", "const");
        if ( (v36 & 2) == 0 )
          goto LABEL_14;
        sub_25A6BC(&word_3E1F84, a2);
      }
      else if ( (v36 & 2) == 0 )
      {
        goto LABEL_14;
      }
      sub_25A418(a2, "%s", "volatile");
LABEL_14:
      sub_25A418(a2, ")");
      v8 = v12 + 2;
      return sub_156B40(a1, a2, v8);
    case 35:
    case 36:
      v7 = sub_156B40(a1, a2, a3 + 1);
LABEL_6:
      v7 = sub_156B40(a1, a2, v7);
      goto LABEL_3;
    case 38:
      sub_25A418(a2, "Type @");
      sub_25A44C(v3[8], a2);
      sub_25A418(a2, " (");
      sub_255DB0(v3[8], 0, a2, 0);
    case 39:
      sub_25A418(a2, "Type @");
      sub_25A44C(v3[8], a2);
      sub_25A418(a2, " (");
      sub_255DB0(v3[8], 0, a2, 0);
    case 40:
      sub_25A418(a2, "Block @");
      sub_25A44C(v3[8], a2);
      sub_25A418(a2, ", symbol @");
      goto LABEL_39;
    case 41:
      sub_25A418(a2, "Entry value of symbol @");
      sub_25A44C(v3[8], a2);
      if ( dword_46D448 )
        v34 = (const char *)sub_21B3C4(v3[8]);
      else
        v34 = *(const char **)v3[8];
      v7 = a3 + 3;
      sub_25A418(a2, " (%s)", v34);
      return v7;
    case 42:
      sub_25A418(a2, "Objfile @");
      sub_25A44C(v3[8], a2);
      sub_25A418(a2, ", msymbol @");
LABEL_39:
      sub_25A44C(v3[12], a2);
      if ( dword_46D448 )
        v33 = (const char *)sub_21B3C4(v3[12]);
      else
        v33 = *(const char **)v3[12];
      v7 = a3 + 4;
      sub_25A418(a2, " (%s)", v33);
      return v7;
    case 43:
      v7 = a3 + 3;
      sub_25A418(a2, "History element %ld", v3[8]);
      return v7;
    case 44:
      sub_25A418(a2, "Register $%s", (const char *)&a1[4 * a3 + 12]);
      v7 += 3 + (*((_QWORD *)v3 + 4) + 16LL) / 16;
      return v7;
    case 45:
      v7 = a3 + 3;
      sub_25A418(a2, "Internal var @");
      sub_25A44C(v3[8], a2);
      v28 = (const char *)sub_26CCD4(v3[8]);
      sub_25A418(a2, " (%s)", v28);
      return v7;
    case 46:
      v7 = a3 + 3;
      v25 = sub_26725C(v3[8], v3[9]);
      sub_25A418(a2, "Number of args: %d", v25);
      if ( v25 < 0 )
        return v7;
      v26 = v25 + 2;
      v27 = 1;
      v20 = v7;
      do
      {
        ++v27;
        v20 = sub_156B40(a1, a2, v20);
      }
      while ( v26 != v27 );
      return v20;
    case 50:
      v21 = v3[8];
      v22 = *((_QWORD *)v3 + 6);
      v23 = v3[9];
      v24 = sub_988AC(v22);
      sub_25A418(a2, "Language-specific string type: %s", v24);
      return a3 + (__int64)(__PAIR64__(v23, v21) + 15) / 16 + 4;
    case 51:
      v7 = a3 + 4;
      v15 = sub_26725C(v3[8], v3[9]);
      v16 = sub_26725C(v3[12], v3[13]);
      sub_25A418(a2, "Bounds [%d:%d]", v15, v16);
      v17 = v16 - v15;
      if ( v17 < 0 )
        return v7;
      v18 = v17 + 2;
      v19 = 1;
      v20 = v7;
      do
      {
        ++v19;
        v20 = sub_156B40(a1, a2, v20);
      }
      while ( v18 != v19 );
      return v20;
    case 52:
    case 56:
      sub_25A418(a2, "Type @");
      sub_25A44C(v3[8], a2);
      sub_25A418(a2, " (");
      sub_255DB0(v3[8], 0, a2, 0);
    case 53:
    case 54:
    case 55:
    case 57:
      sub_25A418(a2, " (");
      v14 = sub_156B40(a1, a2, v7);
      sub_25A418(a2, ")");
      v8 = v14;
      return sub_156B40(a1, a2, v8);
    case 58:
    case 59:
    case 60:
    case 61:
    case 62:
    case 63:
    case 64:
    case 65:
    case 66:
    case 67:
    case 68:
    case 69:
    case 70:
    case 71:
    case 72:
    case 73:
    case 74:
    case 75:
    case 76:
    case 77:
    case 78:
      goto LABEL_3;
    case 81:
    case 82:
      v32 = sub_26725C(v3[8], v3[9]);
      sub_25A418(a2, "Element name: `%.*s'", v32, (const char *)&a1[4 * a3 + 12]);
      v8 = v7 + 3 + ((unsigned int)(v32 + 16) >> 4);
      return sub_156B40(a1, a2, v8);
    case 86:
      sub_25A418(a2, "Type @");
      sub_25A44C(v3[8], a2);
      sub_25A418(a2, " (");
      sub_255DB0(v3[8], 0, a2, 0);
    case 87:
      v30 = sub_26725C(v3[8], v3[9]);
      v31 = v30 + 16;
      sub_25A418(a2, "Field name: `%.*s'", v30, (const char *)&a1[4 * a3 + 12]);
      v7 += 3 + (v31 >> 4);
      return v7;
    case 88:
      sub_25A418(a2, "Type @");
      sub_25A44C(v3[8], a2);
      sub_25A418(a2, " (");
      sub_255DB0(v3[8], 0, a2, 0);
    case 91:
      v7 = a3 + 3;
      v29 = sub_26725C(v3[8], v3[9]);
      switch ( v29 )
      {
        case 0:
          sub_25A6BC("Range '..'", a2);
          return v7;
        case 1:
          sub_25A6BC("Range '..EXP'", a2);
          goto LABEL_3;
        case 2:
          sub_25A6BC("Range 'EXP..'", a2);
          goto LABEL_50;
        case 3:
          sub_25A6BC("Range 'EXP..EXP'", a2);
LABEL_50:
          v7 = sub_156B40(a1, a2, v7);
          break;
        default:
          sub_25A6BC("Invalid Range!", a2);
          break;
      }
      if ( (v29 & 0xFFFFFFFD) != 1 )
        return v7;
LABEL_3:
      v8 = v7;
      return sub_156B40(a1, a2, v8);
    case 93:
    case 94:
      sub_25A418(a2, "Typeof (");
      goto LABEL_31;
    case 95:
      sub_25A418(a2, "typeid (");
LABEL_31:
      v7 = sub_156B40(a1, a2, v7);
      sub_25A418(a2, ")");
      return v7;
    default:
      sub_25A418(a2, "Unknown format");
      return v7;
  }
}
