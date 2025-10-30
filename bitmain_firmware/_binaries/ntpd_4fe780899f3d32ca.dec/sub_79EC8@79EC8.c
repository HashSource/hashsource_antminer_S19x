unsigned int __fastcall sub_79EC8(_DWORD *a1, char *s)
{
  unsigned int v4; // r6
  int v5; // r0
  unsigned int result; // r0

  if ( !a1 || *a1 != 1114990113 )
    sub_6ECC0(
      (int)"./../lib/isc/buffer.c",
      412,
      0,
      "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))");
  if ( !s )
    sub_6ECC0((int)"./../lib/isc/buffer.c", 413, 0, "source != ((void *)0)");
  v4 = strlen(s);
  v5 = a1[3];
  if ( a1[2] - v5 < v4 )
    sub_6ECC0((int)"./../lib/isc/buffer.c", 420, 0, "l <= ((b)->length - (b)->used)");
  memcpy((void *)(a1[1] + v5), s, v4);
  result = a1[3] + v4;
  a1[3] = result;
  return result;
}
