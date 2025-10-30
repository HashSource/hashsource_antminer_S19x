int __fastcall sub_74978(int a1)
{
  int v1; // r5
  int result; // r0
  int v3; // r0

  v1 = dword_474A78;
  if ( !a1 )
  {
    v3 = sub_94700("ada-exp.y", 734, "%s: Assertion `%s' failed.", "int ada_parse(parser_state*)", "par_state != NULL");
    dword_474A78 = v1;
    sub_338FFC(v3);
  }
  dword_474A78 = a1;
  dword_4748E8 = 1;
  sub_71E34(dword_474A5C);
  dword_474A7C = 0;
  obstack_free(&stru_474918, 0);
  obstack_begin(&stru_474918, 0, 0, (void *(*)(int))sub_93028, sub_7074C);
  result = sub_722B0();
  dword_474A78 = v1;
  return result;
}
