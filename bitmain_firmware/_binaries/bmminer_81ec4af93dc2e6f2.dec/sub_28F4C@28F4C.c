void *__fastcall sub_28F4C(int a1, unsigned int a2)
{
  void *result; // r0
  _BOOL4 v5; // r3
  int v6; // r3
  int v7; // r0
  char v8[512]; // [sp+0h] [bp-A04h] BYREF
  char s[2052]; // [sp+200h] [bp-804h] BYREF

  result = memset(v8, 0, sizeof(v8));
  v5 = a2 > 3;
  if ( !a1 )
    v5 = 1;
  if ( v5 )
  {
    if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 2 )
    {
      snprintf(s, 0x800u, "%s: input bad param\n", "api_miner_chain_asic_status");
      return (void *)sub_3AF5C(3, s, 0, v6);
    }
  }
  else
  {
    sub_26D18(a2, v8);
    v7 = sub_74258(v8);
    return (void *)sub_72C40(a1, "asic", v7);
  }
  return result;
}
