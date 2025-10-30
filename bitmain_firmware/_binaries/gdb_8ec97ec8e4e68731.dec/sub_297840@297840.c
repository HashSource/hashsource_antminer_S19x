int sub_297840()
{
  int v0; // r6
  const char **v1; // r4
  int v2; // r7
  size_t v3; // r5
  size_t v4; // r0
  const char **v5; // t1

  v0 = dword_48BB28;
  if ( !dword_48BB28 )
    return 0;
  v1 = *(const char ***)dword_48BB28;
  if ( !*(_DWORD *)dword_48BB28 )
    return 0;
  v2 = 0;
  do
  {
    v3 = strlen(*v1);
    v4 = strlen(v1[1]);
    v5 = *(const char ***)(v0 + 4);
    v0 += 4;
    v1 = v5;
    v2 += v3 + v4;
  }
  while ( v5 );
  return v2;
}
