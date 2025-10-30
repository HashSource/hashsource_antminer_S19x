int *__fastcall sub_33B2A0(int *result, int a2)
{
  int v2; // r3

  v2 = *result;
  result[1] = a2;
  *(_BYTE *)(v2 + a2) = 0;
  return result;
}
