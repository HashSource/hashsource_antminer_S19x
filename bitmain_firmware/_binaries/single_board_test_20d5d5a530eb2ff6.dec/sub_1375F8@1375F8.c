int *__fastcall sub_1375F8(int a1, int a2)
{
  int *result; // r0
  _DWORD *v5; // r1

  result = sub_BB0A4();
  *(_DWORD *)(a1 + 20) = result;
  if ( result )
  {
    v5 = *(_DWORD **)(a2 + 20);
    *(_DWORD *)(a1 + 36) = 0;
    return (int *)(sub_BB160(result, v5) != 0);
  }
  return result;
}
