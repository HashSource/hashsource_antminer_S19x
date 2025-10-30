_DWORD *__fastcall sub_AAF30(_DWORD *result, int a2)
{
  int v2; // r3

  result[4] = a2;
  result[3] = 0;
  if ( a2 )
  {
    v2 = *(_DWORD *)(a2 + 1028);
    result[5] = a2 + 1260;
    result[17] = a2 + 1268;
    result[15] = v2 + 16;
    result[18] = a2 + 1272;
    result[16] = a2 + 1196;
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
