int __fastcall sub_8C588(int a1)
{
  int v1; // r3
  __int64 v2; // r0
  int result; // r0
  int v4; // r1
  int v5; // r2

  v1 = dword_487CC0;
  if ( *(_BYTE *)dword_487CC0 != 92 )
  {
    v2 = sub_94700("rust-exp.y", 1120, "%s: Assertion `%s' failed.", "uint32_t lex_escape(int)", "lexptr[0] == '\\\\'");
LABEL_18:
    sub_946E0("Unicode escape in byte literal", HIDWORD(v2));
  }
  ++dword_487CC0;
  HIDWORD(v2) = *(unsigned __int8 *)(v1 + 1);
  switch ( *(_BYTE *)(v1 + 1) )
  {
    case '"':
      dword_487CC0 = v1 + 2;
      return 34;
    case '\'':
      dword_487CC0 = v1 + 2;
      return 39;
    case '0':
      dword_487CC0 = v1 + 2;
      return 0;
    case '\\':
      dword_487CC0 = v1 + 2;
      return 92;
    case 'n':
      dword_487CC0 = v1 + 2;
      return 10;
    case 'r':
      dword_487CC0 = v1 + 2;
      return 13;
    case 't':
      dword_487CC0 = v1 + 2;
      return 9;
    case 'u':
      if ( a1 )
        goto LABEL_18;
      dword_487CC0 = v1 + 2;
      if ( *(_BYTE *)(v1 + 2) != 123 )
        sub_946E0("Missing '{' in Unicode escape");
      dword_487CC0 = v1 + 3;
      result = sub_8C48C(0x600000001LL);
      v5 = *(unsigned __int8 *)dword_487CC0;
      if ( v5 != 125 )
        sub_946E0("Missing '}' in Unicode escape", v4, v5, dword_487CC0);
      ++dword_487CC0;
      return result;
    case 'x':
      dword_487CC0 = v1 + 2;
      return sub_8C48C(0x200000002LL);
    default:
      sub_946E0("Invalid escape \\%c in literal", HIDWORD(v2));
  }
}
