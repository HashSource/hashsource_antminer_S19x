int __fastcall sub_70050(_DWORD *a1)
{
  FILE *v2; // r0
  int v3; // r3
  int *v4; // r3
  int v5; // r3

  if ( !a1 || *a1 != 1229343047 )
    sub_6ECC0(
      (int)"./../lib/isc/unix/interfaceiter.c",
      278,
      0,
      "(((iter) != ((void *)0)) && (((const isc__magic_t *)(iter))->magic == ((('I') << 24 | ('F') << 16 | ('I') << 8 | ('G')))))");
  v2 = (FILE *)a1[42];
  if ( v2 )
  {
    rewind(v2);
    sub_6F69C((int)a1);
  }
  else
  {
    a1[59] = 29;
  }
  a1[5] = a1[4];
  while ( 1 )
  {
    v3 = sub_6F874((int)a1);
    if ( v3 != 36 )
      break;
    v4 = (int *)a1[5];
    if ( v4 )
    {
      v5 = *v4;
      a1[5] = v5;
      if ( v5 )
        continue;
    }
    if ( dword_107240 )
    {
      v3 = 29;
      break;
    }
    v3 = sub_6F69C((int)a1);
    if ( v3 )
      break;
  }
  a1[41] = v3;
  return v3;
}
