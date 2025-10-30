int __fastcall sub_8C36C(int a1)
{
  int v1; // r5
  int result; // r0
  int v3; // r0

  v1 = dword_47517C;
  if ( !a1 )
  {
    v3 = sub_94700(
           "p-exp.y",
           1727,
           "%s: Assertion `%s' failed.",
           "int pascal_parse(parser_state*)",
           "par_state != NULL");
    dword_47517C = v1;
    sub_338FFC(v3);
  }
  dword_47517C = a1;
  result = sub_8AB14();
  dword_47517C = v1;
  return result;
}
