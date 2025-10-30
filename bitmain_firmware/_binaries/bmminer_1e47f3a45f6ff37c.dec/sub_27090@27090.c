int __fastcall sub_27090(int a1)
{
  int v1; // r3
  int result; // r0

  v1 = (unsigned int)a1 >> 31;
  if ( dword_5BF7DC <= a1 )
    v1 = 1;
  if ( v1 )
    return -2147482623;
  if ( dword_5BF838 )
  {
    result = 0;
LABEL_7:
    ++*(_DWORD *)(dword_5BF840 + 528 * a1 + 4);
    return result;
  }
  result = sub_252C0(&dword_5BF7D8);
  if ( result >= 0 )
    goto LABEL_7;
  return result;
}
