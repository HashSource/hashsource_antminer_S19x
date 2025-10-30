const char *__fastcall sub_7C420(const char *a1)
{
  const unsigned __int16 *v2; // r5
  const char *v3; // r0
  const char *v4; // r3
  int v5; // t1

  v2 = *_ctype_b_loc();
  while ( (v2[*(unsigned __int8 *)a1] & 0x2000) != 0 )
    ++a1;
  v3 = &a1[strlen(a1)];
  if ( a1 < v3 && (v2[*((unsigned __int8 *)v3 - 1)] & 0x2000) != 0 )
  {
    v4 = v3 - 1;
    do
    {
      v3 = v4;
      if ( a1 == v4 )
        break;
      v5 = *(unsigned __int8 *)--v4;
    }
    while ( (v2[v5] & 0x2000) != 0 );
  }
  *v3 = 0;
  return a1;
}
