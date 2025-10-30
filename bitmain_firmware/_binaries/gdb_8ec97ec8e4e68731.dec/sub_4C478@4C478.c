int __fastcall sub_4C478(int a1)
{
  int *v3; // r5
  const char *v4; // r0

  if ( !*(_BYTE *)a1 )
    return a1;
  v3 = _errno_location();
  *v3 = 0;
  personality(*(_DWORD *)(a1 + 4));
  if ( !*v3 )
    return a1;
  v4 = (const char *)sub_6FF98(*v3);
  sub_946B0("Error restoring address space randomization: %s", v4);
  return a1;
}
