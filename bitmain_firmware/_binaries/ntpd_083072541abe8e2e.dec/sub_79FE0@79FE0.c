int __fastcall sub_79FE0(_DWORD *a1, int a2)
{
  int v4; // r0
  size_t v5; // r2

  if ( !a1 || *a1 != 1114990113 )
    sub_6ECC0(
      (int)"./../lib/isc/buffer.c",
      432,
      0,
      "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))");
  if ( !a2 )
    sub_6ECC0((int)"./../lib/isc/buffer.c", 433, 0, "r != ((void *)0)");
  v4 = a1[3];
  v5 = *(_DWORD *)(a2 + 4);
  if ( v5 > a1[2] - v4 )
    return 19;
  memcpy((void *)(a1[1] + v4), *(const void **)a2, v5);
  a1[3] += *(_DWORD *)(a2 + 4);
  return 0;
}
