void __fastcall sub_25B70(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  _DWORD *v9; // r0

  if ( a3 != 15 )
  {
    if ( dword_487978 )
    {
      v9 = (_DWORD *)sub_242FC8(a1);
      sub_2594B0(*v9, "displaced: writing r%d value %.8lx\n", a3, a5);
    }
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
  sub_20CD4(a1, a2, a5, a6, a7);
}
