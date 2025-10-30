int sub_1B5A8()
{
  int v0; // r11
  int v1; // r10
  int v2; // r9
  int v4; // r4
  int v5; // r4
  int v6; // r6
  int v7; // r5
  _BOOL4 v8; // r5
  int v9; // r3
  _BOOL4 v10; // r7
  _BOOL4 v11; // r3
  _BOOL4 v12; // r2
  _BOOL4 v13; // r6
  _BOOL4 v14; // r5
  _BOOL4 v15; // r7
  _BOOL4 v16; // r4
  _BOOL4 v17; // r3
  _BOOL4 v18; // r5
  _BOOL4 v19; // r0
  _BOOL4 v20; // [sp+0h] [bp-44h]
  _BOOL4 v21; // [sp+4h] [bp-40h]
  _BOOL4 v22; // [sp+8h] [bp-3Ch]
  _BOOL4 v23; // [sp+8h] [bp-3Ch]
  _BOOL4 v24; // [sp+Ch] [bp-38h]
  _BOOL4 v25; // [sp+Ch] [bp-38h]
  _BOOL4 v26; // [sp+10h] [bp-34h]
  _BOOL4 v27; // [sp+10h] [bp-34h]
  _BOOL4 v28; // [sp+14h] [bp-30h]
  _BOOL4 v29; // [sp+18h] [bp-2Ch]
  _BOOL4 v30; // [sp+1Ch] [bp-28h]
  int v31; // [sp+20h] [bp-24h]
  _BOOL4 v32; // [sp+24h] [bp-20h]
  int v33; // [sp+28h] [bp-1Ch] BYREF
  char s2[4]; // [sp+2Ch] [bp-18h] BYREF
  int v35; // [sp+30h] [bp-14h]
  int v36; // [sp+34h] [bp-10h]
  int v37; // [sp+38h] [bp-Ch]
  int v38; // [sp+3Ch] [bp-8h]

  v0 = 0;
  v1 = 0;
  v2 = 0;
  *(_DWORD *)s2 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v33 = 20;
  do
  {
    if ( !sub_26C0C(v2) )
      goto LABEL_3;
    v4 = *(_DWORD *)(dword_B3CC0 + 4 * v2);
    (*(void (__fastcall **)(int, char *, int *))(v4 + 68))(v4, s2, &v33);
    v5 = (*(int (__fastcall **)(int))(v4 + 84))(v4);
    v6 = strncmp("F1V31B1C1", s2, 9u);
    if ( v6 )
    {
      v7 = strncmp("F1V31B2C1", s2, 9u);
      if ( !v7 || !strncmp("F1V31B3C1", s2, 9u) || !strncmp("F1V31B4C1", s2, 9u) )
      {
        if ( v5 == 1 )
          goto LABEL_11;
        v8 = v7 == 0;
        v20 = v5 == 2;
        if ( v8 && v20 )
          goto LABEL_11;
        v24 = strncmp("F1V31B3C1", s2, 9u) == 0;
        if ( v24 && v20 )
          goto LABEL_11;
      }
      else
      {
        v8 = 0;
        v24 = 0;
        v20 = v5 == 2;
      }
    }
    else
    {
      if ( v5 == 1 || v5 == 2 )
        goto LABEL_11;
      v20 = 0;
      v8 = strncmp("F1V31B2C1", s2, 9u) == 0;
      v24 = strncmp("F1V31B3C1", s2, 9u) == 0;
    }
    v10 = strncmp("F1V31B4C1", s2, 9u) == 0;
    if ( !v10 || !v20 )
    {
      v21 = v5 == 1;
      v22 = strncmp("F1V30B3C1", s2, 9u) == 0;
      if ( !v22 || !v21 )
      {
        v11 = strncmp("F1V30B4C1", s2, 9u) == 0;
        if ( (!v11 || !v21) && (!v22 || !v20) && (!v11 || !v20) )
        {
          v12 = v6 == 0;
          if ( v10 || v24 || v8 || v12 )
          {
            if ( v5 == 3 || (v13 = v5 == 4, v13 && v12) )
            {
LABEL_77:
              v9 = 30;
              goto LABEL_12;
            }
          }
          else
          {
            v13 = v5 == 4;
          }
          v26 = v11;
          if ( (!v13 || !v8) && (!v13 || !v24) && (!v13 || !v10) )
          {
            v14 = strncmp("F1V30B1C1", s2, 9u) == 0;
            if ( !v14 || !v21 )
            {
              v15 = strncmp("F1V30B2C1", s2, 9u) == 0;
              if ( (!v15 || !v21) && (!v14 || !v20) && (!v15 || !v20) )
              {
                v28 = v5 == 3;
                if ( (!v22 || !v28) && (!v26 || v5 != 3) && (!v13 || !v22) && (!v13 || !v26) )
                {
                  v16 = v5 == 5;
                  v30 = strncmp("F1V30B3C2", s2, 9u) == 0;
                  if ( !v30 || !v16 )
                  {
                    v29 = strncmp("F1V30B4C2", s2, 9u) == 0;
                    if ( !v29 || !v16 )
                    {
                      v27 = strncmp("F1V31B1C2", s2, 9u) == 0;
                      if ( !v27 || !v16 )
                      {
                        v25 = strncmp("F1V31B2C2", s2, 9u) == 0;
                        if ( !v25 || !v16 )
                        {
                          v23 = strncmp("F1V31B3C2", s2, 9u) == 0;
                          if ( !v23 || !v16 )
                          {
                            v17 = strncmp("F1V31B4C2", s2, 9u) == 0;
                            if ( !v17 || !v16 )
                            {
                              v31 = v17 || v23 || v25 || v27;
                              if ( v31 && (v21 || v27 && v20)
                                || v25 && v20
                                || v23 && v20
                                || (v32 = v17, v17 && v20)
                                || v14 && v28
                                || v15 && v28
                                || v14 && v13
                                || v15 && v13
                                || v30 && v21
                                || v29 && v21
                                || v30 && v20
                                || v29 && v20
                                || (v18 = strncmp("F1V30B1C2", s2, 9u) == 0, v18 && v16)
                                || (v19 = strncmp("F1V30B2C2", s2, 9u) == 0, v19 && v16) )
                              {
                                v9 = 20;
                              }
                              else if ( v31 && (v28 || v27 && v13)
                                     || v25 && v13
                                     || v23 && v13
                                     || v32 && v13
                                     || v18 && v21
                                     || v19 && v21
                                     || v18 && v20
                                     || v19 && v20
                                     || v30 && v28
                                     || v29 && v28
                                     || v30 && v13 )
                              {
                                v9 = 10;
                              }
                              else if ( v29 && v13 )
                              {
                                v9 = 10;
                              }
                              else
                              {
                                v9 = 0;
                              }
                              goto LABEL_12;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LABEL_77;
        }
      }
    }
LABEL_11:
    v9 = 40;
LABEL_12:
    v1 += v9;
    ++v0;
LABEL_3:
    ++v2;
  }
  while ( v2 != 4 );
  if ( v0 )
    return sub_8F588(v1, v0);
  else
    return 0;
}
