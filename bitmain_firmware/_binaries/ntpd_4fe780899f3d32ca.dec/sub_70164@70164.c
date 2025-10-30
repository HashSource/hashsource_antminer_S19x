int __fastcall sub_70164(_DWORD *a1)
{
  int v2; // r3
  int v3; // r3
  int *v4; // r3

  if ( !a1 || *a1 != 1229343047 )
    sub_6ECC0(
      (int)"./../lib/isc/unix/interfaceiter.c",
      297,
      0,
      "(((iter) != ((void *)0)) && (((const isc__magic_t *)(iter))->magic == ((('I') << 24 | ('F') << 16 | ('I') << 8 | ('G')))))");
  if ( a1[41] )
    sub_6ECC0((int)"./../lib/isc/unix/interfaceiter.c", 298, 0, "iter->result == 0");
  while ( 1 )
  {
    v4 = (int *)a1[5];
    if ( v4 )
    {
      v2 = *v4;
      a1[5] = v2;
      if ( v2 )
        goto LABEL_6;
    }
    if ( dword_107240 )
      break;
    v3 = sub_6F69C((int)a1);
    if ( v3 )
      goto LABEL_10;
LABEL_6:
    v3 = sub_6F874((int)a1);
    if ( v3 != 36 )
      goto LABEL_10;
  }
  v3 = 29;
LABEL_10:
  a1[41] = v3;
  return v3;
}
