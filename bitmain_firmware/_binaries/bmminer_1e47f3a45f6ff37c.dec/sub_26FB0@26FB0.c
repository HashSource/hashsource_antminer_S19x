int __fastcall sub_26FB0(int a1, char a2)
{
  int result; // r0

  if ( dword_5BF7DC <= a1 )
    result = 1;
  else
    result = (unsigned int)a1 >> 31;
  if ( result )
    return -2147482623;
  if ( dword_5BF838 || (result = sub_252C0(&dword_5BF7D8), result >= 0) )
    *(_BYTE *)(dword_5BF840 + 528 * a1 + 1) = a2;
  return result;
}
