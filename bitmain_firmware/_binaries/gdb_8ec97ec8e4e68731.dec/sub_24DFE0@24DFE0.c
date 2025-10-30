void __noreturn sub_24DFE0()
{
  int v0; // r4
  void **v1; // r7
  void **i; // r5
  void *v3; // r6
  void *v4; // t1
  void *v5; // r0
  void *v6; // r0

  sub_1F5214((void **)(v0 + 72));
  sub_1F5214((void **)(v0 + 60));
  v1 = *(void ***)(v0 + 48);
  for ( i = *(void ***)(v0 + 44); v1 != i; ++i )
  {
    v4 = *i;
    v3 = v4;
    if ( v4 )
    {
      sub_C0960((int)v3);
      sub_33AC04(v3);
    }
  }
  v5 = *(void **)(v0 + 44);
  if ( v5 )
    sub_339E64(v5);
  v6 = *(void **)(v0 + 32);
  if ( v6 )
    sub_339E64(v6);
  sub_338FFC(v6);
}
