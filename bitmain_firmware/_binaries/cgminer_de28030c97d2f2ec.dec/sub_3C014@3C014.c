int sub_3C014()
{
  int result; // r0
  int i; // [sp+Ch] [bp-8h]

  dbl_87E70 = 0.0;
  memset(a0_1, 0, 8u);
  result = sub_32154(0, a0_1, 8u, 0);
  for ( i = 0; i < dword_92028; ++i )
    *(_QWORD *)(*(_DWORD *)(dword_920CC + 4 * i) + 368) = 0;
  return result;
}
