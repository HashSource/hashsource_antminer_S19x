int __fastcall sub_23A75C(_DWORD *a1, _BYTE *a2)
{
  int (__fastcall *v3)(_BYTE *, _DWORD *); // r2
  int v5; // r2
  __int64 v6; // r0
  __int64 v7; // r2
  int v8; // r4
  int v9; // r5
  const char *v10; // r2
  int v11; // r1
  __int64 v13; // r2
  int v14; // r4
  int v15; // r5
  int v16; // r3
  int v17; // r4
  int v18; // r7
  int v19; // r12
  int v20; // r4
  int v21; // r0
  int v22; // r1
  const char *v23; // r2
  int v24; // r3
  int v25; // r1
  int v26; // r12
  bool v27; // zf

  v3 = *(int (__fastcall **)(_BYTE *, _DWORD *))(*(_DWORD *)a2 + 24);
  if ( v3 == (int (__fastcall *)(_BYTE *, _DWORD *))sub_23A3F4 )
  {
    if ( !a2[33] )
    {
      sub_259858("  tdesc_type_with_fields *type_with_fields;\n");
      a2[33] = 1;
    }
    v5 = a1[7];
    HIDWORD(v6) = a1[1];
    switch ( v5 )
    {
      case 18:
      case 20:
        if ( v5 == 18 )
        {
          sub_259858("  type_with_fields = tdesc_create_struct (feature, \"%s\");\n", (const char *)HIDWORD(v6));
          v25 = a1[11];
          if ( v25 )
            sub_259858("  tdesc_set_struct_size (type_with_fields, %d);\n", v25);
        }
        else
        {
          sub_259858(
            "  type_with_fields = tdesc_create_flags (feature, \"%s\", %d);\n",
            (const char *)HIDWORD(v6),
            a1[11]);
        }
        v17 = a1[8];
        v18 = a1[9];
        if ( v17 == v18 )
          return sub_259858((const char *)&word_356638);
        v19 = *(_DWORD *)(v17 + 24);
        if ( !v19 )
          goto LABEL_38;
        v20 = v17 + 36;
        break;
      case 19:
        sub_259858("  type_with_fields = tdesc_create_union (feature, \"%s\");\n", (const char *)HIDWORD(v6));
        v13 = *((_QWORD *)a1 + 4);
        if ( (_DWORD)v13 != HIDWORD(v13) )
        {
          v14 = v13 + 36;
          v15 = ((HIDWORD(v13) - (v13 + 36)) & 0xFFFFFFFC) + v13 + 72;
          do
          {
            v16 = *(_DWORD *)(v14 - 12);
            v14 += 36;
            sub_23A394((int)a2, (int)"tdesc_named_type (feature, \"%s\");\n", *(const char **)(v16 + 4));
            sub_259858("  tdesc_add_field (type_with_fields, \"%s\", field_type);\n", *(const char **)(v14 - 72));
          }
          while ( v14 != v15 );
        }
        return sub_259858((const char *)&word_356638);
      case 21:
        sub_259858("  type_with_fields = tdesc_create_enum (feature, \"%s\", %d);\n", (const char *)HIDWORD(v6), a1[11]);
        v7 = *((_QWORD *)a1 + 4);
        if ( (_DWORD)v7 != HIDWORD(v7) )
        {
          v8 = v7 + 36;
          v9 = ((HIDWORD(v7) - (v7 + 36)) & 0xFFFFFFFC) + v7 + 72;
          do
          {
            v10 = *(const char **)(v8 - 36);
            v11 = *(_DWORD *)(v8 - 8);
            v8 += 36;
            sub_259858("  tdesc_add_enum_value (type_with_fields, %d, \"%s\");\n", v11, v10);
          }
          while ( v8 != v9 );
        }
        return sub_259858((const char *)&word_356638);
      default:
        goto LABEL_43;
    }
    while ( 1 )
    {
      v22 = *(_DWORD *)(v20 - 8);
      v23 = *(const char **)(v19 + 4);
      v24 = *(_DWORD *)(v20 - 4);
      if ( v22 == -1 )
      {
        if ( v24 != -1 )
          goto LABEL_42;
        if ( a1[7] != 18 )
          goto LABEL_41;
        sub_23A394((int)a2, (int)"tdesc_named_type (feature, \"%s\");\n", v23);
        sub_259858("  tdesc_add_field (type_with_fields, \"%s\", field_type);\n", *(const char **)(v20 - 36));
      }
      else
      {
        if ( v24 == -1 )
          goto LABEL_39;
        v21 = *(_DWORD *)(v19 + 28);
        if ( v21 )
        {
          v26 = a1[11];
          if ( v26 == 4 )
          {
            if ( v21 != 8 )
              goto LABEL_35;
          }
          else
          {
            v27 = v26 == 8;
            if ( v26 == 8 )
              v27 = v21 == 9;
            if ( !v27 )
            {
LABEL_35:
              sub_23A394((int)a2, (int)"tdesc_named_type (feature, \"%s\");\n", v23);
              sub_259858(
                "  tdesc_add_typed_bitfield (type_with_fields, \"%s\", %d, %d, field_type);\n",
                *(const char **)(v20 - 36),
                *(_DWORD *)(v20 - 8),
                *(_DWORD *)(v20 - 4));
              goto LABEL_22;
            }
          }
          sub_259858(
            "  tdesc_add_bitfield (type_with_fields, \"%s\", %d, %d);\n",
            *(const char **)(v20 - 36),
            *(_DWORD *)(v20 - 8),
            v24);
        }
        else
        {
          if ( v22 != v24 )
            goto LABEL_40;
          sub_259858("  tdesc_add_flag (type_with_fields, %d, \"%s\");\n", v22, *(const char **)(v20 - 36));
        }
      }
LABEL_22:
      if ( v18 == v20 )
        return sub_259858((const char *)&word_356638);
      v20 += 36;
      v19 = *(_DWORD *)(v20 - 12);
      if ( !v19 )
      {
LABEL_38:
        sub_94700(
          (int)"target-descriptions.c",
          1904,
          "%s: Assertion `%s' failed.",
          "virtual void print_c_tdesc::visit(const tdesc_type_with_fields*)",
          "f.type != NULL");
LABEL_39:
        sub_94700(
          (int)"target-descriptions.c",
          1911,
          "%s: Assertion `%s' failed.",
          "virtual void print_c_tdesc::visit(const tdesc_type_with_fields*)",
          "f.end != -1");
LABEL_40:
        sub_94700(
          (int)"target-descriptions.c",
          1914,
          "%s: Assertion `%s' failed.",
          "virtual void print_c_tdesc::visit(const tdesc_type_with_fields*)",
          "f.start == f.end");
LABEL_41:
        sub_94700(
          (int)"target-descriptions.c",
          1941,
          "%s: Assertion `%s' failed.",
          "virtual void print_c_tdesc::visit(const tdesc_type_with_fields*)",
          "type->kind == TDESC_TYPE_STRUCT");
LABEL_42:
        v6 = sub_94700(
               (int)"target-descriptions.c",
               1940,
               "%s: Assertion `%s' failed.",
               "virtual void print_c_tdesc::visit(const tdesc_type_with_fields*)",
               "f.end == -1");
LABEL_43:
        sub_946E0("C output is not supported type \"%s\".", (const char *)HIDWORD(v6));
      }
    }
  }
  return v3(a2, a1);
}
