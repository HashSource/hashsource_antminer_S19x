_DWORD *__fastcall sub_7A31C(_DWORD *result, _DWORD *a2)
{
  int v2; // r3

  if ( !result || *result != 1114990113 )
    sub_6FC54(
      (int)"./../lib/isc/buffer.c",
      161,
      0,
      "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))");
  if ( !a2 )
    sub_6FC54((int)"./../lib/isc/buffer.c", 162, 0, "r != ((void *)0)");
  v2 = result[4];
  *a2 = result[1];
  a2[1] = v2;
  return result;
}
