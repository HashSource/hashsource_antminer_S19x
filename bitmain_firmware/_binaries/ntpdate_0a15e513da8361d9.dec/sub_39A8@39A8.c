int __fastcall sub_39A8(int a1)
{
  struct sockaddr *v2; // r7
  unsigned int v3; // lr
  unsigned int v4; // r12
  int v5; // r0
  unsigned int v6; // r3
  int v7; // r0
  const char *v8; // r0
  int result; // r0
  __int16 v10; // r3
  unsigned int v11; // r3
  const char *v12; // r0
  const char *v13; // r0
  _BYTE v14[4]; // [sp+4h] [bp-850h] BYREF
  int v15; // [sp+8h] [bp-84Ch]
  int v16; // [sp+Ch] [bp-848h]
  int v17; // [sp+10h] [bp-844h]
  int v18; // [sp+14h] [bp-840h]
  int v19; // [sp+18h] [bp-83Ch]
  int v20; // [sp+1Ch] [bp-838h]
  int v21; // [sp+20h] [bp-834h]
  int v22; // [sp+24h] [bp-830h]
  int v23; // [sp+28h] [bp-82Ch]
  unsigned int v24; // [sp+2Ch] [bp-828h]
  unsigned int v25; // [sp+30h] [bp-824h]
  unsigned int v26; // [sp+34h] [bp-820h]
  int v27; // [sp+84Ch] [bp-8h]

  v2 = (struct sockaddr *)(a1 + 4);
  if ( debug )
  {
    v13 = (const char *)sub_FAE0(a1 + 4);
    _printf_chk(1, "transmit(%s)\n", v13);
  }
  v14[1] = 0;
  v17 = 0;
  v19 = 0;
  v18 = 0;
  v21 = 0;
  v20 = 0;
  v23 = 0;
  v22 = 0;
  v14[2] = 3;
  v14[0] = ~(~(8 * (sys_version & 7)) & 0x3C);
  v14[3] = -6;
  v15 = 256;
  v16 = 256;
  if ( sys_authenticate )
  {
    v26 = bswap32(sys_authkey);
    sub_6854(a1 + 244);
    v3 = *(_DWORD *)(a1 + 248);
    v4 = *(_DWORD *)(a1 + 244);
    v5 = sys_authkey;
    v6 = v3 + sys_authdelay;
    *(_DWORD *)(a1 + 248) = v3 + sys_authdelay;
    if ( v3 > v6 )
      ++v4;
    *(_DWORD *)(a1 + 244) = v4;
    v25 = bswap32(v6);
    v24 = bswap32(v4);
    v7 = sub_89C4(v5, v14, 48);
    sub_388C(v2, v14, v7 + 48);
    if ( debug > 1 )
    {
      v8 = (const char *)sub_FAE0(v2);
      _printf_chk(1, "transmit auth to %s\n", v8);
    }
  }
  else
  {
    sub_6854(a1 + 244);
    v11 = *(_DWORD *)(a1 + 248);
    v24 = bswap32(*(_DWORD *)(a1 + 244));
    v25 = bswap32(v11);
    sub_388C(v2, v14, 0x30u);
    if ( debug > 1 )
    {
      v12 = (const char *)sub_FAE0(v2);
      _printf_chk(1, "transmit to %s\n", v12);
    }
  }
  result = v27;
  v10 = *(_WORD *)(a1 + 68);
  *(_DWORD *)(a1 + 60) = sys_timeout + current_time;
  *(_WORD *)(a1 + 68) = v10 + 1;
  return result;
}
