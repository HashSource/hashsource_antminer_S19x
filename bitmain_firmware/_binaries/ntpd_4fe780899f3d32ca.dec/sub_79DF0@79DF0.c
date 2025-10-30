void *__fastcall sub_79DF0(_DWORD *a1, const void *a2, size_t a3)
{
  int v4; // r3
  void *result; // r0

  if ( !a1 || *a1 != 1114990113 )
    sub_6ECC0(
      (int)"./../lib/isc/buffer.c",
      401,
      0,
      "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))");
  v4 = a1[3];
  if ( v4 + a3 > a1[2] )
    sub_6ECC0((int)"./../lib/isc/buffer.c", 402, 0, "b->used + length <= b->length");
  result = memcpy((void *)(a1[1] + v4), a2, a3);
  a1[3] += a3;
  return result;
}
