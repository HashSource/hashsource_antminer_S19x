char *__fastcall sub_F5004(const char *a1)
{
  unsigned int v1; // r4
  char *v2; // r0
  char *v3; // r3
  int v4; // r2
  int v5; // t1

  v1 = (unsigned int)a1;
  v2 = strrchr(a1, 47);
  if ( !v2 || !*v2 )
    return (char *)v1;
  if ( v2[1] )
    return v2 + 1;
  v3 = v2 - 1;
  v4 = (unsigned __int8)*(v2 - 1);
  if ( v1 < (unsigned int)(v2 - 1) )
  {
    while ( v4 != 47 )
    {
      v5 = (unsigned __int8)*--v3;
      v4 = v5;
      if ( (char *)v1 == v3 )
        goto LABEL_11;
    }
    return v3 + 1;
  }
LABEL_11:
  if ( v4 == 47 )
    return v3 + 1;
  return (char *)v1;
}
