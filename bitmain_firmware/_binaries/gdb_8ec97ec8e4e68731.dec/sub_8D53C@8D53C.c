int __fastcall sub_8D53C(int a1, int a2)
{
  int v2; // r3
  int v3; // r2
  int v4; // r5
  int v5; // r0
  unsigned __int8 *v6; // r3
  int v7; // r2
  __int64 v8; // r0
  const char *v9; // r0
  int v10; // r3
  int v12; // r0

  v2 = dword_487CC0;
  v3 = *(unsigned __int8 *)dword_487CC0;
  if ( v3 == 98 )
  {
    a2 = dword_487CC0 + 1;
    v4 = 1;
    ++dword_487CC0;
  }
  else
  {
    v4 = 0;
  }
  if ( v3 == 98 )
  {
    v3 = *(unsigned __int8 *)(v2 + 1);
    v2 = a2;
  }
  if ( v3 != 39 )
  {
    v8 = sub_94700("rust-exp.y", 1192, "%s: Assertion `%s' failed.", "int lex_character()", "lexptr[0] == '\\''");
    goto LABEL_15;
  }
  dword_487CC0 = v2 + 1;
  v5 = *(unsigned __int8 *)(v2 + 1);
  if ( v5 == 92 )
  {
    v12 = sub_8C588(v4);
    v6 = (unsigned __int8 *)dword_487CC0;
    v7 = v12;
  }
  else
  {
    v6 = (unsigned __int8 *)(v2 + 2);
    v7 = v5;
    dword_487CC0 = (int)v6;
  }
  HIDWORD(v8) = *v6;
  if ( HIDWORD(v8) != 39 )
LABEL_15:
    sub_946E0("Unterminated character literal", HIDWORD(v8));
  v9 = "char";
  v10 = (int)(v6 + 1);
  if ( v4 )
    v9 = "u8";
  dword_487CC0 = v10;
  dword_4751A8 = v7;
  dword_4751AC = 0;
  dword_4751B0 = sub_8C44C(v9);
  return 261;
}
