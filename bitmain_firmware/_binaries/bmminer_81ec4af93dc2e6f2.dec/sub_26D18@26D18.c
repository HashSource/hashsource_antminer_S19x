int __fastcall sub_26D18(unsigned int a1, char *s)
{
  unsigned int v2; // r5
  int result; // r0

  if ( dword_5BA924 <= (int)a1 )
    return -2147482623;
  v2 = (s == 0) | (a1 >> 31);
  if ( v2 )
    return -2147482623;
  if ( dword_5BA980 || (result = sub_24DB0(&dword_5BA920), v2 = result, result >= 0) )
  {
    snprintf(s, 0x200u, "%s", (const char *)(dword_5BA988 + 528 * a1 + 16));
    return v2;
  }
  return result;
}
