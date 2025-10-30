int __fastcall sub_238D80(int a1, int a2)
{
  if ( !*(_BYTE *)(a1 + 32) )
  {
    sub_259858("  tdesc_type *element_type;\n");
    *(_BYTE *)(a1 + 32) = 1;
  }
  sub_259858("  element_type = tdesc_named_type (feature, \"%s\");\n", *(const char **)(*(_DWORD *)(a2 + 32) + 4));
  sub_259858(
    "  tdesc_create_vector (feature, \"%s\", element_type, %d);\n",
    *(const char **)(a2 + 4),
    *(_DWORD *)(a2 + 36));
  return sub_259858((const char *)&word_356638);
}
