_WORD *__fastcall sub_56A6C(_WORD *result, int a2)
{
  _WORD *v3; // r4

  v3 = result;
  if ( result && !((_DWORD)result << 30) )
    result = sub_52D48(result);
  if ( a2 > 0 )
  {
    if ( a2 > 12 )
      LOWORD(a2) = 12;
  }
  else
  {
    LOWORD(a2) = 9;
  }
  v3[131084] = a2;
  return result;
}
