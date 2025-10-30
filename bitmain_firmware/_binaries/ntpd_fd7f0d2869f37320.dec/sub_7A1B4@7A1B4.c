_DWORD *__fastcall sub_7A1B4(_DWORD *result, unsigned int a2)
{
  unsigned int v2; // r3
  unsigned int v3; // r1
  unsigned int v4; // r12
  unsigned int v5; // r3

  if ( !result || *result != 1114990113 )
    sub_6FC54(
      (int)"./../lib/isc/buffer.c",
      138,
      0,
      "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))");
  v2 = result[3];
  if ( v2 < a2 )
    sub_6FC54((int)"./../lib/isc/buffer.c", 139, 0, "b->used >= n");
  v3 = v2 - a2;
  v4 = result[4];
  v5 = result[5];
  result[3] = v3;
  if ( v3 < v4 )
    result[4] = v3;
  if ( v3 < v5 )
    result[5] = v3;
  return result;
}
