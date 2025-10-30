int sub_2A65D0()
{
  const char *v0; // r1
  char **v1; // r4
  const char *v2; // r3
  int v3; // r0
  char **i; // r12
  const char *v5; // t1
  int result; // r0
  const char *v7; // r12
  const char *v8; // r3
  _DWORD *v9; // r2
  int v10; // r1
  const char *v11; // t1

  v0 = " ";
  v1 = &off_4115C4;
  v2 = (const char *)&unk_41D3CC;
  v3 = 0;
  for ( i = &off_4115C4; ; ++i )
  {
    while ( 1 )
    {
      v2 = (const char *)*((_DWORD *)v2 + 12);
      if ( !v2 )
        break;
      ++v3;
    }
    v2 = v0;
    if ( !v0 )
      break;
    ++v3;
    v5 = i[1];
    v0 = v5;
  }
  result = sub_2AB368(4 * (v3 + 2), 0);
  if ( result )
  {
    v7 = " ";
    v8 = (const char *)&unk_41D3CC;
    v9 = (_DWORD *)result;
    while ( 1 )
    {
      do
      {
        v10 = *((_DWORD *)v8 + 6);
        v8 = (const char *)*((_DWORD *)v8 + 12);
        *v9++ = v10;
      }
      while ( v8 );
      v8 = v7;
      if ( !v7 )
        break;
      v11 = v1[1];
      ++v1;
      v7 = v11;
    }
    *v9 = 0;
  }
  return result;
}
