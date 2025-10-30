int __fastcall sub_23A3F4(int a1, _DWORD *a2)
{
  int v4; // r2
  __int64 v5; // r0
  __int64 v6; // r2
  int v7; // r4
  int v8; // r5
  const char *v9; // r2
  int v10; // r1
  __int64 v12; // r2
  int v13; // r4
  int v14; // r5
  int v15; // r3
  int v16; // r4
  int v17; // r6
  int v18; // r0
  int v19; // r4
  int v20; // r0
  int v21; // r1
  const char *v22; // r2
  int v23; // r3
  int v24; // r12
  bool v25; // zf
  int v26; // r1

  if ( !*(_BYTE *)(a1 + 33) )
  {
    sub_259858("  tdesc_type_with_fields *type_with_fields;\n");
    *(_BYTE *)(a1 + 33) = 1;
  }
  v4 = a2[7];
  HIDWORD(v5) = a2[1];
  switch ( v4 )
  {
    case 18:
    case 20:
      if ( v4 == 18 )
      {
        sub_259858("  type_with_fields = tdesc_create_struct (feature, \"%s\");\n", (const char *)HIDWORD(v5));
        v26 = a2[11];
        if ( v26 )
          sub_259858("  tdesc_set_struct_size (type_with_fields, %d);\n", v26);
      }
      else
      {
        sub_259858(
          "  type_with_fields = tdesc_create_flags (feature, \"%s\", %d);\n",
          (const char *)HIDWORD(v5),
          a2[11]);
      }
      v16 = a2[8];
      v17 = a2[9];
      if ( v16 == v17 )
        return sub_259858((const char *)&word_356638);
      v18 = *(_DWORD *)(v16 + 24);
      if ( !v18 )
        goto LABEL_36;
      v19 = v16 + 36;
      break;
    case 19:
      sub_259858("  type_with_fields = tdesc_create_union (feature, \"%s\");\n", (const char *)HIDWORD(v5));
      v12 = *((_QWORD *)a2 + 4);
      if ( (_DWORD)v12 != HIDWORD(v12) )
      {
        v13 = v12 + 36;
        v14 = ((HIDWORD(v12) - (v12 + 36)) & 0xFFFFFFFC) + v12 + 72;
        do
        {
          v15 = *(_DWORD *)(v13 - 12);
          v13 += 36;
          sub_23A394(a1, (int)"tdesc_named_type (feature, \"%s\");\n", *(const char **)(v15 + 4));
          sub_259858("  tdesc_add_field (type_with_fields, \"%s\", field_type);\n", *(const char **)(v13 - 72));
        }
        while ( v13 != v14 );
      }
      return sub_259858((const char *)&word_356638);
    case 21:
      sub_259858("  type_with_fields = tdesc_create_enum (feature, \"%s\", %d);\n", (const char *)HIDWORD(v5), a2[11]);
      v6 = *((_QWORD *)a2 + 4);
      if ( (_DWORD)v6 != HIDWORD(v6) )
      {
        v7 = v6 + 36;
        v8 = ((HIDWORD(v6) - (v6 + 36)) & 0xFFFFFFFC) + v6 + 72;
        do
        {
          v9 = *(const char **)(v7 - 36);
          v10 = *(_DWORD *)(v7 - 8);
          v7 += 36;
          sub_259858("  tdesc_add_enum_value (type_with_fields, %d, \"%s\");\n", v10, v9);
        }
        while ( v7 != v8 );
      }
      return sub_259858((const char *)&word_356638);
    default:
      goto LABEL_41;
  }
  while ( 1 )
  {
    v21 = *(_DWORD *)(v19 - 8);
    v22 = *(const char **)(v18 + 4);
    v23 = *(_DWORD *)(v19 - 4);
    if ( v21 == -1 )
    {
      if ( v23 != -1 )
        goto LABEL_39;
      if ( a2[7] != 18 )
        goto LABEL_40;
      sub_23A394(a1, (int)"tdesc_named_type (feature, \"%s\");\n", v22);
      sub_259858("  tdesc_add_field (type_with_fields, \"%s\", field_type);\n", *(const char **)(v19 - 36));
    }
    else
    {
      if ( v23 == -1 )
        goto LABEL_37;
      v20 = *(_DWORD *)(v18 + 28);
      if ( v20 )
      {
        v24 = a2[11];
        if ( v24 == 4 )
        {
          if ( v20 != 8 )
            goto LABEL_31;
        }
        else
        {
          v25 = v24 == 8;
          if ( v24 == 8 )
            v25 = v20 == 9;
          if ( !v25 )
          {
LABEL_31:
            sub_23A394(a1, (int)"tdesc_named_type (feature, \"%s\");\n", v22);
            sub_259858(
              "  tdesc_add_typed_bitfield (type_with_fields, \"%s\", %d, %d, field_type);\n",
              *(const char **)(v19 - 36),
              *(_DWORD *)(v19 - 8),
              *(_DWORD *)(v19 - 4));
            goto LABEL_21;
          }
        }
        sub_259858(
          "  tdesc_add_bitfield (type_with_fields, \"%s\", %d, %d);\n",
          *(const char **)(v19 - 36),
          *(_DWORD *)(v19 - 8),
          v23);
      }
      else
      {
        if ( v21 != v23 )
          goto LABEL_38;
        sub_259858("  tdesc_add_flag (type_with_fields, %d, \"%s\");\n", v21, *(const char **)(v19 - 36));
      }
    }
LABEL_21:
    if ( v19 == v17 )
      return sub_259858((const char *)&word_356638);
    v19 += 36;
    v18 = *(_DWORD *)(v19 - 12);
    if ( !v18 )
    {
LABEL_36:
      sub_94700(
        (int)"target-descriptions.c",
        1904,
        "%s: Assertion `%s' failed.",
        "virtual void print_c_tdesc::visit(const tdesc_type_with_fields*)",
        "f.type != NULL");
LABEL_37:
      sub_94700(
        (int)"target-descriptions.c",
        1911,
        "%s: Assertion `%s' failed.",
        "virtual void print_c_tdesc::visit(const tdesc_type_with_fields*)",
        "f.end != -1");
LABEL_38:
      sub_94700(
        (int)"target-descriptions.c",
        1914,
        "%s: Assertion `%s' failed.",
        "virtual void print_c_tdesc::visit(const tdesc_type_with_fields*)",
        "f.start == f.end");
LABEL_39:
      sub_94700(
        (int)"target-descriptions.c",
        1940,
        "%s: Assertion `%s' failed.",
        "virtual void print_c_tdesc::visit(const tdesc_type_with_fields*)",
        "f.end == -1");
LABEL_40:
      v5 = sub_94700(
             (int)"target-descriptions.c",
             1941,
             "%s: Assertion `%s' failed.",
             "virtual void print_c_tdesc::visit(const tdesc_type_with_fields*)",
             "type->kind == TDESC_TYPE_STRUCT");
LABEL_41:
      sub_946E0("C output is not supported type \"%s\".", (const char *)HIDWORD(v5));
    }
  }
}
