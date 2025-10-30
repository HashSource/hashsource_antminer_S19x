void __fastcall sub_7A1B4(_DWORD **a1)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r0

  if ( !a1 )
    sub_6ECC0((int)"./../lib/isc/buffer.c", 476, 0, "dynbuffer != ((void *)0)");
  v2 = *a1;
  if ( !*a1 || *v2 != 1114990113 )
    sub_6ECC0(
      (int)"./../lib/isc/buffer.c",
      477,
      0,
      "(((*dynbuffer) != ((void *)0)) && (((const isc__magic_t *)(*dynbuffer))->magic == (0x42756621U)))");
  if ( !v2[8] )
    sub_6ECC0((int)"./../lib/isc/buffer.c", 478, 0, "(*dynbuffer)->mctx != ((void *)0)");
  v3 = *a1;
  *a1 = 0;
  v2[8] = 0;
  sub_78AEC(v3);
  free(v2);
}
