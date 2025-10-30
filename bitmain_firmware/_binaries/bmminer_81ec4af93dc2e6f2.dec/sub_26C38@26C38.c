int __fastcall sub_26C38(int a1)
{
  int result; // r0

  if ( (dword_5BA924 <= a1) | ((unsigned int)a1 >> 31) )
    return -2147482623;
  if ( dword_5BA980 )
    return *(_DWORD *)(dword_5BA988 + 528 * a1 + 4);
  result = sub_24DB0(&dword_5BA920);
  if ( result >= 0 )
    return *(_DWORD *)(dword_5BA988 + 528 * a1 + 4);
  return result;
}
