void sub_30A38()
{
  int *v0; // r4
  int v1; // r3
  int v2; // r6
  _DWORD *v3; // r0

  if ( dword_BAE90 )
  {
    v0 = mru_incalloc[0];
    if ( !mru_incalloc[0] )
      return;
  }
  else
  {
    v0 = mru_initalloc;
    if ( !mru_initalloc )
      return;
  }
  v1 = sub_63C68(0, v0, 72) + 72 * (_DWORD)v0;
  v2 = dword_BAE94;
  mru_alloc += (int)v0;
  do
  {
    v3 = memset((void *)(v1 - 72), 0, 0x48u);
    v0 = (int *)((char *)v0 - 1);
    *v3 = v2;
    v1 = (int)v3;
    dword_BAE94 = (int)v3;
    v2 = (int)v3;
  }
  while ( v0 );
  ++dword_BAE90;
}
