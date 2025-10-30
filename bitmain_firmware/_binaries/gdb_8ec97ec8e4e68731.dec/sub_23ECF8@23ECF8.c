_DWORD *__fastcall sub_23ECF8(int a1, int a2, int a3)
{
  _DWORD *v3; // r3
  _DWORD *v4; // r3
  _DWORD *result; // r0

  v3 = (_DWORD *)dword_48A4D4;
  if ( !dword_48A4D4 )
  {
LABEL_11:
    sub_94700(
      (int)"thread.c",
      847,
      "%s: Assertion `%s' failed.",
      "value* get_last_thread_stack_temporary(ptid_t)",
      "tp != NULL");
    return v4;
  }
  while ( a1 != v3[2] || v3[3] != a2 || a3 != v3[4] )
  {
    v3 = (_DWORD *)v3[1];
    if ( !v3 )
      goto LABEL_11;
  }
  v4 = (_DWORD *)v3[82];
  if ( !v4 )
    return v4;
  result = (_DWORD *)*v4;
  if ( *v4 )
    return (_DWORD *)v4[(_DWORD)result + 1];
  return result;
}
