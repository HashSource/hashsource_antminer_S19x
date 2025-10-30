int __fastcall sub_25E54(const char *a1)
{
  int v2; // r4
  time_t v3; // r3
  struct tm *v4; // r0
  time_t timer[2]; // [sp+1Ch] [bp-B0h] BYREF
  char s[32]; // [sp+24h] [bp-A8h] BYREF
  _BYTE v8[32]; // [sp+44h] [bp-88h] BYREF
  char v9[40]; // [sp+64h] [bp-68h] BYREF
  char v10[64]; // [sp+8Ch] [bp-40h] BYREF

  memset(s, 0, sizeof(s));
  memset(v8, 0, sizeof(v8));
  memset(v9, 0, sizeof(v9));
  memset(v10, 0, 0x3Bu);
  v2 = 0;
  sub_4A60C(timer);
  while ( 1 )
  {
    v3 = timer[0] - v2++;
    timer[0] = v3;
    v4 = localtime(timer);
    snprintf(
      v9,
      0x28u,
      aD02d02d02d02d0_1,
      v4->tm_year + 1900,
      v4->tm_mon + 1,
      v4->tm_mday,
      v4->tm_hour,
      v4->tm_min,
      v4->tm_sec);
    snprintf(v10, 0x3Bu, "%s%s", "BITMAIN_OPENSOURCE", v9);
    sub_4889C((int)v10, 0x3Bu);
    sub_4889C((int)v8, 0x20u);
    if ( !strncmp(s, a1, 0x20u) )
      break;
    if ( v2 == 4 )
      return 0;
  }
  puts("socket auth pass!!!!!!!!!!!!!!!!!!!!");
  return 1;
}
