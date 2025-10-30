int *__fastcall sub_FE254(int *a1, int a2, char *a3, _DWORD *a4, int a5)
{
  char *v9; // r0
  char *v10; // r7
  _DWORD *v11; // r0
  int v13; // r4
  char *v14; // r2
  int v15; // r11
  char *v16; // r9
  const char *v17; // r0

  v9 = sub_C25A8((int)a4);
  v10 = v9;
  if ( dword_48970C )
  {
    v15 = *(_DWORD *)sub_242FC8(v9);
    v16 = sub_98EEC((int)a4);
    v17 = (const char *)((int (__fastcall *)(int))loc_21A5A4)(a5);
    sub_2594B0(v15, "cp_lookup_symbol_non_local (%s, %s (scope %s), %s)\n", a3, v16, v10, v17);
  }
  v11 = (_DWORD *)((int (__fastcall *)(int *, int, char *, _DWORD *, int, char *, _DWORD))loc_FE0E4)(
                    a1,
                    a2,
                    a3,
                    a4,
                    a5,
                    v10,
                    0);
  if ( !*a1 )
    v11 = sub_FDF3C(a1, v10, a3, a4, a5);
  if ( !dword_48970C )
    return a1;
  v13 = *(_DWORD *)sub_242FC8(v11);
  if ( *a1 )
    v14 = sub_98EEC(*a1);
  else
    v14 = "NULL";
  sub_2594B0(v13, "cp_lookup_symbol_nonlocal (...) = %s\n", v14);
  return a1;
}
