void *__fastcall sub_2A4EC8(int a1, int a2, void *a3)
{
  const char *v5; // r8
  size_t v6; // r5
  size_t v7; // r0
  size_t v8; // r4
  void *result; // r0

  v5 = (const char *)sub_3245A4(a2);
  v6 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 4) + 26);
  v7 = strlen(v5);
  if ( v6 < v7 )
    return memcpy(a3, v5, *(unsigned __int8 *)(*(_DWORD *)(a1 + 4) + 26));
  v8 = v7;
  result = memcpy(a3, v5, v7);
  if ( v6 > v8 )
    *((_BYTE *)a3 + v8) = *(_BYTE *)(*(_DWORD *)(a1 + 4) + 25);
  return result;
}
