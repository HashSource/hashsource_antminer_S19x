int __fastcall sub_2875C(int result)
{
  int v1; // r4
  int v2; // r3
  int v3; // r0
  char v4[4]; // [sp+8h] [bp-810h] BYREF
  int v5; // [sp+Ch] [bp-80Ch]
  int v6; // [sp+10h] [bp-808h]
  int v7; // [sp+14h] [bp-804h]
  char s[2048]; // [sp+18h] [bp-800h] BYREF

  v1 = result;
  *(_DWORD *)v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( result )
  {
    snprintf(v4, 0x10u, "%.2lf", dbl_B4128 / ((double)dword_5BC038 - (double)dword_5BAF84));
    v3 = sub_74258(v4);
    return sub_72C40(v1, "rate_avg", v3);
  }
  else if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 2 )
  {
    snprintf(s, 0x800u, "%s: input bad json param\n", "api_miner_rate_avg");
    return sub_3AF5C(3, s, 0, v2);
  }
  return result;
}
