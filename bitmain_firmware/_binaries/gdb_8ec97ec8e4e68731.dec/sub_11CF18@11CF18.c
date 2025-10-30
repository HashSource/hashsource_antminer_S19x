int __fastcall sub_11CF18(int a1)
{
  unsigned int v1; // r3
  int v2; // r0
  const char *v3; // r2

  v1 = *(_WORD *)(a1 + 2) & 0x7FFF;
  if ( v1 >= 0x10 && (v1 <= 0x15 || v1 == 7968) )
    return *(_DWORD *)(a1 + 8);
  if ( dword_47AC88 <= 0 )
    return 0;
  v2 = sub_321640(v1);
  v3 = "DW_FORM_<unknown>";
  if ( v2 )
    v3 = (const char *)v2;
  sub_F43B4(&off_46D334, "unsupported die ref attribute form: '%s'", v3);
  return 0;
}
