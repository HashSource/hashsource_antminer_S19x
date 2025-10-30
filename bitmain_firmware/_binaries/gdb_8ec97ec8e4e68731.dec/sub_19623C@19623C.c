_DWORD *__fastcall sub_19623C(const char *a1, int a2)
{
  _DWORD *result; // r0

  result = (_DWORD *)sub_195604((int)a1, a2);
  if ( !result || !*result )
  {
    if ( sub_1B7B9C(result) || sub_1B7B24(0) )
      sub_92F64(2, "No source file named %s.", a1);
    sub_92F64(2, "No symbol table is loaded.  Use the \"file\" command.");
    JUMPOUT(0x196298);
  }
  return result;
}
