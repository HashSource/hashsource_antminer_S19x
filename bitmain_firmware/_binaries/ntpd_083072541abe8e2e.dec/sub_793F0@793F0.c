_DWORD *__fastcall sub_793F0(_DWORD *result, int a2)
{
  unsigned int v2; // r1

  if ( !result || *result != 1114990113 )
    sub_6ECC0(
      (int)"./../lib/isc/buffer.c",
      220,
      0,
      "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))");
  v2 = a2 + result[4];
  if ( v2 > result[3] )
    sub_6ECC0((int)"./../lib/isc/buffer.c", 221, 0, "b->current + n <= b->used");
  result[4] = v2;
  return result;
}
