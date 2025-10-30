int __fastcall sub_1E990(int a1, char *a2, size_t a3)
{
  const char *v4; // r5
  char *v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r0
  int result; // r0
  char *v12; // r0
  char *v13; // r0
  int v14; // [sp+0h] [bp-80Ch] BYREF
  int v15; // [sp+4h] [bp-808h] BYREF
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v4 = (const char *)(a1 + 4);
  v14 = -1;
  v15 = -1;
  v6 = strstr((const char *)(a1 + 4), "/rate");
  if ( v6 )
  {
    v9 = (unsigned __int8)byte_1AECC5;
    if ( byte_1AECC5 )
    {
      if ( byte_244080 || byte_1AECC4 || (v9 = dword_9E320, dword_9E320 > 6) )
      {
        strcpy(s, "cmd : get rate");
        v6 = (char *)sub_47AB4(7, s, 0);
      }
    }
    v10 = sub_3047C(v6, v7, v8, v9, v14, v15);
LABEL_7:
    sub_1E7E8(a2, a3, v10);
    return 0;
  }
  if ( strstr(v4, "/test") )
  {
    _isoc99_sscanf(v4, "/test.%d.%d", &v14, &v15);
    if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
    {
      snprintf(s, 0x800u, "cmd : get test = %d", v14);
      sub_47AB4(7, s, 0);
    }
    if ( v14 == 523 )
      sub_1E884(a2);
    else
      sprintf(a2, "OK get test=%d", v14);
    return 0;
  }
  else
  {
    v12 = strstr(v4, "/ideal_rate");
    if ( v12 )
    {
      if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
      {
        strcpy(s, "cmd : get ideal rate");
        v12 = (char *)sub_47AB4(7, s, 0);
      }
      v10 = sub_30348(v12);
      goto LABEL_7;
    }
    v13 = strstr(v4, "/max_rate");
    if ( v13 )
    {
      if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
      {
        strcpy(s, "cmd : get max rate");
        v13 = (char *)sub_47AB4(7, s, 0);
      }
      v10 = sub_301EC(v13);
      goto LABEL_7;
    }
    if ( strstr(v4, "/miner_status") )
    {
      result = (unsigned __int8)byte_1AECC5;
      if ( byte_1AECC5 )
      {
        if ( byte_244080 || (result = (unsigned __int8)byte_1AECC4, byte_1AECC4) || dword_9E320 > 6 )
        {
          strcpy(s, "cmd : get miner status");
          sub_47AB4(7, s, 0);
          return 0;
        }
      }
    }
    else if ( strstr(v4, "/productName") )
    {
      if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
      {
        strcpy(s, "cmd : get miner type");
        sub_47AB4(7, s, 0);
      }
      snprintf(a2, 0x100u, "%s", byte_1B08E4);
      return 0;
    }
    else
    {
      return -1;
    }
  }
  return result;
}
