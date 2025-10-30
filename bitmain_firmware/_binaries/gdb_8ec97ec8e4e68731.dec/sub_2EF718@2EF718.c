void *__fastcall sub_2EF718(int a1, int a2, unsigned int a3, char *a4)
{
  _DWORD *v8; // r5
  void *result; // r0

  if ( a3 > 0x46 )
    v8 = sub_2EF230(a1, a2, a3);
  else
    v8 = (_DWORD *)(*(_DWORD *)(a1 + 160) + 12 * a3 + 596 + 852 * a2);
  *v8 = sub_2EF65C(a1, a2, a3);
  result = sub_2EF628(a1, a4);
  v8[2] = result;
  return result;
}
