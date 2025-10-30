_DWORD *__fastcall sub_1F094(_DWORD *result, _DWORD *a2, int a3)
{
  *(_DWORD *)(a3 + 4) = result;
  *result = a3;
  result[1] = a2;
  *a2 = result;
  return result;
}
