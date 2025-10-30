_DWORD *__fastcall sub_2CEB0(int a1)
{
  _DWORD *result; // r0

  result = sub_2CE74(*(_DWORD **)(a1 + 4), *(_DWORD *)a1);
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  return result;
}
