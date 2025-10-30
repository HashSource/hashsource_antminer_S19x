void *__fastcall sub_294D0(int a1, unsigned int a2)
{
  void *result; // r0
  _BOOL4 v5; // r3
  int v6; // r3
  int v7; // r0
  char v8[512]; // [sp+0h] [bp-A04h] BYREF
  char s[2052]; // [sp+200h] [bp-804h] BYREF

  result = memset(v8, 0, sizeof(v8));
  v5 = a1 == 0;
  if ( a2 > 3 )
    v5 = 1;
  if ( v5 )
  {
    if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 2 )
    {
      snprintf(s, 0x800u, "%s: input bad param\n", "api_miner_chain_asic_status");
      return (void *)sub_3B6AC(3, s, 0, v6);
    }
  }
  else
  {
    sub_27264(a2, v8);
    v7 = sub_77728(v8);
    return (void *)sub_7611C(a1, "asic", v7);
  }
  return result;
}
