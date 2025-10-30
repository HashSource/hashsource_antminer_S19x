unsigned int __fastcall sub_5476C(int a1)
{
  int v1; // r5
  int v2; // r4
  _DWORD *v3; // r10
  unsigned int result; // r0
  _DWORD *v5; // r9
  int v6; // r1
  int v7; // r3
  int v8; // r3
  bool v9; // zf
  int v10; // r3
  bool v11; // zf
  int v12; // r3
  const char *v13; // r2
  __int64 v14; // r0
  bool v15; // zf
  int v16; // r2
  int v17; // r3
  int v18; // r1
  _DWORD *v19; // r4
  unsigned __int8 v20; // [sp+13h] [bp-A1h] BYREF
  int v21; // [sp+14h] [bp-A0h] BYREF
  char v22; // [sp+18h] [bp-9Ch] BYREF
  int v23; // [sp+1Ch] [bp-98h] BYREF
  char v24; // [sp+20h] [bp-94h] BYREF
  _DWORD v25[2]; // [sp+24h] [bp-90h] BYREF
  bool v26[136]; // [sp+2Ch] [bp-88h] BYREF

  v1 = *(_DWORD *)(a1 + 4);
  v2 = *(_DWORD *)(v1 + 84);
  v3 = *(_DWORD **)v2;
  result = (unsigned __int16)sub_39EE4(a1, v26, 128, v25);
  v26[(unsigned __int16)result] = 0;
  if ( (_WORD)result )
  {
    *(_DWORD *)(v2 + 184) = (unsigned __int16)result;
    v5 = (_DWORD *)(v2 + 232);
    sub_6D4DC(v2 + 56);
    v6 = v25[1];
    v7 = *(_DWORD *)(v2 + 184);
    *(_DWORD *)(v2 + 232) = v25[0];
    *(_DWORD *)(v2 + 236) = v6;
    sub_53CC4(v1, (int)"receive(%s) [%d]\n", (const char *)(v2 + 56), v7);
    *v3 = 2;
    sub_41F44(v1 + 16, (const char *)(v2 + 56));
    if ( *(_BYTE *)(v2 + 56) == 63 || !strcmp((const char *)(v2 + 56), "ERROR 05 NO SUCH FUNCTION") )
    {
      return (unsigned int)sub_53ECC(v1, 1u);
    }
    else if ( ((*(unsigned __int8 *)(v2 + 61) - 43) & 0xFD) != 0
           || ((*(unsigned __int8 *)(v2 + 65) - 43) & 0xFD) != 0
           || sscanf((const char *)(v2 + 56), "%5d%*c%3d%*c%3d", &v23, &v22, &v24) != 3 )
    {
      if ( sscanf((const char *)(v2 + 56), "F%2d", &v21) == 1 && (unsigned int)(v21 - 1) <= 0x4E )
      {
        if ( v21 == 50 )
        {
          return (unsigned int)sub_53ECC(v1, 3u);
        }
        else if ( v21 == 51 )
        {
          return (unsigned int)sub_53ECC(v1, 4u);
        }
        else
        {
          return (unsigned int)sub_53CC4(v1, (int)"got F%02d - ignoring\n", v21);
        }
      }
      else if ( *(_WORD *)(v2 + 56) == 17750 && *(_BYTE *)(v2 + 58) == 82 && *(_BYTE *)(v2 + 62) == 46 )
      {
        result = (unsigned int)sub_53ECC(v1, 6u);
        if ( (ntp_syslogmask & 0x400) != 0 )
          return sub_64E00(6, "TL3: %s", (const char *)(v2 + 56));
      }
      else if ( !strncmp((const char *)(v2 + 56), " TRUETIME Mk III ", 0x11u)
             || !strncmp((const char *)(v2 + 56), " TRUETIME XL", 0xCu) )
      {
        result = (unsigned int)sub_53ECC(v1, 2u);
        if ( (ntp_syslogmask & 0x400) != 0 )
          return sub_64E00(6, "TM/TMD/XL: %s", (const char *)(v2 + 56));
      }
      else
      {
        v8 = *(unsigned __int8 *)(v2 + 56);
        v9 = v8 == 83;
        if ( v8 != 83 )
          v9 = v8 == 78;
        if ( !v9 )
          goto LABEL_42;
        v10 = *(unsigned __int8 *)(v2 + 65);
        v11 = v10 == 69;
        if ( v10 != 69 )
          v11 = v10 == 87;
        if ( v11 && *(_BYTE *)(v2 + 74) == 43 )
        {
          result = (unsigned int)sub_53ECC(v1, 8u);
          if ( (ntp_syslogmask & 0x400) != 0 )
            return sub_64E00(6, "TCU-800: %s", (const char *)(v2 + 56));
        }
        else
        {
LABEL_42:
          if ( *(_BYTE *)(v2 + 59) == 58
            && *(_BYTE *)(v2 + 62) == 58
            && *(_BYTE *)(v2 + 65) == 58
            && sscanf((const char *)(v2 + 56), "%3d:%2d:%2d:%2d%c", v2 + 192, v2 + 196, v2 + 200, v2 + 204, &v20) == 5 )
          {
            v15 = v20 == 88;
            if ( v20 != 88 )
              v15 = v20 == 35;
            v16 = v15;
            if ( (unsigned int)v20 - 62 <= 1 )
              v17 = v16 | 1;
            else
              v17 = v16;
            if ( v17 )
              LOBYTE(v17) = 3;
            *(_BYTE *)(v2 + 40) = v17;
            result = (unsigned int)sub_53ECC(v1, 9u);
            if ( v3[2] )
            {
              if ( v3[4] <= 1u )
                sub_53ECC(v1, 7u);
              if ( sub_39CF8((_DWORD *)v2) )
              {
                v18 = *(_DWORD *)(v2 + 236);
                v19 = (_DWORD *)(v2 + 224);
                *v19 = *v5;
                v19[1] = v18;
                sub_39D44(v1);
                result = (unsigned int)sub_394A0((__int16 *)v1, 0);
                v3[2] = 0;
              }
              else
              {
                return (unsigned int)sub_394A0((__int16 *)v1, 6);
              }
            }
          }
          else
          {
            return (unsigned int)sub_394A0((__int16 *)v1, 2);
          }
        }
      }
    }
    else
    {
      if ( (unsigned int)(v23 - 7001) > 0x1B56 )
      {
        v13 = "UNKNOWN";
      }
      else
      {
        if ( v23 > 9999 )
        {
          v12 = 0;
          v13 = "WEST";
        }
        else
        {
          v12 = 1;
          v13 = "EAST";
        }
        if ( v12 != v3[1] )
        {
          v14 = *(_QWORD *)(v2 + 752);
          *(_QWORD *)(v2 + 752) = *(_QWORD *)(v2 + 744);
          *(_QWORD *)(v2 + 744) = v14;
          v3[1] = v12;
        }
      }
      sub_53CC4(v1, (int)"GOES: station %s\n", v13);
      return (unsigned int)sub_53ECC(v1, 5u);
    }
  }
  return result;
}
