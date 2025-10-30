int __fastcall sub_3236D8(unsigned int a1)
{
  char *v1; // r3
  int v2; // r12
  int i; // r2
  int v4; // r1
  int v6; // r3

  v1 = (char *)&loc_3FFF8 + 3;
  v2 = 30;
  for ( i = 0; ; v1 = (char *)dword_4381A8[4 * i + 4 * ((unsigned int)(v4 - i) >> 1)] )
  {
    v4 = i + ((unsigned int)(v2 - i) >> 1);
    if ( a1 <= (unsigned int)v1 )
      break;
    v6 = i + ((unsigned int)(v2 - i) >> 1);
    v4 = v2;
LABEL_9:
    i = v6 + 1;
    if ( v6 + 1 == v4 )
      goto LABEL_7;
    v2 = v4;
  }
  while ( i != v4 )
  {
    v6 = i + ((unsigned int)(v4 - i) >> 1);
    if ( dword_4381A8[4 * v6] < a1 )
      goto LABEL_9;
    v4 = i + ((unsigned int)(v4 - i) >> 1);
  }
LABEL_7:
  if ( dword_4381A8[4 * i] < a1 )
  {
    fprintf((FILE *)stderr, "Cannot find prime bigger than %lu\n", a1);
    abort();
  }
  return i;
}
