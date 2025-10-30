_DWORD *sub_4B330()
{
  _DWORD *v0; // r5
  __pid_t v1; // r4
  int stat_loc; // [sp+4h] [bp-8h] BYREF

  v0 = (_DWORD *)dword_4726BC;
  if ( dword_4726BC )
  {
    do
    {
      v1 = ps_getpid_0(v0 + 1);
      do
        kill(v1, 9);
      while ( v1 == waitpid(v1, &stat_loc, 0) && (unsigned __int8)stat_loc == 127 );
      v0 = (_DWORD *)*v0;
    }
    while ( v0 );
  }
  return sub_4A2D4();
}
