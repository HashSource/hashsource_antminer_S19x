const char *sub_5095C()
{
  const char *result; // r0
  _DWORD v1[3]; // [sp+0h] [bp-2Ch]
  _DWORD v2[3]; // [sp+Ch] [bp-20h]
  _DWORD v3[3]; // [sp+18h] [bp-14h]
  int i; // [sp+24h] [bp-8h]

  v3[0] = "stratum+tcp://ss.antpool.com:3333";
  v3[1] = "stratum+tcp://ss.antpool.com:443";
  v3[2] = "stratum+tcp://ss.antpool.com:25";
  v2[0] = "shenzhen+test+btc";
  v2[1] = "shenzhen+test+btc";
  v2[2] = "shenzhen+test+btc";
  result = (const char *)&unk_73900;
  v1[0] = &unk_73900;
  v1[1] = &unk_73900;
  v1[2] = &unk_73900;
  for ( i = 0; i <= 2; ++i )
  {
    sub_30290((const char *)v3[i]);
    sub_3054C((const char *)v2[i]);
    result = sub_30770(v1[i]);
  }
  return result;
}
