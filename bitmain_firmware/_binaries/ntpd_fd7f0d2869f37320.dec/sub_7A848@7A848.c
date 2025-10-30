void *__fastcall sub_7A848(int a1)
{
  int v2; // r1
  size_t v3; // r5
  void *result; // r0
  unsigned int v5; // r3
  unsigned int v6; // r2
  unsigned int v7; // r3

  if ( !a1 || *(_DWORD *)a1 != 1114990113 )
    sub_6FC54(
      (int)"./../lib/isc/buffer.c",
      249,
      0,
      "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))");
  v2 = *(_DWORD *)(a1 + 16);
  v3 = *(_DWORD *)(a1 + 12) - v2;
  result = memmove(*(void **)(a1 + 4), (const void *)(*(_DWORD *)(a1 + 4) + v2), v3);
  v5 = *(_DWORD *)(a1 + 20);
  v6 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 12) = v3;
  if ( v5 <= v6 )
    v7 = 0;
  else
    v7 = v5 - v6;
  *(_DWORD *)(a1 + 20) = v7;
  *(_DWORD *)(a1 + 16) = 0;
  return result;
}
