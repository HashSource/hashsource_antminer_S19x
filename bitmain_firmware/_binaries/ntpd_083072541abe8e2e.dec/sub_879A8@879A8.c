int __fastcall sub_879A8(int a1, int a2, int a3)
{
  int v4; // r11
  int v6; // lr
  int result; // r0
  int v8; // r3
  char *v9; // r4
  char *v10; // r0
  unsigned int v11; // r3
  unsigned int v12; // t1
  char *v13; // r0
  const char *v14; // r5
  size_t v15; // r6
  unsigned int v16; // r3
  char *v17; // r0
  char *v18; // r0
  char *v19; // r5
  int v20; // t1
  unsigned int v21; // r3
  const char *v22; // r7
  const char *v23; // r6
  size_t v24; // r0
  char *v25; // r0
  char *v26; // r4
  char *v27; // r7
  char *v28; // r2
  size_t v29; // r0
  char *v30; // r3
  int v31; // t1
  int v32; // r3
  char *v33; // r5
  char *v34; // r6
  char *v35; // r0
  int v36; // t1
  char *v37; // r0
  int v38; // r3
  int v39; // t1
  bool v40; // zf
  unsigned int v41; // r2
  char *v42; // r12
  char *v43; // r2
  unsigned __int8 *v44; // r7
  char *v45; // r0
  char *v46; // r2
  char *v47; // r0
  const char *v48; // r5
  size_t v49; // r7
  int v50; // r2
  size_t v51; // r7
  unsigned int v52; // r12
  char *v53; // r1
  size_t v54; // r5
  size_t v55; // r5
  unsigned int v56; // r0
  char *v57; // r0
  int v58; // t1
  int v59; // t1
  char *v60; // r0
  const char *v61; // r3
  int v62; // t1
  const char *v63; // r0
  int v64; // r3
  int v65; // r3
  char *v66; // r2
  char *v67; // r5
  char *v68; // r7
  char *v69; // r11
  int v70; // r3
  char v71; // r0
  int v72; // r1
  int v73; // r2
  unsigned int v74; // r3
  int v75; // r2
  int v76; // r2
  unsigned int v77; // r0
  size_t v78; // r5
  int v79; // r6
  char **v80; // r4
  const char *v81; // r1
  unsigned int v82; // r3
  int v83; // [sp+Ch] [bp-B8h]
  int v84; // [sp+14h] [bp-B0h]
  char *v85; // [sp+24h] [bp-A0h]
  int v86; // [sp+28h] [bp-9Ch]
  int v87; // [sp+28h] [bp-9Ch]
  char *v88; // [sp+28h] [bp-9Ch]
  int v89; // [sp+28h] [bp-9Ch]
  int v90; // [sp+2Ch] [bp-98h]
  char *v91; // [sp+2Ch] [bp-98h]
  int v92; // [sp+38h] [bp-8Ch] BYREF
  char *nptr; // [sp+3Ch] [bp-88h] BYREF
  int v94[2]; // [sp+40h] [bp-84h] BYREF
  int v95; // [sp+48h] [bp-7Ch]
  int v96; // [sp+4Ch] [bp-78h]
  int v97[8]; // [sp+50h] [bp-74h] BYREF
  int v98[3]; // [sp+70h] [bp-54h] BYREF
  char s[64]; // [sp+7Ch] [bp-48h] BYREF

  v4 = 2;
  v84 = a3;
  v95 = 2;
  v94[0] = 0;
  v94[1] = 0;
  v6 = *(_DWORD *)(a1 + 12);
  v96 = 0;
  v83 = v6;
  result = sub_876C0(a2, 3, 2, v97);
  if ( result != -1 )
  {
    v8 = *(_DWORD *)(a1 + 12);
    if ( !a3 )
      v4 = 4;
    v9 = (char *)result;
    *(_DWORD *)(a1 + 12) = v8 & 0xFFFFFFFB;
    if ( !a3 )
      v84 = 1;
    if ( (v8 & 0x80000) == 0 )
      v4 = 1;
    v10 = (char *)dword_107334;
    v95 = v4;
    if ( dword_107334 )
      goto LABEL_9;
LABEL_22:
    v10 = sub_7E2F8(12);
    while ( 1 )
    {
LABEL_9:
      v11 = (unsigned __int8)*v9;
      if ( v10[v11] )
      {
        do
        {
          v12 = (unsigned __int8)*++v9;
          v11 = v12;
        }
        while ( v10[v12] );
      }
      if ( v11 <= 0x7F && (dword_9F184[v11] & 0x180040) != 0 )
        break;
      if ( v11 == 60 )
      {
        v16 = (unsigned __int8)v9[1];
        if ( v16 > 0x7F || (dword_9F184[v16] & 0x180040) == 0 )
        {
          if ( v16 == 47 )
          {
            v47 = strchr(v9 + 2, 62);
            v9 = v47 + 1;
            if ( !v47 )
              goto LABEL_16;
            goto LABEL_20;
          }
          if ( v16 != 63 )
          {
            if ( v16 != 33 )
              goto LABEL_16;
            v17 = strstr(v9, "-->");
            if ( !v17 )
              goto LABEL_16;
            v9 = v17 + 3;
            goto LABEL_20;
          }
          v48 = (const char *)dword_1073F4;
          if ( dword_1073F4 )
          {
            v49 = strlen((const char *)dword_1073F4);
          }
          else
          {
            v49 = 7;
            v48 = (const char *)&off_9FDED;
            dword_1073F4 = (int)&off_9FDED;
            dword_1073F8 = (int)"auto-options";
          }
          v50 = strncmp(v9 + 2, v48, v49);
          if ( v50
            || (v51 = v49 + 2, v52 = (unsigned __int8)v9[v51], v53 = &v9[v51], v52 <= 0x7F)
            && (dword_9F184[v52] & 0x3B0060) != 0 )
          {
            v54 = strlen((const char *)dword_1073F8);
            if ( strncmp(v9 + 2, (const char *)dword_1073F8, v54)
              || (v55 = v54 + 2, v56 = (unsigned __int8)v9[v55], v53 = &v9[v55], v56 <= 0x7F)
              && (dword_9F184[v56] & 0x3B0060) != 0 )
            {
              v57 = strchr(v9 + 2, 62);
              if ( !v57 )
                goto LABEL_16;
              goto LABEL_98;
            }
            v50 = 1;
          }
          v9 = (char *)((int (__fastcall *)(int, char *))(&off_B5208)[v50 + 95])(a1, v53);
          goto LABEL_20;
        }
        v85 = v9 + 1;
        v18 = (char *)dword_107374;
        v92 = dword_B8168[0];
        if ( !dword_107374 )
          v18 = sub_7E2F8(28);
        v19 = v9 + 1;
        if ( v18[(unsigned __int8)v9[1]] )
        {
          do
            v20 = (unsigned __int8)*++v19;
          while ( v18[v20] );
        }
        v98[0] = 1;
        v21 = (unsigned __int8)*v19;
        if ( v21 != 32 )
        {
          if ( v21 > 0x20 )
          {
            if ( v21 != 47 )
            {
              if ( v21 == 62 )
              {
                v22 = v19;
                goto LABEL_44;
              }
LABEL_121:
              v57 = strchr(v19, 62);
              if ( !v57 )
                goto LABEL_16;
LABEL_98:
              v9 = v57 + 1;
              goto LABEL_20;
            }
LABEL_111:
            if ( v19[1] != 62 )
              goto LABEL_16;
            *v19 = 0;
            v9 = v19 + 2;
            sub_85F40(a1, v94, v85, v84, v92);
            goto LABEL_20;
          }
          if ( v21 != 9 )
            goto LABEL_121;
        }
        v60 = (char *)dword_107334;
        if ( !dword_107334 )
        {
          v60 = sub_7E2F8(12);
          v21 = (unsigned __int8)*v19;
        }
        v40 = v60[v21] == 0;
        v61 = v19;
        if ( !v40 )
        {
          do
            v62 = *(unsigned __int8 *)++v61;
          while ( v60[v62] );
        }
        v63 = sub_813A4(v61, &v92, v98);
        v22 = v63;
        if ( !v63 )
        {
LABEL_16:
          result = sub_8791C((int)v97);
          *(_DWORD *)(a1 + 12) = v83;
          return result;
        }
        v64 = *(unsigned __int8 *)v63;
        if ( v64 != 62 )
        {
          if ( v64 != 47 )
            goto LABEL_16;
          v19 = (char *)v63;
          goto LABEL_111;
        }
LABEL_44:
        *v19 = 0;
        v23 = v22 + 1;
        v24 = strlen(v85);
        v90 = v92;
        if ( v24 + 4 <= 0x3F )
        {
          v87 = sprintf(s, "</%s>", v85);
          *((_BYTE *)v22 + 1) = 32;
          v27 = strstr(v22 + 1, s);
        }
        else
        {
          v86 = v24 + 4;
          v25 = (char *)malloc(v24 + 4);
          v26 = v25;
          if ( !v25 )
            sub_C610(v86);
          v87 = sprintf(v25, "</%s>", v85, v86);
          *((_BYTE *)v22 + 1) = 32;
          v27 = strstr(v22 + 1, v26);
          free(v26);
        }
        if ( !v27 )
          goto LABEL_16;
        v9 = &v27[v87];
        if ( v90 != 1 )
        {
          v28 = (char *)dword_107334;
          if ( !dword_107334 )
            v28 = sub_7E2F8(12);
          if ( v23 < v27 || (v88 = v28, v29 = strlen(v23), v27 = (char *)&v23[v29], v28 = v88, v23 < &v23[v29]) )
          {
            if ( v28[(unsigned __int8)*(v27 - 1)] )
            {
              v30 = v27 - 1;
              do
              {
                v27 = v30;
                if ( v23 >= v30 )
                  break;
                v31 = (unsigned __int8)*--v30;
              }
              while ( v28[v31] );
            }
          }
        }
        *v27 = 0;
        if ( !v9 )
          goto LABEL_16;
        memset(v19, 32, v23 - v19);
        v32 = v92;
        if ( v98[0] != 1 || v92 )
          goto LABEL_59;
        s[2] = 0;
        v67 = (char *)v23;
        v68 = (char *)v23;
        v89 = v4;
        v69 = (char *)(v23 + 1);
        v91 = v9;
        v70 = *(unsigned __int8 *)v23;
        if ( v70 == 37 )
          goto LABEL_135;
LABEL_130:
        if ( v70 != 38 )
        {
          if ( v70 )
          {
            v71 = v70;
            v67 = v69;
            goto LABEL_133;
          }
          v4 = v89;
          v9 = v91;
          *v68 = 0;
LABEL_142:
          v32 = v92;
LABEL_59:
          sub_85F40(a1, v94, v85, v84, v32);
          goto LABEL_20;
        }
        nptr = v69;
        v74 = (unsigned __int8)v67[1];
        if ( v74 == 35 )
        {
          nptr = v67 + 2;
          goto LABEL_147;
        }
        if ( v74 <= 0x7F && (dword_9F184[v74] & 0x30000) != 0 )
        {
LABEL_147:
          v75 = (unsigned __int8)*nptr;
          if ( v75 == 88 || v75 == 120 )
          {
            v76 = 16;
            ++nptr;
          }
          else if ( v75 == 48 )
          {
            if ( nptr[1] == 48 )
              v76 = 16;
            else
              v76 = 10;
          }
          else
          {
            v76 = 10;
          }
          v77 = strtoul(nptr, &nptr, v76);
          if ( *nptr != 59 || v77 > 0x7F )
          {
LABEL_155:
            v4 = v89;
            v9 = v91;
            *v68 = 0;
            goto LABEL_142;
          }
          v67 = nptr + 1;
          v82 = v77;
        }
        else
        {
          v78 = 4;
          v79 = 0;
          v80 = &off_B5324;
          v81 = "amp;";
          while ( strncmp(v69, v81, v78) )
          {
            if ( ++v79 == 12 )
              goto LABEL_155;
            v81 = v80[2];
            v80 += 2;
            v78 = *((unsigned __int16 *)v80 + 2);
          }
          v67 = &v69[v78];
          v82 = *((__int16 *)&off_B5324 + 4 * v79 + 3);
        }
        *v68 = v82;
        if ( !v82 )
        {
          v4 = v89;
          v9 = v91;
          goto LABEL_142;
        }
        while ( 1 )
        {
          v70 = (unsigned __int8)*v67;
          ++v68;
          v69 = v67 + 1;
          if ( v70 != 37 )
            goto LABEL_130;
LABEL_135:
          s[0] = v67[1];
          v72 = (unsigned __int8)s[0];
          v73 = (unsigned __int8)v67[2];
          if ( !s[0] )
            v72 = 1;
          s[1] = v67[2];
          if ( s[0] )
            v72 = v73 == 0;
          if ( v72 )
            goto LABEL_155;
          v67 += 3;
          v71 = strtoul(s, 0, 16);
LABEL_133:
          *v68 = v71;
        }
      }
      if ( v11 != 91 )
      {
        if ( v11 != 35 )
          goto LABEL_16;
        v13 = v9 + 1;
LABEL_19:
        v9 = strchr(v13, 10);
        goto LABEL_20;
      }
      v14 = *(const char **)(a1 + 32);
      v15 = strlen(v14);
      if ( strncmp(v9 + 1, v14, v15) || v9[v15 + 1] != 93 )
      {
        if ( v15 > 0x10 )
          goto LABEL_16;
        sprintf(s, "[%s]", v14);
        v13 = strstr(v9, s);
        if ( !v13 )
          goto LABEL_16;
        goto LABEL_19;
      }
      v9 = strchr(&v9[v15 + 2], 10);
LABEL_20:
      if ( !v9 )
        goto LABEL_16;
      v10 = (char *)dword_107334;
      v95 = v4;
      if ( !dword_107334 )
        goto LABEL_22;
    }
    v33 = v9 + 1;
    v34 = strchr(v9 + 1, 10);
    if ( !v34 )
    {
      v9 = &v33[strlen(v9 + 1)];
      goto LABEL_20;
    }
    v35 = (char *)dword_107374;
    if ( !dword_107374 )
      v35 = sub_7E2F8(28);
    if ( v35[(unsigned __int8)v9[1]] )
    {
      do
        v36 = (unsigned __int8)*++v33;
      while ( v35[v36] );
    }
    v37 = (char *)dword_107334;
    if ( !dword_107334 )
      v37 = sub_7E2F8(12);
    v38 = (unsigned __int8)*v33;
    if ( v37[v38] )
    {
      do
      {
        v39 = (unsigned __int8)*++v33;
        v38 = v39;
      }
      while ( v37[v39] );
    }
    if ( v34 >= v33 )
    {
      v40 = v38 == 58;
      if ( v38 != 58 )
        v40 = v38 == 61;
      if ( !v40 )
      {
        v41 = (unsigned __int8)*(v33 - 1);
        if ( v41 > 0x7F || (dword_9F184[v41] & 0xC01) == 0 )
          goto LABEL_16;
        goto LABEL_77;
      }
      v44 = (unsigned __int8 *)(v33 + 1);
      v45 = (char *)dword_107334;
      if ( !dword_107334 )
        v45 = sub_7E2F8(12);
      if ( v45[(unsigned __int8)v33[1]] )
      {
        do
        {
          v58 = *++v44;
          if ( !v45[v58] )
            break;
          v59 = *++v44;
        }
        while ( v45[v59] );
      }
      if ( v34 >= (char *)v44 )
      {
LABEL_77:
        if ( *(v34 - 1) != 92 )
        {
          v42 = v34 + 1;
          *v34 = 0;
          goto LABEL_80;
        }
        v65 = (unsigned __int8)*v34;
        v66 = v34 - 1;
        v42 = v34 + 1;
        if ( v65 == 10 )
          goto LABEL_119;
        while ( 1 )
        {
          if ( v65 == 92 )
          {
            if ( v34[1] == 10 )
            {
              v42 = v34 + 2;
              LOBYTE(v65) = 10;
            }
          }
          else if ( !v65 )
          {
            v42 = 0;
LABEL_119:
            *v66 = 0;
LABEL_80:
            v43 = v9;
            v9 = v42;
            sub_85F40(a1, v94, v43, v84, 1);
            goto LABEL_20;
          }
          v34 = v42;
          *v66++ = v65;
          v65 = (unsigned __int8)*v42++;
          if ( v65 == 10 )
            goto LABEL_119;
        }
      }
    }
    *v34 = 0;
    v46 = v9;
    v9 = v34 + 1;
    sub_85F40(a1, v94, v46, v84, 1);
    goto LABEL_20;
  }
  return result;
}
