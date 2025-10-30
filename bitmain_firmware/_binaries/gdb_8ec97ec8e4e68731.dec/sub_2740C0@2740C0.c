int __fastcall sub_2740C0(int a1, const char *a2)
{
  size_t v4; // r0
  int v5; // r0
  int v6; // r3
  const char *v7; // r3
  enum XML_Error ErrorCode; // r0
  int v9; // r2
  const char *v10; // r1

  sub_273C78(a1, "Starting:\n%s", a2);
  v4 = strlen(a2);
  v5 = XML_Parse(*(XML_Parser *)a1, a2, v4, 1);
  v6 = *(_DWORD *)(a1 + 24);
  if ( v5 == 1 )
  {
    if ( !v6 )
      return 0;
    if ( v6 == -1 )
    {
      if ( *(_DWORD *)(a1 + 28) != 7 )
LABEL_8:
        sub_92F1C(*(_DWORD *)(a1 + 24), *(_DWORD *)(a1 + 28), *(_DWORD *)(a1 + 32));
      goto LABEL_12;
    }
  }
  else
  {
    if ( v6 == -1 )
      goto LABEL_6;
    if ( !v5 )
    {
LABEL_14:
      ErrorCode = XML_GetErrorCode(*(XML_Parser *)a1);
      v7 = XML_ErrorString(ErrorCode);
      goto LABEL_15;
    }
  }
  if ( v6 < 0 )
    goto LABEL_8;
  v5 = sub_94700(
         (int)"xml-support.c",
         633,
         "%s: Assertion `%s' failed.",
         "int gdb_xml_parser::parse(const char*)",
         "m_error.reason < 0");
LABEL_6:
  if ( *(_DWORD *)(a1 + 28) != 7 )
  {
    if ( v5 )
      goto LABEL_8;
    goto LABEL_14;
  }
LABEL_12:
  v7 = *(const char **)(a1 + 32);
  if ( !v7 )
  {
    sub_94700(
      (int)"xml-support.c",
      622,
      "%s: Assertion `%s' failed.",
      "int gdb_xml_parser::parse(const char*)",
      "m_error.message != NULL");
    goto LABEL_14;
  }
LABEL_15:
  v9 = *(_DWORD *)(a1 + 36);
  v10 = *(const char **)(a1 + 4);
  if ( v9 )
    sub_946B0("while parsing %s (at line %d): %s", v10, v9, v7);
  else
    sub_946B0("while parsing %s: %s", v10, v7);
  return -1;
}
