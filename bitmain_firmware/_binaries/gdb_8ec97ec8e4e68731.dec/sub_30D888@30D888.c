char *__fastcall sub_30D888(const char *a1, int a2)
{
  const char *v2; // r6
  char **v5; // r4
  int v6; // r5
  size_t v7; // r7
  size_t i; // r0

  v2 = " new";
  v5 = off_432950;
  v6 = 0;
  v7 = strlen(a1);
  for ( i = 4; ; i = strlen(v2) )
  {
    if ( v7 == i && (((unsigned int)v5[2] ^ a2) & 2) == 0 && !memcmp(v2, a1, v7) )
      return off_432950[3 * v6];
    ++v6;
    v5 += 3;
    if ( v6 == 79 )
      break;
    v2 = v5[1];
  }
  return 0;
}
