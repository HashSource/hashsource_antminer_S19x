void *__fastcall sub_2EF784(int a1, int a2, unsigned int a3, int a4, char *s)
{
  _DWORD *v9; // r4
  int v10; // r0
  void *result; // r0

  if ( a3 > 0x46 )
    v9 = sub_2EF230(a1, a2, a3);
  else
    v9 = (_DWORD *)(*(_DWORD *)(a1 + 160) + 12 * a3 + 596 + 852 * a2);
  v10 = sub_2EF65C(a1, a2, a3);
  v9[1] = a4;
  *v9 = v10;
  result = sub_2EF628(a1, s);
  v9[2] = result;
  return result;
}
