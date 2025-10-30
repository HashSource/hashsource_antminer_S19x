unsigned int __fastcall sub_79A40(_DWORD *a1)
{
  int v1; // r2
  int v2; // lr

  if ( !a1 || *a1 != 1114990113 )
    sub_6ECC0(
      (int)"./../lib/isc/buffer.c",
      337,
      0,
      "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))");
  v1 = a1[4];
  if ( (unsigned int)(a1[3] - v1) <= 3 )
    sub_6ECC0((int)"./../lib/isc/buffer.c", 338, 0, "b->used - b->current >= 4");
  v2 = a1[1];
  a1[4] = v1 + 4;
  return bswap32(*(_DWORD *)(v2 + v1));
}
