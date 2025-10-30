int __fastcall sub_26CC4(int a1, int a2)
{
  int result; // r0
  char v5; // r2

  if ( dword_5BF82C[0] <= a1 )
    result = 1;
  else
    result = (unsigned int)a1 >> 31;
  if ( result )
    return -2147482623;
  if ( dword_5BF838 || (result = sub_252C0(&dword_5BF7D8), result >= 0) )
  {
    if ( *(unsigned __int8 *)(dword_5BF848 + 8 * a1) != a2 )
    {
      *(_BYTE *)(dword_5BF848 + 8 * a1) = a2;
      if ( a2 )
        v5 = byte_5BF844 + 1;
      else
        v5 = byte_5BF844 - 1;
      byte_5BF844 = v5;
    }
  }
  return result;
}
