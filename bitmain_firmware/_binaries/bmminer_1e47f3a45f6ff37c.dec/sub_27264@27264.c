int __fastcall sub_27264(unsigned int a1, char *s)
{
  unsigned int v2; // r4
  int result; // r0

  if ( dword_5BF7DC <= (int)a1 )
    return -2147482623;
  v2 = (s == 0) | (a1 >> 31);
  if ( v2 )
    return -2147482623;
  if ( dword_5BF838 || (result = sub_252C0(&dword_5BF7D8), v2 = result, result >= 0) )
  {
    snprintf(s, 0x200u, "%s", (const char *)(dword_5BF840 + 528 * a1 + 16));
    return v2;
  }
  return result;
}
