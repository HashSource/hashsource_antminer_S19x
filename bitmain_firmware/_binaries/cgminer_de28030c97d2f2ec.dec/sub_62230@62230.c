_DWORD *__fastcall sub_62230(_DWORD *a1)
{
  _DWORD *v1; // r2
  _DWORD *result; // r0
  unsigned int i; // [sp+Ch] [bp-8h]

  sub_61C00((int)a1);
  for ( i = 0; 1 << a1[2] > i; ++i )
  {
    v1 = (_DWORD *)(a1[1] + 8 * i);
    v1[1] = a1 + 3;
    *v1 = v1[1];
  }
  sub_6180C(a1 + 3);
  result = sub_6180C(a1 + 5);
  *a1 = 0;
  return result;
}
