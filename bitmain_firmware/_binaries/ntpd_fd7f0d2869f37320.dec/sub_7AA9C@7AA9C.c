int __fastcall sub_7AA9C(_DWORD *a1)
{
  int v1; // r3
  unsigned __int8 *v2; // r12

  if ( !a1 || *a1 != 1114990113 )
    sub_6FC54(
      (int)"./../lib/isc/buffer.c",
      300,
      0,
      "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))");
  v1 = a1[4];
  if ( (unsigned int)(a1[3] - v1) <= 1 )
    sub_6FC54((int)"./../lib/isc/buffer.c", 301, 0, "b->used - b->current >= 2");
  v2 = (unsigned __int8 *)(a1[1] + v1);
  a1[4] = v1 + 2;
  return v2[1] | (*v2 << 8);
}
