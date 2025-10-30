void __fastcall __noreturn sub_115258(int a1)
{
  const char *v2; // r1

  v2 = (const char *)sub_322B3C();
  if ( v2 )
    sub_946E0("DWARF operator %s cannot be translated to an agent expression", v2);
  sub_946E0("Unknown DWARF operator 0x%02x cannot be translated to an agent expression", a1);
}
