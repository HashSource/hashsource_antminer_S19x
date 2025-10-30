int sub_1AD38()
{
  int v0; // r11
  int v1; // r10
  int v2; // r9
  int v4; // r4
  int v5; // r4
  int v6; // r6
  int v7; // r7
  _BOOL4 v8; // r5
  _BOOL4 v9; // r6
  int v10; // r0
  unsigned int v11; // r3
  bool v12; // zf
  unsigned int v13; // r3
  int v14; // r2
  _BOOL4 v15; // r0
  _BOOL4 v16; // r0
  _BOOL4 v17; // r6
  _BOOL4 v18; // r5
  _BOOL4 v19; // r0
  int v20; // r3
  int v21; // [sp+4h] [bp-58h]
  _BOOL4 v22; // [sp+4h] [bp-58h]
  int v23; // [sp+8h] [bp-54h]
  unsigned int v24; // [sp+8h] [bp-54h]
  _BOOL4 v25; // [sp+Ch] [bp-50h]
  int v26; // [sp+10h] [bp-4Ch]
  _BOOL4 v27; // [sp+10h] [bp-4Ch]
  int v28; // [sp+14h] [bp-48h]
  _BOOL4 v29; // [sp+14h] [bp-48h]
  _BOOL4 v30; // [sp+18h] [bp-44h]
  int v31; // [sp+1Ch] [bp-40h]
  _BOOL4 v32; // [sp+1Ch] [bp-40h]
  _BOOL4 v33; // [sp+20h] [bp-3Ch]
  _BOOL4 v34; // [sp+20h] [bp-3Ch]
  _BOOL4 v35; // [sp+24h] [bp-38h]
  _BOOL4 v36; // [sp+28h] [bp-34h]
  _BOOL4 v37; // [sp+2Ch] [bp-30h]
  _BOOL4 v38; // [sp+30h] [bp-2Ch]
  _BOOL4 v39; // [sp+30h] [bp-2Ch]
  _BOOL4 v40; // [sp+34h] [bp-28h]
  _BOOL4 v41; // [sp+38h] [bp-24h]
  _BOOL4 v42; // [sp+3Ch] [bp-20h]
  int v43; // [sp+40h] [bp-1Ch] BYREF
  char s2[4]; // [sp+44h] [bp-18h] BYREF
  int v45; // [sp+48h] [bp-14h]
  int v46; // [sp+4Ch] [bp-10h]
  int v47; // [sp+50h] [bp-Ch]
  int v48; // [sp+54h] [bp-8h]

  v0 = 0;
  v1 = 0;
  v2 = 0;
  *(_DWORD *)s2 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v43 = 20;
  do
  {
    if ( !sub_26C0C(v2) )
      goto LABEL_3;
    v4 = *(_DWORD *)(dword_B3CC0 + 4 * v2);
    (*(void (__fastcall **)(int, char *, int *))(v4 + 68))(v4, s2, &v43);
    v5 = (*(int (__fastcall **)(int))(v4 + 84))(v4);
    v21 = strncmp("F1V01B4C1", s2, 9u);
    if ( v21 )
    {
      v6 = strncmp("F1V01B5C1", s2, 9u);
      if ( !v6 )
      {
        if ( v5 == 1 )
        {
LABEL_102:
          v7 = 1;
          v10 = strncmp("F1V01B5C1", s2, 9u) == 0;
        }
        else
        {
LABEL_10:
          v7 = v5 == 1;
          v25 = strncmp("F2V01B1C1", s2, 9u) == 0;
          v6 = strncmp("F1V01B5C1", s2, 9u);
LABEL_11:
          v8 = strncmp("F2V01B2C1", s2, 9u) == 0;
          if ( (v8 & v7) != 0 )
          {
            v7 &= v8;
            v10 = strncmp("F1V01B5C1", s2, 9u) == 0;
          }
          else
          {
            v23 = strncmp("F2V01B3C1", s2, 9u);
            if ( v23 || (unsigned int)(v5 - 1) > 1 )
            {
              v26 = strncmp("F2V01B4C1", s2, 9u);
              if ( v26 )
              {
                v28 = strncmp("F2V01B5C1", s2, 9u);
                if ( v28 || (unsigned int)(v5 - 1) > 2 )
                {
LABEL_17:
                  v9 = v6 == 0;
                  v30 = v5 == 2;
                  v10 = v9 && v30;
                  if ( !v9 || !v30 )
                  {
                    v31 = strncmp("F1V01B1C1", s2, 9u);
                    if ( (!v31 || !strncmp("F1V01B2C1", s2, 9u)) && v7 )
                      goto LABEL_112;
                    v33 = strncmp("F1V01B3C1", s2, 9u) == 0;
                    if ( v33 && v30 )
                      goto LABEL_112;
                    v38 = v21 == 0;
                    v36 = v5 == 3;
                    if ( v38 && v36 )
                      goto LABEL_112;
                    if ( v9 && v5 == 3 )
                      goto LABEL_112;
                    v22 = v5 == 5;
                    v35 = strncmp("F1V01B4C2", s2, 9u) == 0;
                    if ( v35 && v22 )
                      goto LABEL_112;
                    v37 = strncmp("F1V01B5C2", s2, 9u) == 0;
                    if ( v37 && v22 )
                      goto LABEL_112;
                    if ( (v25 || v8) && (unsigned int)(v5 - 2) <= 1 )
                      goto LABEL_112;
                    if ( !v23 && (unsigned int)(v5 - 3) <= 1 )
                      goto LABEL_112;
                    v42 = v33;
                    v40 = strncmp("F2V01B3C2", s2, 9u) == 0;
                    if ( v40 && v22 )
                      goto LABEL_112;
                    v11 = __clz(v5 - 4);
                    v12 = v26 == 0;
                    if ( !v26 )
                      v12 = v5 == 4;
                    v13 = v11 >> 5;
                    v24 = v13;
                    if ( v12
                      || (!v28 ? (v14 = v13 & 1) : (v14 = 0),
                          v14
                       || (v27 = strncmp("F2V01B4C2", s2, 9u) == 0, (v27 & v7) != 0)
                       || (v15 = strncmp("F2V01B5C2", s2, 9u) == 0, v34 = v15, (v15 & v7) != 0)
                       || v27 && v22
                       || v15 && v22
                       || (v29 = v31 == 0, v29 && v30)
                       || (v16 = strncmp("F1V01B2C1", s2, 9u) == 0, v41 = v16, v16 && v30)
                       || v42 && v36
                       || (v24 & v38) != 0
                       || (v9 & v24) != 0) )
                    {
LABEL_112:
                      v20 = 40;
                    }
                    else if ( (v16 || v29) && v5 == 3
                           || (v42 & v24) != 0
                           || (v35 & v7) != 0
                           || (v37 & v7) != 0
                           || (v32 = strncmp("F1V01B1C2", s2, 9u) == 0, v32 && v22)
                           || (v39 = strncmp("F1V01B2C2", s2, 9u) == 0, v39 && v22)
                           || (v17 = strncmp("F1V01B3C2", s2, 9u) == 0, v17 && v22)
                           || (v25 & v24) != 0
                           || (v8 & v24) != 0
                           || (v18 = strncmp("F2V01B1C2", s2, 9u) == 0, (v18 & v7) != 0)
                           || (v19 = strncmp("F2V01B2C2", s2, 9u) == 0, (v19 & v7) != 0)
                           || v18 && v22
                           || v19 && v22
                           || v40 && (unsigned int)(v5 - 1) <= 1
                           || (v27 || v34) && (unsigned int)(v5 - 2) <= 1
                           || (v29 & v24) != 0
                           || (v41 & v24) != 0
                           || (v17 & v7) != 0
                           || v35 && v30
                           || v37 && v30 )
                    {
                      v20 = 30;
                    }
                    else if ( (v39 || v32) && v7
                           || v17 && v30
                           || v35 && v36
                           || v37 && v36
                           || (v18 || v19) && (unsigned int)(v5 - 2) <= 1
                           || v40 && (unsigned int)(v5 - 3) <= 1
                           || (v27 & v24) != 0
                           || (v34 & v24) != 0
                           || v32 && v30
                           || v39 && v30
                           || v17 && v36
                           || (v35 & v24) != 0
                           || (v37 & v24) != 0 )
                    {
                      v20 = 20;
                    }
                    else if ( (v39 || v32) && v5 == 3 || (v18 & v24) != 0 || (v19 & v24) != 0 )
                    {
                      v20 = 10;
                    }
                    else if ( (v17 & v24) != 0 )
                    {
                      v20 = 10;
                    }
                    else
                    {
                      v20 = 0;
                    }
                    goto LABEL_98;
                  }
                  goto LABEL_103;
                }
              }
              else if ( (unsigned int)(v5 - 1) > 2 )
              {
                v28 = strncmp("F2V01B5C1", s2, 9u);
                goto LABEL_17;
              }
            }
            v10 = strncmp("F1V01B5C1", s2, 9u) == 0;
          }
        }
LABEL_103:
        if ( (v7 & v10) != 0 )
          v20 = 60;
        else
          v20 = 50;
        goto LABEL_98;
      }
      if ( !strncmp("F1V01B3C1", s2, 9u) )
      {
        if ( v5 != 1 )
          goto LABEL_10;
      }
      else
      {
        v7 = v5 == 1;
        v25 = strncmp("F2V01B1C1", s2, 9u) == 0;
        if ( (v25 & (unsigned __int8)v7) == 0 )
          goto LABEL_11;
      }
    }
    else
    {
      if ( v5 == 1 )
        goto LABEL_102;
      if ( v5 != 2 )
        goto LABEL_10;
    }
    v20 = 50;
LABEL_98:
    v1 += v20;
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
