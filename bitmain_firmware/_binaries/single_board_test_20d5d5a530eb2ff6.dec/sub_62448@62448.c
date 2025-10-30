int sub_62448()
{
  int v0; // r6
  int v1; // r4
  const char *v2; // r3
  int v3; // r5
  int v4; // r11
  int v5; // r5
  int v6; // r6
  int v8; // r4
  int v9; // r5
  int v10; // r7
  int v11; // r10
  int v12; // r8
  int v13; // r9
  int v14; // r10
  int v15; // r9
  int v16; // r8
  int v17; // r7
  int v18; // r5
  int v19; // r6
  int v20; // r10
  int v21; // [sp+8h] [bp-3Ch]
  int v22; // [sp+Ch] [bp-38h]
  int v23; // [sp+Ch] [bp-38h]
  char v24[52]; // [sp+10h] [bp-34h] BYREF

  v0 = dword_223680;
  if ( strcmp((const char *)(dword_223680 + 32), "BHB56907") )
  {
    v1 = *(unsigned __int8 *)(v0 + 260);
    if ( !*(_BYTE *)(v0 + 260) )
      return v1;
    if ( strncmp("F1V18", haystack, 5u)
      && strncmp("F1V19", haystack, 5u)
      && strncmp("F1V22", haystack, 5u)
      && strncmp("F1V23", haystack, 5u)
      && strncmp("F1V30", haystack, 5u)
      && strncmp("F1V31", haystack, 5u) )
    {
      v9 = sub_5D024();
      v1 = v9;
      if ( v9 )
      {
        sub_1E938(v24, 0x30u);
        v1 = v9;
        printf("%s ", v24);
        printf("%s : NEM new ft add %d\n", "nem_comp", v9);
        snprintf(byte_65133C, 0x100u, "NEM new ft add %d", v9);
        sub_3CC5C((int)byte_65133C, v24);
      }
      return v1;
    }
    if ( strstr(haystack, "C1") )
    {
      dword_65143C = 20;
      v1 = 20;
      sub_1E938(v24, 0x30u);
      printf("%s ", v24);
      printf("%s : NEM %s bin level ADD %d\n", "nem_comp", "fast", 20);
      v2 = "fast";
    }
    else
    {
      dword_65143C = 10;
      v1 = 10;
      sub_1E938(v24, 0x30u);
      printf("%s ", v24);
      printf("%s : NEM %s bin level ADD %d\n", "nem_comp", "slow", 10);
      v2 = "slow";
    }
    snprintf(byte_65123C, 0x100u, "NEM %s bin level ADD %d", v2, v1);
    sub_3CC5C((int)byte_65123C, v24);
    v3 = dword_223680;
    if ( !strcmp((const char *)(dword_223680 + 32), "BHB56907") )
    {
      v1 += sub_5CFF0();
      return v1;
    }
    v4 = strncmp("BP", s2, 2u);
    if ( v4 )
      return v1;
    if ( !*(_BYTE *)(v3 + 260) )
    {
LABEL_13:
      v1 += v4;
      return v1;
    }
    v5 = strncmp("F1V31B1C1", haystack, 9u);
    if ( !v5 && !strncmp("BIN1", dword_6E3358, 4u) )
    {
LABEL_12:
      v4 = 40;
      goto LABEL_13;
    }
    v6 = strncmp("F1V31B2C1", haystack, 9u);
    if ( v6 )
    {
      v10 = strncmp("F1V31B3C1", haystack, 9u);
      if ( v10 )
      {
LABEL_49:
        v11 = strncmp("F1V31B4C1", haystack, 9u);
        if ( !v11 && !strncmp("BIN1", dword_6E3358, 4u) )
          goto LABEL_12;
LABEL_36:
        if ( !v5 && !strncmp("BIN2", dword_6E3358, 4u) )
          goto LABEL_12;
        if ( v6 )
        {
          if ( !v10 )
          {
LABEL_53:
            if ( !strncmp("BIN2", dword_6E3358, 4u) )
              goto LABEL_12;
            goto LABEL_41;
          }
        }
        else
        {
          if ( !strncmp("BIN2", dword_6E3358, 4u) )
            goto LABEL_12;
          if ( !v10 )
          {
LABEL_41:
            v12 = strncmp("F1V30B3C1", haystack, 9u);
            if ( v12 )
            {
              v13 = strncmp("F1V30B4C1", haystack, 9u);
              if ( v13 )
                goto LABEL_45;
              if ( !strncmp("BIN1", dword_6E3358, 4u) )
                goto LABEL_12;
            }
            else
            {
              if ( !strncmp("BIN1", dword_6E3358, 4u) )
                goto LABEL_12;
              v13 = strncmp("F1V30B4C1", haystack, 9u);
            }
            if ( !strncmp("BIN2", dword_6E3358, 4u) )
              goto LABEL_12;
LABEL_45:
            if ( !v5 && !strncmp("BIN3", dword_6E3358, 4u) )
              goto LABEL_47;
            if ( v6 )
            {
              if ( !v10 )
              {
LABEL_89:
                if ( !strncmp("BIN3", dword_6E3358, 4u) )
                  goto LABEL_47;
                goto LABEL_63;
              }
            }
            else
            {
              if ( !strncmp("BIN3", dword_6E3358, 4u) )
                goto LABEL_47;
              if ( !v10 )
              {
LABEL_63:
                if ( !v5 && !strncmp("BIN4", dword_6E3358, 4u) )
                  goto LABEL_47;
                if ( v6 )
                {
                  if ( !v10 )
                  {
LABEL_97:
                    if ( !strncmp("BIN4", dword_6E3358, 4u) )
                      goto LABEL_47;
                    goto LABEL_68;
                  }
                }
                else
                {
                  if ( !strncmp("BIN4", dword_6E3358, 4u) )
                    goto LABEL_47;
                  if ( !v10 )
                  {
LABEL_68:
                    v22 = strncmp("F1V30B1C1", haystack, 9u);
                    if ( v22 )
                    {
                      v14 = strncmp("F1V30B2C1", haystack, 9u);
                      if ( v14 )
                        goto LABEL_72;
                      if ( !strncmp("BIN1", dword_6E3358, 4u) )
                        goto LABEL_47;
                    }
                    else
                    {
                      if ( !strncmp("BIN1", dword_6E3358, 4u) )
                        goto LABEL_47;
                      v14 = strncmp("F1V30B2C1", haystack, 9u);
                    }
                    if ( !strncmp("BIN2", dword_6E3358, 4u) )
                      goto LABEL_47;
LABEL_72:
                    if ( (!v12 || !v13) && (!strncmp("BIN3", dword_6E3358, 4u) || !strncmp("BIN4", dword_6E3358, 4u)) )
                      goto LABEL_47;
                    v15 = strncmp("F1V30B3C2", haystack, 9u);
                    if ( !v15 && !strncmp("BIN5", dword_6E3358, 4u) )
                      goto LABEL_47;
                    v21 = strncmp("F1V30B4C2", haystack, 9u);
                    if ( !v21 && !strncmp("BIN5", dword_6E3358, 4u) )
                      goto LABEL_47;
                    v16 = strncmp("F1V31B1C2", haystack, 9u);
                    if ( !v16 && !strncmp("BIN5", dword_6E3358, 4u) )
                      goto LABEL_47;
                    v17 = strncmp("F1V31B2C2", haystack, 9u);
                    if ( v17 )
                    {
                      v18 = strncmp("F1V31B3C2", haystack, 9u);
                      if ( !v18 )
                      {
                        if ( strncmp("BIN5", dword_6E3358, 4u) )
                          goto LABEL_84;
LABEL_47:
                        v1 += 30;
                        return v1;
                      }
                    }
                    else
                    {
                      if ( !strncmp("BIN5", dword_6E3358, 4u) )
                        goto LABEL_47;
                      v18 = strncmp("F1V31B3C2", haystack, 9u);
                      if ( !v18 )
                      {
LABEL_84:
                        v18 = 0;
                        v19 = strncmp("F1V31B4C2", haystack, 9u);
                        goto LABEL_85;
                      }
                    }
                    v19 = strncmp("F1V31B4C2", haystack, 9u);
                    if ( v19 || strncmp("BIN5", dword_6E3358, 4u) )
                    {
LABEL_85:
                      if ( !v16 && !strncmp("BIN1", dword_6E3358, 4u) )
                        goto LABEL_87;
                      if ( v17 )
                      {
                        if ( !v18 )
                        {
LABEL_124:
                          if ( !strncmp("BIN1", dword_6E3358, 4u) )
                            goto LABEL_87;
                          goto LABEL_105;
                        }
                      }
                      else
                      {
                        if ( !strncmp("BIN1", dword_6E3358, 4u) )
                          goto LABEL_87;
                        if ( !v18 )
                        {
LABEL_105:
                          if ( !v16 && !strncmp("BIN2", dword_6E3358, 4u) )
                            goto LABEL_87;
                          if ( v17 )
                          {
                            if ( !v18 )
                              goto LABEL_169;
                          }
                          else
                          {
                            if ( !strncmp("BIN2", dword_6E3358, 4u) )
                              goto LABEL_87;
                            if ( !v18 )
                              goto LABEL_110;
                          }
                          if ( v19 )
                          {
LABEL_110:
                            if ( (!v22 || !v14)
                              && (!strncmp("BIN3", dword_6E3358, 4u) || !strncmp("BIN4", dword_6E3358, 4u))
                              || (!v15 || !v21)
                              && (!strncmp("BIN1", dword_6E3358, 4u) || !strncmp("BIN2", dword_6E3358, 4u)) )
                            {
                              goto LABEL_87;
                            }
                            v23 = strncmp("F1V30B1C2", haystack, 9u);
                            if ( v23 )
                            {
                              v20 = strncmp("F1V30B2C2", haystack, 9u);
                              if ( v20 || strncmp("BIN5", dword_6E3358, 4u) )
                              {
LABEL_119:
                                if ( !v16 && !strncmp("BIN3", dword_6E3358, 4u) )
                                  goto LABEL_121;
                                if ( v17 )
                                {
                                  if ( !v18 )
                                  {
LABEL_150:
                                    if ( !strncmp("BIN3", dword_6E3358, 4u) )
                                      goto LABEL_121;
                                    goto LABEL_135;
                                  }
                                }
                                else
                                {
                                  if ( !strncmp("BIN3", dword_6E3358, 4u) )
                                    goto LABEL_121;
                                  if ( !v18 )
                                  {
LABEL_135:
                                    if ( !v16 && !strncmp("BIN4", dword_6E3358, 4u) )
                                      goto LABEL_121;
                                    if ( v17 )
                                    {
                                      if ( !v18 )
                                        goto LABEL_158;
                                    }
                                    else
                                    {
                                      if ( !strncmp("BIN4", dword_6E3358, 4u) )
                                        goto LABEL_121;
                                      if ( !v18 )
                                        goto LABEL_140;
                                    }
                                    if ( v19 )
                                      goto LABEL_140;
LABEL_158:
                                    if ( strncmp("BIN4", dword_6E3358, 4u) )
                                    {
LABEL_140:
                                      if ( v23 && v20
                                        || strncmp("BIN1", dword_6E3358, 4u) && strncmp("BIN2", dword_6E3358, 4u) )
                                      {
                                        if ( v15 && v21 )
                                          return v1;
                                        if ( strncmp("BIN3", dword_6E3358, 4u) )
                                        {
                                          if ( !strncmp("BIN4", dword_6E3358, 4u) )
                                            v4 = 10;
                                          v1 += v4;
                                          return v1;
                                        }
                                      }
                                    }
LABEL_121:
                                    v1 += 10;
                                    return v1;
                                  }
                                }
                                if ( v19 )
                                  goto LABEL_135;
                                goto LABEL_150;
                              }
                            }
                            else if ( strncmp("BIN5", dword_6E3358, 4u) )
                            {
                              v20 = strncmp("F1V30B2C2", haystack, 9u);
                              goto LABEL_119;
                            }
LABEL_87:
                            v1 += 20;
                            return v1;
                          }
LABEL_169:
                          if ( !strncmp("BIN2", dword_6E3358, 4u) )
                            goto LABEL_87;
                          goto LABEL_110;
                        }
                      }
                      if ( v19 )
                        goto LABEL_105;
                      goto LABEL_124;
                    }
                    goto LABEL_47;
                  }
                }
                if ( v11 )
                  goto LABEL_68;
                goto LABEL_97;
              }
            }
            if ( v11 )
              goto LABEL_63;
            goto LABEL_89;
          }
        }
        if ( v11 )
          goto LABEL_41;
        goto LABEL_53;
      }
      if ( !strncmp("BIN1", dword_6E3358, 4u) )
        goto LABEL_12;
    }
    else
    {
      if ( !strncmp("BIN1", dword_6E3358, 4u) )
        goto LABEL_12;
      v10 = strncmp("F1V31B3C1", haystack, 9u);
      if ( v10 )
        goto LABEL_49;
    }
    v10 = 0;
    v11 = strncmp("F1V31B4C1", haystack, 9u);
    goto LABEL_36;
  }
  v1 = 0;
  if ( strncmp("BS", s2, 2u) && strncmp("BP", s2, 2u) )
    return v1;
  if ( strstr(haystack, "C1") )
    v8 = 20;
  else
    v8 = 10;
  dword_65143C = v8;
  return v8;
}
