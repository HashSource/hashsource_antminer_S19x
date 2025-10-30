int __fastcall sub_379A0(const char *a1)
{
  int v1; // r4
  struct tm *v3; // r0
  time_t timer[2]; // [sp+1Ch] [bp-ACh] BYREF
  char s1[4]; // [sp+24h] [bp-A4h] BYREF
  int v7; // [sp+28h] [bp-A0h]
  int v8; // [sp+2Ch] [bp-9Ch]
  int v9; // [sp+30h] [bp-98h]
  int v10; // [sp+34h] [bp-94h]
  int v11; // [sp+38h] [bp-90h]
  int v12; // [sp+3Ch] [bp-8Ch]
  int v13; // [sp+40h] [bp-88h]
  _DWORD v14[8]; // [sp+44h] [bp-84h] BYREF
  _DWORD v15[10]; // [sp+64h] [bp-64h] BYREF
  char s[60]; // [sp+8Ch] [bp-3Ch] BYREF

  v1 = 0;
  *(_DWORD *)s1 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  memset(v14, 0, sizeof(v14));
  memset(v15, 0, sizeof(v15));
  memset(s, 0, 0x3Bu);
  sub_3DFCC(timer);
  while ( 1 )
  {
    timer[0] -= v1;
    v3 = localtime(timer);
    ++v1;
    snprintf(
      (char *)v15,
      0x28u,
      aD02d02d02d02d0_2,
      v3->tm_year + 1900,
      v3->tm_mon + 1,
      v3->tm_mday,
      v3->tm_hour,
      v3->tm_min,
      v3->tm_sec);
    snprintf(s, 0x3Bu, "%s%s", "BITMAIN_OPENSOURCE", (const char *)v15);
    sub_3CED0((int)s, 0x3Bu);
    sub_3CED0((int)v14, 0x20u);
    if ( !strncmp(s1, a1, 0x20u) )
      break;
    if ( v1 == 4 )
      return 0;
  }
  puts("socket auth pass!!!!!!!!!!!!!!!!!!!!");
  return 1;
}
