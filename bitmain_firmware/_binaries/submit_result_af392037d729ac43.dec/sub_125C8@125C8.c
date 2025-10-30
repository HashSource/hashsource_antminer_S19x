int __fastcall sub_125C8(int a1, char *s)
{
  size_t v4; // r0
  int v5; // r0
  int result; // r0

  v4 = strlen(s);
  v5 = sub_11FBC((unsigned __int16 *)s, v4, dword_27DF4);
  result = sub_1238C(a1, (int *)(*(_DWORD *)(a1 + 4) + 8 * (((1 << *(_DWORD *)(a1 + 8)) - 1) & v5)), s, v5);
  if ( result )
    return *(_DWORD *)(result + 20);
  return result;
}
