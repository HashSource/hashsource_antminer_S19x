int __fastcall sub_3E730(int a1)
{
  int result; // r0
  char v3[4]; // [sp+8h] [bp-804h] BYREF

  result = sub_2E910(a1, (unsigned __int8 *)(a1 + 97));
  if ( result )
  {
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 5 )
    {
      snprintf(v3, 0x800u, "Stratum connection to pool %d resumed", *(_DWORD *)a1);
      sub_1DB6C(6, v3, 0);
    }
    return sub_41E24(a1);
  }
  return result;
}
