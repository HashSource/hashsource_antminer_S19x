char *__fastcall sub_2B6550(_DWORD *a1, _DWORD *a2, int a3, _DWORD *a4, _DWORD *a5, int a6)
{
  size_t v8; // r0
  char *v9; // r0
  char *v10; // r4
  unsigned int v14; // r0

  if ( a3 )
  {
    v8 = strlen(*(const char **)(a3 + 4));
    v9 = (char *)sub_2AB368(v8 + 22);
    v10 = v9;
    if ( v9 )
      sprintf(v9, "%08x_%s+%x_%d", *a1, *(const char **)(a3 + 4), *a5, a6);
    return v10;
  }
  v10 = (char *)sub_2AB368(39);
  if ( !v10 )
    return v10;
  v14 = ((unsigned __int8)*a4 - 91) & 0xFFFFFFFD;
  if ( v14 )
    v14 = *a4 >> 8;
  sprintf(v10, "%08x_%x:%x+%x_%d", *a1, *a2, v14, *a5, a6);
  return v10;
}
