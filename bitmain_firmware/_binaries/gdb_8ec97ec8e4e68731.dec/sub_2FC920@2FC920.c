char *__fastcall sub_2FC920(_DWORD *a1, const char *a2, int a3, int a4, int a5)
{
  char *result; // r0
  bool v6; // zf

  result = sub_2AAC2C(a1, a2, a3, a4);
  v6 = a5 == 0;
  if ( a5 )
    v6 = result == 0;
  if ( !v6 && (unsigned int)(unsigned __int8)result[12] - 6 <= 1 )
  {
    do
      result = (char *)*((_DWORD *)result + 5);
    while ( (unsigned int)(unsigned __int8)result[12] - 6 <= 1 );
  }
  return result;
}
