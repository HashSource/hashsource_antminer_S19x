int __fastcall sub_740B0(int a1, int a2)
{
  bool v2; // cc
  int result; // r0
  int v6; // r4
  int v7; // [sp+20h] [bp-82Ch] BYREF
  __int16 v8; // [sp+24h] [bp-828h]
  _DWORD s[8]; // [sp+28h] [bp-824h] BYREF
  char v10[2052]; // [sp+48h] [bp-804h] BYREF

  v2 = (unsigned int)dword_65E468 > 0x62;
  if ( dword_65E468 != 98 )
    v2 = (unsigned int)(dword_65E468 - 100) > 2;
  if ( v2 )
    return -1;
  v7 = 235186773;
  v8 = 3588;
  memset(s, 0, sizeof(s));
  if ( a1 )
  {
    HIBYTE(v8) = -114;
    HIBYTE(v7) = -114;
  }
  if ( sub_73C90(dword_65E460, (unsigned __int8 *)&v7, 6u, (unsigned __int8 *)s, 0xEu) )
  {
    strcpy(v10, "Get power error code failed\n");
    nullsub_8();
    return -1;
  }
  v6 = s[2];
  result = s[2];
  if ( a2 )
  {
    snprintf(
      v10,
      0x800u,
      "Get power error code[4-7 8-11] %02x%02x%02x%02x %02x%02x%02x%02x, err_code:0x%08x\n",
      LOBYTE(s[1]),
      BYTE1(s[1]),
      BYTE2(s[1]),
      HIBYTE(s[1]),
      LOBYTE(s[2]),
      BYTE1(s[2]),
      BYTE2(s[2]),
      HIBYTE(s[2]),
      s[2]);
    nullsub_8();
    return v6;
  }
  return result;
}
