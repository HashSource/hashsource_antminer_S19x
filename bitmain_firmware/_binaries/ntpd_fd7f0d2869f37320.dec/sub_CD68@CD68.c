bool __fastcall sub_CD68(unsigned __int16 *a1, int a2)
{
  int v2; // r12
  bool v3; // zf
  int v4; // r3
  _BOOL4 v6; // r3
  const char *v7; // r0
  unsigned int v8; // r6
  unsigned int v9; // r3
  _BOOL4 v10; // lr
  bool v11; // zf
  int v12; // lr

  v2 = *a1;
  if ( v2 == 2 )
  {
    v8 = *((_DWORD *)a1 + 1);
    v9 = bswap32(v8);
    if ( HIWORD(v9) << 16 != 2139029504 )
    {
      v10 = v9 != 2130706433;
      if ( (v9 & 0xFF000000) != 0x7F000000 )
        v10 = 0;
      if ( v10 )
        goto LABEL_19;
    }
    v11 = a2 == 407;
    if ( a2 != 407 )
      v11 = a2 == 387;
    v12 = v11;
    if ( a2 == 392 )
      v12 |= 1u;
    if ( !v12 )
    {
      if ( a2 != 343 )
        return 1;
      goto LABEL_36;
    }
    v6 = (v9 & 0xF0000000) == -536870912;
LABEL_15:
    if ( v6 )
      goto LABEL_19;
    if ( a2 != 343 )
      goto LABEL_11;
    if ( v2 != 2 )
    {
LABEL_18:
      if ( *((unsigned __int8 *)a1 + 8) == 255 )
        goto LABEL_11;
LABEL_19:
      v7 = (const char *)sub_6D2C0();
      sub_65D40(3, "attempt to configure invalid address %s", v7);
      return 0;
    }
    v8 = *((_DWORD *)a1 + 1);
LABEL_36:
    if ( (v8 & 0xF0) == 0xE0 )
      return 1;
    goto LABEL_19;
  }
  v3 = a2 == 407;
  if ( a2 != 407 )
    v3 = a2 == 387;
  v4 = v3;
  if ( a2 == 392 )
    v4 |= 1u;
  if ( v4 )
  {
    v6 = *((unsigned __int8 *)a1 + 8) == 255;
    goto LABEL_15;
  }
  if ( a2 == 343 )
    goto LABEL_18;
LABEL_11:
  if ( v2 != 10 )
    return 1;
  return ipv6_works != 0;
}
