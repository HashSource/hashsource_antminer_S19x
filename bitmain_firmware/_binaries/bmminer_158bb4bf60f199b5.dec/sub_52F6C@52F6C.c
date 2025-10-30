char *__fastcall sub_52F6C(int a1, int a2, int a3)
{
  int v6; // r7
  const char *v7; // r0
  const char *v8; // r0
  const char *v9; // r0
  char *result; // r0
  unsigned int v11[2]; // [sp+Ch] [bp-8h] BYREF

  v6 = *(_DWORD *)(a1 + 340);
  sub_52F30((void **)a1);
  sub_4C150((void *)a1, (const void *)a2, 0x1C0u, (int)"cgminer.c", (int)"_copy_work", 4946);
  *(_DWORD *)(a1 + 340) = v6;
  v7 = *(const char **)(a2 + 288);
  if ( v7 )
    *(_DWORD *)(a1 + 288) = _strdup(v7);
  v8 = *(const char **)(a2 + 320);
  if ( v8 )
    *(_DWORD *)(a1 + 320) = _strdup(v8);
  v9 = *(const char **)(a2 + 308);
  if ( v9 )
  {
    if ( a3 )
    {
      *(_DWORD *)(a1 + 68) = bswap32(a3 + bswap32(*(_DWORD *)(a1 + 68)));
      sub_49940(v11, *(unsigned __int8 **)(a2 + 308), 4);
      v11[0] = bswap32(a3 + bswap32(v11[0]));
      *(_DWORD *)(a1 + 308) = sub_4988C((int)v11, 4);
    }
    else
    {
      *(_DWORD *)(a1 + 308) = _strdup(v9);
    }
  }
  else if ( a3 )
  {
    *(_DWORD *)(a1 + 68) = bswap32(a3 + bswap32(*(_DWORD *)(a1 + 68)));
  }
  result = *(char **)(a2 + 328);
  if ( result )
  {
    result = _strdup(result);
    *(_DWORD *)(a1 + 328) = result;
  }
  *(_DWORD *)(a1 + 444) = *(_DWORD *)(a2 + 444);
  return result;
}
