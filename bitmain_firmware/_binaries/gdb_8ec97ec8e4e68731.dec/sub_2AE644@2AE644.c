_DWORD *sub_2AE644()
{
  char ***v0; // r3
  int i; // r0
  char **v2; // t1
  _DWORD *result; // r0
  char ***v4; // r12
  _DWORD *v5; // r1
  char **v6; // lr
  char ***v7; // r2
  char **v8; // r3
  char **v9; // t1
  signed int v10; // r0

  v0 = off_470AA0;
  if ( *off_470AA0 )
  {
    for ( i = 0; ; ++i )
    {
      v2 = v0[1];
      ++v0;
      if ( !v2 )
        break;
    }
    v10 = 4 * (i + 2);
  }
  else
  {
    v10 = 4;
  }
  result = sub_2AB368(v10);
  if ( result )
  {
    v4 = off_470AA0;
    v5 = result;
    v6 = *off_470AA0;
    if ( *off_470AA0 )
    {
      v7 = off_470AA0;
      v8 = *off_470AA0;
      do
      {
        if ( v4 == v7 || v8 != v6 )
          *v5++ = *v8;
        v9 = v7[1];
        ++v7;
        v8 = v9;
      }
      while ( v9 );
    }
    *v5 = 0;
  }
  return result;
}
