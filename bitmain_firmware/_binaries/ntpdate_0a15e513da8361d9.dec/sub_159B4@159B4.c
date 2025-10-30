int __fastcall sub_159B4(int a1)
{
  const char *v2; // r6
  char *v3; // r0
  char *v4; // r4
  const char *v5; // r9
  size_t v6; // r5
  int result; // r0
  int v8; // r4
  int v9; // r0
  _BOOL4 v10; // r3
  int v11; // r4
  int v12; // r5
  _BOOL4 v13; // r3
  int v14; // r0
  const char *v15; // r0
  int v16; // r0
  bool v17; // zf
  int v18; // r5
  const char *v19; // r0
  int v20; // r0
  const char *v21; // r0
  int v22; // r0
  bool v23; // zf
  const char *v24; // r0
  bool v25; // zf
  bool v26; // zf
  int v27; // [sp+0h] [bp-253Ch]
  int v28; // [sp+8h] [bp-2534h]
  char *v29; // [sp+1Ch] [bp-2520h] BYREF
  _BYTE v30[24]; // [sp+20h] [bp-251Ch] BYREF
  char v31[252]; // [sp+424h] [bp-2118h] BYREF
  size_t v32; // [sp+524h] [bp-2018h]
  int v33; // [sp+52Ch] [bp-2010h] BYREF
  _BYTE v34[4048]; // [sp+1530h] [bp-100Ch] BYREF

  if ( *(_DWORD *)(a1 + 24) == -2 )
    return 0;
  v2 = *(const char **)(a1 + 20);
  if ( *(_DWORD *)(a1 + 4) != 3 )
    sub_10C38();
  v3 = strrchr(*(const char **)(a1 + 20), 47);
  if ( v3 )
  {
    *v3 = 0;
    v4 = *(char **)(a1 + 20);
    v5 = v3 + 1;
  }
  else
  {
    v5 = v2;
    v4 = ".";
  }
  v6 = strlen(v5);
  sub_1A328(v30);
  result = sub_1A3B4((int)v30, v4);
  if ( v5 != *(const char **)(a1 + 20) )
    *((_BYTE *)v5 - 1) = 47;
  if ( result )
    return result;
  v8 = -1;
  while ( !sub_1A51C(v30) )
  {
    while ( v6 < v32 && !strncmp(v31, v5, v6) && v31[v6] == 46 )
    {
      v9 = strtol(&v30[v6 + 1029], &v29, 10);
      v10 = v9 > v8;
      if ( *v29 )
        v10 = 0;
      if ( v10 )
        v8 = v9;
      if ( sub_1A51C(v30) )
        goto LABEL_18;
    }
  }
LABEL_18:
  v11 = v8 + 1;
  sub_1A600(v30);
  v12 = *(_DWORD *)(a1 + 24);
  v13 = v12 == -1;
  if ( v12 > v11 )
    v13 = 1;
  if ( !v13 )
  {
LABEL_21:
    if ( --v11 >= v12 )
    {
      do
      {
        if ( sub_FA7C((int)&v33, 0x1001u, "%s.%d", v2, v11) <= 0x1000 )
        {
          v14 = sub_1B6F0(&v33);
          v25 = v14 == 38;
          if ( v14 != 38 )
            v25 = v14 == 0;
          if ( v25 )
          {
            v12 = *(_DWORD *)(a1 + 24);
            goto LABEL_21;
          }
        }
        else
        {
          v14 = 19;
        }
        v15 = (const char *)sub_18C7C(v14);
        v27 = v11--;
        _syslog_chk(3, 1, "unable to remove log file '%s.%d': %s", v2, v27, v15);
        v12 = *(_DWORD *)(a1 + 24);
      }
      while ( v11 >= v12 );
    }
  }
  if ( v11 <= 0 )
    goto LABEL_37;
  do
  {
    while ( 1 )
    {
      v18 = v11 - 1;
      if ( sub_FA7C((int)&v33, 0x1001u, "%s.%d", v2, v11 - 1) > 0x1000
        || sub_FA7C((int)v34, 0x1001u, "%s.%d", v2, v11) > 0x1000 )
      {
        v16 = 19;
        break;
      }
      v16 = sub_1B79C(&v33, v34);
      v17 = v16 == 38;
      if ( v16 != 38 )
        v17 = v16 == 0;
      if ( !v17 )
        break;
      --v11;
      if ( !v18 )
        goto LABEL_36;
    }
    v19 = (const char *)sub_18C7C(v16);
    v28 = v11--;
    _syslog_chk(3, 1, "unable to rename log file '%s.%d' to '%s.%d': %s", v2, v11, v2, v28, v19);
  }
  while ( v18 );
LABEL_36:
  v12 = *(_DWORD *)(a1 + 24);
LABEL_37:
  if ( v12 )
  {
    if ( sub_FA7C((int)v34, 0x1001u, "%s.0", v2) > 0x1000 )
    {
      v20 = 19;
      goto LABEL_41;
    }
    v20 = sub_1B79C(v2, v34);
    v26 = v20 == 38;
    if ( v20 != 38 )
      v26 = v20 == 0;
    if ( !v26 )
    {
LABEL_41:
      v21 = (const char *)sub_18C7C(v20);
      _syslog_chk(3, 1, "unable to rename log file '%s' to '%s.0': %s", v2, v2, v21);
    }
    return 0;
  }
  else
  {
    v22 = sub_1B6F0(v2);
    v23 = v22 == 38;
    if ( v22 != 38 )
      v23 = v22 == 0;
    if ( v23 )
      return 0;
    v24 = (const char *)sub_18C7C(v22);
    _syslog_chk(3, 1, "unable to remove log file '%s': %s", v2, v24);
    return 0;
  }
}
