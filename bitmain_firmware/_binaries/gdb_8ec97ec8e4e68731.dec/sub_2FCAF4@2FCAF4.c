char *__fastcall sub_2FCAF4(int a1, int a2, int a3)
{
  const char *v5; // r4
  int v6; // r3
  char *result; // r0
  const char *v8; // r3
  int v9; // r5

  v5 = *(const char **)(a3 + 4);
  v6 = *(unsigned __int8 *)v5;
  if ( *(unsigned __int8 *)(*(_DWORD *)(a2 + 4) + 24) == v6 || *(unsigned __int8 *)(a1 + 9) == v6 )
    ++v5;
  if ( strncmp(v5, "__wrap_", 7u) || !sub_2AAC2C(*(_DWORD **)(a1 + 40), v5 + 7, 0, 0) )
    return (char *)a3;
  v8 = *(const char **)(a3 + 4);
  if ( v8 == v5 )
    return sub_2FC920(*(_DWORD **)(a1 + 28), v5 + 7, 0, 0, 0);
  v9 = *((unsigned __int8 *)v5 + 6);
  *((_BYTE *)v5 + 6) = *v8;
  result = sub_2FC920(*(_DWORD **)(a1 + 28), v5 + 6, 0, 0, 0);
  if ( v9 )
    *((_BYTE *)v5 + 6) = v9;
  return result;
}
