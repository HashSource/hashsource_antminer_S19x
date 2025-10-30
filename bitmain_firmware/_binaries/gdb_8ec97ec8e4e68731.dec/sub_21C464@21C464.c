int *__fastcall sub_21C464(int *a1, int a2, int a3, const char *a4, int a5)
{
  int *v9; // r0
  int v10; // r10
  int v12; // r10
  int v13; // r0
  const char *v14; // r3
  const char *v15; // r11
  const char *v16; // r0
  int v17; // r4
  char *v18; // r0
  int v19; // r2
  int v20; // r3
  int v21; // r10
  int v22; // r0
  const char *v23; // r3
  const char *v24; // r11
  const char *v25; // r0
  int *v26; // r10
  _DWORD *v27; // r11
  _BYTE *v28; // r0
  int v29; // r9
  int v30; // r3
  int v31; // r4
  char *v32; // r0
  const char *v33; // r3
  const char *v34; // r2
  _DWORD *v35; // r0
  int *v36; // r0
  int v37; // r7
  char *v38; // r8
  char *v39; // r0
  const char *v40; // [sp+Ch] [bp-8h]
  const char *v41; // [sp+Ch] [bp-8h]

  if ( dword_48970C )
  {
    v12 = *(_DWORD *)sub_242FC8(a1);
    v13 = sub_1B87CC(a2);
    v14 = "STATIC_BLOCK";
    v15 = (const char *)v13;
    if ( !a3 )
      v14 = "GLOBAL_BLOCK";
    v40 = v14;
    v16 = (const char *)((int (__fastcall *)(int))loc_21A5A4)(a5);
    sub_2594B0(v12, "lookup_symbol_in_objfile (%s, %s, %s, %s)\n", v15, v40, a4, v16);
  }
  v9 = sub_21C2F0(a1, a2, a3, a4, a5);
  v10 = *a1;
  if ( !*a1 )
  {
    v19 = *(_DWORD *)(a2 + 132);
    v20 = dword_48970C;
    if ( v19 )
    {
      if ( (unsigned int)dword_48970C > 1 )
      {
        v21 = *(_DWORD *)sub_242FC8(v9);
        v22 = sub_1B87CC(a2);
        v23 = "STATIC_BLOCK";
        v24 = (const char *)v22;
        if ( !a3 )
          v23 = "GLOBAL_BLOCK";
        v41 = v23;
        v25 = (const char *)((int (__fastcall *)(int))loc_21A5A4)(a5);
        sub_2594B0(v21, "lookup_symbol_via_quick_fns (%s, %s, %s, %s)\n", v24, v41, a4, v25);
        v19 = *(_DWORD *)(a2 + 132);
      }
      v9 = (int *)(*(int (__fastcall **)(int, int, const char *, int))(*(_DWORD *)(v19 + 40) + 16))(a2, a3, a4, a5);
      v26 = v9;
      if ( v9 )
      {
        v27 = *(_DWORD **)(v9[8] + 4 * (a3 + 2));
        v28 = sub_C2974(v27, a4, 1u, a5);
        v29 = (int)v28;
        if ( !v28 )
          sub_16420(a3, a4, v26[3]);
        if ( (unsigned int)dword_48970C > 1 )
        {
          v37 = *(_DWORD *)sub_242FC8(v28);
          v38 = sub_98EEC(v29);
          v39 = sub_98EEC((int)v27);
          v28 = (_BYTE *)sub_2594B0(v37, "lookup_symbol_via_quick_fns (...) = %s (block %s)\n", v38, v39);
        }
        if ( (*(_BYTE *)(v29 + 33) & 1) != 0 )
        {
          v28 = (_BYTE *)((int (__fastcall *)(int, int))loc_21C1E0)(v29, a2);
          v29 = (int)v28;
        }
        v30 = dword_48970C;
        *a1 = v29;
        a1[1] = (int)v27;
        if ( !v30 )
          return a1;
        v31 = *(_DWORD *)sub_242FC8(v28);
        if ( v29 )
        {
          v32 = sub_98EEC(v29);
          v33 = " (via quick fns)";
          v34 = v32;
        }
        else
        {
          v34 = "NULL";
          v33 = "";
        }
LABEL_23:
        sub_2594B0(v31, "lookup_symbol_in_objfile (...) = %s%s\n", v34, v33);
        return a1;
      }
      v20 = dword_48970C;
      if ( (unsigned int)dword_48970C > 1 )
      {
        v35 = (_DWORD *)sub_242FC8(0);
        v9 = (int *)sub_2594B0(*v35, "lookup_symbol_via_quick_fns (...) = NULL\n");
        v20 = dword_48970C;
      }
    }
    *a1 = 0;
    a1[1] = 0;
    if ( !v20 )
      return a1;
    v36 = (int *)sub_242FC8(v9);
    v34 = "NULL";
    v33 = "";
    v31 = *v36;
    goto LABEL_23;
  }
  if ( !dword_48970C )
    return a1;
  v17 = *(_DWORD *)sub_242FC8(v9);
  v18 = sub_98EEC(v10);
  sub_2594B0(v17, "lookup_symbol_in_objfile (...) = %s (in symtabs)\n", v18);
  return a1;
}
