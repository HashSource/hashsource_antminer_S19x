bool sub_43DC0()
{
  _BOOL4 v0; // r5
  const char **v1; // r4
  int v2; // r5
  const char **v3; // r6
  const char *v4; // t1

  if ( dword_B66A0[0] > 0 )
  {
    v1 = (const char **)&unk_B66A4;
    v2 = 0;
    v3 = (const char **)((char *)&unk_B66A4 + 4 * dword_B66A0[0]);
    do
    {
      v4 = *v1++;
      if ( !strcmp(v4, "TEST") )
        ++v2;
    }
    while ( v1 != v3 );
    v0 = v2 > 2;
  }
  else
  {
    v0 = 0;
  }
  byte_B6EC0 = v0;
  return v0;
}
