_DWORD *__fastcall sub_7A3D8(_DWORD *result, _DWORD *a2)
{
  int v2; // r12
  int v3; // r3

  if ( !result || *result != 1114990113 )
    sub_6FC54(
      (int)"./../lib/isc/buffer.c",
      173,
      0,
      "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))");
  if ( !a2 )
    sub_6FC54((int)"./../lib/isc/buffer.c", 174, 0, "r != ((void *)0)");
  v2 = result[4];
  v3 = result[3];
  *a2 = result[1] + v2;
  a2[1] = v3 - v2;
  return result;
}
