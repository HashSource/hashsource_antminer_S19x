int __fastcall sub_2EF6BC(int a1, int a2, unsigned int a3, int a4)
{
  _DWORD *v8; // r5
  int result; // r0

  if ( a3 > 0x46 )
    v8 = sub_2EF230(a1, a2, a3);
  else
    v8 = (_DWORD *)(*(_DWORD *)(a1 + 160) + 12 * a3 + 596 + 852 * a2);
  result = sub_2EF65C(a1, a2, a3);
  *v8 = result;
  v8[1] = a4;
  return result;
}
