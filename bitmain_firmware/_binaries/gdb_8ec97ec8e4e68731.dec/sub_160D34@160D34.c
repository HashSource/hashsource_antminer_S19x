_DWORD *__fastcall sub_160D34(int a1, int a2)
{
  int v4; // r5
  _DWORD *result; // r0
  _DWORD *v6; // r3

  v4 = ((int (__fastcall *)(int, int))loc_16EC88)(a1, dword_487768);
  result = (_DWORD *)sub_163938(a1, 8u);
  v6 = *(_DWORD **)(v4 + 4);
  *result = a2;
  result[1] = *v6;
  *v6 = result;
  return result;
}
