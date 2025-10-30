int __fastcall sub_31E544(_DWORD *a1, char *s)
{
  int v2; // r4
  char **v5; // r5
  size_t v6; // r6

  v2 = s == 0;
  if ( !a1 )
    v2 = 1;
  if ( v2 )
    return 0;
  v5 = &off_433404;
  v6 = strlen(s);
  while ( v5[1] != (char *)v6 || strcmp(s, *v5) )
  {
    ++v2;
    v5 += 5;
    if ( v2 == 33 )
      return 0;
  }
  a1[1] = 0;
  *a1 = 39;
  a1[2] = &(&off_433404)[5 * v2];
  return 1;
}
