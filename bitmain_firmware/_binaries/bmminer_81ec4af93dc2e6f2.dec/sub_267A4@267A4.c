int __fastcall sub_267A4(int a1, int a2)
{
  int v2; // r3
  int result; // r0
  char v6; // r3

  v2 = (unsigned int)a1 >> 31;
  if ( dword_5BA974 <= a1 )
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
  if ( *(unsigned __int8 *)(dword_5BA990 + 8 * a1) != a2 )
  {
    *(_BYTE *)(dword_5BA990 + 8 * a1) = a2;
    if ( a2 )
      v6 = byte_5BA98C + 1;
    else
      v6 = byte_5BA98C - 1;
    byte_5BA98C = v6;
  }
  return result;
}
