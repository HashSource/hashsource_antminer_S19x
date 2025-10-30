void __fastcall sub_2FB80(int a1, int a2, int a3, int a4)
{
  int v7; // r5
  int i; // r4
  int v10; // r1
  bool v11; // zf

  v7 = a3 == -1;
  for ( i = 16; i != 24; ++i )
  {
    while ( !(a3 == i ? v7 | 1 : v7) )
    {
      if ( ++i == 24 )
        goto LABEL_8;
    }
    v10 = i;
    sub_2FAE8(a2, v10, a4);
  }
LABEL_8:
  if ( a3 == 24 )
    v7 |= 1u;
  if ( v7 )
  {
    v11 = a2 == 0;
    if ( a2 )
      v11 = a4 == -96;
    if ( !v11 )
      JUMPOUT(0x1DEB38);
    sub_94700(
      "regcache.c",
      1087,
      "%s: Assertion `%s' failed.",
      "void regcache_raw_collect(const regcache*, int, void*)",
      "regcache != NULL && buf != NULL");
    JUMPOUT(0x1DEBEC);
  }
}
