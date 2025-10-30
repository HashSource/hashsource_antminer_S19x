int __fastcall sub_2E00A8(_DWORD *a1, unsigned int a2, int a3)
{
  int v3; // r3
  int v4; // r3
  int i; // r2
  int result; // r0
  bool v8; // zf

  if ( a1[5] <= a2 || (v3 = a1[3] + 20 * a2, *(unsigned __int8 *)(v3 + 12) >> 4) )
  {
    v4 = *(_DWORD *)(a1[7] + 4 * (a2 - a1[6]));
    for ( i = *(unsigned __int8 *)(v4 + 12); (unsigned int)(i - 6) <= 1; i = *(unsigned __int8 *)(v4 + 12) )
      v4 = *(_DWORD *)(v4 + 20);
    if ( (unsigned int)(i - 3) > 1 )
      return 0;
    result = *(_DWORD *)(v4 + 20);
    if ( (char **)result == &off_470950
      || *(char ***)(result + 60) != &off_470950
      || (((*(_WORD *)(result + 24) & 0x380) - 256) & 0xFEFF) == 0 )
    {
      return 0;
    }
  }
  else
  {
    result = sub_2CFEF4(a1[4], *(_DWORD *)(v3 + 16));
    v8 = a3 == 0;
    if ( a3 )
      v8 = result == 0;
    if ( !v8
      && ((char **)result == &off_470950
       || *(char ***)(result + 60) != &off_470950
       || (((*(_WORD *)(result + 24) & 0x380) - 256) & 0xFEFF) == 0) )
    {
      return 0;
    }
  }
  return result;
}
