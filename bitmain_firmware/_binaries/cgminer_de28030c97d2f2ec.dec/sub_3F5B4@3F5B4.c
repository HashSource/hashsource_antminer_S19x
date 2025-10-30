int __fastcall sub_3F5B4(int a1)
{
  int result; // r0
  char v3[4]; // [sp+8h] [bp-804h] BYREF

  result = sub_2F908(a1, (unsigned __int8 *)(a1 + 97));
  if ( result )
  {
    if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
    {
      snprintf(v3, 0x800u, "Stratum connection to pool %d resumed", *(_DWORD *)a1);
      sub_1E4EC(6, v3, 0);
    }
    return sub_42C34(a1);
  }
  return result;
}
