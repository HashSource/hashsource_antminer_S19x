_DWORD *__fastcall sub_AAF6C(_DWORD *result, int a2)
{
  int v2; // r3

  result[3] = a2;
  result[4] = 0;
  if ( a2 )
  {
    v2 = *(_DWORD *)(a2 + 192);
    result[5] = a2 + 172;
    result[17] = a2 + 180;
    result[15] = v2 + 16;
    result[18] = a2 + 184;
    result[16] = a2 + 208;
  }
  else
  {
    result[5] = 0;
    result[17] = 0;
    result[18] = 0;
    result[15] = 0;
    result[16] = 0;
  }
  return result;
}
