int *__fastcall sub_1375E4(int a1)
{
  int *result; // r0

  result = sub_BB0A4();
  *(_DWORD *)(a1 + 20) = result;
  if ( result )
  {
    *(_DWORD *)(a1 + 36) = 0;
    return (int *)1;
  }
  return result;
}
