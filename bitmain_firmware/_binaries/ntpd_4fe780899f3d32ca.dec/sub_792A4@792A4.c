_DWORD *__fastcall sub_792A4(_DWORD *result, int a2)
{
  unsigned int v2; // r1

  if ( !result || *result != 1114990113 )
    sub_6ECC0(
      (int)"./../lib/isc/buffer.c",
      197,
      0,
      "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))");
  v2 = a2 + result[4];
  if ( v2 > result[3] )
    sub_6ECC0((int)"./../lib/isc/buffer.c", 198, 0, "b->current + n <= b->used");
  result[5] = v2;
  return result;
}
