void __fastcall __noreturn sub_15D64(int a1, int a2)
{
  bool v2; // zf
  const char *v3; // r0

  v2 = a1 >> 31 == a2;
  if ( a1 >> 31 == a2 )
    v2 = 1;
  if ( !v2 )
  {
    v3 = (const char *)sub_98880();
    sub_946E0("Unable to access DWARF register number %s", v3);
  }
  sub_946E0("Unable to access DWARF register number %d", a1);
}
