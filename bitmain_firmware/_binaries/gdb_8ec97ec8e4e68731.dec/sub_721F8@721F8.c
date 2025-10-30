int sub_721F8()
{
  _DWORD *v0; // r6
  _DWORD *v1; // r0
  _DWORD *i; // r4

  v0 = (_DWORD *)dword_474948;
  if ( dword_474948 )
  {
    v1 = *(_DWORD **)(dword_474948 + 4 * dword_47494C);
    for ( i = (_DWORD *)(dword_474948 + 4 * dword_47494C); v1; i = &v0[dword_47494C] )
    {
      sub_71C8C(v1);
      *i = 0;
      sub_71FC8();
      v1 = (_DWORD *)v0[dword_47494C];
    }
    free(v0);
  }
  dword_474948 = 0;
  dword_47494C = 0;
  dword_474958 = 0;
  dword_4748F0 = 0;
  dword_474A6C = 0;
  dword_4748E8 = 0;
  dword_474A5C = 0;
  dword_474A64 = 0;
  return 0;
}
