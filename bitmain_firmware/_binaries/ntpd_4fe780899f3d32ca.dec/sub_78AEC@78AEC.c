_DWORD *__fastcall sub_78AEC(_DWORD *result)
{
  if ( !result || *result != 1114990113 )
    sub_6ECC0(
      (int)"./../lib/isc/buffer.c",
      77,
      0,
      "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))");
  if ( result[6] != -1 )
    sub_6ECC0((int)"./../lib/isc/buffer.c", 78, 0, "!((void *)((b)->link.prev) != (void *)(-1))");
  if ( result[8] )
    sub_6ECC0((int)"./../lib/isc/buffer.c", 79, 0, "b->mctx == ((void *)0)");
  result[1] = 0;
  *result = 0;
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  result[5] = 0;
  return result;
}
