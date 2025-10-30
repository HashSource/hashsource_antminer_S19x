unsigned int __fastcall sub_79BF4(_DWORD *a1)
{
  int v1; // r2
  int v2; // r12

  if ( !a1 || *a1 != 1114990113 )
    sub_6ECC0(
      (int)"./../lib/isc/buffer.c",
      368,
      0,
      "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))");
  v1 = a1[4];
  if ( (unsigned int)(a1[3] - v1) <= 5 )
    sub_6ECC0((int)"./../lib/isc/buffer.c", 369, 0, "b->used - b->current >= 6");
  v2 = a1[1];
  a1[4] = v1 + 6;
  return _byteswap_ulong(*(_DWORD *)(v2 + v1 + 2));
}
