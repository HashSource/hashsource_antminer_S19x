int __fastcall sub_238D1C(int a1, int a2)
{
  sub_259858(
    "  tdesc_create_reg (feature, \"%s\", %ld, %d, ",
    *(const char **)(a2 + 4),
    *(_DWORD *)(a2 + 28),
    *(_DWORD *)(a2 + 32));
  if ( *(_DWORD *)(a2 + 40) )
    sub_259858("\"%s\", ", *(const char **)(a2 + 36));
  else
    sub_259858("NULL, ");
  return sub_259858("%d, \"%s\");\n", *(_DWORD *)(a2 + 60), *(const char **)(a2 + 64));
}
