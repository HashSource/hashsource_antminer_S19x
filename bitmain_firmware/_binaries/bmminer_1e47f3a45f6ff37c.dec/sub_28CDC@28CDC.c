int __fastcall sub_28CDC(int result)
{
  int v1; // r4
  int v2; // r0
  int v3; // r3
  char s[4]; // [sp+8h] [bp-810h] BYREF
  int v5; // [sp+Ch] [bp-80Ch]
  int v6; // [sp+10h] [bp-808h]
  int v7; // [sp+14h] [bp-804h]
  char v8[2048]; // [sp+18h] [bp-800h] BYREF

  v1 = result;
  *(_DWORD *)s = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( result )
  {
    snprintf(s, 0x10u, "%.2lf", dbl_B6EA0 / ((double)SLODWORD(flt_5C0EF0) - (double)dword_5BFE3C));
    v2 = sub_77728(s);
    return sub_7611C(v1, "rate_avg", v2);
  }
  else if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 2 )
  {
    snprintf(v8, 0x800u, "%s: input bad json param\n", "api_miner_rate_avg");
    return sub_3B6AC(3, v8, 0, v3);
  }
  return result;
}
