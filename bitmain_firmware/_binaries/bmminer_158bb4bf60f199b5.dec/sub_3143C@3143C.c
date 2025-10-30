_DWORD *__fastcall sub_3143C(_DWORD *result)
{
  int v1; // r1
  int v2; // r2

  v1 = *(_DWORD *)(dword_1AEA1C + 4);
  v2 = *(_DWORD *)(dword_1AEA1C + 8);
  *result = *(_DWORD *)dword_1AEA1C;
  result[1] = v1;
  result[2] = v2;
  return result;
}
