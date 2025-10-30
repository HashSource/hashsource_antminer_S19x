int *__fastcall sub_137624(int a1, _DWORD *a2)
{
  int *result; // r0
  _DWORD *v5; // r5

  result = sub_BB0A4();
  v5 = result;
  if ( result )
  {
    if ( sub_BB160(result, *(_DWORD **)(a1 + 20)) )
    {
      sub_D9F44(a2, 894, (int)v5);
      return (int *)1;
    }
    else
    {
      sub_BB138(v5);
      return 0;
    }
  }
  return result;
}
