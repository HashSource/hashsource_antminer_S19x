void *__fastcall sub_2A4F30(int a1, int a2, void *a3)
{
  unsigned int v5; // r7
  const char *v6; // r8
  void *result; // r0
  unsigned int v8; // r5
  _BOOL4 v9; // r3

  if ( (*(_DWORD *)(a1 + 40) & 0x8000) != 0 )
    return sub_2A4EC8(a1, a2, a3);
  v5 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 4) + 26);
  v6 = (const char *)sub_3245A4(a2);
  result = (void *)strlen(v6);
  v8 = (unsigned int)result;
  if ( v5 >= (unsigned int)result )
  {
    result = memcpy(a3, v6, (size_t)result);
    if ( v5 > v8 || (v8 <= 0xF ? (v9 = v5 == v8) : (v9 = 0), v9) )
      *((_BYTE *)a3 + v8) = *(_BYTE *)(*(_DWORD *)(a1 + 4) + 25);
  }
  return result;
}
