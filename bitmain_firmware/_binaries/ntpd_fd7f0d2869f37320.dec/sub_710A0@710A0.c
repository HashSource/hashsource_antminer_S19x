int __fastcall sub_710A0(_DWORD *a1)
{
  FILE *v2; // r0
  int v3; // r3

  if ( !a1 || *a1 != 1229343047 )
    sub_6FC54(
      (int)"./../lib/isc/unix/interfaceiter.c",
      278,
      0,
      "(((iter) != ((void *)0)) && (((const isc__magic_t *)(iter))->magic == ((('I') << 24 | ('F') << 16 | ('I') << 8 | ('G')))))");
  v2 = (FILE *)a1[42];
  if ( v2 )
  {
    rewind(v2);
    sub_7062C((int)a1);
  }
  else
  {
    a1[59] = 29;
  }
  a1[5] = a1[4];
  do
  {
    v3 = sub_708BC((int)a1);
    if ( v3 != 36 )
      break;
    v3 = sub_706A8((int)a1);
  }
  while ( !v3 );
  a1[41] = v3;
  return v3;
}
