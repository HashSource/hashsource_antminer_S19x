int __fastcall sub_15438(int a1)
{
  const char *v2; // r6
  char *v3; // r0
  const char *v4; // r10
  char *v5; // r4
  size_t v6; // r9
  int v7; // r0
  int v8; // r8
  int v9; // r0
  int v10; // r1
  _BOOL4 v11; // r3
  int v12; // r0
  bool v13; // zf
  int v14; // r3
  int v16; // r4
  int v17; // r3
  _BOOL4 v18; // r2
  int v19; // r3
  int v20; // r0
  int v21; // r5
  int v22; // r0
  bool v23; // zf
  const char *v24; // r0
  int v25; // r0
  bool v26; // zf
  const char *v27; // r0
  int v28; // r3
  const char *v29; // r0
  int v30; // r0
  bool v31; // zf
  int v32; // [sp+8h] [bp-253Ch]
  int v33; // [sp+18h] [bp-252Ch]
  char *v34; // [sp+24h] [bp-2520h] BYREF
  _BYTE v35[24]; // [sp+28h] [bp-251Ch] BYREF
  char v36[256]; // [sp+42Ch] [bp-2118h] BYREF
  size_t v37; // [sp+52Ch] [bp-2018h]
  _BYTE v38[12]; // [sp+534h] [bp-2010h] BYREF
  _BYTE v39[4040]; // [sp+1538h] [bp-100Ch] BYREF

  if ( *(_DWORD *)(a1 + 24) == -2 )
    return 0;
  v2 = *(const char **)(a1 + 20);
  if ( *(_DWORD *)(a1 + 4) != 3 )
    sub_1073C();
  v3 = strrchr(*(const char **)(a1 + 20), 47);
  if ( v3 )
  {
    v4 = v3 + 1;
    *v3 = 0;
    v5 = *(char **)(a1 + 20);
  }
  else
  {
    v4 = v2;
    v5 = ".";
  }
  v6 = strlen(v4);
  sub_19D18(v35);
  v7 = sub_19DA4((int)v35, v5);
  v8 = v7;
  if ( v4 != *(const char **)(a1 + 20) )
    *((_BYTE *)v4 - 1) = 47;
  if ( !v7 )
  {
    v33 = -1;
    while ( !sub_19F0C(v35) )
    {
      if ( v6 < v37 && !strncmp(v36, v4, v6) && v36[v6] == 46 )
      {
        v9 = strtol(&v35[v6 + 1029], &v34, 10);
        v10 = v33;
        v11 = v9 > v33;
        if ( *v34 )
          v11 = 0;
        if ( v11 )
          v10 = v9;
        v33 = v10;
      }
    }
    v16 = v33 + 1;
    sub_19FEC(v35);
    v17 = *(_DWORD *)(a1 + 24);
    v18 = v17 == -1;
    if ( v17 > v33 + 1 )
      v18 = 1;
    if ( v18 )
    {
LABEL_27:
      if ( v16 <= 0 )
        goto LABEL_39;
      while ( 1 )
      {
        v21 = v16 - 1;
        if ( sub_F5F4((int)v38, 0x1001u, "%s.%d", v2, v16 - 1) > 0x1000
          || sub_F5F4((int)v39, 0x1001u, "%s.%d", v2, v16) > 0x1000 )
        {
          v19 = 19;
LABEL_30:
          v20 = sub_18698(v19);
          v32 = v16--;
          _syslog_chk(3, 1, "unable to rename log file '%s.%d' to '%s.%d': %s", v2, v21, v2, v32, v20);
          if ( !v21 )
            goto LABEL_38;
        }
        else
        {
          v22 = sub_1B15C(v38, v39);
          v23 = v22 == 0;
          if ( v22 )
            v23 = v22 == 38;
          v19 = v22;
          if ( !v23 )
            goto LABEL_30;
          --v16;
          if ( !v21 )
          {
LABEL_38:
            v17 = *(_DWORD *)(a1 + 24);
LABEL_39:
            if ( v17 )
            {
              if ( sub_F5F4((int)v39, 0x1001u, "%s.0", v2) > 0x1000 )
              {
                v14 = 19;
                goto LABEL_43;
              }
              v12 = sub_1B15C(v2, v39);
              v13 = v12 == 0;
              if ( v12 )
                v13 = v12 == 38;
              v14 = v12;
              if ( !v13 )
              {
LABEL_43:
                v24 = (const char *)sub_18698(v14);
                _syslog_chk(3, 1, "unable to rename log file '%s' to '%s.0': %s", v2, v2, v24);
                return v8;
              }
            }
            else
            {
              v25 = sub_1B0B0(v2);
              v26 = v25 == 0;
              if ( v25 )
                v26 = v25 == 38;
              if ( !v26 )
              {
                v27 = (const char *)sub_18698(v25);
                _syslog_chk(3, 1, "unable to remove log file '%s': %s", v2, v27);
                return v8;
              }
            }
            return 0;
          }
        }
      }
    }
    while ( 1 )
    {
      if ( --v16 < v17 )
        goto LABEL_27;
      if ( sub_F5F4((int)v38, 0x1001u, "%s.%d", v2, v16) > 0x1000 )
        break;
      v30 = sub_1B0B0(v38);
      v31 = v30 == 0;
      if ( v30 )
        v31 = v30 == 38;
      v28 = v30;
      if ( v31 )
      {
        v17 = *(_DWORD *)(a1 + 24);
      }
      else
      {
LABEL_52:
        v29 = (const char *)sub_18698(v28);
        _syslog_chk(3, 1, "unable to remove log file '%s.%d': %s", v2, v16, v29);
        v17 = *(_DWORD *)(a1 + 24);
      }
    }
    v28 = 19;
    goto LABEL_52;
  }
  return v8;
}
