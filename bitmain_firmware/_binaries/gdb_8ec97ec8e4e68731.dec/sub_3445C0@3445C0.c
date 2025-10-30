_BYTE *__fastcall sub_3445C0(_BYTE *result, size_t a2, char a3)
{
  if ( a2 == 1 )
  {
    *result = a3;
  }
  else if ( a2 )
  {
    return j_memset(result, a3, a2);
  }
  return result;
}
