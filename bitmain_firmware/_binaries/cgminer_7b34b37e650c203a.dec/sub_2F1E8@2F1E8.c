int __fastcall sub_2F1E8(_DWORD *a1, int a2)
{
  int v4; // r7
  int v5; // r2
  int v6; // r3
  const char *v7; // r0
  int v9; // r6
  int *v10; // r12
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int *v15; // r12
  int v16; // r0
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r12
  const char *v21; // r1
  size_t v22; // r2
  int v23; // r3
  struct timeval v24; // [sp+8h] [bp-814h] BYREF
  struct timeval v25; // [sp+10h] [bp-80Ch] BYREF
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  if ( *((_BYTE *)a1 + 736) )
  {
    if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
    {
      snprintf(s, 0x800u, "Retrieving block template from pool %s", (const char *)a1[41]);
      sub_20F58(7, s, 0);
    }
  }
  else if ( byte_74500 || byte_68BD4 || dword_67DB4 > 5 )
  {
    snprintf(s, 0x800u, "Testing pool %s", (const char *)a1[41]);
    sub_20F58(6, s, 0);
  }
  v4 = *((unsigned __int8 *)a1 + 640);
  if ( *((_BYTE *)a1 + 640) )
    goto LABEL_38;
  if ( off_68734 )
  {
    if ( *((_BYTE *)a1 + 99) )
      goto LABEL_15;
    if ( !byte_68BD5 )
    {
      *((_BYTE *)a1 + 99) = v4;
      goto LABEL_15;
    }
    if ( byte_74500 || byte_68BD4 || dword_67DB4 > 6 )
    {
      strcpy(s, "Probing for GBT support");
      sub_20F58(7, s, 0);
      v5 = *((unsigned __int8 *)a1 + 736);
      v6 = (unsigned __int8)byte_68BD5;
      *((_BYTE *)a1 + 99) = 0;
      if ( !v5 )
      {
        if ( !*((_BYTE *)a1 + 900) )
        {
          if ( !v6 )
            goto LABEL_15;
          if ( byte_74500 )
            goto LABEL_65;
LABEL_63:
          if ( byte_68BD4 || dword_67DB4 > 6 )
            goto LABEL_65;
LABEL_15:
          sub_239A4(&v24);
          sub_239A4(&v25);
          v7 = (const char *)a1[144];
          if ( !v7 || byte_6900C )
            goto LABEL_97;
          if ( byte_74500 || byte_68BD4 || dword_67DB4 > 5 )
          {
            snprintf(s, 0x800u, "Testing pool %d stratum %s", *a1, (const char *)a1[144]);
            sub_20F58(6, s, 0);
            v7 = (const char *)a1[144];
          }
          if ( !sub_23CD8(v7, a1 + 150, (char **)a1 + 146) || !sub_26AEC(a1) )
          {
LABEL_97:
            if ( *((_BYTE *)a1 + 640) || *((_BYTE *)a1 + 900) || *((_BYTE *)a1 + 736) )
            {
              if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
              {
                snprintf(s, 0x800u, "FAILED to retrieve work from pool %u %s", *a1, (const char *)a1[41]);
                sub_20F58(7, s, 0);
              }
              if ( !a2 && !*((_BYTE *)a1 + 97) && (byte_74500 || byte_68BD4 || dword_67DB4 > 3) )
              {
                v4 = 0;
                snprintf(s, 0x800u, "Pool %u slow/down or URL or credentials invalid", *a1);
                sub_20F58(4, s, 0);
              }
            }
            else if ( byte_74500 || byte_68BD4 || dword_67DB4 > 3 )
            {
              v4 = 0;
              snprintf(
                s,
                0x800u,
                "No Stratum, GBT or Solo support in pool %d %s unable to use",
                *a1,
                (const char *)a1[41]);
              sub_20F58(4, s, 0);
            }
            return v4;
          }
          if ( byte_74500 || byte_68BD4 || dword_67DB4 > 4 )
          {
            snprintf(s, 0x800u, "Switching pool %d %s to %s", *a1, (const char *)a1[41], (const char *)a1[144]);
            sub_20F58(5, s, 0);
          }
          if ( !a1[41] )
            a1[41] = _strdup((const char *)a1[144]);
          *((_BYTE *)a1 + 640) = 1;
LABEL_38:
          v4 = sub_2F098((int)a1, (_BYTE *)a1 + 642);
          if ( v4 )
            return *((unsigned __int8 *)a1 + 641);
          if ( !sub_26AEC(a1) || *((_BYTE *)a1 + 580) && !sub_296D0(a1) || (v9 = sub_29AC8(a1)) == 0 )
          {
            sub_2F180((int)a1, (_BYTE *)a1 + 642);
            return v4;
          }
          byte_74502 = 1;
          if ( pthread_create(a1 + 174, 0, (void *(*)(void *))sub_3958C, a1) )
          {
            v10 = (int *)&unk_5212C;
          }
          else
          {
            if ( !pthread_create(a1 + 175, 0, (void *(*)(void *))sub_3BECC, a1) )
              return v9;
            v10 = (int *)&unk_52150;
          }
          v11 = *v10;
          v12 = v10[1];
          v13 = v10[2];
          v14 = v10[3];
          v15 = v10 + 4;
          *(_DWORD *)s = v11;
          *(_DWORD *)&s[4] = v12;
          *(_DWORD *)&s[8] = v13;
          *(_DWORD *)&s[12] = v14;
          v16 = *v15;
          v17 = v15[1];
          v18 = v15[2];
          v19 = v15[3];
          v20 = v15[4];
          *(_DWORD *)&s[16] = v16;
          *(_DWORD *)&s[20] = v17;
          *(_DWORD *)&s[24] = v18;
          *(_DWORD *)&s[28] = v19;
          s[32] = v20;
          sub_20F58(3, s, 1);
          sub_2E6B0(1, 1);
        }
        if ( !v6 )
          goto LABEL_15;
LABEL_54:
        if ( byte_74500 || byte_68BD4 || dword_67DB4 > 6 )
        {
          v21 = "GBT coinbase without append found, switching to GBT solo protocol";
          v22 = 66;
LABEL_58:
          memcpy(s, v21, v22);
          sub_20F58(7, s, 0);
          goto LABEL_15;
        }
        goto LABEL_15;
      }
      if ( !v6 )
        goto LABEL_15;
    }
    else
    {
      v23 = *((unsigned __int8 *)a1 + 736);
      *((_BYTE *)a1 + 99) = v4;
      if ( !v23 )
      {
        if ( !*((_BYTE *)a1 + 900) )
        {
          if ( byte_74500 )
          {
LABEL_65:
            v21 = "No GBT coinbase + append support found, pool unusable if it has no stratum";
            v22 = 75;
            goto LABEL_58;
          }
          goto LABEL_63;
        }
        goto LABEL_54;
      }
    }
    if ( byte_74500 || byte_68BD4 || dword_67DB4 > 6 )
    {
      strcpy(s, "GBT coinbase + append support found, switching to GBT protocol");
      sub_20F58(7, s, 0);
    }
    goto LABEL_15;
  }
  if ( !byte_74500 && !byte_68BD4 && dword_67DB4 <= 2 )
    return v4;
  strcpy(s, "CURL initialisation failed");
  sub_20F58(3, s, 0);
  return v4;
}
