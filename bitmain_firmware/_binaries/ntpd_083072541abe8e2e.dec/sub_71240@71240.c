_DWORD *__fastcall sub_71240(_DWORD *result, int *a2)
{
  int **v2; // r3
  int v3; // r2
  int v4; // r3
  int v5; // t1

  if ( !result || *result != 1281586296 )
    sub_6ECC0(
      (int)"./../lib/isc/log.c",
      572,
      0,
      "(((lctx) != ((void *)0)) && (((const isc__magic_t *)(lctx))->magic == ((('L') << 24 | ('c') << 16 | ('t') << 8 | ('x')))))");
  if ( !a2 || !*a2 )
    sub_6ECC0((int)"./../lib/isc/log.c", 573, 0, "categories != ((void *)0) && categories[0].name != ((void *)0)");
  v2 = (int **)result[2];
  if ( !v2 )
  {
    result[2] = a2;
LABEL_13:
    v4 = result[3];
    do
    {
      a2[1] = v4++;
      v5 = a2[2];
      a2 += 2;
    }
    while ( v5 );
    result[3] = v4;
    return result;
  }
  while ( *v2 )
  {
    if ( v2[1] == (int *)-1 )
      v2 = (int **)*v2;
    else
      v2 += 2;
  }
  *v2 = a2;
  v3 = *a2;
  v2[1] = (int *)-1;
  if ( v3 )
    goto LABEL_13;
  return result;
}
