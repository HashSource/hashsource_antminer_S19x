int *__fastcall sub_198D60(int *a1, char *nptr)
{
  int v2; // r3
  bool v4; // zf
  const char *v5; // r0

  v2 = (unsigned __int8)*nptr;
  *a1 = 0;
  a1[1] = 0;
  if ( v2 == 43 )
  {
    v5 = nptr + 1;
    a1[1] = 1;
    v2 = (unsigned __int8)nptr[1];
  }
  else
  {
    v4 = v2 == 45;
    if ( v2 == 45 )
    {
      v2 = 2;
      v5 = nptr + 1;
      a1[1] = 2;
    }
    else
    {
      v5 = nptr;
    }
    if ( v4 )
      v2 = (unsigned __int8)nptr[1];
  }
  if ( v2 && (unsigned int)(v2 - 48) > 9 )
    sub_946E0("malformed line offset: \"%s\"", nptr);
  *a1 = strtol(v5, 0, 10);
  return a1;
}
