int __fastcall sub_26B64(int a1, int a2)
{
  int result; // r0
  int v5; // r5
  char v6; // r2

  if ( dword_5BF7DC <= a1 )
    result = 1;
  else
    result = (unsigned int)a1 >> 31;
  if ( result )
    return -2147482623;
  if ( dword_5BF838 || (result = sub_252C0(&dword_5BF7D8), result >= 0) )
  {
    v5 = 528 * a1;
    if ( *(unsigned __int8 *)(dword_5BF840 + v5) != a2 )
    {
      *(_BYTE *)(dword_5BF840 + v5) = a2;
      if ( a2 )
        v6 = byte_5BF83C + 1;
      else
        v6 = byte_5BF83C - 1;
      byte_5BF83C = v6;
    }
  }
  return result;
}
