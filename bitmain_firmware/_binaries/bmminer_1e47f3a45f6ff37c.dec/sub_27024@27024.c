int __fastcall sub_27024(int a1)
{
  int result; // r0

  if ( (dword_5BF7DC <= a1) | ((unsigned int)a1 >> 31) )
    return -2147482623;
  if ( dword_5BF838 )
    return *(unsigned __int8 *)(dword_5BF840 + 528 * a1 + 1);
  result = sub_252C0(&dword_5BF7D8);
  if ( result >= 0 )
    return *(unsigned __int8 *)(dword_5BF840 + 528 * a1 + 1);
  return result;
}
