void sub_3104C()
{
  int *v0; // r5
  int v1; // r0
  int v2; // r6
  int *v3; // r4

  if ( dword_BBE98 )
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
  v1 = sub_64BCC(0, v0, 72);
  v2 = dword_BBE9C;
  mru_alloc += (int)v0;
  v3 = (int *)(v1 + 72 * (_DWORD)v0);
  do
  {
    v3 -= 18;
    memset(v3, 0, 0x48u);
    v0 = (int *)((char *)v0 - 1);
    *v3 = v2;
    v2 = (int)v3;
    dword_BBE9C = (int)v3;
  }
  while ( v0 );
  ++dword_BBE98;
}
