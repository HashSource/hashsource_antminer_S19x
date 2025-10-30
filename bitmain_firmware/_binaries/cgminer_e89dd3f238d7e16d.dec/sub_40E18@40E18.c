int __fastcall sub_40E18(_DWORD *a1, char a2)
{
  bool v2; // r3
  char *v4; // r3
  size_t v5; // r4
  const char *v6; // r3
  char v10[2048]; // [sp+14h] [bp-860h] BYREF
  _DWORD *v11; // [sp+814h] [bp-60h] BYREF
  __time_t v12[2]; // [sp+818h] [bp-5Ch] BYREF
  __time_t v13[2]; // [sp+820h] [bp-54h] BYREF
  bool v14; // [sp+82Ah] [bp-4Ah]
  char v15; // [sp+82Bh] [bp-49h]
  size_t maxlen; // [sp+82Ch] [bp-48h]
  char *s; // [sp+830h] [bp-44h]
  char *haystack; // [sp+834h] [bp-40h]
  char v19; // [sp+83Bh] [bp-39h]
  char *v20; // [sp+848h] [bp-2Ch]
  int v21; // [sp+850h] [bp-24h]
  char v22; // [sp+857h] [bp-1Dh]
  unsigned __int8 v23; // [sp+867h] [bp-Dh]

  v21 = 0;
  v23 = 0;
  if ( *((_BYTE *)a1 + 736) )
  {
    if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
    {
      snprintf(v10, 0x800u, "Retrieving block template from pool %s", (const char *)a1[41]);
      sub_1DB6C(7, v10, 0);
    }
  }
  else if ( byte_90DC0 || byte_865D1 || dword_857E4 > 5 )
  {
    snprintf(v10, 0x800u, "Testing pool %s", (const char *)a1[41]);
    sub_1DB6C(6, v10, 0);
  }
  while ( 1 )
  {
    if ( *((_BYTE *)a1 + 640) )
    {
      v15 = sub_2E894((int)a1, (unsigned __int8 *)a1 + 642);
      if ( v15 == 1 )
        return *((unsigned __int8 *)a1 + 641);
      v2 = sub_28F90(a1) && (*((_BYTE *)a1 + 580) != 1 || sub_26718(a1)) && sub_29594(a1) && sub_26CCC(a1);
      v14 = v2;
      if ( v2 )
        sub_40AE0(a1);
      else
        sub_2E910((int)a1, (unsigned __int8 *)a1 + 642);
      return v14;
    }
    v20 = off_85A48[0];
    if ( !off_85A48[0] )
    {
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
      {
        strcpy(v10, "CURL initialisation failed");
        sub_1DB6C(3, v10, 0);
      }
      return 0;
    }
    if ( *((_BYTE *)a1 + 99) != 1 )
    {
      if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
      {
        strcpy(v10, "Probing for GBT support");
        sub_1DB6C(7, v10, 0);
      }
      v21 = 0;
      *((_BYTE *)a1 + 99) = 0;
      if ( *((_BYTE *)a1 + 736) )
      {
        if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
        {
          strcpy(v10, "GBT coinbase + append support found, switching to GBT protocol");
          sub_1DB6C(7, v10, 0);
        }
      }
      else if ( *((_BYTE *)a1 + 900) )
      {
        if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
        {
          strcpy(v10, "GBT coinbase without append found, switching to GBT solo protocol");
          sub_1DB6C(7, v10, 0);
        }
      }
      else if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
      {
        strcpy(v10, "No GBT coinbase + append support found, pool unusable if it has no stratum");
        sub_1DB6C(7, v10, 0);
      }
    }
    sub_21AC0(v13);
    v21 = 0;
    sub_21AC0(v12);
    if ( !a1[144] || byte_86E28 == 1 || !sub_40C28((char **)a1) )
      break;
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 4 )
    {
      snprintf(v10, 0x800u, "Switching pool %d %s to %s", *a1, (const char *)a1[41], (const char *)a1[144]);
      sub_1DB6C(5, v10, 0);
    }
    if ( !a1[41] )
      a1[41] = strdup((const char *)a1[144]);
    *((_BYTE *)a1 + 640) = 1;
  }
  if ( *((_BYTE *)a1 + 640) != 1 && *((_BYTE *)a1 + 900) != 1 && *((_BYTE *)a1 + 736) != 1 )
  {
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
    {
      snprintf(v10, 0x800u, "No Stratum, GBT or Solo support in pool %d %s unable to use", *a1, (const char *)a1[41]);
      sub_1DB6C(4, v10, 0);
    }
    return 0;
  }
  else
  {
    if ( v21 )
    {
      v11 = sub_30CD8();
      v19 = 0;
      if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
      {
        snprintf(
          v10,
          0x800u,
          "Successfully retrieved but FAILED to decipher work from pool %u %s",
          *a1,
          (const char *)a1[41]);
        sub_1DB6C(7, v10, 0);
      }
      sub_30E0C((void **)&v11, "cgminer.c", "pool_active", 8175);
      if ( !a1[28] )
      {
        if ( a1[27] )
        {
          v22 = 0;
          haystack = (char *)a1[27];
          if ( strstr(haystack, "://") )
          {
            a1[28] = haystack;
            haystack = 0;
          }
          else
          {
            if ( *haystack == 47 )
              v4 = haystack + 1;
            else
              v4 = haystack;
            s = v4;
            if ( *(_BYTE *)(a1[41] + strlen((const char *)a1[41]) - 1) != 47 )
              v22 = 1;
            v5 = strlen((const char *)a1[41]);
            maxlen = v5 + strlen(s) + 2;
            a1[28] = sub_1F934(maxlen, "cgminer.c", "pool_active", 8208);
            if ( v22 )
              v6 = (const char *)&word_709FC;
            else
              v6 = byte_6E658;
            snprintf((char *)a1[28], maxlen, "%s%s%s", (const char *)a1[41], v6, s);
          }
        }
        else
        {
          a1[28] = 0;
        }
        sub_40D54((int)a1);
      }
    }
    else
    {
      if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
      {
        snprintf(v10, 0x800u, "FAILED to retrieve work from pool %u %s", *a1, (const char *)a1[41]);
        sub_1DB6C(7, v10, 0);
      }
      if ( a2 != 1 && *((_BYTE *)a1 + 97) != 1 && (byte_90DC0 || byte_865D1 || dword_857E4 > 3) )
      {
        snprintf(v10, 0x800u, "Pool %u slow/down or URL or credentials invalid", *a1);
        sub_1DB6C(4, v10, 0);
      }
    }
    if ( v21 )
      sub_2CE0C(v21);
    return v23;
  }
}
