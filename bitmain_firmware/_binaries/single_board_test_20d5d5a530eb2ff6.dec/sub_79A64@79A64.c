int __fastcall sub_79A64(int a1, char *s)
{
  size_t v4; // r0
  int v5; // r0
  int result; // r0

  v4 = strlen(s);
  v5 = sub_79458((unsigned __int16 *)s, v4, dword_6DF268);
  result = sub_79828(a1, (int *)(*(_DWORD *)(a1 + 4) + 8 * (((1 << *(_DWORD *)(a1 + 8)) - 1) & v5)), s, v5);
  if ( result )
    return *(_DWORD *)(result + 20);
  return result;
}
