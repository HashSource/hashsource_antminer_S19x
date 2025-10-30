void __fastcall sub_137960(int a1, unsigned int *a2, unsigned int *a3, int a4, int *a5)
{
  char v8; // r2
  char v10; // r3
  int v11; // r4
  int v12; // r3
  bool v13; // zf
  int v14; // r3
  bool v15; // zf
  unsigned int v16; // r3
  unsigned int v17; // r3
  int v18; // r8
  int v19; // r0
  int v20; // r3
  int v21; // r11
  int v22; // r9
  __int64 v23; // r0

  v8 = *(_BYTE *)(a1 + 6);
  v10 = v8;
  if ( *(_WORD *)(a1 + 4) == 46 )
  {
    if ( (*(_BYTE *)(a1 + 6) & 0x20) == 0 )
      goto LABEL_27;
    v16 = *(_DWORD *)(a1 + 24);
    if ( v16 < *a2 )
      *a2 = v16;
    v17 = *(_DWORD *)(a1 + 28);
    if ( v17 > *a3 )
      *a3 = v17;
    if ( a4 )
    {
      v18 = *a5;
      v19 = sub_1B7250(*a5);
      v20 = *(_DWORD *)(v18 + 152);
      v21 = v19;
      if ( v20 == -1 )
      {
        v23 = sub_94700((int)"dwarf2read.c", 9431, "sect_index_text not initialized");
        sub_137B20(v23, HIDWORD(v23));
        return;
      }
      v22 = *(_DWORD *)(*(_DWORD *)(v18 + 144) + 4 * v20);
      ((void (__fastcall *)(int, int))loc_16A938)(v19, v22 + *(_DWORD *)(a1 + 24));
      ((void (__fastcall *)(int, int))loc_16A938)(v21, v22 + *(_DWORD *)(a1 + 28));
      sub_B71D8(*(int (__fastcall ****)(_DWORD))(v18 + 28));
    }
    v8 = *(_BYTE *)(a1 + 6);
    if ( (v8 & 0x20) == 0 )
    {
LABEL_27:
      if ( (v8 & 0x42) != 0x40 )
        goto LABEL_28;
    }
    if ( (v8 & 4) == 0 && *(_DWORD *)(a1 + 8) )
    {
      sub_137204(a1, a5);
      v10 = *(_BYTE *)(a1 + 6);
    }
    else
    {
LABEL_28:
      v10 = v8;
    }
  }
  if ( (v10 & 1) != 0 && a5[16] == 14 )
  {
    v11 = *(_DWORD *)(a1 + 44);
    if ( v11 )
    {
      if ( (*(_BYTE *)(v11 + 7) & 0x10) != 0 )
        goto LABEL_7;
      while ( 1 )
      {
        sub_131344(v11, a5);
        v14 = *(unsigned __int16 *)(v11 + 4);
        v15 = v14 == 46;
        if ( v14 != 46 )
          v15 = v14 == 11;
        if ( v15 )
          goto LABEL_16;
        while ( 1 )
        {
          v11 = *(_DWORD *)(v11 + 48);
          if ( !v11 )
            return;
          if ( (*(_BYTE *)(v11 + 7) & 0x10) == 0 )
            break;
LABEL_7:
          v12 = *(unsigned __int16 *)(v11 + 4);
          v13 = v12 == 46;
          if ( v12 != 46 )
            v13 = v12 == 11;
          if ( v13 )
LABEL_16:
            sub_137960(v11, a2, a3, a4, a5);
        }
      }
    }
  }
}
