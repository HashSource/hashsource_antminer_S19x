int __fastcall sub_4E5A8(const char *a1)
{
  char *v2; // r4
  const char *v3; // r0
  char *v4; // r4
  const char *v5; // r0
  char *v6; // r4
  const char *v7; // r0
  unsigned int v8; // r0
  const char *v9; // r0
  char v12[40]; // [sp+14h] [bp-1228h] BYREF
  _OWORD v13[144]; // [sp+814h] [bp-A28h] BYREF
  _BYTE v14[92]; // [sp+1114h] [bp-128h] BYREF
  char v15[160]; // [sp+1170h] [bp-CCh] BYREF
  int v16; // [sp+1210h] [bp-2Ch]
  int v17; // [sp+1214h] [bp-28h]
  _DWORD *v18; // [sp+1218h] [bp-24h]
  _DWORD *v19; // [sp+121Ch] [bp-20h]
  _DWORD *v20; // [sp+1220h] [bp-1Ch]
  _DWORD *v21; // [sp+1224h] [bp-18h]
  int i; // [sp+1228h] [bp-14h]
  int v23; // [sp+122Ch] [bp-10h]

  if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
  {
    snprintf(v12, 0x800u, "start %s\n", "judge_load_config");
    sub_1DB6C(7, v12, 0);
  }
  v23 = 0;
  v21 = 0;
  v20 = 0;
  v19 = 0;
  v18 = 0;
  memset(v13, 0, sizeof(v13));
  v17 = 0;
  v16 = 0;
  i = 0;
  if ( a1 )
  {
    v21 = (_DWORD *)sub_63DE8(a1, 0, v14);
    if ( v21 && !*v21 )
    {
      if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
      {
        snprintf(v12, 0x800u, "%s: after json_load_file\n", "judge_load_config");
        sub_1DB6C(7, v12, 0);
      }
      v20 = (_DWORD *)sub_652F0(v21, "pools");
      if ( v20 && *v20 == 1 )
      {
        v17 = sub_65E3C(v20);
        for ( i = 0; ; ++i )
        {
          v8 = sub_65E3C(v20);
          if ( v8 <= i )
            break;
          v19 = (_DWORD *)sub_65E88(v20, i);
          if ( !v19 )
            break;
          if ( *v19 )
            break;
          if ( i > 2 )
            break;
          v18 = (_DWORD *)sub_652F0(v19, "url");
          if ( !v18 )
            break;
          if ( *v18 != 2 )
            break;
          v2 = (char *)&v13[48 * i];
          v3 = (const char *)sub_66AE0(v18);
          snprintf(v2, 0x100u, "%s", v3);
          v18 = (_DWORD *)sub_652F0(v19, "user");
          if ( !v18 )
            break;
          if ( *v18 != 2 )
            break;
          v4 = (char *)&v13[48 * i + 16];
          v5 = (const char *)sub_66AE0(v18);
          snprintf(v4, 0x100u, "%s", v5);
          v18 = (_DWORD *)sub_652F0(v19, "pass");
          if ( !v18 || *v18 != 2 )
            break;
          v6 = (char *)&v13[48 * i + 32];
          v7 = (const char *)sub_66AE0(v18);
          snprintf(v6, 0x100u, "%s", v7);
          if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
          {
            snprintf(
              v12,
              0x800u,
              "%s\n%s\n%s\n",
              (const char *)&v13[48 * i],
              (const char *)&v13[48 * i + 16],
              (const char *)&v13[48 * i + 32]);
            sub_1DB6C(7, v12, 0);
          }
        }
        v23 &= ~1u;
        if ( v17 == dword_90E90 )
        {
          for ( i = 0; i < dword_90E90; ++i )
          {
            if ( strcmp(*(const char **)(*(_DWORD *)(dword_90F34 + 4 * i) + 164), (const char *)&v13[48 * i])
              || strcmp(*(const char **)(*(_DWORD *)(dword_90F34 + 4 * i) + 172), (const char *)&v13[48 * i + 16])
              || strcmp(*(const char **)(*(_DWORD *)(dword_90F34 + 4 * i) + 176), (const char *)&v13[48 * i + 32]) )
            {
              v23 |= 1u;
              break;
            }
          }
        }
        else
        {
          v23 |= 1u;
        }
      }
      else
      {
        v23 &= ~1u;
      }
      v18 = (_DWORD *)sub_652F0(v21, "bitmain-freq-level");
      if ( v18 && *v18 == 2 )
      {
        v9 = (const char *)sub_66AE0(v18);
        v16 = atoi(v9);
        if ( v16 == dword_85ACC )
        {
          v23 &= ~2u;
        }
        else
        {
          v23 |= 2u;
          dword_85ACC = v16;
        }
      }
      else
      {
        v23 &= ~2u;
      }
      sub_2CE0C((int)v21);
      if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
      {
        snprintf(v12, 0x800u, "ret = 0x%x", v23);
        sub_1DB6C(7, v12, 0);
      }
      return v23;
    }
    else
    {
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
      {
        snprintf(v12, 0x800u, "%s: JSON decode of file '%s' failed\n %s", "judge_load_config", a1, v15);
        sub_1DB6C(3, v12, 0);
      }
      return v23;
    }
  }
  else
  {
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
    {
      snprintf(v12, 0x800u, "%s: bad param", "judge_load_config");
      sub_1DB6C(3, v12, 0);
    }
    return v23;
  }
}
