int __fastcall sub_28624(int result)
{
  double v1; // d0
  int v2; // r4
  int v3; // r0
  int v4; // r3
  char s[4]; // [sp+8h] [bp-810h] BYREF
  int v6; // [sp+Ch] [bp-80Ch]
  int v7; // [sp+10h] [bp-808h]
  int v8; // [sp+14h] [bp-804h]
  char v9[2048]; // [sp+18h] [bp-800h] BYREF

  v2 = result;
  *(_DWORD *)s = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( result )
  {
    sub_26740();
    if ( v1 < 0.01 )
      v1 = dbl_B4128 / ((double)dword_5BC038 - (double)dword_5BAF84);
    snprintf(s, 0x10u, "%.2lf", v1);
    v3 = sub_74258(s);
    return sub_72C40(v2, "rate_30m", v3);
  }
  else if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 2 )
  {
    snprintf(v9, 0x800u, "%s: input bad json param\n", "api_miner_rate_30m");
    return sub_3AF5C(3, v9, 0, v4);
  }
  return result;
}
