int __fastcall sub_71E00(_DWORD *a1)
{
  _DWORD *v2; // r2
  unsigned int i; // [sp+Ch] [bp-8h]

  *a1 = 0;
  a1[2] = 3;
  a1[1] = sub_74DA0(8 << a1[2]);
  if ( !a1[1] )
    return -1;
  sub_71808(a1 + 3);
  sub_71808(a1 + 5);
  for ( i = 0; 1 << a1[2] > i; ++i )
  {
    v2 = (_DWORD *)(a1[1] + 8 * i);
    v2[1] = a1 + 3;
    *v2 = v2[1];
  }
  return 0;
}
