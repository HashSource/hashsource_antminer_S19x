_DWORD *__fastcall sub_79100(_DWORD *result, _QWORD *a2)
{
  int v2; // r12
  __int64 v3; // r2

  if ( !result || *result != 1114990113 )
    sub_6ECC0(
      (int)"./../lib/isc/buffer.c",
      173,
      0,
      "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))");
  if ( !a2 )
    sub_6ECC0((int)"./../lib/isc/buffer.c", 174, 0, "r != ((void *)0)");
  v2 = result[4];
  LODWORD(v3) = result[1] + v2;
  HIDWORD(v3) = result[3] - v2;
  *a2 = v3;
  return result;
}
