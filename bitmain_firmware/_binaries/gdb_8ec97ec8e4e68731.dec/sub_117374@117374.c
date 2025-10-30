int __fastcall sub_117374(const char **a1, int a2, int a3)
{
  const char *v3; // r5
  __int64 v5; // r0
  int v6; // r7
  int v7; // r9
  int v8; // r0
  _BYTE *v9; // r4
  int v10; // r6
  _BYTE *v11; // r10
  int v12; // r3
  unsigned int v13; // r8
  int v14; // r10
  int v15; // r2
  int v16; // r0
  int result; // r0
  int v18; // r0
  int v19; // r0
  const char *v20; // r1
  unsigned int v21; // [sp+18h] [bp-34h]
  int v22; // [sp+1Ch] [bp-30h]
  int v23; // [sp+20h] [bp-2Ch]
  int v24; // [sp+24h] [bp-28h]
  int v25; // [sp+28h] [bp-24h]
  int v27; // [sp+30h] [bp-1Ch]
  int v28; // [sp+34h] [bp-18h]
  int v29; // [sp+38h] [bp-14h]
  unsigned int v30; // [sp+4Ch] [bp+0h] BYREF
  int v31; // [sp+50h] [bp+4h] BYREF
  unsigned int v32[2]; // [sp+54h] [bp+8h] BYREF

  v3 = a1[9];
  v27 = sub_1322B4(*((_DWORD *)v3 + 3));
  v5 = sub_1B7250(v27);
  v6 = v5;
  v7 = ((int (__fastcall *)(_DWORD, _DWORD))loc_165BB8)(v5, HIDWORD(v5));
  v22 = sub_1322C8(*((_DWORD *)v3 + 3));
  v28 = sub_132300(*((_DWORD *)v3 + 3));
  v25 = sub_2A78D4(*(_DWORD *)(v27 + 36));
  v8 = sub_132388(*((_DWORD *)v3 + 3));
  v9 = (_BYTE *)*((_DWORD *)v3 + 1);
  v29 = v8;
  v10 = v8 + *(_DWORD *)v3;
  v11 = &v9[*((_DWORD *)v3 + 2)];
  sub_25A418(a3, "multi-location:\n");
  v12 = a3;
  v13 = (unsigned int)v11;
  v14 = v12;
  while ( 2 )
  {
    v15 = *((unsigned __int8 *)v3 + 16);
    v30 = 0;
    v31 = 0;
    v32[0] = 0;
    if ( v15 )
      v16 = sub_114C10(*((_DWORD *)v3 + 3), v9, v13, v32, (int *)&v30, &v31, v7);
    else
      v16 = sub_114F3C((int)v9, v13, v32, (int *)&v30, &v31, v7, v22, v25);
    result = v16 + 2;
    v9 = (_BYTE *)v32[0];
    switch ( result )
    {
      case 0:
      case 1:
        if ( dword_46D448 )
          goto LABEL_12;
        v20 = *a1;
        break;
      case 2:
        return result;
      case 3:
        v10 = v29 + v31;
        v18 = sub_25AC8C(v6, v29 + v31);
        sub_25A418(v14, "  Base address %s", v18);
        continue;
      case 4:
      case 5:
        v21 = v32[0] + 2;
        v30 += v10;
        v31 += v10;
        v30 = ((int (__fastcall *)(int, unsigned int))loc_16A938)(v6, v30);
        v31 = ((int (__fastcall *)(int, int))loc_16A938)(v6, v31);
        v23 = sub_15C250(v9, 2, v7);
        v9 = (_BYTE *)(v21 + v23);
        v24 = sub_25AC8C(v6, v30);
        v19 = sub_25AC8C(v6, v31);
        sub_25A418(v14, "  Range %s-%s: ", v24, v19);
        sub_116CB0((unsigned int)a1, v30, v14, v21, v23, v27, v22, v28, *((_DWORD *)v3 + 3));
        sub_25A418(v14, (const char *)&word_356638);
        continue;
      default:
        sub_94700(
          (int)"dwarf2loc.c",
          4566,
          "%s: %s",
          "void loclist_describe_location(symbol*, CORE_ADDR, ui_file*)",
          "bad debug_loc_kind");
LABEL_12:
        v20 = (const char *)sub_21B3C4(a1);
        break;
    }
    break;
  }
  sub_946E0("Corrupted DWARF expression for symbol \"%s\".", v20);
}
