int __fastcall sub_28540(int result)
{
  double v1; // d0
  int v2; // r4
  int v3; // r3
  int v4; // r0
  char v5[4]; // [sp+8h] [bp-810h] BYREF
  int v6; // [sp+Ch] [bp-80Ch]
  int v7; // [sp+10h] [bp-808h]
  int v8; // [sp+14h] [bp-804h]
  char s[2048]; // [sp+18h] [bp-800h] BYREF

  v2 = result;
  *(_DWORD *)v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( result )
  {
    sub_2671C();
    snprintf(v5, 0x10u, "%.2f", v1);
    v4 = sub_74258(v5);
    return sub_72C40(v2, "rate_5s", v4);
  }
  else if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 2 )
  {
    snprintf(s, 0x800u, "%s: input bad json param\n", "api_miner_rate_5s");
    return sub_3AF5C(3, s, 0, v3);
  }
  return result;
}
