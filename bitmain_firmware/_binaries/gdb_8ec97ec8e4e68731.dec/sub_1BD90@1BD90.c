int __fastcall sub_1BD90(int a1, signed int a2)
{
  int v4; // r6
  int v5; // r2
  _BOOL4 v6; // r3
  int v7; // r0
  int v8; // r6
  int v10; // r0
  int v11; // r4
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r3
  char v25; // r2
  int v26; // r0
  int v27; // r0
  int v28; // r4
  int v29; // r0
  int v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r3
  char v40; // r2

  v4 = ((int (*)(void))loc_166E9C)();
  v5 = *(_DWORD *)(sub_163E78(a1) + 20);
  v6 = v4 <= a2;
  if ( !v5 )
    v6 = 0;
  if ( !v6 )
  {
    if ( !*(_DWORD *)(sub_163E78(a1) + 24) || v4 + 31 >= a2 )
      goto LABEL_6;
    goto LABEL_15;
  }
  if ( v4 + 31 >= a2 )
    return *(_DWORD *)(sub_1780B4(a1) + 40);
  if ( *(_DWORD *)(sub_163E78(a1) + 24) )
  {
LABEL_15:
    if ( v4 + 47 >= a2 )
    {
      v10 = sub_163E78(a1);
      v8 = *(_DWORD *)(v10 + 84);
      v11 = v10;
      if ( !v8 )
      {
        v8 = ((int (__fastcall *)(int, const char *, int))loc_177EC8)(a1, "__gdb_builtin_type_neon_q", 4);
        v12 = sub_1780B4(a1);
        v13 = sub_1721F4(*(_DWORD *)(v12 + 104), 16);
        sub_1780AC(v8, "u8", v13);
        v14 = sub_1780B4(a1);
        v15 = sub_1721F4(*(_DWORD *)(v14 + 112), 8);
        sub_1780AC(v8, "u16", v15);
        v16 = sub_1780B4(a1);
        v17 = sub_1721F4(*(_DWORD *)(v16 + 120), 4);
        sub_1780AC(v8, "u32", v17);
        v18 = sub_1780B4(a1);
        v19 = sub_1721F4(*(_DWORD *)(v18 + 128), 2);
        sub_1780AC(v8, "u64", v19);
        v20 = sub_1780B4(a1);
        v21 = sub_1721F4(*(_DWORD *)(v20 + 40), 4);
        sub_1780AC(v8, "f32", v21);
        v22 = sub_1780B4(a1);
        v23 = sub_1721F4(*(_DWORD *)(v22 + 44), 2);
        sub_1780AC(v8, "f64", v23);
        v24 = *(_DWORD *)(v8 + 24);
        v25 = *(_BYTE *)(v24 + 2);
        *(_DWORD *)(v24 + 8) = "neon_q";
        *(_BYTE *)(v24 + 2) = v25 | 1;
        *(_DWORD *)(v11 + 84) = v8;
      }
      return v8;
    }
  }
LABEL_6:
  v7 = ((int (__fastcall *)(int))loc_165D08)(a1);
  if ( sub_236114(v7) )
  {
    v26 = sub_234B6C(a1, a2);
    v8 = v26;
    if ( (unsigned int)(a2 - 58) <= 0x1F && **(_BYTE **)(v26 + 24) == 9 && *(_DWORD *)(sub_163E78(a1) + 28) )
    {
      v27 = sub_163E78(a1);
      v8 = *(_DWORD *)(v27 + 80);
      v28 = v27;
      if ( !v8 )
      {
        v8 = ((int (__fastcall *)(int, const char *, int))loc_177EC8)(a1, "__gdb_builtin_type_neon_d", 4);
        v29 = sub_1780B4(a1);
        v30 = sub_1721F4(*(_DWORD *)(v29 + 104), 8);
        sub_1780AC(v8, "u8", v30);
        v31 = sub_1780B4(a1);
        v32 = sub_1721F4(*(_DWORD *)(v31 + 112), 4);
        sub_1780AC(v8, "u16", v32);
        v33 = sub_1780B4(a1);
        v34 = sub_1721F4(*(_DWORD *)(v33 + 120), 2);
        sub_1780AC(v8, "u32", v34);
        v35 = sub_1780B4(a1);
        sub_1780AC(v8, "u64", *(_DWORD *)(v35 + 128));
        v36 = sub_1780B4(a1);
        v37 = sub_1721F4(*(_DWORD *)(v36 + 40), 2);
        sub_1780AC(v8, "f32", v37);
        v38 = sub_1780B4(a1);
        sub_1780AC(v8, "f64", *(_DWORD *)(v38 + 44));
        v39 = *(_DWORD *)(v8 + 24);
        v40 = *(_BYTE *)(v39 + 2);
        *(_DWORD *)(v39 + 8) = "neon_d";
        *(_BYTE *)(v39 + 2) = v40 | 1;
        *(_DWORD *)(v28 + 80) = v8;
      }
    }
    return v8;
  }
  if ( (unsigned int)(a2 - 16) <= 7 )
  {
    if ( !*(_DWORD *)(sub_163E78(a1) + 8) )
      return *(_DWORD *)sub_1780B4(a1);
    return sub_1BC3C(a1);
  }
  else
  {
    if ( a2 == 13 )
      return *(_DWORD *)(sub_1780B4(a1) + 152);
    if ( a2 == 15 )
      return *(_DWORD *)(sub_1780B4(a1) + 156);
    if ( (unsigned int)a2 <= 0x19 )
      return *(_DWORD *)(sub_1780B4(a1) + 120);
    return *(_DWORD *)(sub_1780B4(a1) + 96);
  }
}
