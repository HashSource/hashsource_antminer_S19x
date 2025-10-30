int __fastcall sub_384C(int a1)
{
  struct sockaddr *v2; // r8
  int v3; // r0
  int v4; // r0
  unsigned int v5; // kr00_4
  int v6; // kr04_4
  unsigned int v7; // r2
  unsigned __int64 v8; // kr08_8
  int v9; // r0
  int result; // r0
  __int16 v11; // r3
  unsigned int v12; // r3
  const char *v13; // r0
  const char *v14; // r0
  const char *v15; // r0
  _BYTE v16[4]; // [sp+4h] [bp-84Ch] BYREF
  int v17; // [sp+8h] [bp-848h]
  int v18; // [sp+Ch] [bp-844h]
  int v19; // [sp+10h] [bp-840h]
  int v20; // [sp+14h] [bp-83Ch]
  int v21; // [sp+18h] [bp-838h]
  int v22; // [sp+1Ch] [bp-834h]
  int v23; // [sp+20h] [bp-830h]
  int v24; // [sp+24h] [bp-82Ch]
  int v25; // [sp+28h] [bp-828h]
  unsigned int v26; // [sp+2Ch] [bp-824h]
  unsigned int v27; // [sp+30h] [bp-820h]
  unsigned int v28; // [sp+34h] [bp-81Ch]

  v2 = (struct sockaddr *)(a1 + 4);
  if ( debug )
  {
    v15 = (const char *)sub_F658(a1 + 4);
    _printf_chk(1, "transmit(%s)\n", v15);
  }
  v3 = a1 + 244;
  v16[2] = 3;
  v16[1] = 0;
  v19 = 0;
  v21 = 0;
  v20 = 0;
  v23 = 0;
  v22 = 0;
  v25 = 0;
  v24 = 0;
  v16[3] = -6;
  v16[0] = ~(~((8 * sys_version) & 0x38) & 0x3C);
  v17 = 256;
  v18 = 256;
  if ( sys_authenticate )
  {
    v28 = bswap32(sys_authkey);
    sub_65AC(v3);
    v4 = sys_authkey;
    v5 = *(_DWORD *)(a1 + 248);
    v6 = sys_authdelay;
    v7 = *(_DWORD *)(a1 + 244);
    *(_DWORD *)(a1 + 248) = v5 + sys_authdelay;
    v8 = __PAIR64__(v7, v5) + (unsigned int)v6;
    *(_DWORD *)(a1 + 244) = HIDWORD(v8);
    v27 = bswap32(v8);
    v26 = bswap32(HIDWORD(v8));
    v9 = sub_8608(v4, v16, 48);
    sub_3730(v2, v16, v9 + 48);
    if ( debug > 1 )
    {
      v14 = (const char *)sub_F658(v2);
      _printf_chk(1, "transmit auth to %s\n", v14);
    }
  }
  else
  {
    sub_65AC(v3);
    v12 = bswap32(*(_DWORD *)(a1 + 248));
    v26 = bswap32(*(_DWORD *)(a1 + 244));
    v27 = v12;
    sub_3730(v2, v16, 0x30u);
    if ( debug > 1 )
    {
      v13 = (const char *)sub_F658(v2);
      _printf_chk(1, "transmit to %s\n", v13);
    }
  }
  result = _stack_chk_guard;
  v11 = *(_WORD *)(a1 + 68) + 1;
  *(_DWORD *)(a1 + 60) = current_time + sys_timeout;
  *(_WORD *)(a1 + 68) = v11;
  return result;
}
