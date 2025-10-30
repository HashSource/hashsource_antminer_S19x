_DWORD *__fastcall sub_E67D8(int a1, int a2, int a3)
{
  int v4; // r5
  int v5; // r6
  int v6; // r0
  _DWORD *result; // r0

  ((void (__fastcall *)(int, int))loc_E65F8)(a2, a3);
  v4 = *(_DWORD *)(a1 + 4);
  v5 = *(_DWORD *)(a1 + 28);
  v6 = sub_21A6D8(a1);
  result = sub_E48AC(v4, v5, v6);
  result[6] = a1;
  dword_4788DC = (int)result;
  return result;
}
