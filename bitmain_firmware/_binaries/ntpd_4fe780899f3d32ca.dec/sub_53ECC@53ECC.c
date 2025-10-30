__int16 *__fastcall sub_53ECC(int a1, unsigned int a2)
{
  unsigned int v3; // r6
  unsigned int v4; // r10
  const char *v5; // r9
  int v6; // r5
  int v7; // r3
  const char *v8; // r2
  int v9; // r3
  const char *v10; // r3
  __int16 *result; // r0
  int v12; // r3
  const char *v13; // r2
  const char *v14; // r3
  int v15; // r3
  __int16 *v16; // r0
  char *v17; // r1
  const char *v18; // r9
  const char *v19; // r2
  const char *v20; // r1
  int v21; // r3
  const char *v22; // [sp+Ch] [bp-8h]

  v3 = a2;
  v4 = a2;
  v5 = *(const char **)(a1 + 84);
  v6 = *(_DWORD *)v5;
  v7 = *(_DWORD *)(*(_DWORD *)v5 + 16);
  if ( a2 == 9 )
    goto LABEL_3;
  while ( 2 )
  {
    if ( (ntp_syslogmask & 0x400) == 0 )
      goto LABEL_3;
    if ( v7 <= 5 )
    {
      v13 = types[v7];
      v12 = *(_DWORD *)(v6 + 12);
      if ( v12 > 10 )
      {
LABEL_32:
        v14 = "?";
        goto LABEL_12;
      }
    }
    else
    {
      v12 = *(_DWORD *)(v6 + 12);
      v13 = "?";
      if ( v12 > 10 )
        goto LABEL_32;
    }
    v14 = states[v12];
LABEL_12:
    sub_64E00(6, "TRUE: clock %s, state %s, event %s", v13, v14, events[v4]);
    v7 = *(_DWORD *)(v6 + 16);
LABEL_3:
    if ( v7 > 5 )
    {
      v9 = *(_DWORD *)(v6 + 12);
      v8 = "?";
      if ( v9 > 10 )
      {
LABEL_8:
        v10 = "?";
        goto LABEL_6;
      }
    }
    else
    {
      v8 = types[v7];
      v9 = *(_DWORD *)(v6 + 12);
      if ( v9 > 10 )
        goto LABEL_8;
    }
    v10 = states[v9];
LABEL_6:
    result = (__int16 *)sub_53CC4(a1, (int)"clock %s, state %s, event %s\n", v8, v10, events[v4]);
    switch ( *(_DWORD *)(v6 + 16) )
    {
      case 0:
        if ( v3 == 7 )
          return result;
        break;
      case 1:
        switch ( v3 )
        {
          case 5u:
            goto LABEL_34;
          case 7u:
            v16 = (__int16 *)a1;
            v17 = "P";
            return sub_53E04(v16, v17);
          case 0u:
LABEL_34:
            result = sub_53E04((__int16 *)a1, "C");
            *(_DWORD *)(v6 + 12) = 9;
            if ( !v3 )
            {
LABEL_30:
              result = sub_53E04((__int16 *)a1, "C");
              *(_DWORD *)(v6 + 12) = 9;
            }
            return result;
        }
LABEL_22:
        if ( v3 != 9 )
          return result;
LABEL_23:
        if ( (unsigned int)(*(_DWORD *)(v6 + 12) - 9) > 1 )
        {
          v16 = (__int16 *)a1;
          v17 = (char *)&unk_996E0;
          return sub_53E04(v16, v17);
        }
        goto LABEL_15;
      case 2:
        switch ( v3 )
        {
          case 0u:
            result = sub_53E04((__int16 *)a1, "F18\r");
            *(_DWORD *)(v6 + 12) = 6;
            return result;
          case 2u:
            v18 = v5 + 56;
            sub_53E04((__int16 *)a1, "F50\r");
            if ( strcmp(v18, " TRUETIME Mk III") )
            {
              result = (__int16 *)strncmp(v18, " TRUETIME XL", 0xCu);
              if ( result )
              {
                *(_DWORD *)(v6 + 12) = 7;
                return result;
              }
            }
            result = (__int16 *)sub_53ECC(a1, 2);
            if ( (ntp_syslogmask & 0x400) == 0 )
              return result;
            v19 = v18;
            v20 = "TM/TMD/XL: %s";
            break;
          case 3u:
            result = sub_53E04((__int16 *)a1, "F51\r");
            *(_DWORD *)(v6 + 12) = 8;
            return result;
          case 4u:
            result = sub_53E04((__int16 *)a1, "F08\r");
            *(_DWORD *)(v6 + 12) = 9;
            return result;
          case 9u:
            goto LABEL_23;
          default:
            return result;
        }
        return (__int16 *)sub_64E00(6, v20, v19);
      case 3:
        if ( v3 )
          goto LABEL_22;
        sub_53E04((__int16 *)a1, "MD3\r");
        sub_53E04((__int16 *)a1, "TSU\r");
        result = sub_53E04((__int16 *)a1, "AU\r");
        *(_DWORD *)(v6 + 12) = 9;
        return result;
      case 4:
        if ( !v3 )
          goto LABEL_30;
        goto LABEL_22;
      case 5:
        if ( v3 )
        {
          if ( v3 == 9 )
LABEL_15:
            *(_DWORD *)(v6 + 12) = 10;
        }
        else
        {
          v16 = (__int16 *)a1;
          v17 = "ST1";
          return sub_53E04(v16, v17);
        }
        return result;
      default:
        sub_64E00(6, "TRUE: cannot identify refclock!");
        goto LABEL_76;
    }
    v15 = *(_DWORD *)(v6 + 12);
    switch ( v15 )
    {
      case 0:
        if ( v3 )
          goto LABEL_76;
        result = sub_53E04((__int16 *)a1, "P\r");
        *(_DWORD *)(v6 + 12) = 4;
        return result;
      case 1:
        if ( v3 <= 1 )
        {
          result = sub_53E04((__int16 *)a1, "PO\r");
          *(_DWORD *)(v6 + 12) = 2;
          return result;
        }
        if ( v3 == 2 )
        {
          v5 = *(const char **)(a1 + 84);
          *(_DWORD *)(v6 + 16) = 2;
          v3 = 0;
          v4 = 0;
          v6 = *(_DWORD *)v5;
          v7 = *(_DWORD *)(*(_DWORD *)v5 + 16);
          continue;
        }
        v19 = v22;
        v20 = "TRUE: TM/TMD init fellthrough!";
        return (__int16 *)sub_64E00(6, v20, v19);
      case 2:
        if ( v3 <= 1 )
        {
          *(_DWORD *)(v6 + 12) = 0;
          return (__int16 *)sleep(1u);
        }
        if ( v3 != 8 )
        {
          v19 = v22;
          v20 = "TRUE: TCU init fellthrough!";
          return (__int16 *)sub_64E00(6, v20, v19);
        }
        v5 = *(const char **)(a1 + 84);
        v21 = 3;
LABEL_62:
        *(_DWORD *)(v6 + 16) = v21;
        v3 = 0;
        v6 = *(_DWORD *)v5;
        v4 = 0;
        v7 = *(_DWORD *)(*(_DWORD *)v5 + 16);
        continue;
      case 3:
        if ( v3 <= 1 )
        {
          *(_DWORD *)(v6 + 12) = 1;
          v16 = (__int16 *)a1;
          v17 = "F18\r";
          return sub_53E04(v16, v17);
        }
        if ( v3 != 9 )
LABEL_76:
          abort();
        *(_QWORD *)(v6 + 12) = 0x40000000ALL;
        return result;
      case 4:
        switch ( v3 )
        {
          case 0u:
          case 1u:
          case 9u:
            sub_53E04((__int16 *)a1, "ST0");
            sleep(1u);
            *(_DWORD *)(v6 + 12) = 5;
            v16 = (__int16 *)a1;
            v17 = "QV";
            return sub_53E04(v16, v17);
          case 5u:
            v5 = *(const char **)(a1 + 84);
            v21 = 1;
            goto LABEL_62;
          default:
            goto LABEL_76;
        }
      case 5:
        switch ( v3 )
        {
          case 0u:
          case 1u:
            *(_DWORD *)(v6 + 12) = 3;
            v16 = (__int16 *)a1;
            v17 = "C\r";
            return sub_53E04(v16, v17);
          case 6u:
            *(_DWORD *)(v6 + 16) = 5;
            *(_DWORD *)(v6 + 12) = 10;
            v16 = (__int16 *)a1;
            v17 = "ST1";
            return sub_53E04(v16, v17);
          case 9u:
            *(_QWORD *)(v6 + 12) = 0x50000000ALL;
            break;
          default:
            v19 = (const char *)v3;
            v20 = "TRUE: TL3 init fellthrough! (%d)";
            return (__int16 *)sub_64E00(6, v20, v19);
        }
        return result;
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 11:
        if ( v15 == 11 )
          v19 = "?";
        else
          v19 = states[v15];
        v20 = "TRUE: state %s is unexpected!";
        return (__int16 *)sub_64E00(6, v20, v19);
      default:
        return result;
    }
  }
}
