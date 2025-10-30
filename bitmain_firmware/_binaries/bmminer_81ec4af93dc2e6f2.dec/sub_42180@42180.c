bool sub_42180()
{
  _BOOL4 v0; // r5
  const char **v1; // r4
  const char **v2; // r6
  int v3; // r5
  const char *v4; // t1

  if ( dword_B3930[0] > 0 )
  {
    v1 = (const char **)&unk_B3934;
    v2 = (const char **)((char *)&unk_B3934 + 4 * dword_B3930[0]);
    v3 = 0;
    do
    {
      v4 = *v1++;
      if ( !strcmp(v4, "TEST") )
        ++v3;
    }
    while ( v1 != v2 );
    v0 = v3 > 2;
  }
  else
  {
    v0 = 0;
  }
  byte_B4148 = v0;
  return v0;
}
