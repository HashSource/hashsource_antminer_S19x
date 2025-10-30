_DWORD *__fastcall sub_78E1C(_DWORD *result, int a2)
{
  unsigned int v2; // r1

  if ( !result || *result != 1114990113 )
    sub_6ECC0(
      (int)"./../lib/isc/buffer.c",
      126,
      0,
      "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))");
  v2 = a2 + result[3];
  if ( v2 > result[2] )
    sub_6ECC0((int)"./../lib/isc/buffer.c", 127, 0, "b->used + n <= b->length");
  result[3] = v2;
  return result;
}
