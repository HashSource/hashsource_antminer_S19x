int sub_1A2C94()
{
  int result; // r0

  dword_487A1C = sub_1A368C(0, 0);
  ((void (*)(void))loc_1A3448)();
  result = dword_487A1C;
  if ( *(_DWORD *)dword_487A1C )
  {
    sub_94700(
      (int)"macrotab.c",
      444,
      "%s: Assertion `%s' failed.",
      "void macro_allow_redefinitions(macro_table*)",
      "! t->obstack");
    JUMPOUT(0x1A3524);
  }
  *(_DWORD *)(dword_487A1C + 16) = 1;
  return result;
}
