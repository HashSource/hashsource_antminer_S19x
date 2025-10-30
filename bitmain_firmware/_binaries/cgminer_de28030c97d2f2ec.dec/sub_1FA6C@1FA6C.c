_DWORD *__fastcall sub_1FA6C(int a1)
{
  _DWORD *result; // r0

  result = sub_1FA34(*(_DWORD **)(a1 + 4), *(_DWORD *)a1);
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  return result;
}
