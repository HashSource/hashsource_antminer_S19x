_DWORD *__fastcall sub_79CE8(_DWORD *result, int a2, int a3, __int16 a4)
{
  int v4; // r1
  int v5; // r12
  int v6; // r1
  int v7; // r12
  _BYTE *v8; // r3

  if ( !result || *result != 1114990113 )
    sub_6ECC0(
      (int)"./../lib/isc/buffer.c",
      388,
      0,
      "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))");
  v4 = result[3];
  if ( (unsigned int)(v4 + 6) > result[2] )
    sub_6ECC0((int)"./../lib/isc/buffer.c", 389, 0, "b->used + 6 <= b->length");
  v5 = result[1];
  result[3] = v4 + 2;
  *(_BYTE *)(v5 + v4) = HIBYTE(a4);
  *(_BYTE *)(v5 + v4 + 1) = a4;
  v6 = result[3];
  v7 = result[1];
  result[3] = v6 + 4;
  v8 = (_BYTE *)(v7 + v6);
  *(_BYTE *)(v7 + v6) = HIBYTE(a3);
  v8[3] = a3;
  v8[1] = BYTE2(a3);
  v8[2] = BYTE1(a3);
  return result;
}
