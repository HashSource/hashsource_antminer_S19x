void __fastcall sub_137B20(int a1, unsigned int *a2, unsigned int *a3, int a4, int *a5)
{
  int i; // r4
  int v9; // r1
  int v10; // r3
  int v11; // r2
  int v12; // r0
  int v13; // r11
  int v14; // r3
  unsigned int *v15; // r0
  unsigned int v16; // r1
  unsigned int v17; // r2
  int j; // r11
  bool v19; // zf
  int v20; // r2
  const char *v21; // r0
  int v22; // [sp+Ch] [bp-8h]

  for ( i = a1; i; i = *(_DWORD *)(i + 48) )
  {
    if ( (*(_BYTE *)(i + 7) & 0x10) != 0 )
    {
      v9 = *(_DWORD *)(i + 8);
      v10 = *(unsigned __int16 *)(i + 4);
      if ( !v9 )
        goto LABEL_34;
    }
    else
    {
      sub_131344(i, a5);
      v9 = *(_DWORD *)(i + 8);
      v10 = *(unsigned __int16 *)(i + 4);
      if ( !v9 )
      {
LABEL_34:
        v19 = v10 == 30;
        if ( v10 != 30 )
          v19 = (v10 & 0xFFFB) == 57;
        v20 = v19;
        if ( v10 == 4 )
          v20 |= 1u;
        if ( !v20 )
          continue;
      }
    }
    switch ( v10 )
    {
      case 2:
      case 19:
      case 56:
        if ( (*(_BYTE *)(i + 6) & 4) != 0 )
        {
          if ( a5[16] != 12 )
            continue;
        }
        else
        {
          sub_137204(i, a5);
          if ( a5[16] != 12 )
            continue;
        }
LABEL_10:
        if ( (*(_BYTE *)(i + 6) & 1) != 0 )
          sub_137B20(*(_DWORD *)(i + 44), a2);
        continue;
      case 4:
        if ( (*(_BYTE *)(i + 6) & 4) == 0 )
        {
          if ( v9 )
            sub_137204(i, a5);
          for ( j = *(_DWORD *)(i + 44); j; j = *(_DWORD *)(j + 48) )
          {
            if ( *(_WORD *)(j + 4) == 40 && *(_DWORD *)(j + 8) )
            {
              sub_137204(j, a5);
            }
            else if ( dword_47AC88 > 0 )
            {
              sub_F43B4(&off_46D334, "malformed enumerator DIE ignored");
            }
          }
        }
        continue;
      case 8:
      case 33:
      case 36:
        goto LABEL_6;
      case 22:
      case 23:
      case 39:
      case 52:
        if ( (*(_BYTE *)(i + 6) & 4) == 0 )
LABEL_6:
          sub_137204(i, a5);
        continue;
      case 30:
      case 57:
        sub_137204(i, a5);
        goto LABEL_10;
      case 46:
        sub_137960(i, a2, a3, a4, a5);
        continue;
      case 61:
        v11 = *a5;
        if ( (*(_BYTE *)(a5[34] + 10) & 4) != 0 )
          goto LABEL_49;
        v12 = ((int (__fastcall *)(_DWORD, int, int))loc_122D04)(
                *(_DWORD *)(i + 20),
                (*(unsigned __int8 *)(i + 7) >> 5) & 1,
                v11 + 36);
        v13 = v12;
        if ( *(_DWORD *)(v12 + 24) )
        {
          v14 = a5[34];
          v15 = *(unsigned int **)(v14 + 28);
          if ( !v15 )
            goto LABEL_43;
        }
        else
        {
          sub_131890(v12, 1, a5[16]);
          v14 = a5[34];
          v15 = *(unsigned int **)(v14 + 28);
          if ( !v15 )
            goto LABEL_43;
        }
        v16 = v15[1];
        v17 = *v15;
        if ( v16 != *v15 )
          goto LABEL_17;
LABEL_43:
        v22 = v14;
        v15 = sub_99FE0(v15, 1);
        v17 = *v15;
        v16 = v15[1];
        *(_DWORD *)(v22 + 28) = v15;
LABEL_17:
        if ( v16 <= v17 )
        {
          sub_94700(
            (int)"dwarf2read.c",
            9027,
            "%s: Assertion `%s' failed.",
            "dwarf2_per_cu_data** VEC_dwarf2_per_cu_ptr_quick_push(VEC_dwarf2_per_cu_ptr*, dwarf2_per_cu_ptr, const char*, unsigned int)",
            "quick_push");
LABEL_49:
          v21 = (const char *)sub_1B87A8(v11);
          sub_946E0("Dwarf Error: DW_TAG_imported_unit is not supported in type units [in module %s]", v21);
        }
        *v15 = v17 + 1;
        v15[v17 + 2] = v13;
        break;
      default:
        continue;
    }
  }
}
