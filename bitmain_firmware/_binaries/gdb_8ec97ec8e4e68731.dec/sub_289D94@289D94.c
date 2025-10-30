int __fastcall sub_289D94(unsigned __int8 *a1)
{
  int v1; // r5
  int v2; // r4
  bool v3; // zf
  unsigned __int8 *v4; // r3
  int v5; // t1
  bool v6; // zf
  int v7; // r7
  bool v9; // zf
  int v10; // r1
  unsigned __int8 *v11; // r8
  int v12; // r6
  bool v13; // zf
  int v14; // r3
  unsigned __int8 *v15; // r2
  bool v16; // zf
  int v17; // t1
  int v18; // r9
  bool v19; // zf
  unsigned __int8 *v20; // r3
  bool v21; // zf
  int v22; // t1
  _BYTE *v23; // r1
  char *v24; // r0
  const char *v25; // r1
  const char *v26; // r6
  int v27; // r4
  int v28; // r6
  char *v29; // r1
  char **v30; // r4
  char *v31; // t1
  char *v32; // r1
  char **v33; // r4
  char *v34; // t1
  int v35; // r4
  bool v36; // zf
  size_t v37; // r0
  int v38; // t1
  bool v39; // zf
  bool v40; // zf
  const char *v41; // r4
  bool v42; // zf
  int v43; // r3
  int v44; // t1
  const char *v45; // r1
  char **v46; // r5
  const char *v47; // t1
  size_t v48; // r0
  const char *v49; // r1
  int v50; // r3
  bool v51; // zf
  const char *v52; // r3
  int v53; // r2
  int v54; // t1
  bool v55; // zf
  _BOOL4 v56; // r3
  int v57; // r1
  int v58; // r12
  bool v59; // zf
  unsigned __int8 *v60; // r3
  const char *v61; // r4
  const char *v62; // r2
  int v63; // t1
  bool v64; // zf
  const char *v65; // r6
  const char *v66; // r2
  bool v67; // zf
  unsigned __int8 *v68; // r1
  int v69; // r3
  int v70; // t1
  const char *v71; // r1
  int v72; // r5
  int v73; // r3
  int v74; // r3
  int v75; // r2
  int v76; // t1
  int v77; // r2
  int v78; // r3
  int v79; // t1
  bool v80; // zf
  bool v81; // zf
  int v82; // r12
  int v83; // r6
  int v84; // r3
  int v85; // r2
  int v86; // lr
  int v87; // r0
  unsigned __int8 *v88; // r3
  int v89; // t1
  int v90; // r3
  bool v91; // zf
  const char *v92; // r5
  bool v93; // zf
  int v94; // r3
  int v95; // t1
  unsigned __int8 *v96; // r3
  int v97; // r2
  int v98; // t1
  int v99; // r0
  int v100; // r0
  size_t v101; // r0
  char *v102; // r0
  int v103; // r2
  char *v104; // r4
  int v105; // r0
  char *v106; // r1
  int v107; // r3
  int v108; // r12
  char *v109; // lr
  int v110; // t1
  int v111; // r5
  bool v112; // zf
  size_t v113; // r0
  int (*v114)(); // r0
  char v115; // [sp+4h] [bp-8h] BYREF
  char v116; // [sp+5h] [bp-7h]

  v1 = (int)a1;
  if ( !a1 )
    return 0;
  v2 = *a1;
  v3 = v2 == 32;
  if ( v2 != 32 )
    v3 = v2 == 9;
  if ( v3 )
  {
    v4 = a1 + 1;
    do
    {
      v1 = (int)v4;
      if ( !v4 )
        return 0;
      v5 = *v4++;
      v2 = v5;
      v6 = v5 == 9;
      if ( v5 != 9 )
        v6 = v2 == 32;
    }
    while ( v6 );
  }
  v9 = v2 == 35;
  if ( v2 != 35 )
    v9 = v2 == 0;
  if ( v9 )
    return 0;
  if ( v2 == 36 )
  {
    v57 = *(unsigned __int8 *)(v1 + 1);
    v58 = v1 + 1;
    v59 = v57 == 32;
    if ( v57 != 32 )
      v59 = v57 == 9;
    if ( v59 )
    {
      v62 = (const char *)(v1 + 2);
      do
      {
        v60 = (unsigned __int8 *)&v62[~v1];
        v61 = v62;
        v63 = *(unsigned __int8 *)v62++;
        v57 = v63;
        v64 = v63 == 9;
        if ( v63 != 9 )
          v64 = v57 == 32;
      }
      while ( v64 );
    }
    else
    {
      v60 = 0;
      v61 = (const char *)(v1 + 1);
    }
    if ( v57 )
    {
      v66 = (const char *)&v60[v1 + 2];
      do
      {
        v68 = (unsigned __int8 *)&v66[~v1];
        v65 = v66;
        v70 = *(unsigned __int8 *)v66++;
        v69 = v70;
        if ( !v70 )
          goto LABEL_125;
        v67 = v69 == 32;
        if ( v69 != 32 )
          v67 = v69 == 9;
      }
      while ( !v67 );
      *v65 = 0;
      v90 = v68[v58 + 1];
      v65 = (const char *)&v68[v58 + 1];
      if ( *v65 )
      {
        v91 = v90 == 9;
        if ( v90 != 9 )
          v91 = v90 == 32;
        if ( v91 )
        {
          v92 = (const char *)&v68[v1 + 3];
          do
          {
            v65 = v92;
            v95 = *(unsigned __int8 *)v92++;
            v94 = v95;
            if ( !v95 )
              break;
            v93 = v94 == 9;
            if ( v94 != 9 )
              v93 = v94 == 32;
          }
          while ( v93 );
        }
      }
    }
    else
    {
      v65 = v61;
    }
LABEL_125:
    v71 = "if";
    v72 = 0;
    while ( 1 )
    {
      v7 = strcasecmp(v61, v71);
      if ( !v7 )
        break;
      ++v72;
      v71 = (const char *)*(&off_3FD514 + 2 * v72);
      if ( !v71 )
      {
        v7 = 0;
        sub_288824((int)"unknown parser directive");
        return v7;
      }
    }
    ((void (__fastcall *)(const char *))(&off_3FD2D0)[2 * v72 + 146])(v65);
    return v7;
  }
  v10 = (unsigned __int8)byte_48AAFC;
  if ( byte_48AAFC )
    return 0;
  if ( v2 != 34 )
  {
    v11 = (unsigned __int8 *)v1;
    v12 = (unsigned __int8)byte_48AAFC;
    goto LABEL_21;
  }
  v73 = *(unsigned __int8 *)(v1 + 1);
  if ( !*(_BYTE *)(v1 + 1) )
  {
LABEL_140:
    v7 = 1;
    sub_288824((int)"no closing `\"' in key binding");
    return v7;
  }
  v12 = 1;
  while ( v73 == 92 )
  {
LABEL_141:
    if ( *(_BYTE *)(v1 + v12 + 1) )
    {
      v12 += 2;
      v73 = *(unsigned __int8 *)(v1 + v12);
      if ( *(_BYTE *)(v1 + v12) )
        continue;
    }
    goto LABEL_140;
  }
  if ( v73 != 34 )
  {
    ++v12;
    v74 = *(unsigned __int8 *)(v1 + v12);
    if ( !*(_BYTE *)(v1 + v12) )
      goto LABEL_140;
    v75 = v1 + v12;
    while ( v74 != 92 )
    {
      if ( v74 == 34 )
        goto LABEL_195;
      v76 = *(unsigned __int8 *)++v75;
      v74 = v76;
      ++v12;
      if ( !v76 )
        goto LABEL_140;
    }
    goto LABEL_141;
  }
LABEL_195:
  v10 = v12;
  v11 = (unsigned __int8 *)(v1 + v12);
  v2 = *(unsigned __int8 *)(v1 + v12);
LABEL_21:
  if ( v2 )
  {
    v13 = v2 == 58;
    if ( v2 != 58 )
      v13 = v2 == 32;
    if ( v13 )
    {
LABEL_144:
      if ( v2 == 58 )
      {
        if ( *(_BYTE *)(v1 + v10 + 1) != 61 )
          goto LABEL_129;
        v77 = v12 + 1;
        v12 += 2;
        *v11 = 0;
        v18 = 1;
        *(_BYTE *)(v1 + v77) = 0;
        v11 = (unsigned __int8 *)(v1 + v12);
        v2 = *(unsigned __int8 *)(v1 + v12);
      }
      else
      {
        if ( v2 )
          goto LABEL_129;
        v11 = (unsigned __int8 *)(v1 + v12);
        v2 = *(unsigned __int8 *)(v1 + v12);
        v18 = 0;
      }
    }
    else
    {
      if ( v2 != 9 )
      {
        v14 = v12 + 1;
        v15 = (unsigned __int8 *)(v1 + v12 + 1);
        do
        {
          v11 = v15;
          v17 = *v15++;
          v2 = v17;
          v12 = v14;
          v10 = v14++;
          if ( !v17 )
            goto LABEL_33;
          v16 = v2 == 58;
          if ( v2 != 58 )
            v16 = v2 == 32;
          if ( v16 )
            goto LABEL_144;
        }
        while ( v2 != 9 );
      }
LABEL_129:
      ++v12;
      v18 = 0;
      *v11 = 0;
      v11 = (unsigned __int8 *)(v1 + v12);
      v2 = *(unsigned __int8 *)(v1 + v12);
    }
  }
  else
  {
LABEL_33:
    v18 = 0;
  }
  v7 = strcasecmp((const char *)v1, "set");
  if ( v7 )
  {
    if ( !v2 )
      goto LABEL_46;
    v19 = v2 == 9;
    if ( v2 != 9 )
      v19 = v2 == 32;
    if ( v19 )
    {
      v20 = (unsigned __int8 *)(v1 + v12 + 1);
      while ( 1 )
      {
        v12 = (int)&v20[-v1];
        v11 = v20;
        v22 = *v20++;
        v2 = v22;
        if ( !v22 )
          break;
        v21 = v2 == 9;
        if ( v2 != 9 )
          v21 = v2 == 32;
        if ( !v21 )
          goto LABEL_155;
      }
LABEL_46:
      v23 = v11;
      goto LABEL_47;
    }
LABEL_155:
    v81 = v2 == 34;
    if ( v2 != 34 )
      v81 = v2 == 39;
    if ( !v81 )
    {
      v23 = (_BYTE *)(v1 + v12);
      v82 = *(unsigned __int8 *)(v1 + v12);
      goto LABEL_188;
    }
    v83 = v12 + 1;
    v84 = *(unsigned __int8 *)(v1 + v83);
    v23 = (_BYTE *)(v1 + v83);
    if ( *(_BYTE *)(v1 + v83) )
    {
      while ( 1 )
      {
        v85 = v83 + 1;
        v23 = (_BYTE *)(v1 + v83 + 1);
        v86 = (unsigned __int8)*v23;
        if ( v84 == 92 )
        {
          v82 = *(unsigned __int8 *)(v1 + v83 + 1);
          v85 = v83;
        }
        else
        {
          if ( v2 == v84 )
          {
            v82 = *(unsigned __int8 *)(v1 + v83 + 1);
            v12 = v83 + 1;
LABEL_188:
            if ( (v82 & 0xDF) != 0 && v82 != 9 )
            {
              v96 = (unsigned __int8 *)(v1 + v12 + 1);
              do
              {
                v23 = v96;
                v98 = *v96++;
                v97 = v98;
              }
              while ( (v98 & 0xDF) != 0 && v97 != 9 );
            }
            break;
          }
          v87 = *(unsigned __int8 *)(v1 + v83 + 1);
          if ( !*(_BYTE *)(v1 + v83 + 1) )
            break;
          v88 = (unsigned __int8 *)(v1 + v83 + 2);
          while ( 1 )
          {
            v23 = v88;
            v12 = v85 + 1;
            v89 = *v88++;
            v82 = v89;
            if ( v87 == 92 )
              break;
            ++v85;
            v87 = v82;
            if ( v86 == v2 )
              goto LABEL_188;
            v86 = v82;
            if ( !v82 )
              goto LABEL_47;
          }
        }
        if ( v82 )
        {
          v83 = v85 + 2;
          v84 = *(unsigned __int8 *)(v1 + v85 + 2);
          v23 = (_BYTE *)(v1 + v85 + 2);
          if ( *v23 )
            continue;
        }
        break;
      }
    }
LABEL_47:
    *v23 = 0;
    if ( !v18 )
    {
      if ( *(_BYTE *)v1 == 34 )
      {
        v101 = strlen((const char *)v1);
        v102 = (char *)sub_93028(v101 + 1);
        v103 = *(unsigned __int8 *)(v1 + 1);
        v104 = v102;
        if ( *(_BYTE *)(v1 + 1) )
        {
          v105 = v1 + 1;
          v106 = v104;
          while ( 1 )
          {
            v107 = v18 & 1;
            v108 = v105 - v1;
            if ( v103 == 92 )
              v107 = 1;
            v109 = v106;
            LOBYTE(v18) = v18 ^ 1;
            if ( !v107 )
            {
              LOBYTE(v18) = 0;
              if ( v103 == 34 )
                break;
            }
            *v106++ = v103;
            v110 = *(unsigned __int8 *)++v105;
            v103 = v110;
            if ( !v110 )
            {
              v109 = &v104[v108];
              break;
            }
          }
        }
        else
        {
          v109 = v102;
        }
        *v109 = 0;
        v111 = *v11;
        v112 = v111 == 34;
        if ( v111 != 34 )
          v112 = v111 == 39;
        if ( v112 )
        {
          v113 = strlen((const char *)v11);
          if ( v113 && v11[v113 - 1] == v111 )
            v11[v113 - 1] = 0;
          sub_289554(v104, (char *)v11 + 1, (int)off_46DED0);
        }
        else
        {
          v114 = (int (*)())sub_2898DC((const char *)v11);
          sub_2892F8(0, v104, v114, (int)off_46DED0);
        }
        v7 = 0;
        sub_297758(v104);
      }
      else
      {
        v24 = strrchr((const char *)v1, 45);
        LOWORD(v25) = (unsigned __int16)"DEL";
        if ( v24 )
          v26 = v24 + 1;
        else
          v26 = (const char *)v1;
        HIWORD(v25) = (unsigned int)"DEL" >> 16;
        v27 = 0;
        do
        {
          if ( !strcasecmp(v26, v25) )
          {
            v28 = (int)(&off_3FD2D0)[2 * v27 + 156];
            goto LABEL_56;
          }
          ++v27;
          v25 = (&off_3FD53C)[2 * v27];
        }
        while ( v25 );
        v28 = *(unsigned __int8 *)v26;
LABEL_56:
        v29 = "Control-";
        v30 = off_3FD4F8;
        while ( !sub_29159C(v1, v29) )
        {
          v31 = v30[1];
          ++v30;
          v29 = v31;
          if ( !v31 )
            goto LABEL_61;
        }
        if ( (v28 & 0xFFFFFF00) != 0 || ((*_ctype_b_loc())[v28] & 0x200) == 0 )
          v28 &= 0x1Fu;
        else
          v28 = (*_ctype_toupper_loc())[v28] & 0x1F;
LABEL_61:
        v32 = "Meta";
        v33 = off_3FD508;
        while ( !sub_29159C(v1, v32) )
        {
          v34 = v33[1];
          ++v33;
          v32 = v34;
          if ( !v34 )
            goto LABEL_65;
        }
        v28 |= 0x80u;
LABEL_65:
        v35 = *v11;
        v36 = v35 == 34;
        if ( v35 != 34 )
          v36 = v35 == 39;
        if ( v36 )
        {
          v37 = strlen((const char *)v11);
          v115 = v28;
          v116 = 0;
          if ( v37 && v11[v37 - 1] == v35 )
            v11[v37 - 1] = 0;
          v7 = 0;
          sub_289554(&v115, (char *)v11 + 1, (int)off_46DED0);
        }
        else
        {
          v99 = strcasecmp((const char *)v11, "prefix-meta");
          v7 = v99;
          if ( v99 )
          {
            v7 = 0;
            v100 = sub_2898DC((const char *)v11);
            sub_288BF4(v28, v100);
          }
          else
          {
            v115 = v28;
            v116 = 0;
            sub_2892F8(1, &v115, (int (*)())&unk_46F728, (int)off_46DED0);
          }
        }
      }
      return v7;
    }
    return 0;
  }
  if ( v2 )
  {
    while ( 1 )
    {
      v39 = v2 == 32;
      if ( v2 != 32 )
        v39 = v2 == 9;
      if ( !v39 )
        break;
      v38 = *++v11;
      v2 = v38;
      if ( !v38 )
        goto LABEL_147;
    }
    v40 = v2 == 9;
    if ( v2 != 9 )
      v40 = v2 == 32;
    v41 = (const char *)v11;
    if ( v40 )
    {
LABEL_148:
      v78 = *((unsigned __int8 *)v41 + 1);
      *v41++ = 0;
      if ( v78 )
      {
        do
        {
          v80 = v78 == 32;
          if ( v78 != 32 )
            v80 = v78 == 9;
          if ( !v80 )
            break;
          v79 = *(unsigned __int8 *)++v41;
          v78 = v79;
        }
        while ( v79 );
      }
    }
    else
    {
      while ( 1 )
      {
        v44 = *(unsigned __int8 *)++v41;
        v43 = v44;
        if ( !v44 )
          break;
        v42 = v43 == 32;
        if ( v43 != 32 )
          v42 = v43 == 9;
        if ( v42 )
          goto LABEL_148;
      }
    }
  }
  else
  {
LABEL_147:
    v41 = (const char *)v11;
  }
  v45 = "bind-tty-special-chars";
  v46 = &off_3FD318;
  while ( strcasecmp((const char *)v11, v45) )
  {
    v47 = v46[3];
    v46 += 3;
    v45 = v47;
    if ( !v47 )
      goto LABEL_107;
  }
  v48 = strlen(v41) - 1;
  v49 = &v41[v48];
  if ( !__CFADD__(v41, v48) )
  {
    v50 = (unsigned __int8)v41[v48];
    v51 = v50 == 9;
    if ( v50 != 9 )
      v51 = v50 == 32;
    if ( v51 )
    {
      v52 = v49 - 1;
      do
      {
        v49 = v52;
        if ( v41 - 1 == v52 )
          break;
        v54 = *(unsigned __int8 *)v52--;
        v53 = v54;
        v55 = v54 == 9;
        if ( v54 != 9 )
          v55 = v53 == 32;
      }
      while ( v55 );
    }
  }
  v56 = v41 <= v49 + 1;
  if ( !v49[1] )
    v56 = 0;
  if ( v56 )
    *((_BYTE *)v49 + 1) = 0;
LABEL_107:
  sub_289C00((char *)v11, v41);
  return v7;
}
