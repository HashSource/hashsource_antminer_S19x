_DWORD *__fastcall sub_16EF04(_DWORD *result)
{
  if ( result )
  {
    if ( (result[5] & 2) != 0 )
      return (_DWORD *)result[3];
    else
      return (_DWORD *)result[4];
  }
  return result;
}
