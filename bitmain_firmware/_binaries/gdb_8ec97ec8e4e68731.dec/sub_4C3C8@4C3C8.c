int __fastcall sub_4C3C8(int a1, int a2)
{
  int *v4; // r6
  int v5; // r0
  int v6; // r3
  const char *v7; // r0

  *(_BYTE *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  if ( !a2 )
    return a1;
  v4 = _errno_location();
  *v4 = 0;
  v5 = personality(0xFFFFFFFF);
  *(_DWORD *)(a1 + 4) = v5;
  v6 = *v4;
  if ( !*v4 )
  {
    if ( (v5 & 0x40000) != 0 || (*(_BYTE *)a1 = 1, personality(v5 | 0x40000), (v6 = *v4) == 0) )
    {
      if ( !*(_BYTE *)a1 || (personality(0xFFFFFFFF) & 0x40000) != 0 )
        return a1;
      v6 = *v4;
    }
  }
  v7 = (const char *)sub_6FF98(v6);
  sub_946B0("Error disabling address space randomization: %s", v7);
  return a1;
}
