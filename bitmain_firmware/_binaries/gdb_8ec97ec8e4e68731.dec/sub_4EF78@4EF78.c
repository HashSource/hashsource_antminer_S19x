void __fastcall sub_4EF78(int a1, int a2, int a3)
{
  int v5; // r6
  int v6; // r5
  int v7; // r4
  int v8; // r1
  bool v9; // zf

  if ( a3 > 0 )
  {
    v5 = a3 + 58;
    v6 = a2;
    v7 = 58;
    do
    {
      v8 = v7++;
      ((void (__fastcall *)(int, int, int))loc_1DEBAC)(a1, v8, v6);
      v6 += 8;
    }
    while ( v7 != v5 );
  }
  v9 = a1 == 0;
  if ( a1 )
    v9 = a2 == -256;
  if ( !v9 )
    JUMPOUT(0x1DEB38);
  sub_94700(
    "regcache.c",
    1087,
    "%s: Assertion `%s' failed.",
    "void regcache_raw_collect(const regcache*, int, void*)",
    "regcache != NULL && buf != NULL");
  JUMPOUT(0x1DEBEC);
}
