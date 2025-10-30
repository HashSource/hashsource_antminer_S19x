int sub_1B464()
{
  int v0; // r11
  int v1; // r7
  int v2; // r9
  int v3; // r4
  int v4; // r4
  int v5; // r8
  int v6; // r6
  int v7; // r0
  bool v8; // zf
  int v9; // r5
  int v11; // r1
  int v12; // r3
  _BOOL4 v13; // r5
  unsigned int v14; // r2
  unsigned int v15; // r2
  int v16; // r8
  int v17; // r6
  int v18; // r3
  int v19; // r5
  int v20; // r8
  int v21; // r3
  int v22; // r3
  _BOOL4 v23; // r5
  int v24; // r0
  int v25; // r3
  _BOOL4 v26; // r8
  bool v27; // zf
  _BOOL4 v28; // r2
  int v29; // r6
  int v30; // r0
  int v31; // r3
  int v33; // r0
  bool v34; // zf
  bool v35; // r0
  int v37; // r0
  bool v38; // zf
  bool v39; // r0
  int v40; // r0
  int v41; // r3
  int v42; // r5
  bool v43; // zf
  int v45; // r3
  unsigned int v46; // [sp+0h] [bp-3Ch]
  int v47; // [sp+0h] [bp-3Ch]
  int v48; // [sp+0h] [bp-3Ch]
  int v49; // [sp+Ch] [bp-30h]
  int v50; // [sp+Ch] [bp-30h]
  int v51; // [sp+Ch] [bp-30h]
  int v52; // [sp+10h] [bp-2Ch]
  int v53; // [sp+14h] [bp-28h]
  int v54; // [sp+18h] [bp-24h]
  int v55; // [sp+1Ch] [bp-20h]
  int v56; // [sp+1Ch] [bp-20h]
  int v57; // [sp+20h] [bp-1Ch] BYREF
  char s2[4]; // [sp+24h] [bp-18h] BYREF
  int v59; // [sp+28h] [bp-14h]
  int v60; // [sp+2Ch] [bp-10h]
  int v61; // [sp+30h] [bp-Ch]
  int v62; // [sp+34h] [bp-8h]

  v0 = 0;
  v1 = 0;
  *(_DWORD *)s2 = 0;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v62 = 0;
  v2 = 0;
  v57 = 20;
  do
  {
    if ( !sub_266F0(v1) )
      goto LABEL_13;
    v3 = *(_DWORD *)(dword_B0F4C + 4 * v1);
    (*(void (__fastcall **)(int, char *, int *))(v3 + 68))(v3, s2, &v57);
    v4 = (*(int (__fastcall **)(int))(v3 + 84))(v3);
    v46 = strncmp("F1V31B1C1", s2, 9u);
    if ( !v46 )
    {
      if ( (unsigned int)(v4 - 1) <= 1 )
        goto LABEL_11;
      v5 = strncmp("F1V31B2C1", s2, 9u);
      v6 = strncmp("F1V31B3C1", s2, 9u);
      v9 = strncmp("F1V31B4C1", s2, 9u);
      if ( v5 )
      {
        if ( v6 )
          goto LABEL_21;
        v6 = v5;
LABEL_92:
        v5 = v6;
        v6 = 0;
        goto LABEL_21;
      }
LABEL_90:
      if ( v6 )
      {
        v5 = 0;
        goto LABEL_21;
      }
      goto LABEL_92;
    }
    v5 = strncmp("F1V31B2C1", s2, 9u);
    if ( !v5 )
    {
      if ( v4 == 1 || v4 == 2 )
        goto LABEL_11;
      v6 = strncmp("F1V31B3C1", s2, 9u);
      v9 = strncmp("F1V31B4C1", s2, 9u);
      goto LABEL_90;
    }
    v6 = strncmp("F1V31B3C1", s2, 9u);
    if ( v6 && strncmp("F1V31B4C1", s2, 9u) )
      goto LABEL_7;
    if ( v4 == 1 )
      goto LABEL_11;
    v6 = strncmp("F1V31B3C1", s2, 9u);
    if ( v6 )
    {
LABEL_7:
      v7 = strncmp("F1V31B4C1", s2, 9u);
      v8 = v4 == 2;
      if ( v4 == 2 )
        v8 = v7 == 0;
      v9 = v7;
      if ( v8 )
        goto LABEL_11;
    }
    else
    {
      if ( v4 == 2 )
        goto LABEL_11;
      v6 = 0;
      v9 = strncmp("F1V31B4C1", s2, 9u);
    }
LABEL_21:
    v49 = strncmp("F1V30B3C1", s2, 9u);
    if ( v49 )
    {
      v33 = strncmp("F1V30B4C1", s2, 9u);
      v34 = v4 == 1;
      if ( v4 == 1 )
        v34 = v33 == 0;
      v12 = v33;
      v35 = v33 == 0;
      if ( v34 )
        goto LABEL_11;
      if ( v4 == 2 && v35 )
        goto LABEL_11;
LABEL_24:
      v13 = v9 == 0;
      if ( !v6 )
        v11 = 1;
      v14 = __clz(v46);
      if ( v6 )
        v11 = v13;
      v15 = v14 >> 5;
      if ( v5 )
        v16 = v15;
      else
        v16 = 1;
      if ( v16 | v11 )
      {
        if ( v4 == 3 )
          goto LABEL_99;
        if ( v46 && !v16 && v6 )
        {
          if ( v4 == 4 && v13 )
            goto LABEL_99;
        }
        else if ( v4 == 4 )
        {
          goto LABEL_99;
        }
      }
      v47 = v12;
      v52 = strncmp("F1V30B1C1", s2, 9u);
      if ( v52 )
      {
        v37 = strncmp("F1V30B2C1", s2, 9u);
        v38 = v4 == 1;
        if ( v4 == 1 )
          v38 = v37 == 0;
        v17 = v37;
        v18 = v47;
        v39 = v37 == 0;
        if ( v38 || (v4 == 2 ? (v40 = v39) : (v40 = 0), v40) )
        {
LABEL_99:
          v2 += 30;
          goto LABEL_12;
        }
      }
      else
      {
        if ( v4 == 1 )
          goto LABEL_99;
        v17 = strncmp("F1V30B2C1", s2, 9u);
        v18 = v47;
        if ( v4 == 2 )
          goto LABEL_99;
      }
      if ( (!v49 || !v18) && (unsigned int)(v4 - 3) <= 1 )
        goto LABEL_99;
      v53 = strncmp("F1V30B3C2", s2, 9u);
      if ( v53 )
      {
        v19 = strncmp("F1V30B4C2", s2, 9u);
        v20 = v19;
        if ( v19 )
        {
          v48 = strncmp("F1V31B1C2", s2, 9u);
          if ( v48 )
            goto LABEL_47;
          if ( v4 == 5 )
            goto LABEL_99;
          v48 = v19;
          goto LABEL_137;
        }
        if ( v4 == 5 )
          goto LABEL_99;
        v48 = strncmp("F1V31B1C2", s2, 9u);
      }
      else
      {
        if ( v4 == 5 )
          goto LABEL_99;
        v20 = strncmp("F1V30B4C2", s2, 9u);
        v48 = strncmp("F1V31B1C2", s2, 9u);
        if ( v20 )
        {
          if ( v48 )
          {
            v50 = strncmp("F1V31B2C2", s2, 9u);
            if ( v50 )
            {
              if ( !strncmp("F1V31B3C2", s2, 9u) )
              {
                v45 = v48;
                v48 = v20;
                v50 = v45;
                v22 = 0;
                goto LABEL_53;
              }
              v42 = v48;
              v48 = v20;
LABEL_122:
              v26 = strncmp("F1V31B4C2", s2, 9u) == 0;
              v41 = v4 == 5 && v26;
              v54 = v41;
              if ( v41 )
                goto LABEL_99;
              v23 = v42 == 0;
              v25 = v50 == 0;
              v56 = v23 | v25 | v26;
              if ( !v56 )
              {
                if ( v50 )
                {
                  v54 = v23;
                  goto LABEL_158;
                }
                v25 = 0;
LABEL_130:
                if ( v4 == 2 )
                  goto LABEL_144;
                v56 = v25;
                v25 = v23;
LABEL_133:
                v23 = v25;
                v25 = 1;
                goto LABEL_60;
              }
LABEL_54:
              if ( v4 == 1 )
                goto LABEL_144;
              if ( v23 )
              {
                if ( v4 == 2 )
                  goto LABEL_144;
                if ( !v25 )
                {
                  v56 = v23;
                  goto LABEL_60;
                }
                v56 = v25;
                goto LABEL_133;
              }
              if ( !v25 )
              {
                if ( v54 )
                {
                  if ( v4 == 2 )
                    goto LABEL_144;
                  v23 = 0;
                  v56 = v54;
                  goto LABEL_60;
                }
                v56 = 1;
LABEL_158:
                v25 = v4 == 2 && v26;
                if ( v25 )
                  goto LABEL_144;
                v23 = v54;
                v54 = 0;
LABEL_60:
                if ( (!v52 || !v17) && (unsigned int)(v4 - 3) <= 1 )
                  goto LABEL_144;
                if ( v53 )
                {
                  v27 = v4 == 1;
                  if ( v4 == 1 )
                    v27 = v48 == 0;
                  if ( v27 || (v4 == 2 ? (v28 = v48 == 0) : (v28 = 0), v28) )
                  {
LABEL_144:
                    v2 += 20;
                    goto LABEL_12;
                  }
                }
                else if ( (unsigned int)(v4 - 1) <= 1 )
                {
                  goto LABEL_144;
                }
                v51 = v25;
                v29 = strncmp("F1V30B1C2", s2, 9u);
                if ( v29 )
                {
                  v30 = strncmp("F1V30B2C2", s2, 9u);
                  v43 = v30 == 0;
                  if ( !v30 )
                    v43 = v4 == 5;
                  v31 = v51;
                  if ( v43 )
                    goto LABEL_144;
                  if ( !v56 )
                    goto LABEL_155;
                }
                else
                {
                  if ( v4 == 5 )
                    goto LABEL_144;
                  v30 = strncmp("F1V30B2C2", s2, 9u);
                  v31 = v51;
                  if ( !v56 )
                    goto LABEL_78;
                }
                if ( v4 == 3 )
                  goto LABEL_82;
                if ( v23 || v31 || v54 )
                {
                  if ( v4 == 4 )
                    goto LABEL_82;
                }
                else if ( v4 == 4 && v26 )
                {
                  goto LABEL_82;
                }
                if ( !v29 )
                {
LABEL_78:
                  if ( (unsigned int)(v4 - 1) > 1 )
                    goto LABEL_79;
LABEL_82:
                  v2 += 10;
                  goto LABEL_12;
                }
LABEL_155:
                if ( v30 )
                {
LABEL_79:
                  if ( v53 && v48 || (unsigned int)(v4 - 3) > 1 )
                    goto LABEL_12;
                  goto LABEL_82;
                }
                goto LABEL_78;
              }
              goto LABEL_130;
            }
            goto LABEL_49;
          }
          v48 = v20;
          goto LABEL_137;
        }
      }
      if ( v48 )
      {
        v20 = 0;
LABEL_47:
        v50 = strncmp("F1V31B2C2", s2, 9u);
        if ( !v50 )
        {
          if ( v4 == 5 )
            goto LABEL_99;
LABEL_49:
          v21 = v48;
          v48 = v20;
          v50 = v21;
LABEL_50:
          if ( !strncmp("F1V31B3C2", s2, 9u) )
          {
            v22 = 1;
LABEL_53:
            v55 = v22;
            v54 = 1;
            v23 = v50 == 0;
            v24 = strncmp("F1V31B4C2", s2, 9u);
            v25 = v55;
            LOBYTE(v26) = v24 == 0;
            goto LABEL_54;
          }
          v42 = v50;
          v50 = 0;
          goto LABEL_122;
        }
        v42 = v48;
        v48 = v20;
LABEL_139:
        if ( !strncmp("F1V31B3C2", s2, 9u) )
        {
          if ( v4 == 5 )
            goto LABEL_99;
          v50 = v42;
          v22 = 0;
          goto LABEL_53;
        }
        goto LABEL_122;
      }
LABEL_137:
      v50 = strncmp("F1V31B2C2", s2, 9u);
      if ( !v50 )
        goto LABEL_50;
      v42 = 0;
      goto LABEL_139;
    }
    if ( v4 != 1 )
    {
      v12 = strncmp("F1V30B4C1", s2, 9u);
      if ( v4 != 2 )
        goto LABEL_24;
    }
LABEL_11:
    v2 += 40;
LABEL_12:
    ++v0;
LABEL_13:
    ++v1;
  }
  while ( v1 != 4 );
  if ( v0 )
    return sub_8C218(v2, v0);
  return v0;
}
