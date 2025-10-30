int __fastcall sub_45B10(int a1, char *s)
{
  size_t v4; // r0
  int v5; // r0
  int result; // r0

  v4 = strlen(s);
  v5 = sub_451C0((unsigned __int16 *)s, v4, dword_73108);
  result = sub_45704(a1, (int *)(*(_DWORD *)(a1 + 4) + 8 * (v5 & ~(-1 << *(_DWORD *)(a1 + 8)))), s, v5);
  if ( result )
    return *(_DWORD *)(result + 20);
  return result;
}
