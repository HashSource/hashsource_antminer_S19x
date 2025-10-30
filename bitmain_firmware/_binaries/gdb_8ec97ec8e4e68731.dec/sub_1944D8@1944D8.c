int __fastcall sub_1944D8(int a1, int a2, _DWORD *a3)
{
  int (__fastcall *v3)(int, _DWORD *); // r3
  int v5; // r0

  if ( a1 )
  {
    v3 = *(int (__fastcall **)(int, _DWORD *))(a1 + 100);
    if ( v3 )
    {
      return v3(a2, a3);
    }
    else
    {
      *a3 = 0;
      return 0;
    }
  }
  else
  {
    v5 = sub_94700(
           (int)"language.c",
           636,
           "%s: Assertion `%s' failed.",
           "int language_sniff_from_mangled_name(const language_defn*, const char*, char**)",
           "lang != NULL");
    return sub_194538(v5);
  }
}
