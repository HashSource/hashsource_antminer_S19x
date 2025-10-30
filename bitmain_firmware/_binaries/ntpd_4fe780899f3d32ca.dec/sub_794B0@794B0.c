_DWORD *__fastcall sub_794B0(_DWORD *result, unsigned int a2)
{
  unsigned int v2; // r3

  if ( !result || *result != 1114990113 )
    sub_6ECC0(
      (int)"./../lib/isc/buffer.c",
      232,
      0,
      "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))");
  v2 = result[4];
  if ( v2 < a2 )
    sub_6ECC0((int)"./../lib/isc/buffer.c", 233, 0, "n <= b->current");
  result[4] = v2 - a2;
  return result;
}
