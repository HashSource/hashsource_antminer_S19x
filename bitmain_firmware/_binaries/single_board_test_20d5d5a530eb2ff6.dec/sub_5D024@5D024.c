int sub_5D024()
{
  int result; // r0
  int v1; // r5
  int v2; // r4
  int v3; // r10
  int v4; // r6
  int v5; // r8
  int v6; // r7
  int v7; // r11
  int v8; // r9
  int v9; // r10
  int v10; // r10
  int v11; // r3
  int v12; // r9
  int v13; // r7
  int v14; // r6
  int v15; // r4
  int v16; // r5
  int v17; // r8
  int v18; // [sp+4h] [bp-18h]
  int v19; // [sp+8h] [bp-14h]
  int v20; // [sp+Ch] [bp-10h]
  int v21; // [sp+10h] [bp-Ch]
  int v22; // [sp+14h] [bp-8h]

  result = *(unsigned __int8 *)(dword_223680 + 260);
  if ( *(_BYTE *)(dword_223680 + 260) )
  {
    if ( strncmp("BP", s2, 2u) )
      return 0;
    v1 = strncmp("F1V01B4C1", haystack, 9u);
    if ( v1 )
    {
      v2 = strncmp("F1V01B5C1", haystack, 9u);
      if ( v2 )
        goto LABEL_17;
      if ( !strncmp("BIN1", dword_6E3358, 4u) )
        return 60;
    }
    else
    {
      if ( !strncmp("BIN1", dword_6E3358, 4u) )
      {
        v2 = strncmp("F1V01B5C1", haystack, 9u);
        goto LABEL_6;
      }
      v2 = strncmp("F1V01B5C1", haystack, 9u);
      if ( v2 )
      {
LABEL_17:
        v4 = strncmp("F1V01B3C1", haystack, 9u);
        if ( !v4 && !strncmp("BIN1", dword_6E3358, 4u) )
          return 50;
LABEL_21:
        if ( !v1 && !strncmp("BIN2", dword_6E3358, 4u) )
        {
          if ( !v2 )
          {
LABEL_24:
            if ( !strncmp("BIN1", dword_6E3358, 4u) )
              return 60;
            else
              return 50;
          }
          return 50;
        }
        v5 = strncmp("F2V01B1C1", haystack, 9u);
        if ( v5 )
        {
          v6 = strncmp("F2V01B2C1", haystack, 9u);
          if ( !v6 )
          {
            if ( !strncmp("BIN1", dword_6E3358, 4u) )
              goto LABEL_6;
LABEL_30:
            v6 = strncmp("F2V01B3C1", haystack, 9u);
            if ( v6 )
            {
              v7 = 0;
              v8 = strncmp("F2V01B4C1", haystack, 9u);
              if ( v8 )
                goto LABEL_32;
              goto LABEL_46;
            }
            goto LABEL_57;
          }
        }
        else
        {
          if ( !strncmp("BIN1", dword_6E3358, 4u) )
            goto LABEL_6;
          v6 = strncmp("F2V01B2C1", haystack, 9u);
          if ( !v6 )
            goto LABEL_30;
        }
        v10 = strncmp("F2V01B3C1", haystack, 9u);
        if ( v10 )
        {
          v8 = strncmp("F2V01B4C1", haystack, 9u);
          if ( !v8 )
          {
            if ( !strncmp("BIN1", dword_6E3358, 4u) )
              goto LABEL_6;
            v8 = v6;
            v6 = v10;
LABEL_46:
            if ( !strncmp("BIN2", dword_6E3358, 4u) )
              return 50;
            v11 = v6;
            v6 = v8;
            v8 = v11;
            goto LABEL_48;
          }
          v7 = v6;
          v6 = v10;
LABEL_32:
          v9 = strncmp("F2V01B5C1", haystack, 9u);
          if ( !v9 )
          {
            if ( strncmp("BIN1", dword_6E3358, 4u) )
            {
              if ( !strncmp("BIN2", dword_6E3358, 4u) )
                return 50;
              v9 = v8;
              v8 = v6;
              v6 = v7;
              goto LABEL_36;
            }
LABEL_6:
            if ( v2 )
              return 50;
            else
              return 60;
          }
LABEL_51:
          if ( !v2 && !strncmp("BIN2", dword_6E3358, 4u) )
            goto LABEL_24;
          goto LABEL_38;
        }
        if ( !strncmp("BIN1", dword_6E3358, 4u) )
          goto LABEL_6;
LABEL_57:
        if ( !strncmp("BIN2", dword_6E3358, 4u) )
          return 50;
        v8 = strncmp("F2V01B4C1", haystack, 9u);
        if ( !v8 )
        {
LABEL_48:
          if ( !strncmp("BIN3", dword_6E3358, 4u) )
            return 50;
          v9 = strncmp("F2V01B5C1", haystack, 9u);
          if ( !v9 )
          {
LABEL_36:
            if ( !strncmp("BIN3", dword_6E3358, 4u) )
              return 50;
            v7 = v6;
            v6 = v8;
            v8 = v9;
            v9 = 0;
LABEL_38:
            v18 = strncmp("F1V01B1C1", haystack, 9u);
            if ( v18 )
            {
              v19 = strncmp("F1V01B2C1", haystack, 9u);
              if ( !v19 && !strncmp("BIN1", dword_6E3358, 4u) )
                return 40;
            }
            else
            {
              if ( !strncmp("BIN1", dword_6E3358, 4u) )
                return 40;
              v19 = strncmp("F1V01B2C1", haystack, 9u);
            }
            if ( !v4 && !strncmp("BIN2", dword_6E3358, 4u) || (!v1 || !v2) && !strncmp("BIN3", dword_6E3358, 4u) )
              return 40;
            v21 = strncmp("F1V01B4C2", haystack, 9u);
            if ( v21 )
            {
              v20 = strncmp("F1V01B5C2", haystack, 9u);
              if ( !v20 && !strncmp("BIN5", dword_6E3358, 4u) )
                return 40;
            }
            else
            {
              if ( !strncmp("BIN5", dword_6E3358, 4u) )
                return 40;
              v20 = strncmp("F1V01B5C2", haystack, 9u);
            }
            if ( v5 && v7 )
            {
              if ( v6 )
                goto LABEL_75;
              if ( !strncmp("BIN3", dword_6E3358, 4u) )
                return 40;
            }
            else
            {
              if ( !strncmp("BIN2", dword_6E3358, 4u) || !strncmp("BIN3", dword_6E3358, 4u) )
                return 40;
              if ( v6 )
                goto LABEL_75;
            }
            if ( !strncmp("BIN4", dword_6E3358, 4u) )
              return 40;
LABEL_75:
            v22 = strncmp("F2V01B3C2", haystack, 9u);
            if ( !v22 && !strncmp("BIN5", dword_6E3358, 4u) || (!v8 || !v9) && !strncmp("BIN4", dword_6E3358, 4u) )
              return 40;
            v12 = strncmp("F2V01B4C2", haystack, 9u);
            if ( v12 )
            {
              v13 = strncmp("F2V01B5C2", haystack, 9u);
              if ( v13 )
                goto LABEL_83;
              if ( !strncmp("BIN1", dword_6E3358, 4u) )
                return 40;
            }
            else
            {
              if ( !strncmp("BIN1", dword_6E3358, 4u) )
                return 40;
              v13 = strncmp("F2V01B5C2", haystack, 9u);
            }
            if ( !strncmp("BIN5", dword_6E3358, 4u) )
              return 40;
LABEL_83:
            if ( (!v18 || !v19) && !strncmp("BIN2", dword_6E3358, 4u)
              || !v4 && !strncmp("BIN3", dword_6E3358, 4u)
              || (!v1 || !v2) && !strncmp("BIN4", dword_6E3358, 4u) )
            {
              return 40;
            }
            if ( (!v18 || !v19) && !strncmp("BIN3", dword_6E3358, 4u)
              || !v4 && !strncmp("BIN4", dword_6E3358, 4u)
              || (!v21 || !v20) && !strncmp("BIN1", dword_6E3358, 4u) )
            {
              return 30;
            }
            v14 = strncmp("F1V01B1C2", haystack, 9u);
            if ( v14 )
            {
              v15 = strncmp("F1V01B2C2", haystack, 9u);
              if ( !v15 )
              {
                if ( !strncmp("BIN5", dword_6E3358, 4u) )
                  return 30;
LABEL_117:
                v15 = 0;
                v16 = strncmp("F1V01B3C2", haystack, 9u);
                goto LABEL_118;
              }
            }
            else
            {
              if ( !strncmp("BIN5", dword_6E3358, 4u) )
                return 30;
              v15 = strncmp("F1V01B2C2", haystack, 9u);
              if ( !v15 )
                goto LABEL_117;
            }
            v16 = strncmp("F1V01B3C2", haystack, 9u);
            if ( !v16 && !strncmp("BIN5", dword_6E3358, 4u) )
              return 30;
LABEL_118:
            if ( (!v5 || !v7) && !strncmp("BIN4", dword_6E3358, 4u) )
              return 30;
            v17 = strncmp("F2V01B1C2", haystack, 9u);
            if ( v17 )
            {
              v3 = strncmp("F2V01B2C2", haystack, 9u);
              if ( v3 )
                goto LABEL_124;
              if ( !strncmp("BIN1", dword_6E3358, 4u) )
                return 30;
            }
            else
            {
              if ( !strncmp("BIN1", dword_6E3358, 4u) )
                return 30;
              v3 = strncmp("F2V01B2C2", haystack, 9u);
            }
            if ( !strncmp("BIN5", dword_6E3358, 4u) )
              return 30;
LABEL_124:
            if ( v22 )
            {
              if ( v12 && v13 )
              {
LABEL_129:
                if ( (v18 && v19 || strncmp("BIN4", dword_6E3358, 4u))
                  && (v16 || strncmp("BIN1", dword_6E3358, 4u))
                  && (v21 && v20 || strncmp("BIN2", dword_6E3358, 4u)) )
                {
                  if ( (!v14 || !v15) && !strncmp("BIN1", dword_6E3358, 4u)
                    || !v16 && !strncmp("BIN2", dword_6E3358, 4u)
                    || (!v21 || !v20) && !strncmp("BIN3", dword_6E3358, 4u) )
                  {
                    return 20;
                  }
                  if ( v17 && v3 )
                  {
                    if ( !v22 )
                    {
                      if ( !strncmp("BIN3", dword_6E3358, 4u) )
                        return 20;
LABEL_152:
                      if ( !strncmp("BIN4", dword_6E3358, 4u) )
                        return 20;
                      if ( !v12 )
                      {
LABEL_154:
                        if ( (v14 && v15 || strncmp("BIN2", dword_6E3358, 4u))
                          && (v16 || strncmp("BIN3", dword_6E3358, 4u))
                          && (v21 && v20 || strncmp("BIN4", dword_6E3358, 4u)) )
                        {
                          if ( (!v14 || !v15) && !strncmp("BIN3", dword_6E3358, 4u) )
                            return 10;
                          if ( v17 )
                          {
                            if ( !v3 )
                            {
                              if ( !strncmp("BIN4", dword_6E3358, 4u) )
                                return 10;
                              return v3;
                            }
                          }
                          else
                          {
                            if ( !strncmp("BIN4", dword_6E3358, 4u) )
                              return 10;
                            if ( !v3 )
                              return v3;
                          }
                          if ( !v16 )
                          {
                            if ( !strncmp("BIN4", dword_6E3358, 4u) )
                              return 10;
                            else
                              return 0;
                          }
                          return 0;
                        }
                        return 20;
                      }
LABEL_200:
                      if ( v13 )
                        goto LABEL_154;
LABEL_201:
                      if ( !strncmp("BIN4", dword_6E3358, 4u) )
                        return 20;
                      goto LABEL_154;
                    }
                  }
                  else
                  {
                    if ( !strncmp("BIN2", dword_6E3358, 4u) || !strncmp("BIN3", dword_6E3358, 4u) )
                      return 20;
                    if ( !v22 )
                      goto LABEL_152;
                  }
                  if ( !v12 )
                    goto LABEL_201;
                  goto LABEL_200;
                }
                return 30;
              }
              if ( !strncmp("BIN2", dword_6E3358, 4u) )
                return 30;
            }
            else
            {
              if ( !strncmp("BIN1", dword_6E3358, 4u) || !strncmp("BIN2", dword_6E3358, 4u) )
                return 30;
              if ( v12 && v13 )
                goto LABEL_129;
            }
            if ( !strncmp("BIN3", dword_6E3358, 4u) )
              return 30;
            goto LABEL_129;
          }
          v7 = v6;
          v6 = v8;
          v8 = 0;
          goto LABEL_51;
        }
        v7 = v6;
        v6 = 0;
        goto LABEL_32;
      }
    }
    v2 = 0;
    v4 = strncmp("F1V01B3C1", haystack, 9u);
    goto LABEL_21;
  }
  return result;
}
