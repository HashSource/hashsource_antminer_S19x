void __fastcall __noreturn sub_16420(int a1, const char *a2, int a3)
{
  const char *v3; // r4
  int v4; // r0
  const char *v5; // r5
  const char *v6; // r0

  v3 = "static";
  if ( !a1 )
    v3 = "global";
  v4 = a3;
  if ( !a3 )
    v4 = ((int (*)(void))loc_163EC)();
  v5 = a2;
  v6 = (const char *)((int (__fastcall *)(int))loc_2043D4)(v4);
  sub_946E0(
    "Internal: %s symbol `%s' found in %s psymtab but not in symtab.\n"
    "%s may be an inlined function, or may be a template function\n"
    "\t (if a template, try specifying an instantiation: %s<type>).",
    v3,
    v5,
    v6,
    v5,
    v5);
}
