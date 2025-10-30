int __fastcall sub_D0D0(int result, int a2, int a3, const char *a4, int a5, int a6, _DWORD *a7)
{
  int v8; // r5
  _DWORD *v9; // r4
  unsigned int v10; // r2
  const char *v11; // r10
  const char *v12; // r0
  int v13; // r6
  const char *v14; // r0
  _WORD v15[14]; // [sp+18h] [bp-24h] BYREF

  v8 = result;
  v9 = a7;
  if ( result )
  {
    v14 = gai_strerror(result);
    return sub_65D40(3, "giving up resolving unpeer %s: %s (%d)", a4, v14, v8);
  }
  else if ( a7 )
  {
    v10 = a7[4];
    if ( v10 > 0x1C )
LABEL_16:
      sub_6FC54("ntp_config.c", 4345, 2, "res->ai_addrlen <= sizeof(peeraddr)");
    while ( 1 )
    {
      _memcpy_chk(v15, v9[5], v10, 28);
      result = sub_31F34(v15, 0);
      v13 = result;
      if ( result )
      {
        if ( v15[0] == 10 )
        {
          v11 = "(AAAA) ";
        }
        else if ( v15[0] == 2 )
        {
          v11 = "(A) ";
        }
        else
        {
          v11 = (const char *)&unk_99528;
        }
        v12 = (const char *)sub_6D2C0(v15);
        sub_65D40(5, "unpeered %s %s-> %s", a4, v11, v12);
        sub_367D8(v13, "GONE");
        result = sub_324CC(v13);
      }
      v9 = (_DWORD *)v9[7];
      if ( !v9 )
        break;
      v10 = v9[4];
      if ( v10 > 0x1C )
        goto LABEL_16;
    }
  }
  return result;
}
