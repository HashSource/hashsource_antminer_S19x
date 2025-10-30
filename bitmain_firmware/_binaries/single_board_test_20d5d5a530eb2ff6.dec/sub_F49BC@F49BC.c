_DWORD *__fastcall sub_F49BC(int a1, unsigned int a2)
{
  _UNKNOWN **v4; // r0
  _DWORD *result; // r0

  v4 = (_UNKNOWN **)sub_F47B0();
  if ( v4 && v4 != sub_F3E50() )
    return (_DWORD *)sub_F497C(a1, a2);
  result = (_DWORD *)sub_F3DB0();
  if ( result )
    return (_DWORD *)sub_F3604(result, a1, a2);
  return result;
}
