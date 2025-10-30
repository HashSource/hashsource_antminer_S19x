int __fastcall sub_D368(int result, int a2, int a3, const char *a4, int a5, int a6, _DWORD *a7)
{
  int v8; // r5
  _DWORD *v9; // r4
  const char *v10; // r9
  const char *v11; // r0
  int v12; // r11
  const char *v13; // r0
  _WORD v14[14]; // [sp+10h] [bp-24h] BYREF

  v8 = result;
  v9 = a7;
  if ( result )
  {
    v13 = gai_strerror(result);
    return sub_64E00(3, "giving up resolving unpeer %s: %s (%d)", a4, v13, v8);
  }
  else if ( a7 )
  {
    if ( a7[4] > 0x1Cu )
LABEL_16:
      sub_6ECC0("ntp_config.c", 4345, 2, "res->ai_addrlen <= sizeof(peeraddr)");
    while ( 1 )
    {
      _memcpy_chk(v14, v9[5]);
      result = sub_31A44(v14, 0);
      v12 = result;
      if ( result )
      {
        if ( v14[0] == 10 )
        {
          v10 = "(AAAA) ";
        }
        else if ( v14[0] == 2 )
        {
          v10 = "(A) ";
        }
        else
        {
          v10 = (const char *)&unk_97F7C;
        }
        v11 = (const char *)sub_6C2E8(v14);
        sub_64E00(5, "unpeered %s %s-> %s", a4, v10, v11);
        sub_36214(v12, "GONE");
        result = sub_31FC4(v12);
      }
      v9 = (_DWORD *)v9[7];
      if ( !v9 )
        break;
      if ( v9[4] > 0x1Cu )
        goto LABEL_16;
    }
  }
  return result;
}
