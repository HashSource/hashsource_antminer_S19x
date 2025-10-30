int *__fastcall sub_21CFB4(int *a1, const char *a2, int a3, int a4)
{
  int v8; // r0
  _DWORD *v9; // r6
  int v10; // r0
  int v11; // r7
  int v13; // r5
  char *v14; // r2
  _DWORD *v15; // r11
  int v16; // r10
  char *v17; // r7
  const char *v18; // r11
  const char *v19; // r0

  v8 = sub_C2668(a3);
  v9 = (_DWORD *)v8;
  if ( v8 )
  {
    if ( dword_48970C )
    {
      v15 = sub_21CBC4(v8);
      v16 = *(_DWORD *)sub_242FC8(v15);
      v17 = sub_98EEC(a3);
      v18 = (const char *)sub_1B87CC((int)v15);
      v19 = (const char *)((int (__fastcall *)(int))loc_21A5A4)(a4);
      sub_2594B0(v16, "lookup_symbol_in_static_block (%s, %s (objfile %s), %s)\n", a2, v17, v18, v19);
    }
    v10 = sub_21CDFC(a2, 1u, v9, a4);
    v11 = v10;
    if ( dword_48970C )
    {
      v13 = *(_DWORD *)sub_242FC8(v10);
      if ( v11 )
        v14 = sub_98EEC(v11);
      else
        v14 = "NULL";
      sub_2594B0(v13, "lookup_symbol_in_static_block (...) = %s\n", v14);
    }
    *a1 = v11;
    a1[1] = (int)v9;
  }
  else
  {
    *a1 = 0;
    a1[1] = 0;
  }
  return a1;
}
