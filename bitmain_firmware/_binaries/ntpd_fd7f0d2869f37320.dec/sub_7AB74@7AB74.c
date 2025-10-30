int __fastcall sub_7AB74(_DWORD *a1, __int16 a2)
{
  int v2; // r3
  int v3; // lr
  int v5; // [sp+4h] [bp-4h]

  if ( !a1 || *a1 != 1114990113 )
    sub_6FC54(
      (int)"./../lib/isc/buffer.c",
      313,
      0,
      "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))");
  v2 = a1[3];
  if ( (unsigned int)(v2 + 2) > a1[2] )
    sub_6FC54((int)"./../lib/isc/buffer.c", 314, 0, "b->used + 2 <= b->length");
  v3 = a1[1];
  a1[3] = v2 + 2;
  *(_BYTE *)(v3 + v2) = HIBYTE(a2);
  *(_BYTE *)(v3 + v2 + 1) = a2;
  return v5;
}
