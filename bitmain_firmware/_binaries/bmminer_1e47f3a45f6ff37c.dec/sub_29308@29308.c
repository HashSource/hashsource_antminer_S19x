int __fastcall sub_29308(int result, unsigned int a2)
{
  double v2; // d0
  _BOOL4 v3; // r2
  int v4; // r3
  int v5; // r4
  int v6; // r0
  char v7[4]; // [sp+8h] [bp-810h] BYREF
  int v8; // [sp+Ch] [bp-80Ch]
  int v9; // [sp+10h] [bp-808h]
  int v10; // [sp+14h] [bp-804h]
  char s[2048]; // [sp+18h] [bp-800h] BYREF

  v3 = result == 0;
  if ( a2 > 3 )
    v3 = 1;
  *(_DWORD *)v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  if ( v3 )
  {
    if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 2 )
    {
      snprintf(s, 0x800u, "%s: input bad param\n", "api_miner_chain_rate_real");
      return sub_3B6AC(3, s, 0, v4);
    }
  }
  else
  {
    v5 = result;
    sub_26EBC(a2);
    snprintf(v7, 0x10u, "%.2f", v2);
    v6 = sub_77728(v7);
    return sub_7611C(v5, "rate_real", v6);
  }
  return result;
}
