_DWORD *__fastcall sub_79044(_DWORD *result, _QWORD *a2)
{
  __int64 v2; // r2

  if ( !result || *result != 1114990113 )
    sub_6ECC0(
      (int)"./../lib/isc/buffer.c",
      161,
      0,
      "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))");
  if ( !a2 )
    sub_6ECC0((int)"./../lib/isc/buffer.c", 162, 0, "r != ((void *)0)");
  LODWORD(v2) = result[1];
  HIDWORD(v2) = result[4];
  *a2 = v2;
  return result;
}
