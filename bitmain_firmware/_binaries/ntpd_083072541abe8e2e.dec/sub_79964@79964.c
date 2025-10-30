unsigned int __fastcall sub_79964(_DWORD *a1, unsigned int a2)
{
  int v2; // r2
  int v3; // r3
  int v5; // r3

  if ( !a1 || *a1 != 1114990113 )
    sub_6ECC0(
      (int)"./../lib/isc/buffer.c",
      321,
      0,
      "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))");
  v2 = a1[3];
  if ( (unsigned int)(v2 + 3) > a1[2] )
    sub_6ECC0((int)"./../lib/isc/buffer.c", 322, 0, "b->used + 3 <= b->length");
  v3 = a1[1];
  a1[3] = v2 + 3;
  *(_BYTE *)(v3 + v2) = BYTE2(a2);
  v5 = v3 + v2;
  *(_BYTE *)(v5 + 2) = a2;
  *(_BYTE *)(v5 + 1) = BYTE1(a2);
  return a2 >> 8;
}
