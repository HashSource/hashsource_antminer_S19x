int __fastcall sub_2395E4(int a1, _BYTE *a2)
{
  int (__fastcall *v3)(int, int); // lr

  v3 = *(int (__fastcall **)(int, int))(*(_DWORD *)a2 + 20);
  if ( v3 != sub_238D80 )
    return v3((int)a2, a1);
  if ( !a2[32] )
  {
    sub_259858("  tdesc_type *element_type;\n");
    a2[32] = 1;
  }
  sub_259858("  element_type = tdesc_named_type (feature, \"%s\");\n", *(const char **)(*(_DWORD *)(a1 + 32) + 4));
  sub_259858(
    "  tdesc_create_vector (feature, \"%s\", element_type, %d);\n",
    *(const char **)(a1 + 4),
    *(_DWORD *)(a1 + 36));
  return sub_259858((const char *)&word_356638);
}
