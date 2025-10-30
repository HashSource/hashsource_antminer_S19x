int (__fastcall *__fastcall sub_A436C(int a1))(const char *a1, int a2, const char **a3)
{
  if ( *(_DWORD *)a1 == 2 )
    return sub_9AA4C;
  if ( *(_BYTE *)(a1 + 4) )
    return (int (__fastcall *)(const char *, int, const char **))sub_A4604;
  return (int (__fastcall *)(const char *, int, const char **))sub_A4320(a1);
}
