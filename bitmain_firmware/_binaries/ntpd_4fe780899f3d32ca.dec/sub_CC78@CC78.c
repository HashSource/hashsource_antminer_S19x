bool __fastcall sub_CC78(unsigned __int16 *a1, int a2)
{
  int v2; // r12
  bool v3; // zf
  _BOOL4 v4; // r3
  const char *v6; // r0
  unsigned int v7; // r6
  unsigned int v8; // r3
  _BOOL4 v9; // lr
  bool v10; // zf

  v2 = *a1;
  if ( v2 == 2 )
  {
    v7 = *((_DWORD *)a1 + 1);
    v8 = bswap32(v7);
    if ( HIWORD(v8) << 16 != 2139029504 )
    {
      v9 = (v8 & 0xFF000000) == 2130706432;
      if ( v8 == 2130706433 )
        v9 = 0;
      if ( v9 )
        goto LABEL_14;
    }
    v10 = a2 == 387;
    if ( a2 != 387 )
      v10 = a2 == 407;
    if ( !v10 && a2 != 392 )
    {
      if ( a2 != 343 )
        return 1;
      goto LABEL_24;
    }
    v4 = (v8 & 0xF0000000) == -536870912;
  }
  else
  {
    v3 = a2 == 387;
    if ( a2 != 387 )
      v3 = a2 == 407;
    if ( !v3 && a2 != 392 )
    {
      if ( a2 != 343 )
        goto LABEL_9;
      goto LABEL_13;
    }
    v4 = *((unsigned __int8 *)a1 + 8) == 255;
  }
  if ( v4 )
  {
LABEL_14:
    v6 = (const char *)sub_6C2E8();
    sub_64E00(3, "attempt to configure invalid address %s", v6);
    return 0;
  }
  if ( a2 == 343 )
  {
    if ( v2 != 2 )
    {
LABEL_13:
      if ( *((unsigned __int8 *)a1 + 8) != 255 )
        goto LABEL_14;
      goto LABEL_9;
    }
    v7 = *((_DWORD *)a1 + 1);
LABEL_24:
    if ( (v7 & 0xF0) != 0xE0 )
      goto LABEL_14;
    return 1;
  }
LABEL_9:
  if ( v2 != 10 )
    return 1;
  return ipv6_works != 0;
}
