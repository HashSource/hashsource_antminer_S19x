_DWORD *__fastcall sub_2DF24(int a1)
{
  _DWORD *result; // r0

  result = sub_2DEEC(*(_DWORD **)(a1 + 4), *(_DWORD *)a1);
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  return result;
}
