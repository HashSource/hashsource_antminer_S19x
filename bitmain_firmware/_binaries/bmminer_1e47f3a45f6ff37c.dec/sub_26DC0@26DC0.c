int __fastcall sub_26DC0(int a1)
{
  int result; // r0

  if ( (dword_5BF82C[0] <= a1) | ((unsigned int)a1 >> 31) )
    return -2147482623;
  if ( dword_5BF838 )
    return *(_DWORD *)(dword_5BF848 + 8 * a1 + 4);
  result = sub_252C0(&dword_5BF7D8);
  if ( result >= 0 )
    return *(_DWORD *)(dword_5BF848 + 8 * a1 + 4);
  return result;
}
