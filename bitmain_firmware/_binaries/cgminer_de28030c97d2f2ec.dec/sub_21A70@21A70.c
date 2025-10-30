_DWORD *__fastcall sub_21A70(_DWORD *result, _DWORD *a2)
{
  *a2 = *result - *a2;
  a2[1] = result[1] - a2[1];
  if ( (int)a2[1] < 0 )
  {
    --*a2;
    a2[1] += 1000000;
  }
  return result;
}
