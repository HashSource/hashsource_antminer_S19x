int __fastcall sub_2A43C(int result, int a2, int a3, int a4, int a5)
{
  int (__fastcall *v5)(int, int, int); // r3

  v5 = *(int (__fastcall **)(int, int, int))(a2 + 212);
  if ( v5 )
    result = v5(result, a5, a2);
  if ( !*(_DWORD *)(a2 + 140) )
  {
    if ( !a5 )
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
  return result;
}
