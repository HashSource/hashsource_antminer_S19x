unsigned __int16 *__fastcall sub_61A8C(unsigned __int16 *a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  unsigned __int16 *v3; // r4
  unsigned __int16 *result; // r0

  v3 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      result = sub_61968(v3 + 2, a2, *((_DWORD *)v3 + 8));
      if ( result )
        break;
      v3 = *(unsigned __int16 **)v3;
      if ( !v3 )
        return result;
    }
    return (_WORD *)(&dword_0 + 1);
  }
  else
  {
    result = a3;
    if ( a3 )
      return (_WORD *)(&dword_0 + 1);
  }
  return result;
}
