void __noreturn sub_16293C()
{
  _DWORD *v0; // r5
  _DWORD *v1; // r6
  _DWORD *i; // r4
  int v4; // r0
  void *v5; // r0

  v1 = (_DWORD *)v0[12];
  for ( i = (_DWORD *)v0[11]; v1 != i; ++i )
  {
    if ( *i )
      ((void (*)(void))loc_1625A8)();
  }
  v5 = (void *)v0[11];
  if ( v5 )
    sub_339E64(v5);
  sub_33AC04(v0);
  sub_338FFC(v4);
}
