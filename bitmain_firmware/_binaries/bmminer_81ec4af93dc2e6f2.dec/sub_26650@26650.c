int __fastcall sub_26650(int a1, int a2)
{
  int v2; // r3
  int result; // r0
  int v6; // r4
  char v7; // r3

  v2 = (unsigned int)a1 >> 31;
  if ( dword_5BA924 <= a1 )
    v2 = 1;
  if ( v2 )
    return -2147482623;
  if ( dword_5BA980 )
  {
    result = 0;
  }
  else
  {
    result = sub_24DB0(&dword_5BA920);
    if ( result < 0 )
      return result;
  }
  v6 = 528 * a1;
  if ( *(unsigned __int8 *)(dword_5BA988 + v6) != a2 )
  {
    *(_BYTE *)(dword_5BA988 + v6) = a2;
    if ( a2 )
      v7 = byte_5BA984 + 1;
    else
      v7 = byte_5BA984 - 1;
    byte_5BA984 = v7;
  }
  return result;
}
