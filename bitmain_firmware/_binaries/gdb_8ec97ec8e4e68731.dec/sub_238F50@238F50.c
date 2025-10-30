int __fastcall sub_238F50(int a1, _DWORD *a2)
{
  const char *v4; // r0
  int v5; // r3
  unsigned int v6; // r0
  int *v7; // r4
  int *v8; // r7
  int v9; // t1
  int v10; // r5
  int v11; // r3
  int v12; // r4
  unsigned int v13; // r5
  const char *v14; // r2
  const char *v15; // r1
  const char *v17; // r0

  v4 = (const char *)sub_3245A4(*(_DWORD *)(a1 + 4));
  sub_259858("  Original: %s */\n\n", v4);
  sub_259858("#include \"defs.h\"\n");
  sub_259858("#include \"osabi.h\"\n");
  sub_259858("#include \"target-descriptions.h\"\n");
  sub_259858((const char *)&word_356638);
  sub_259858("struct target_desc *tdesc_%s;\n", *(const char **)(a1 + 28));
  sub_259858("static void\n");
  sub_259858("initialize_tdesc_%s (void)\n", *(const char **)(a1 + 28));
  sub_259858("{\n");
  sub_259858("  struct target_desc *result = allocate_target_description ();\n");
  v5 = a2[1];
  if ( v5 )
  {
    sub_259858("  set_tdesc_architecture (result, bfd_scan_arch (\"%s\"));\n", *(const char **)(v5 + 24));
    sub_259858((const char *)&word_356638);
  }
  v6 = a2[2];
  if ( v6 - 1 <= 0x12 )
  {
    v17 = sub_1BD890(v6);
    sub_259858("  set_tdesc_osabi (result, osabi_from_tdesc_string (\"%s\"));\n", v17);
    sub_259858((const char *)&word_356638);
  }
  v7 = (int *)a2[3];
  v8 = (int *)a2[4];
  if ( v7 != v8 )
  {
    do
    {
      v9 = *v7++;
      sub_259858("  tdesc_add_compatible (result, bfd_scan_arch (\"%s\"));\n", *(const char **)(v9 + 24));
    }
    while ( v8 != v7 );
    if ( a2[3] != a2[4] )
      sub_259858((const char *)&word_356638);
  }
  v10 = a2[6];
  v11 = a2[7];
  if ( v10 != v11 )
  {
    v12 = v10 + 48;
    v13 = ((v11 - (v10 + 48)) & 0xFFFFFFF0) + v10 + 96;
    do
    {
      v14 = *(const char **)(v12 - 24);
      v15 = *(const char **)(v12 - 48);
      v12 += 48;
      sub_259858("  set_tdesc_property (result, \"%s\", \"%s\");\n", v15, v14);
    }
    while ( v12 != v13 );
  }
  return sub_259858("  struct tdesc_feature *feature;\n");
}
