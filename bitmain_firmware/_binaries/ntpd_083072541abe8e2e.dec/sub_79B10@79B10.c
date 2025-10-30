unsigned int __fastcall sub_79B10(_DWORD *a1, unsigned int a2)
{
  int v2; // r2
  int v3; // r3
  _BYTE *v5; // r3

  if ( !a1 || *a1 != 1114990113 )
    sub_6ECC0(
      (int)"./../lib/isc/buffer.c",
      352,
      0,
      "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))");
  v2 = a1[3];
  if ( (unsigned int)(v2 + 4) > a1[2] )
    sub_6ECC0((int)"./../lib/isc/buffer.c", 353, 0, "b->used + 4 <= b->length");
  v3 = a1[1];
  a1[3] = v2 + 4;
  *(_BYTE *)(v3 + v2) = HIBYTE(a2);
  v5 = (_BYTE *)(v3 + v2);
  v5[3] = a2;
  v5[1] = BYTE2(a2);
  v5[2] = BYTE1(a2);
  return a2 >> 8;
}
