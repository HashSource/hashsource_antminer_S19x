int __fastcall sub_78BE8(int result, _QWORD *a2)
{
  if ( !result || *(_DWORD *)result != 1114990113 )
    sub_6ECC0(
      (int)"./../lib/isc/buffer.c",
      90,
      0,
      "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))");
  if ( !a2 )
    sub_6ECC0((int)"./../lib/isc/buffer.c", 91, 0, "r != ((void *)0)");
  *a2 = *(_QWORD *)(result + 4);
  return result;
}
