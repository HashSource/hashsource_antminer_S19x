FILE *__fastcall sub_55298(int a1, int a2)
{
  _DWORD *v4; // r8
  int v5; // r6
  int v6; // r3
  const char *v7; // r2
  int v8; // r3
  const char *v9; // r3
  const char *v10; // r1
  FILE *result; // r0
  int v12; // r3
  const char *v13; // r2
  int v14; // r3
  const char *v15; // r3
  const char *v16; // r1
  ssize_t v17; // r0
  char *v18; // r1
  int v19; // r3
  const char *v20; // r8
  const char *v21; // r2
  const char *v22; // r1
  const char *v23; // [sp+1Ch] [bp-8h]

  while ( 2 )
  {
    v4 = *(_DWORD **)(a1 + 84);
    v5 = *v4;
    if ( a2 != 9 && (ntp_syslogmask & 0x400) != 0 )
    {
      v12 = *(_DWORD *)(v5 + 16);
      if ( v12 <= 5 )
        v13 = types[v12];
      else
        v13 = "?";
      v14 = *(_DWORD *)(v5 + 12);
      if ( v14 <= 10 )
        v15 = states[v14];
      else
        v15 = "?";
      if ( a2 <= 9 )
        v16 = events[a2];
      else
        v16 = "?";
      sub_65D40(6, "TRUE: clock %s, state %s, event %s", v13, v15, v16);
    }
    v6 = *(_DWORD *)(v5 + 16);
    if ( v6 <= 5 )
      v7 = types[v6];
    else
      v7 = "?";
    v8 = *(_DWORD *)(v5 + 12);
    if ( v8 <= 10 )
      v9 = states[v8];
    else
      v9 = "?";
    if ( a2 > 9 )
      v10 = "?";
    else
      v10 = events[a2];
    result = sub_55098(a1, (int)"clock %s, state %s, event %s\n", v7, v9, v10);
    switch ( *(_DWORD *)(v5 + 16) )
    {
      case 0:
        if ( a2 == 7 )
          return result;
        break;
      case 1:
        switch ( a2 )
        {
          case 5:
            goto LABEL_26;
          case 7:
            v17 = a1;
            v18 = "P";
            return (FILE *)sub_551D0(v17, v18);
          case 0:
LABEL_26:
            result = (FILE *)sub_551D0(a1, "C");
            *(_DWORD *)(v5 + 12) = 9;
            break;
        }
LABEL_27:
        if ( !a2 )
        {
          result = (FILE *)sub_551D0(a1, "C");
          *(_DWORD *)(v5 + 12) = 9;
          return result;
        }
LABEL_28:
        if ( a2 != 9 )
          return result;
LABEL_29:
        if ( (unsigned int)(*(_DWORD *)(v5 + 12) - 9) > 1 )
        {
          v17 = a1;
          v18 = (char *)&unk_9ACF4;
          return (FILE *)sub_551D0(v17, v18);
        }
        goto LABEL_43;
      case 2:
        switch ( a2 )
        {
          case 0:
            result = (FILE *)sub_551D0(a1, "F18\r");
            *(_DWORD *)(v5 + 12) = 6;
            return result;
          case 2:
            v20 = (const char *)(v4 + 14);
            sub_551D0(a1, "F50\r");
            if ( strcmp(v20, " TRUETIME Mk III") )
            {
              result = (FILE *)strncmp(v20, " TRUETIME XL", 0xCu);
              if ( result )
              {
                *(_DWORD *)(v5 + 12) = 7;
                return result;
              }
            }
            result = (FILE *)sub_55298(a1, 2);
            if ( (ntp_syslogmask & 0x400) == 0 )
              return result;
            v21 = v20;
            v22 = "TM/TMD/XL: %s";
            break;
          case 3:
            result = (FILE *)sub_551D0(a1, "F51\r");
            *(_DWORD *)(v5 + 12) = 8;
            return result;
          case 4:
            result = (FILE *)sub_551D0(a1, "F08\r");
            *(_DWORD *)(v5 + 12) = 9;
            return result;
          case 9:
            goto LABEL_29;
          default:
            return result;
        }
        return (FILE *)sub_65D40(6, v22, v21);
      case 3:
        if ( a2 )
          goto LABEL_28;
        sub_551D0(a1, "MD3\r");
        sub_551D0(a1, "TSU\r");
        result = (FILE *)sub_551D0(a1, "AU\r");
        *(_DWORD *)(v5 + 12) = 9;
        return result;
      case 4:
        goto LABEL_27;
      case 5:
        if ( a2 )
        {
          if ( a2 == 9 )
LABEL_43:
            *(_DWORD *)(v5 + 12) = 10;
        }
        else
        {
          v17 = a1;
          v18 = "ST1";
          return (FILE *)sub_551D0(v17, v18);
        }
        return result;
      default:
        sub_65D40(6, "TRUE: cannot identify refclock!");
        goto LABEL_46;
    }
    v19 = *(_DWORD *)(v5 + 12);
    switch ( v19 )
    {
      case 0:
        if ( a2 )
          goto LABEL_46;
        result = (FILE *)sub_551D0(a1, "P\r");
        *(_DWORD *)(v5 + 12) = 4;
        return result;
      case 1:
        if ( (unsigned int)a2 <= 1 )
        {
          result = (FILE *)sub_551D0(a1, "PO\r");
          *(_DWORD *)(v5 + 12) = 2;
          return result;
        }
        if ( a2 == 2 )
        {
          *(_DWORD *)(v5 + 16) = 2;
LABEL_62:
          a2 = 0;
          continue;
        }
        v21 = v23;
        v22 = "TRUE: TM/TMD init fellthrough!";
        return (FILE *)sub_65D40(6, v22, v21);
      case 2:
        if ( (unsigned int)a2 <= 1 )
        {
          *(_DWORD *)(v5 + 12) = 0;
          return (FILE *)sleep(1u);
        }
        if ( a2 != 8 )
        {
          v21 = v23;
          v22 = "TRUE: TCU init fellthrough!";
          return (FILE *)sub_65D40(6, v22, v21);
        }
        *(_DWORD *)(v5 + 16) = 3;
        goto LABEL_62;
      case 3:
        if ( (unsigned int)a2 <= 1 )
        {
          *(_DWORD *)(v5 + 12) = 1;
          v17 = a1;
          v18 = "F18\r";
          return (FILE *)sub_551D0(v17, v18);
        }
        if ( a2 != 9 )
LABEL_46:
          abort();
        *(_DWORD *)(v5 + 16) = 4;
        *(_DWORD *)(v5 + 12) = 10;
        return result;
      case 4:
        switch ( a2 )
        {
          case 0:
          case 1:
          case 9:
            sub_551D0(a1, "ST0");
            sleep(1u);
            *(_DWORD *)(v5 + 12) = 5;
            v17 = a1;
            v18 = "QV";
            return (FILE *)sub_551D0(v17, v18);
          case 5:
            *(_DWORD *)(v5 + 16) = 1;
            goto LABEL_62;
          default:
            goto LABEL_46;
        }
      case 5:
        switch ( a2 )
        {
          case 0:
          case 1:
            *(_DWORD *)(v5 + 12) = 3;
            v17 = a1;
            v18 = "C\r";
            return (FILE *)sub_551D0(v17, v18);
          case 6:
            *(_DWORD *)(v5 + 16) = 5;
            *(_DWORD *)(v5 + 12) = 10;
            v17 = a1;
            v18 = "ST1";
            return (FILE *)sub_551D0(v17, v18);
          case 9:
            *(_DWORD *)(v5 + 16) = 5;
            *(_DWORD *)(v5 + 12) = 10;
            break;
          default:
            v21 = (const char *)a2;
            v22 = "TRUE: TL3 init fellthrough! (%d)";
            return (FILE *)sub_65D40(6, v22, v21);
        }
        return result;
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 11:
        if ( v19 == 11 )
          v21 = "?";
        else
          v21 = states[v19];
        v22 = "TRUE: state %s is unexpected!";
        return (FILE *)sub_65D40(6, v22, v21);
      default:
        return result;
    }
  }
}
