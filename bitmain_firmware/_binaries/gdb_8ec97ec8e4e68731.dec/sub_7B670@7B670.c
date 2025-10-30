_DWORD *__fastcall sub_7B670(char *a1)
{
  _DWORD *v2; // r4

  v2 = sub_7B5F0();
  if ( !sub_31E5DC((int)v2, a1) )
  {
    sub_94700(
      "cp-name-parser.y",
      206,
      "%s: Assertion `%s' failed.",
      "demangle_component* make_operator(const char*, int)",
      "i");
    JUMPOUT(0x7B6D4);
  }
  return v2;
}
