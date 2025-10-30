void __fastcall sub_4EF24(int a1, int a2, int a3)
{
  int v4; // r6
  int v6; // r4
  int v7; // r1

  if ( a3 > 0 )
  {
    v4 = a3 + 58;
    v6 = 58;
    do
    {
      v7 = v6++;
      ((void (__fastcall *)(int, int, int))loc_1DE9C8)(a1, v7, a2);
      a2 += 8;
    }
    while ( v6 != v4 );
  }
  if ( !a1 )
  {
    sub_94700(
      "regcache.c",
      1006,
      "%s: Assertion `%s' failed.",
      "void regcache_raw_supply(regcache*, int, const void*)",
      "regcache != NULL");
    JUMPOUT(0x1DEA04);
  }
  JUMPOUT(0x1DE920);
}
