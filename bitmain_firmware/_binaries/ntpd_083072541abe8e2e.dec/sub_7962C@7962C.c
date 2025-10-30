int __fastcall sub_7962C(_DWORD *a1)
{
  int v1; // r3
  int v2; // r2

  if ( !a1 || *a1 != 1114990113 )
    sub_6ECC0(
      (int)"./../lib/isc/buffer.c",
      272,
      0,
      "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))");
  v1 = a1[4];
  if ( a1[3] == v1 )
    sub_6ECC0((int)"./../lib/isc/buffer.c", 273, 0, "b->used - b->current >= 1");
  v2 = a1[1];
  a1[4] = v1 + 1;
  return *(unsigned __int8 *)(v2 + v1);
}
