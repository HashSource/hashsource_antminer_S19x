int __fastcall sub_114F3C(int a1, int a2, _DWORD *a3, int *a4, _DWORD *a5, int a6, int a7, int a8)
{
  int v10; // r4
  int v11; // r3

  if ( a2 - a1 < (unsigned int)(2 * a7) )
    return -1;
  v10 = a1 + a7;
  if ( a8 )
  {
    *a4 = sub_15C190(a1, a7, a6);
    *a5 = sub_15C190(v10, a7, a6);
  }
  else
  {
    *a4 = sub_15C250(a1, a7, a6);
    *a5 = sub_15C250(v10, a7, a6);
  }
  v11 = *a4;
  *a3 = v10 + a7;
  if ( (~(-2 << (8 * a7 - 1)) & ~v11) == 0 )
    return 1;
  if ( v11 )
    return 2;
  if ( *a5 )
    return 2;
  return 0;
}
