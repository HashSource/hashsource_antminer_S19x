void __fastcall __noreturn sub_15898(const char *a1, const char *a2)
{
  const char *v2; // r4
  size_t v5; // r0

  v2 = "";
  if ( *a1 )
    v2 = (const char *)&word_3E1F84;
  v5 = strlen(a1);
  sub_946E0("Undefined %scommand: \"%s\".  Try \"help%s%.*s\".", a1, a2, v2, v5 - 1, a1);
}
