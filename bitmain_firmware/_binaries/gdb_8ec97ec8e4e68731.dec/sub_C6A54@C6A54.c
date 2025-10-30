int sub_C6A54()
{
  _DWORD *v0; // r4
  int v1; // r6
  _DWORD *v2; // r5
  int v3; // r0

  v0 = (_DWORD *)dword_478348;
  if ( !dword_478348 )
    return 0;
  v1 = 0;
  do
  {
    while ( 1 )
    {
      if ( v0[3] == 2 && v0[4] == 1 )
      {
        v2 = (_DWORD *)v0[7];
        if ( v2 )
          break;
      }
      v0 = (_DWORD *)v0[2];
      if ( !v0 )
        return v1;
    }
    do
    {
      v3 = (*(int (__fastcall **)(_DWORD *))(v0[1] + 24))(v2);
      v2 = (_DWORD *)*v2;
      v1 += v3;
    }
    while ( v2 );
    v0 = (_DWORD *)v0[2];
  }
  while ( v0 );
  return v1;
}
