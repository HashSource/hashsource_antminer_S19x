int sub_1A8A8()
{
  int v0; // r11
  int v1; // r10
  int v2; // r6
  int v3; // r4
  int v4; // r4
  int v5; // r5
  int v6; // r9
  int v8; // r3
  int v9; // r0
  bool v10; // zf
  bool v11; // zf
  int v12; // r0
  int v13; // r3
  int v14; // r5
  int v15; // r3
  int v16; // r12
  int v17; // r3
  bool v18; // zf
  _BOOL4 v19; // r5
  _BOOL4 v20; // r1
  int v21; // r2
  int v22; // lr
  int v23; // r0
  int v25; // r0
  bool v26; // zf
  int v27; // r0
  bool v28; // zf
  bool v29; // r0
  _BOOL4 v30; // r2
  _BOOL4 v31; // r3
  _BOOL4 v32; // r1
  bool v33; // zf
  int v34; // r0
  int v35; // r2
  int v36; // r0
  bool v37; // zf
  bool v38; // r0
  _BOOL4 v39; // r2
  _BOOL4 v40; // r0
  int v41; // r2
  int v42; // [sp+0h] [bp-54h]
  int v43; // [sp+0h] [bp-54h]
  int v44; // [sp+8h] [bp-4Ch]
  int v45; // [sp+8h] [bp-4Ch]
  int v46; // [sp+Ch] [bp-48h]
  int v47; // [sp+Ch] [bp-48h]
  int v48; // [sp+10h] [bp-44h]
  int v49; // [sp+10h] [bp-44h]
  _BOOL4 v50; // [sp+14h] [bp-40h]
  _BOOL4 v51; // [sp+18h] [bp-3Ch]
  _BOOL4 v52; // [sp+18h] [bp-3Ch]
  int v53; // [sp+1Ch] [bp-38h]
  _BOOL4 v54; // [sp+1Ch] [bp-38h]
  _BOOL4 v55; // [sp+20h] [bp-34h]
  int v56; // [sp+20h] [bp-34h]
  int v57; // [sp+20h] [bp-34h]
  int v58; // [sp+24h] [bp-30h]
  int v59; // [sp+28h] [bp-2Ch]
  _BOOL4 v60; // [sp+2Ch] [bp-28h]
  int v61; // [sp+30h] [bp-24h]
  int v62; // [sp+34h] [bp-20h]
  int v63; // [sp+34h] [bp-20h]
  int v64; // [sp+34h] [bp-20h]
  int v65; // [sp+38h] [bp-1Ch] BYREF
  char s2[4]; // [sp+3Ch] [bp-18h] BYREF
  int v67; // [sp+40h] [bp-14h]
  int v68; // [sp+44h] [bp-10h]
  int v69; // [sp+48h] [bp-Ch]
  int v70; // [sp+4Ch] [bp-8h]

  v0 = 0;
  v1 = 0;
  v2 = 0;
  *(_DWORD *)s2 = 0;
  v67 = 0;
  v68 = 0;
  v69 = 0;
  v70 = 0;
  v65 = 20;
  do
  {
    while ( !sub_266F0(v2) )
    {
LABEL_9:
      if ( ++v2 == 4 )
        goto LABEL_10;
    }
    v3 = *(_DWORD *)(dword_B0F4C + 4 * v2);
    (*(void (__fastcall **)(int, char *, int *))(v3 + 68))(v3, s2, &v65);
    v4 = (*(int (__fastcall **)(int))(v3 + 84))(v3);
    v5 = strncmp("F1V01B4C1", s2, 9u);
    if ( !v5 )
    {
      if ( v4 == 1 )
        goto LABEL_19;
      if ( v4 == 2 )
        goto LABEL_8;
LABEL_15:
      v6 = strncmp("F2V01B1C1", s2, 9u);
      if ( !v6 )
        goto LABEL_24;
      goto LABEL_16;
    }
    if ( !strncmp("F1V01B5C1", s2, 9u) )
    {
      if ( v4 == 1 )
      {
        v8 = 60;
        goto LABEL_22;
      }
      goto LABEL_15;
    }
    if ( !strncmp("F1V01B3C1", s2, 9u) )
    {
      if ( v4 == 1 )
        goto LABEL_8;
      goto LABEL_15;
    }
    v6 = strncmp("F2V01B1C1", s2, 9u);
    if ( !v6 )
    {
      if ( v4 == 1 )
        goto LABEL_8;
LABEL_24:
      v42 = strncmp("F2V01B2C1", s2, 9u);
      if ( !v42 )
        goto LABEL_25;
      v6 = 0;
      goto LABEL_39;
    }
LABEL_16:
    v42 = strncmp("F2V01B2C1", s2, 9u);
    if ( !v42 )
    {
      if ( v4 == 1 )
        goto LABEL_19;
      v42 = v6;
LABEL_25:
      v6 = v42;
      v44 = strncmp("F2V01B3C1", s2, 9u);
      if ( v44 )
      {
        v42 = 0;
        goto LABEL_30;
      }
      v42 = 0;
      goto LABEL_28;
    }
LABEL_39:
    v44 = strncmp("F2V01B3C1", s2, 9u);
    if ( v44 )
      goto LABEL_30;
    if ( v4 == 1 )
      goto LABEL_19;
LABEL_28:
    if ( v4 == 2 )
      goto LABEL_8;
    v44 = 0;
LABEL_30:
    v46 = strncmp("F2V01B4C1", s2, 9u);
    if ( v46 )
    {
      v48 = strncmp("F2V01B5C1", s2, 9u);
      if ( v48 )
      {
        v51 = strncmp("F1V01B5C1", s2, 9u) == 0;
        v50 = v4 == 2;
        if ( v50 && v51 )
          goto LABEL_8;
        goto LABEL_44;
      }
      if ( v4 == 1 )
      {
LABEL_19:
        if ( !strncmp("F1V01B5C1", s2, 9u) )
          v8 = 60;
        else
          v8 = 50;
        goto LABEL_22;
      }
      if ( (unsigned int)(v4 - 2) <= 1 )
        goto LABEL_8;
    }
    else
    {
      if ( v4 == 1 )
        goto LABEL_19;
      if ( (unsigned int)(v4 - 2) <= 1 )
        goto LABEL_8;
      v48 = strncmp("F2V01B5C1", s2, 9u);
      if ( v48 )
      {
        v50 = 0;
        LOBYTE(v51) = strncmp("F1V01B5C1", s2, 9u) == 0;
        goto LABEL_44;
      }
    }
    v51 = strncmp("F1V01B5C1", s2, 9u) == 0;
    v50 = v4 == 2;
    if ( v51 && v50 )
    {
LABEL_8:
      v1 += 50;
      ++v0;
      goto LABEL_9;
    }
    v48 = 0;
LABEL_44:
    v53 = strncmp("F1V01B1C1", s2, 9u);
    if ( (!v53 || !strncmp("F1V01B2C1", s2, 9u)) && v4 == 1 )
      goto LABEL_137;
    v55 = strncmp("F1V01B3C1", s2, 9u) == 0;
    if ( v50 && v55 )
      goto LABEL_137;
    if ( v5 )
    {
      if ( v4 == 3 && v51 )
        goto LABEL_137;
    }
    else if ( v4 == 3 )
    {
      goto LABEL_137;
    }
    v58 = strncmp("F1V01B4C2", s2, 9u);
    if ( v58 )
    {
      v25 = strncmp("F1V01B5C2", s2, 9u);
      v26 = v4 == 5;
      if ( v4 == 5 )
        v26 = v25 == 0;
      v59 = v25;
      if ( v26 )
      {
LABEL_137:
        v8 = 40;
        goto LABEL_22;
      }
    }
    else
    {
      if ( v4 == 5 )
        goto LABEL_137;
      v59 = strncmp("F1V01B5C2", s2, 9u);
    }
    if ( v6 )
    {
      if ( !v42 )
      {
        if ( (unsigned int)(v4 - 2) <= 1 )
          goto LABEL_137;
LABEL_56:
        if ( v44 )
          goto LABEL_58;
        goto LABEL_57;
      }
    }
    else
    {
      if ( (unsigned int)(v4 - 2) <= 1 )
        goto LABEL_137;
      if ( !v42 )
        goto LABEL_56;
    }
    if ( v44 )
      goto LABEL_58;
    if ( v4 == 3 )
      goto LABEL_137;
LABEL_57:
    if ( v4 == 4 )
      goto LABEL_137;
LABEL_58:
    v9 = strncmp("F2V01B3C2", s2, 9u);
    v10 = v9 == 0;
    if ( !v9 )
      v10 = v4 == 5;
    v45 = v9;
    if ( v10 )
      goto LABEL_137;
    if ( v46 )
    {
      v11 = v4 == 4;
      if ( v4 == 4 )
        v11 = v48 == 0;
      if ( v11 )
        goto LABEL_137;
    }
    else if ( v4 == 4 )
    {
      goto LABEL_137;
    }
    v47 = strncmp("F2V01B4C2", s2, 9u);
    if ( v47 )
    {
      v27 = strncmp("F2V01B5C2", s2, 9u);
      v28 = v4 == 1;
      if ( v4 == 1 )
        v28 = v27 == 0;
      v49 = v27;
      v29 = v27 == 0;
      if ( v28 || v4 == 5 && v29 )
        goto LABEL_137;
    }
    else
    {
      if ( v4 == 1 )
        goto LABEL_137;
      v49 = strncmp("F2V01B5C2", s2, 9u);
      if ( v4 == 5 )
        goto LABEL_137;
    }
    if ( v53 )
    {
      v12 = strncmp("F1V01B2C1", s2, 9u);
      v31 = v50;
      if ( v12 )
        v31 = 0;
      if ( v31 )
        goto LABEL_137;
    }
    else
    {
      if ( v50 )
        goto LABEL_137;
      v12 = strncmp("F1V01B2C1", s2, 9u);
    }
    v60 = v4 == 3;
    if ( v55 && v60 )
      goto LABEL_137;
    if ( v5 )
    {
      v13 = v4 == 4;
      if ( (v51 & (unsigned __int8)v13) != 0 )
        goto LABEL_137;
      v52 = v12 == 0;
      v32 = v53 == 0;
      v54 = v32;
      if ( !v52 && !v32 )
      {
        v54 = 0;
        v52 = 0;
        goto LABEL_78;
      }
    }
    else
    {
      if ( v4 == 4 )
        goto LABEL_137;
      v52 = v12 == 0;
      v13 = v52 || v53 == 0;
      v54 = v53 == 0;
      if ( !v13 )
      {
        v54 = 0;
        v52 = 0;
        goto LABEL_79;
      }
    }
    if ( v4 == 3 )
      goto LABEL_161;
    v13 = v4 == 4;
LABEL_78:
    if ( (v55 & v13) != 0 )
      goto LABEL_161;
LABEL_79:
    if ( v58 )
    {
      v33 = v4 == 1;
      if ( v4 == 1 )
        v33 = v59 == 0;
      if ( v33 )
        goto LABEL_161;
    }
    else if ( v4 == 1 )
    {
      goto LABEL_161;
    }
    v56 = v13;
    v61 = strncmp("F1V01B1C2", s2, 9u);
    if ( v61 )
    {
      v64 = v56;
      v57 = strncmp("F1V01B2C2", s2, 9u);
      if ( !v57 )
      {
        if ( v4 == 5 )
          goto LABEL_161;
        v34 = strncmp("F1V01B3C2", s2, 9u);
        v15 = v64;
        v14 = v34;
LABEL_84:
        v57 = 0;
        goto LABEL_85;
      }
      v14 = strncmp("F1V01B3C2", s2, 9u);
      v30 = v4 == 5;
      if ( v14 )
        v30 = 0;
      v15 = v64;
      if ( v30 )
        goto LABEL_161;
    }
    else
    {
      if ( v4 == 5 )
        goto LABEL_161;
      v62 = v56;
      v57 = strncmp("F1V01B2C2", s2, 9u);
      v14 = strncmp("F1V01B3C2", s2, 9u);
      v15 = v62;
      if ( !v57 )
        goto LABEL_84;
    }
LABEL_85:
    if ( v6 )
    {
      if ( v42 )
        v35 = 0;
      else
        v35 = v15;
      if ( v35 )
        goto LABEL_161;
    }
    else if ( v15 )
    {
      goto LABEL_161;
    }
    v63 = v15;
    v43 = strncmp("F2V01B1C2", s2, 9u);
    if ( v43 )
    {
      v36 = strncmp("F2V01B2C2", s2, 9u);
      v37 = v4 == 1;
      if ( v4 == 1 )
        v37 = v36 == 0;
      v16 = v36;
      v17 = v63;
      v38 = v36 == 0;
      if ( v37 || v38 && v4 == 5 )
        goto LABEL_161;
    }
    else
    {
      if ( v4 == 1 )
        goto LABEL_161;
      v16 = strncmp("F2V01B2C2", s2, 9u);
      v17 = v63;
      if ( v4 == 5 )
        goto LABEL_161;
    }
    if ( v45 )
    {
      if ( !v47 )
      {
        if ( v50 )
          goto LABEL_161;
LABEL_93:
        if ( v4 == 3 )
          goto LABEL_161;
      }
    }
    else
    {
      if ( (unsigned int)(v4 - 1) <= 1 )
        goto LABEL_161;
      if ( !v47 )
        goto LABEL_93;
    }
    if ( !v49 && (unsigned int)(v4 - 2) <= 1 )
      goto LABEL_161;
    if ( v54 )
    {
      if ( v17 )
        goto LABEL_161;
    }
    else if ( (v52 & v17) != 0 )
    {
      goto LABEL_161;
    }
    v18 = v4 == 1;
    if ( v4 == 1 )
      v18 = v14 == 0;
    v19 = v14 == 0;
    if ( v18 )
    {
LABEL_161:
      v8 = 30;
      goto LABEL_22;
    }
    if ( v58 )
    {
      v39 = v50;
      if ( v59 )
        v39 = 0;
      if ( v39 )
        goto LABEL_161;
      v20 = v57 == 0;
      v21 = v61 == 0;
      v22 = v20 | v21;
      if ( v20 | v21 )
      {
        if ( v4 == 1 || v50 && v19 )
          goto LABEL_201;
      }
      else
      {
        v21 = v50 && v19;
        if ( v50 && v19 )
          goto LABEL_201;
        v22 = 0;
        v20 = 0;
      }
      v40 = v4 == 3;
      if ( v59 )
        v40 = 0;
      if ( v40 )
      {
LABEL_201:
        v8 = 20;
        goto LABEL_22;
      }
    }
    else
    {
      if ( v50 )
        goto LABEL_161;
      v20 = v57 == 0;
      v21 = v61 == 0;
      v22 = v21 | v20;
      if ( v21 | v20 )
      {
        if ( v4 == 1 )
          goto LABEL_201;
      }
      else
      {
        v20 = 0;
        v21 = 0;
      }
      if ( v4 == 3 )
        goto LABEL_201;
    }
    if ( v43 )
    {
      if ( !v16 )
      {
        if ( (unsigned int)(v4 - 2) <= 1 )
          goto LABEL_201;
LABEL_110:
        if ( !v45 )
          goto LABEL_220;
        goto LABEL_111;
      }
    }
    else
    {
      if ( (unsigned int)(v4 - 2) <= 1 )
        goto LABEL_201;
      if ( !v16 )
        goto LABEL_110;
    }
    if ( !v45 )
    {
      if ( v4 == 3 )
        goto LABEL_201;
      goto LABEL_220;
    }
LABEL_111:
    if ( v47 )
    {
      if ( v49 )
        v23 = 0;
      else
        v23 = v17;
      if ( v23 )
        goto LABEL_201;
      goto LABEL_116;
    }
LABEL_220:
    if ( v17 )
      goto LABEL_201;
LABEL_116:
    if ( v21 )
    {
      if ( v50 )
        goto LABEL_201;
    }
    else if ( v50 && v20 )
    {
      goto LABEL_201;
    }
    if ( v19 && v60 )
      goto LABEL_201;
    if ( v58 )
    {
      if ( v59 )
        v41 = 0;
      else
        v41 = v17;
      if ( v41 )
        goto LABEL_201;
    }
    else if ( v17 )
    {
      goto LABEL_201;
    }
    if ( v22 && v4 == 3 )
    {
      v8 = 10;
    }
    else if ( v43 && v16 )
    {
      if ( (v17 & v19) != 0 )
        v8 = 10;
      else
        v8 = 0;
    }
    else if ( v17 )
    {
      v8 = 10;
    }
    else
    {
      v8 = 0;
    }
LABEL_22:
    ++v2;
    v1 += v8;
    ++v0;
  }
  while ( v2 != 4 );
LABEL_10:
  if ( v0 )
    return sub_8C218(v1, v0);
  return v0;
}
