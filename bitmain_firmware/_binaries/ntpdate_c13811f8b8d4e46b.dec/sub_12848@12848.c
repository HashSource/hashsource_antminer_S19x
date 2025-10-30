_DWORD *__fastcall sub_12848(_DWORD *result, _DWORD *a2)
{
  if ( *a2 != 10 )
    sub_1073C();
  if ( a2[1] || a2[2] || a2[3] != -65536 )
    sub_1073C();
  result[1] = 0;
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  result[5] = 0;
  *result = 2;
  result[1] = a2[4];
  return result;
}
