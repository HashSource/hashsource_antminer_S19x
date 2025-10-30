int *__fastcall sub_FDFD8(int *a1, char *s, char *a3, _DWORD *a4, int a5)
{
  _DWORD *v9; // r0
  int v11; // r4
  char *v12; // r2
  int v13; // r10
  char *v14; // r11
  const char *v15; // r0

  if ( dword_48970C )
  {
    v13 = *(_DWORD *)sub_242FC8(a1);
    v14 = sub_98EEC((int)a4);
    v15 = (const char *)((int (__fastcall *)(int))loc_21A5A4)(a5);
    sub_2594B0(v13, "cp_lookup_symbol_namespace (%s, %s, %s, %s)\n", s, a3, v14, v15);
  }
  v9 = sub_FD740(a1, s, a3, a4, a5);
  if ( !*a1 )
    v9 = sub_FDF3C(a1, s, a3, a4, a5);
  if ( !dword_48970C )
    return a1;
  v11 = *(_DWORD *)sub_242FC8(v9);
  if ( *a1 )
    v12 = sub_98EEC(*a1);
  else
    v12 = "NULL";
  sub_2594B0(v11, "cp_lookup_symbol_namespace (...) = %s\n", v12);
  return a1;
}
