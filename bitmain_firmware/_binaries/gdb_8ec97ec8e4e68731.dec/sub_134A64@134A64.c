void __fastcall sub_134A64(int a1, _DWORD *a2)
{
  const char *v3; // r0

  if ( !sub_12E694(a1, 29, (int)a2) )
  {
    v3 = (const char *)sub_1B87A8(*a2);
    sub_946E0("Dwarf Error: Problem turning containing type into gdb type [in module %s]", v3);
  }
  JUMPOUT(0x1343E0);
}
