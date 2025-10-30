char *__fastcall sub_88EFC(int a1, int a2, int a3)
{
  char *result; // r0
  char *v6; // r4
  int v7; // r3
  int v8; // r11
  int v9; // r0
  int v10; // r3
  int v11; // r10
  int v12; // r11
  unsigned int v13; // r3
  unsigned int v14; // t1
  unsigned __int8 *v15; // r5
  char *v16; // r6
  int v17; // r0
  int v18; // t1
  int v19; // r0
  int v20; // r3
  int v21; // t1
  bool v22; // zf
  unsigned int v23; // r3
  char *v24; // r0
  const char *v25; // r5
  size_t v26; // r6
  unsigned int v27; // r3
  int v28; // r0
  char *v29; // r6
  int v30; // t1
  unsigned int v31; // r3
  const char *v32; // r4
  char *v33; // r5
  size_t v34; // r0
  int v35; // r0
  char *v36; // r3
  int v37; // r7
  size_t v38; // r0
  char *v39; // r2
  int v40; // t1
  int v41; // r3
  char *v42; // r0
  char *v43; // r12
  char *v44; // r2
  unsigned __int8 *v45; // r7
  int v46; // r0
  int v47; // t1
  int v48; // t1
  char *v49; // r0
  int v50; // r3
  char *v51; // r2
  const char *v52; // r7
  size_t v53; // r6
  int v54; // r5
  const char *v55; // r3
  char *v56; // r7
  const char *v57; // r4
  char *v58; // r1
  unsigned int v59; // r3
  char *v60; // r0
  int v61; // r0
  const char *v62; // r3
  int v63; // t1
  const char *v64; // r0
  int v65; // r3
  char *v66; // r7
  int v67; // r0
  char *v68; // r0
  char *v69; // r7
  char *v70; // r6
  int v71; // r3
  char v72; // r0
  int v73; // r3
  bool v74; // zf
  char **v75; // r1
  unsigned int v76; // r3
  char *v77; // r0
  int v78; // r2
  unsigned int v79; // r0
  bool v80; // zf
  unsigned int v81; // r3
  int v82; // r0
  int v83; // r5
  char **v84; // r10
  size_t v85; // r4
  char **v86; // r3
  int v87; // [sp+Ch] [bp-C8h]
  char *s1; // [sp+24h] [bp-B0h]
  char *s1a; // [sp+24h] [bp-B0h]
  int v90; // [sp+28h] [bp-ACh]
  int v91; // [sp+28h] [bp-ACh]
  char *v92; // [sp+28h] [bp-ACh]
  int v93; // [sp+2Ch] [bp-A8h]
  char *v94; // [sp+2Ch] [bp-A8h]
  char *v95; // [sp+30h] [bp-A4h]
  int v96; // [sp+48h] [bp-8Ch] BYREF
  char *endptr; // [sp+4Ch] [bp-88h] BYREF
  int v98[2]; // [sp+50h] [bp-84h] BYREF
  int v99; // [sp+58h] [bp-7Ch]
  int v100; // [sp+5Ch] [bp-78h]
  int v101[8]; // [sp+60h] [bp-74h] BYREF
  int v102[3]; // [sp+80h] [bp-54h] BYREF
  char s[64]; // [sp+8Ch] [bp-48h] BYREF

  v99 = 2;
  v87 = *(_DWORD *)(a1 + 12);
  v98[0] = 0;
  v98[1] = 0;
  v100 = 0;
  result = (char *)sub_88C38(a2, 3, 2, v101);
  v6 = result;
  if ( result != (char *)-1 )
  {
    v7 = *(_DWORD *)(a1 + 12);
    if ( a3 )
      v8 = 2;
    else
      v8 = 4;
    if ( !a3 )
      a3 = 1;
    *(_DWORD *)(a1 + 12) = v7 & 0xFFFFFFFB;
    if ( (v7 & 0x80000) == 0 )
      v8 = 1;
    v9 = dword_108358;
    v10 = a3;
    v11 = v8;
    v12 = v10;
    v99 = v11;
    if ( !dword_108358 )
LABEL_37:
      v9 = sub_7F738(12);
LABEL_10:
    v13 = (unsigned __int8)*v6;
    if ( *(_BYTE *)(v9 + v13) )
    {
      do
      {
        v14 = (unsigned __int8)*++v6;
        v13 = v14;
      }
      while ( *(_BYTE *)(v9 + v14) );
    }
    if ( v13 <= 0x7F && (dword_A0784[v13] & 0x180040) != 0 )
    {
      v15 = (unsigned __int8 *)(v6 + 1);
      v16 = strchr(v6 + 1, 10);
      if ( !v16 )
      {
        v6 = (char *)&v15[strlen(v6 + 1)];
        goto LABEL_35;
      }
      v17 = dword_108398;
      if ( !dword_108398 )
        v17 = sub_7F738(28);
      if ( *(_BYTE *)(v17 + (unsigned __int8)v6[1]) )
      {
        do
          v18 = *++v15;
        while ( *(_BYTE *)(v17 + v18) );
      }
      v19 = dword_108358;
      if ( !dword_108358 )
        v19 = sub_7F738(12);
      v20 = *v15;
      if ( *(_BYTE *)(v19 + v20) )
      {
        do
        {
          v21 = *++v15;
          v20 = v21;
        }
        while ( *(_BYTE *)(v19 + v21) );
      }
      if ( v15 <= (unsigned __int8 *)v16 )
      {
        v22 = v20 == 61;
        if ( v20 != 61 )
          v22 = v20 == 58;
        if ( !v22 )
        {
          v23 = *(v15 - 1);
          if ( v23 > 0x7F || (dword_A0784[v23] & 0xC01) == 0 )
            goto LABEL_28;
          goto LABEL_77;
        }
        v45 = v15 + 1;
        v46 = dword_108358;
        if ( !dword_108358 )
          v46 = sub_7F738(12);
        if ( *(_BYTE *)(v46 + v15[1]) )
        {
          do
          {
            v47 = *++v45;
            if ( !*(_BYTE *)(v46 + v47) )
              break;
            v48 = *++v45;
          }
          while ( *(_BYTE *)(v46 + v48) );
        }
        if ( v16 >= (char *)v45 )
        {
LABEL_77:
          if ( *(v16 - 1) != 92 )
          {
            v43 = v16 + 1;
            *v16 = 0;
            goto LABEL_80;
          }
          v50 = (unsigned __int8)*v16;
          v51 = v16 - 1;
          v43 = v16 + 1;
          if ( v50 == 10 )
            goto LABEL_97;
          while ( 1 )
          {
            if ( v50 == 92 )
            {
              if ( v16[1] == 10 )
              {
                v43 = v16 + 2;
                LOBYTE(v50) = 10;
              }
            }
            else if ( !v50 )
            {
              v43 = 0;
LABEL_97:
              *v51 = 0;
LABEL_80:
              v44 = v6;
LABEL_81:
              v6 = v43;
              sub_87938(a1, v98, v44, v12, 1);
LABEL_35:
              if ( v6 )
              {
                v9 = dword_108358;
                v99 = v11;
                if ( !dword_108358 )
                  goto LABEL_37;
                goto LABEL_10;
              }
              goto LABEL_28;
            }
            v16 = v43;
            *v51++ = v50;
            v50 = (unsigned __int8)*v43++;
            if ( v50 == 10 )
              goto LABEL_97;
          }
        }
      }
      v43 = v16 + 1;
      v44 = v6;
      *v16 = 0;
      goto LABEL_81;
    }
    if ( v13 != 60 )
    {
      if ( v13 == 91 )
      {
        v25 = *(const char **)(a1 + 32);
        v26 = strlen(v25);
        if ( !strncmp(v6 + 1, v25, v26) && v6[v26 + 1] == 93 )
        {
          v6 = strchr(&v6[v26 + 2], 10);
          goto LABEL_35;
        }
        if ( v26 > 0x10 )
          goto LABEL_28;
        sprintf(s, "[%s]", v25);
        v24 = strstr(v6, s);
        if ( !v24 )
          goto LABEL_28;
      }
      else
      {
        if ( v13 != 35 )
          goto LABEL_28;
        v24 = v6 + 1;
      }
      v6 = strchr(v24, 10);
      goto LABEL_35;
    }
    v27 = (unsigned __int8)v6[1];
    if ( v27 <= 0x7F && (dword_A0784[v27] & 0x180040) != 0 )
    {
      s1 = v6 + 1;
      v28 = dword_108398;
      v96 = dword_B9168[0];
      if ( !dword_108398 )
        v28 = sub_7F738(28);
      v29 = v6 + 1;
      if ( *(_BYTE *)(v28 + (unsigned __int8)v6[1]) )
      {
        do
          v30 = (unsigned __int8)*++v29;
        while ( *(_BYTE *)(v28 + v30) );
      }
      v102[0] = 1;
      v31 = (unsigned __int8)*v29;
      if ( v31 != 32 )
      {
        if ( v31 > 0x20 )
        {
          if ( v31 != 47 )
          {
            if ( v31 == 62 )
            {
              v32 = v29;
LABEL_54:
              *v29 = 0;
              v33 = (char *)(v32 + 1);
              v93 = v96;
              v34 = strlen(s1) + 4;
              if ( v34 > 0x3F )
              {
                v66 = (char *)sub_7FBE0(v34);
                v67 = sprintf(v66, "</%s>", s1);
                *((_BYTE *)v32 + 1) = 32;
                v90 = v67;
                v68 = strstr(v32 + 1, v66);
                v36 = v68;
                if ( v66 != s )
                {
                  v95 = v68;
                  free(v66);
                  v36 = v95;
                }
              }
              else
              {
                v35 = sprintf(s, "</%s>", s1);
                *((_BYTE *)v32 + 1) = 32;
                v90 = v35;
                v36 = strstr(v32 + 1, s);
              }
              if ( !v36 )
                goto LABEL_28;
              v6 = &v36[v90];
              if ( v93 != 1 )
              {
                v37 = dword_108358;
                if ( !dword_108358 )
                {
                  v92 = v36;
                  v82 = sub_7F738(12);
                  v36 = v92;
                  v37 = v82;
                }
                if ( v33 < v36 || (v38 = strlen(v33), v36 = &v33[v38], v33 < &v33[v38]) )
                {
                  if ( *(_BYTE *)(v37 + (unsigned __int8)*(v36 - 1)) )
                  {
                    v39 = v36 - 1;
                    do
                    {
                      v36 = v39;
                      if ( v33 >= v39 )
                        break;
                      v40 = (unsigned __int8)*--v39;
                    }
                    while ( *(_BYTE *)(v37 + v40) );
                  }
                }
              }
              *v36 = 0;
              if ( !v6 )
                goto LABEL_28;
              memset(v29, 32, v33 - v29);
              v41 = v96;
              if ( v102[0] != 1 || v96 )
                goto LABEL_68;
              s[2] = 0;
              v69 = v33;
              v70 = v33 + 1;
              v91 = v11;
              v94 = v6;
              v71 = (unsigned __int8)*v33;
              if ( v71 == 37 )
                goto LABEL_136;
              while ( 1 )
              {
                if ( v71 != 38 )
                {
                  if ( v71 )
                  {
                    v72 = v71;
                    v33 = v70;
                    goto LABEL_134;
                  }
                  v11 = v91;
                  v6 = v94;
                  *v69 = 0;
                  goto LABEL_144;
                }
                endptr = v70;
                v76 = (unsigned __int8)v33[1];
                if ( v76 == 35 )
                  break;
                if ( v76 <= 0x7F && (dword_A0784[v76] & 0x30000) != 0 )
                {
                  v77 = v70;
                  goto LABEL_149;
                }
                v83 = 0;
                v84 = &off_B6324;
                while ( 1 )
                {
                  v85 = *((unsigned __int16 *)v84 + 2);
                  if ( !strncmp(v70, (&off_B6324)[2 * v83], v85) )
                    break;
                  ++v83;
                  v84 += 2;
                  if ( v83 == 12 )
                  {
                    v11 = v91;
                    v6 = v94;
LABEL_162:
                    *v69 = 0;
LABEL_144:
                    v41 = v96;
LABEL_68:
                    sub_87938(a1, v98, s1, v12, v41);
                    goto LABEL_35;
                  }
                }
                v86 = &(&off_B6324)[2 * v83];
                v33 = &v70[v85];
                v81 = *((__int16 *)v86 + 3);
LABEL_159:
                *v69 = v81;
                if ( !v81 )
                {
                  v11 = v91;
                  v6 = v94;
                  goto LABEL_144;
                }
                while ( 1 )
                {
                  v71 = (unsigned __int8)*v33;
                  ++v69;
                  v70 = v33 + 1;
                  if ( v71 != 37 )
                    break;
LABEL_136:
                  v73 = (unsigned __int8)v33[1];
                  s[0] = v33[1];
                  v74 = v33[2] == 0;
                  if ( v33[2] )
                    v74 = v73 == 0;
                  s[1] = v33[2];
                  v75 = (char **)v74;
                  if ( v74 )
                    goto LABEL_161;
                  v33 += 3;
                  v72 = strtoul(s, v75, 16);
LABEL_134:
                  *v69 = v72;
                }
              }
              v77 = v33 + 2;
              endptr = v33 + 2;
              v76 = (unsigned __int8)v33[2];
LABEL_149:
              if ( v76 == 88 || v76 == 120 )
              {
                ++v77;
                v78 = 16;
                endptr = v77;
              }
              else if ( v76 == 48 )
              {
                if ( v77[1] == 48 )
                  v78 = 16;
                else
                  v78 = 10;
              }
              else
              {
                v78 = 10;
              }
              v79 = strtoul(v77, &endptr, v78);
              v80 = v79 == 127;
              if ( v79 <= 0x7F )
                v80 = *endptr == 59;
              if ( !v80 )
              {
LABEL_161:
                v11 = v91;
                v6 = v94;
                goto LABEL_162;
              }
              v33 = endptr + 1;
              v81 = v79;
              goto LABEL_159;
            }
            goto LABEL_124;
          }
LABEL_122:
          if ( v29[1] == 62 )
          {
            *v29 = 0;
            v6 = v29 + 2;
            sub_87938(a1, v98, s1, v12, v96);
            goto LABEL_35;
          }
          goto LABEL_28;
        }
        if ( v31 != 9 )
        {
LABEL_124:
          v60 = strchr(v29, 62);
          if ( !v60 )
            goto LABEL_28;
          goto LABEL_108;
        }
      }
      v61 = dword_108358;
      if ( !dword_108358 )
      {
        v61 = sub_7F738(12);
        v31 = (unsigned __int8)*v29;
      }
      v22 = *(_BYTE *)(v61 + v31) == 0;
      v62 = v29;
      if ( !v22 )
      {
        do
          v63 = *(unsigned __int8 *)++v62;
        while ( *(_BYTE *)(v61 + v63) );
      }
      v64 = sub_82880(v62, &v96, v102);
      v32 = v64;
      if ( !v64 )
        goto LABEL_28;
      v65 = *(unsigned __int8 *)v64;
      if ( v65 == 62 )
        goto LABEL_54;
      if ( v65 != 47 )
        goto LABEL_28;
      v29 = (char *)v64;
      goto LABEL_122;
    }
    if ( v27 == 47 )
    {
      v49 = strchr(v6 + 2, 62);
      v6 = v49 + 1;
      if ( v49 )
        goto LABEL_35;
      goto LABEL_28;
    }
    if ( v27 != 63 )
    {
      if ( v27 == 33 )
      {
        v42 = strstr(v6, "-->");
        if ( v42 )
        {
          v6 = v42 + 3;
          goto LABEL_35;
        }
      }
      goto LABEL_28;
    }
    v52 = (const char *)dword_108418;
    if ( dword_108418 )
    {
      v53 = strlen((const char *)dword_108418);
    }
    else
    {
      v53 = 7;
      dword_108418 = (int)&off_A13F1;
      v52 = (const char *)&off_A13F1;
      dword_10841C = (int)"auto-options";
    }
    v54 = 0;
    s1a = v6 + 2;
    v55 = v52;
    v56 = v6;
    v57 = v55;
    while ( 1 )
    {
      if ( !strncmp(s1a, v57, v53) )
      {
        v58 = &v56[v53 + 2];
        v59 = (unsigned __int8)*v58;
        if ( v59 > 0x7F || (dword_A0784[v59] & 0x3B0060) == 0 )
        {
          v6 = ((char *(__fastcall *)(int, char *))(&off_B6208)[v54 + 95])(a1, v58);
          goto LABEL_35;
        }
      }
      if ( v54 == 1 )
        break;
      v54 = 1;
      v57 = (const char *)dword_10841C;
      v53 = strlen((const char *)dword_10841C);
    }
    v60 = strchr(s1a, 62);
    if ( v60 )
    {
LABEL_108:
      v6 = v60 + 1;
      goto LABEL_35;
    }
LABEL_28:
    result = (char *)sub_88E70((int)v101);
    *(_DWORD *)(a1 + 12) = v87;
  }
  return result;
}
