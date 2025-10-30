int __fastcall sub_7117C(_DWORD *a1)
{
  int v2; // r3

  if ( !a1 || *a1 != 1229343047 )
    sub_6FC54(
      (int)"./../lib/isc/unix/interfaceiter.c",
      297,
      0,
      "(((iter) != ((void *)0)) && (((const isc__magic_t *)(iter))->magic == ((('I') << 24 | ('F') << 16 | ('I') << 8 | ('G')))))");
  if ( a1[41] )
    sub_6FC54((int)"./../lib/isc/unix/interfaceiter.c", 298, 0, "iter->result == 0");
  do
  {
    v2 = sub_706A8((int)a1);
    if ( v2 )
      break;
    v2 = sub_708BC((int)a1);
  }
  while ( v2 == 36 );
  a1[41] = v2;
  return v2;
}
