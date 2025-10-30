int __fastcall sub_7AC48(_DWORD *a1, int a2)
{
  int v2; // r3
  int v3; // lr
  int result; // r0

  if ( !a1 || *a1 != 1114990113 )
    sub_6FC54(
      (int)"./../lib/isc/buffer.c",
      321,
      0,
      "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))");
  v2 = a1[3];
  if ( (unsigned int)(v2 + 3) > a1[2] )
    sub_6FC54((int)"./../lib/isc/buffer.c", 322, 0, "b->used + 3 <= b->length");
  v3 = a1[1];
  a1[3] = v2 + 3;
  result = v3 + v2;
  *(_BYTE *)(v3 + v2) = BYTE2(a2);
  *(_BYTE *)(result + 2) = a2;
  *(_BYTE *)(result + 1) = BYTE1(a2);
  return result;
}
