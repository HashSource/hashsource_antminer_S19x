_DWORD *__fastcall sub_78EDC(_DWORD *result, unsigned int a2)
{
  unsigned int v2; // r3
  unsigned int v3; // r12
  unsigned int v4; // r1
  unsigned int v5; // r3

  if ( !result || *result != 1114990113 )
    sub_6ECC0(
      (int)"./../lib/isc/buffer.c",
      138,
      0,
      "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))");
  v2 = result[3];
  if ( v2 < a2 )
    sub_6ECC0((int)"./../lib/isc/buffer.c", 139, 0, "b->used >= n");
  v3 = result[4];
  v4 = v2 - a2;
  v5 = result[5];
  result[3] = v4;
  if ( v4 < v3 )
    result[4] = v4;
  if ( v4 < v5 )
    result[5] = v4;
  return result;
}
