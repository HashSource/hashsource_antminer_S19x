_DWORD *__fastcall sub_273FA0(_DWORD *a1, char *s2)
{
  int v3; // r7
  _DWORD *v5; // r5
  int v6; // r4
  int v7; // r0

  if ( !a1 )
    return 0;
  v3 = *a1;
  if ( !*a1 )
    return 0;
  v5 = a1;
  v6 = 0;
  while ( 1 )
  {
    v7 = strcmp((const char *)v5[2], s2);
    ++v6;
    v5 += 2;
    if ( !v7 )
      break;
    if ( v6 == v3 )
      return 0;
  }
  return &a1[2 * v6];
}
