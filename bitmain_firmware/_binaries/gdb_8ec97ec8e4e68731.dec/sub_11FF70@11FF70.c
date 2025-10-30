bool __fastcall sub_11FF70(const char **a1, const char **a2)
{
  const char *v4; // r0
  const char *v5; // r1

  if ( strcmp(*a1, *a2) )
    return 0;
  v4 = a1[1];
  v5 = a2[1];
  if ( v4 && v5 )
    return strcmp(v4, v5) == 0;
  else
    return v4 == v5;
}
