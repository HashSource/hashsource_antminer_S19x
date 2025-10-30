int __fastcall sub_297E78(int a1)
{
  int v2; // r12
  int result; // r0
  _DWORD *v4; // r3
  int v5; // r2

  if ( a1 < 0 )
    return 0;
  v2 = dword_490158;
  if ( dword_490158 <= a1 || !dword_48BB28 )
    return 0;
  result = *(_DWORD *)(dword_48BB28 + 4 * a1);
  v4 = (_DWORD *)(dword_48BB28 + 4 * a1);
  v5 = dword_48BB28 + 4 * dword_490158;
  do
  {
    *v4 = v4[1];
    ++v4;
  }
  while ( v4 != (_DWORD *)v5 );
  dword_490158 = v2 - 1;
  return result;
}
