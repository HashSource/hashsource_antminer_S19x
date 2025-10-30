_DWORD *__fastcall sub_6ECF0(_DWORD *a1)
{
  int v1; // r3
  _DWORD *result; // r0
  unsigned int i; // [sp+Ch] [bp-8h]

  sub_6E6CC((int)a1);
  for ( i = 0; i < 1 << a1[2]; ++i )
  {
    v1 = a1[1] + 8 * i;
    *(_DWORD *)(v1 + 4) = a1 + 3;
    *(_DWORD *)(a1[1] + 8 * i) = *(_DWORD *)(v1 + 4);
  }
  sub_6E2D0(a1 + 3);
  result = sub_6E2D0(a1 + 5);
  *a1 = 0;
  return result;
}
