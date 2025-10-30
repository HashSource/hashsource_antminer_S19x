void __fastcall sub_1F88C(int a1)
{
  if ( !a1 )
  {
    sub_94700(
      "regcache.c",
      809,
      "%s: Assertion `%s' failed.",
      "void regcache_cooked_write_unsigned(regcache*, int, ULONGEST)",
      "regcache != NULL");
    JUMPOUT(0x1DFC5C);
  }
  JUMPOUT(0x1E02CC);
}
