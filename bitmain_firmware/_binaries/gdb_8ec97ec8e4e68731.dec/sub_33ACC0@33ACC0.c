_DWORD *__fastcall sub_33ACC0(_DWORD *result, int a2)
{
  int v2; // r3

  v2 = *(_DWORD *)(a2 + 4);
  *result = a2;
  result[1] = v2;
  **(_DWORD **)(a2 + 4) = result;
  *(_DWORD *)(a2 + 4) = result;
  return result;
}
