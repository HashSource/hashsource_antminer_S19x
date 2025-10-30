int __fastcall sub_874A8(int a1)
{
  int v1; // r5
  int v2; // r6
  int result; // r0
  int v4; // r0

  v1 = dword_475134;
  if ( !a1 )
  {
    v4 = sub_94700("go-exp.y", 1569, "%s: Assertion `%s' failed.", "int go_parse(parser_state*)", "par_state != NULL");
    dword_475134 = v1;
    sub_338FFC(v4);
  }
  dword_475134 = a1;
  v2 = dword_4750CC;
  dword_4750F0 = 0;
  *(_QWORD *)&dword_4750CC = (unsigned int)dword_487CDC;
  if ( dword_475130 )
    free((void *)dword_475130);
  dword_475130 = 0;
  dword_47512C = 0;
  if ( dword_4750A8 <= (unsigned int)dword_4750A4 || dword_4750A8 >= (unsigned int)dword_4750B0 )
    obstack_free((struct obstack *)&unk_4750A0, (void *)dword_4750A8);
  else
    dword_4750AC = dword_4750A8;
  result = sub_85DD0();
  dword_4750CC = v2;
  dword_475134 = v1;
  return result;
}
