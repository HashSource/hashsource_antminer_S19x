int __fastcall sub_80128(unsigned int *a1)
{
  unsigned int v1; // r9
  unsigned int v2; // r8
  char *v4; // r5
  char *v5; // r11
  unsigned int v6; // r3
  int *v7; // r2
  int v8; // r2
  bool v9; // cc
  unsigned int v10; // r2
  int v11; // r3
  int v12; // r1
  unsigned int v13; // r0
  int v14; // r0
  unsigned int v15; // r2
  unsigned int v16; // r1
  unsigned int v17; // r3
  int v18; // r0
  unsigned int v19; // r3
  _DWORD *v20; // r3
  unsigned int v21; // r0
  int v22; // r0
  unsigned int v23; // r0
  unsigned int v24; // r7
  unsigned int v25; // r5
  _DWORD *v26; // r6
  int v27; // r9
  unsigned int v28; // r2
  unsigned int v29; // r5
  int v30; // lr
  _DWORD *v31; // r1
  int v32; // r12
  int v33; // r5
  int v34; // r3
  int result; // r0
  int v36; // r6
  unsigned __int8 *v37; // r7
  unsigned int v38; // r2
  void (__fastcall *v39)(_DWORD, _DWORD, int, unsigned __int8 *, int, unsigned int *, unsigned int); // r10
  int v40; // r1
  unsigned int v41; // r2
  int v42; // r0
  int v43; // r3
  int *v44; // r6
  int v45; // r0
  bool v46; // cc
  int *v47; // r6
  unsigned int v48; // r1
  int v49; // r3
  bool v50; // cc
  const char *v51; // r5
  int v52; // r7
  _DWORD *v53; // r5
  int v54; // r7
  unsigned int v55; // r3
  int *v56; // r2
  bool v57; // cc
  int v58; // r1
  unsigned int v59; // r3
  int v60; // r0
  int v61; // r1
  unsigned int v62; // r1
  _BYTE *v63; // r3
  int v64; // r6
  _BYTE *v65; // r0
  int v66; // r0
  void (__fastcall *v67)(_DWORD, unsigned int, int, _BYTE *, int, unsigned int *, unsigned int); // r6
  int *v68; // r3
  int v69; // r2
  bool v70; // cc
  int v71; // r2
  unsigned int v72; // r2
  unsigned __int8 v73; // r2
  unsigned int v74; // r3
  int v75; // r3
  unsigned int v76; // r1
  int v77; // r3
  int *v78; // r3
  int v79; // r3
  _BOOL4 v80; // r2
  unsigned int v81; // r2
  int v82; // r3
  int v83; // r2
  bool v84; // cc
  int v85; // r0
  unsigned int v86; // r0
  size_t v87; // r10
  int v88; // r9
  _DWORD *v89; // r5
  int v90; // r1
  size_t v91; // r3
  int v92; // r0
  int v93; // r0
  int v94; // r3
  int v95; // r2
  size_t v96; // r3
  _BYTE *v97; // r2
  _BOOL4 v98; // r6
  int v99; // r0
  int v100; // r3
  _DWORD *v101; // [sp+14h] [bp-A8h]
  unsigned int v102; // [sp+18h] [bp-A4h]
  int v103; // [sp+18h] [bp-A4h]
  _BYTE *v104; // [sp+1Ch] [bp-A0h]
  int v105; // [sp+24h] [bp-98h]
  unsigned int v106; // [sp+28h] [bp-94h]
  unsigned int v107; // [sp+34h] [bp-88h] BYREF
  _BYTE v108[64]; // [sp+38h] [bp-84h] BYREF
  _BYTE v109[68]; // [sp+78h] [bp-44h] BYREF

  v1 = a1[324];
  v2 = 0;
  v101 = a1 + 574;
  v4 = (char *)(a1 + 588);
  if ( !v1 )
    v1 = 1;
  v102 = a1[285];
  while ( 1 )
  {
    v5 = v4 - 56;
    if ( a1[406] == 241 && a1[959] > 4 )
    {
      __pld(v4);
      v6 = *((_DWORD *)v4 - 12);
      goto LABEL_7;
    }
    result = sub_7D598(a1, 5u, a1[411], 0, v2 == 0, &v107);
    if ( result <= 0 )
      return result;
    v36 = a1[959];
    a1[406] = 241;
    v37 = (unsigned __int8 *)a1[958];
    if ( v36 < 0 )
    {
      v75 = 218;
      goto LABEL_145;
    }
    if ( (unsigned int)v36 <= 2 )
    {
      sub_95494(a1, 50, 143, 68, "ssl/record/ssl3_record.c", 225);
      return -1;
    }
    if ( !a1[7]
      || !a1[972]
      || (v37[2] == 1 ? (v38 = ((unsigned int)(v37[1] | (*v37 << 8)) >> 15) & 1) : (v38 = 0), !v38) )
    {
      v39 = (void (__fastcall *)(_DWORD, _DWORD, int, unsigned __int8 *, int, unsigned int *, unsigned int))a1[33];
      if ( v39 )
        v39(0, 0, 256, v37, 5, a1, a1[34]);
      v40 = *v37;
      if ( (unsigned int)(v36 - 1) <= 1 || (v41 = v37[2] | (v37[1] << 8), (unsigned int)(v36 - 3) <= 1) )
      {
        sub_95494(a1, 50, 143, 68, "ssl/record/ssl3_record.c", 271);
        return -1;
      }
      v42 = v37[3];
      v43 = v37[4];
      *((_DWORD *)v4 - 13) = v40;
      *((_DWORD *)v4 - 14) = v41;
      __pld(v4);
      v6 = v43 | (v42 << 8);
      __pld(v4 - 4);
      __pld(v4 - 8);
      *((_DWORD *)v4 - 12) = v6;
      if ( !a1[320] )
      {
        v44 = (int *)a1[1];
        if ( (*(_DWORD *)(v44[25] + 48) & 8) == 0 )
        {
          v45 = *v44;
          v46 = *v44 <= 0x10000;
          if ( *v44 != 0x10000 )
            v46 = v45 <= 771;
          if ( !v46 )
          {
            if ( v41 >> 8 != 3 )
            {
LABEL_90:
              if ( a1[972] )
              {
                v51 = (const char *)a1[958];
                if ( !strncmp(v51, "GET ", 4u)
                  || !strncmp(v51, "POST ", 5u)
                  || !strncmp(v51, "HEAD ", 5u)
                  || !strncmp(v51, "PUT ", 4u) )
                {
                  sub_95494(a1, -1, 143, 156, "ssl/record/ssl3_record.c", 322);
                }
                else if ( !strncmp(v51, "CONNE", 5u) )
                {
                  sub_95494(a1, -1, 143, 155, "ssl/record/ssl3_record.c", 326);
                }
                else
                {
                  sub_95494(a1, -1, 143, 267, "ssl/record/ssl3_record.c", 332);
                }
                return -1;
              }
              v82 = 337;
              goto LABEL_179;
            }
            goto LABEL_78;
          }
        }
        if ( a1[275] != 1 && *a1 != v41 )
        {
          if ( ((*a1 ^ v41) & 0xFF00) == 0 && !a1[251] && !a1[256] )
          {
            if ( v40 != 21 )
            {
              *a1 = v41;
              goto LABEL_227;
            }
            sub_95494(a1, -1, 143, 267, "ssl/record/ssl3_record.c", 299);
            return -1;
          }
LABEL_227:
          v82 = 308;
LABEL_179:
          sub_95494(a1, 70, 143, 267, "ssl/record/ssl3_record.c", v82);
          return -1;
        }
      }
      if ( v41 >> 8 != 3 )
        goto LABEL_90;
      v47 = (int *)a1[1];
      if ( (*(_DWORD *)(v47[25] + 48) & 8) != 0 )
      {
LABEL_67:
        if ( v6 > a1[411] - 5 )
          goto LABEL_88;
        goto LABEL_68;
      }
      v45 = *v47;
LABEL_78:
      v50 = v45 <= 0x10000;
      if ( v45 != 0x10000 )
        v50 = v45 <= 771;
      if ( !v50 )
      {
        if ( a1[243] )
        {
          if ( v40 != 23 )
          {
            if ( v40 == 20 )
            {
              v76 = a1[31];
              if ( *(_DWORD *)(v76 + 384) && *(_DWORD *)(v76 + 516) )
              {
LABEL_149:
                sub_95494(a1, 10, 143, 443, "ssl/record/ssl3_record.c", 350);
                return -1;
              }
            }
            else if ( v40 != 21 || a1[25] != 1 )
            {
              goto LABEL_149;
            }
          }
          if ( v41 != 771 )
          {
            sub_95494(a1, 50, 143, 267, "ssl/record/ssl3_record.c", 355);
            return -1;
          }
        }
        if ( a1[411] - 5 < v6 )
        {
LABEL_88:
          sub_95494(a1, 22, 143, 198, "ssl/record/ssl3_record.c", 363);
          return -1;
        }
LABEL_11:
        if ( v6 > 0x4100 )
        {
          sub_95494(a1, 22, 143, 150, "ssl/record/ssl3_record.c", 374);
          return -1;
        }
        goto LABEL_12;
      }
      goto LABEL_67;
    }
    v6 = _byteswap_ushort(*(_WORD *)v37) & 0x7FFF;
    *((_DWORD *)v4 - 12) = v6;
    *((_DWORD *)v4 - 13) = 22;
    *((_DWORD *)v4 - 14) = 2;
    if ( v6 > a1[411] - 2 )
    {
      sub_95494(a1, 22, 143, 198, "ssl/record/ssl3_record.c", 251);
      return -1;
    }
    if ( v6 <= 8 )
    {
      v77 = 257;
LABEL_162:
      sub_95494(a1, 50, 143, 160, "ssl/record/ssl3_record.c", v77);
      return -1;
    }
LABEL_7:
    v7 = (int *)a1[1];
    if ( (*(_DWORD *)(v7[25] + 48) & 8) == 0 )
    {
      v8 = *v7;
      v9 = v8 <= 0x10000;
      if ( v8 != 0x10000 )
        v9 = v8 <= 771;
      if ( !v9 )
        goto LABEL_11;
    }
LABEL_68:
    v48 = 16704;
    if ( a1[250] )
      v48 = 17728;
    if ( v48 < v6 )
    {
      sub_95494(a1, 22, 143, 150, "ssl/record/ssl3_record.c", 391);
      return -1;
    }
LABEL_12:
    v10 = v6;
    if ( *((_DWORD *)v4 - 14) == 2 )
    {
      v10 = v6 - 3;
      if ( v6 == 3 )
      {
        a1[406] = 240;
LABEL_76:
        v11 = a1[958] + 2;
        goto LABEL_16;
      }
    }
    else if ( !v6 )
    {
      a1[406] = 240;
      goto LABEL_15;
    }
    result = sub_7D598(a1, v10, v10, 1, 0, &v107);
    if ( result <= 0 )
      return result;
    v49 = *((_DWORD *)v4 - 14);
    a1[406] = 240;
    if ( v49 == 2 )
      goto LABEL_76;
LABEL_15:
    v11 = a1[958] + 5;
LABEL_16:
    v12 = *((_DWORD *)v4 - 12);
    ++v2;
    *((_DWORD *)v4 - 8) = v11;
    *((_DWORD *)v4 - 9) = v11;
    *((_DWORD *)v4 - 11) = v12;
    *((_DWORD *)v4 - 6) = 0;
    a1[959] = 0;
    a1[972] = 0;
    if ( v1 <= v2 || *((_DWORD *)v4 - 13) != 23 )
      break;
    if ( (*(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) & 1) == 0 )
      goto LABEL_26;
    v13 = a1[243];
    if ( !v13 )
      goto LABEL_26;
    v14 = sub_D8920(v13);
    if ( (sub_D8928(v14) & 0x800000) != 0 )
    {
      v15 = a1[409];
      if ( v15 )
      {
        v16 = a1[413];
        if ( v16 > 4 )
        {
          v17 = a1[412];
          v18 = *(unsigned __int8 *)(v15 + v17);
          v19 = v17 + v15;
          if ( v18 == 23 )
          {
            v4 += 48;
            if ( v16 >= (*(unsigned __int8 *)(v19 + 4) | (*(unsigned __int8 *)(v19 + 3) << 8)) + 5 )
              continue;
          }
        }
      }
    }
    break;
  }
  if ( v2 != 1 || *((_DWORD *)v5 + 1) != 20 )
    goto LABEL_26;
  v78 = (int *)a1[1];
  if ( (*(_DWORD *)(v78[25] + 48) & 8) == 0 )
  {
    v79 = *v78;
    v80 = v79 != 0x10000;
    if ( v79 < 772 )
      v80 = 0;
    if ( v80 )
      goto LABEL_168;
  }
  if ( a1[275] )
  {
LABEL_168:
    v20 = (_DWORD *)a1[31];
    if ( !v20[96] || !v20[129] )
    {
      if ( *((_DWORD *)v5 + 2) == 1 && **((_BYTE **)v5 + 5) == 1 )
      {
        v81 = a1[963];
        *((_DWORD *)v5 + 1) = 22;
        a1[963] = ++v81;
        if ( v81 > 0x20 )
        {
          sub_95494(a1, 10, 143, 262, "ssl/record/ssl3_record.c", 485);
          return -1;
        }
        *((_DWORD *)v5 + 8) = 1;
        a1[407] = 1;
        return 1;
      }
      else
      {
        sub_95494(a1, 47, 143, 260, "ssl/record/ssl3_record.c", 473);
        return -1;
      }
    }
  }
  else
  {
LABEL_26:
    v20 = (_DWORD *)a1[31];
  }
  if ( (*v20 & 0x100) == 0 )
    goto LABEL_98;
  v21 = a1[248];
  if ( !v21 )
    goto LABEL_98;
  v22 = sub_D8D8C(v21);
  v23 = sub_D8C78(v22);
  v24 = v23;
  if ( v23 > 0x40 )
  {
    sub_95494(a1, 80, 143, 6, "ssl/record/ssl3_record.c", 504);
    return -1;
  }
  if ( v2 )
  {
    v25 = a1[576];
    if ( v23 > v25 )
    {
LABEL_180:
      v77 = 513;
      goto LABEL_162;
    }
    v26 = v101;
    v27 = 0;
    while ( 1 )
    {
      v28 = a1[1];
      v29 = v25 - v24;
      v30 = v26[5];
      v31 = v26;
      v26[2] = v29;
      v32 = *(_DWORD *)(v28 + 100);
      __pld(v26 + 53);
      ++v27;
      v26 += 12;
      v33 = v29 + v30;
      if ( !(*(int (__fastcall **)(unsigned int *, _DWORD *, _BYTE *, _DWORD))(v32 + 4))(a1, v31, v108, 0)
        || sub_BC33C(v108, v33, v24) )
      {
        break;
      }
      if ( v27 == v2 )
        goto LABEL_98;
      v25 = v26[2];
      if ( v24 > v25 )
        goto LABEL_180;
    }
    v34 = 521;
LABEL_38:
    sub_95494(a1, 20, 143, 281, "ssl/record/ssl3_record.c", v34);
    return -1;
  }
LABEL_98:
  v105 = a1[576];
  v52 = (**(int (__fastcall ***)(unsigned int *, _DWORD *, unsigned int, _DWORD))(a1[1] + 100))(a1, v101, v2, 0);
  if ( !v52 )
  {
    if ( sub_95D8C(a1) )
      return -1;
    if ( v2 != 1 || !sub_95DB4(a1) )
    {
      sub_95494(a1, 20, 143, 129, "ssl/record/ssl3_record.c", 563);
      return -1;
    }
    if ( !sub_7F228(a1, a1[576], 104, 0) )
      return -1;
LABEL_155:
    a1[576] = 0;
    a1[582] = 1;
    a1[407] = 1;
    sub_7D420((int)(a1 + 404));
    return 1;
  }
  if ( v102 && a1[243] && (*(_DWORD *)a1[31] & 0x100) == 0 && sub_D8D8C(a1[248]) )
  {
    v85 = sub_D8D8C(a1[248]);
    v86 = sub_D8C78(v85);
    v87 = v86;
    if ( v86 > 0x40 )
    {
      v75 = 587;
LABEL_145:
      sub_95494(a1, 80, 143, 68, "ssl/record/ssl3_record.c", v75);
    }
    else
    {
      if ( !v2 )
        goto LABEL_102;
      if ( v86 <= a1[577] )
      {
        v106 = v86 + 1;
        v88 = 0;
        v89 = v101;
        v103 = v52;
        do
        {
          v92 = sub_D8920(a1[243]);
          if ( (sub_D8928(v92) & 0xF0007) == 2 && v89[3] < v106 )
            break;
          v93 = sub_D8920(a1[243]);
          if ( (sub_D8928(v93) & 0xF0007) == 2 )
          {
            if ( !sub_80004(v109, v89, v87) )
            {
              v75 = 618;
              goto LABEL_145;
            }
            v98 = 0;
            v104 = v109;
            v89[2] -= v87;
          }
          else
          {
            v94 = v89[2];
            v95 = v89[5];
            __pld(v89 + 26);
            v96 = v94 - v87;
            v97 = (_BYTE *)(v95 + v96);
            v89[2] = v96;
            v98 = v97 == 0;
            v104 = v97;
          }
          if ( (*(int (__fastcall **)(unsigned int *, _DWORD *, _BYTE *, _DWORD))(*(_DWORD *)(a1[1] + 100) + 4))(
                 a1,
                 v89,
                 v108,
                 0) )
          {
            v99 = v98;
          }
          else
          {
            v99 = v98 | 1;
          }
          if ( v99 || sub_BC33C(v108, v104, v87) )
            v103 = -1;
          v90 = v103;
          ++v88;
          if ( v89[2] > v87 + 17408 )
            v90 = -1;
          v103 = v90;
          if ( v88 == v2 )
          {
            v52 = v90;
            goto LABEL_102;
          }
          v89 += 12;
          v91 = v89[3];
          __pld(v89 + 27);
        }
        while ( v87 <= v91 );
      }
      sub_95494(a1, 50, 143, 160, "ssl/record/ssl3_record.c", 604);
    }
    return -1;
  }
LABEL_102:
  if ( v52 < 0 )
  {
    if ( sub_95D8C(a1) )
      return -1;
    if ( v2 != 1 || !sub_95DB4(a1) )
    {
      v34 = 677;
      goto LABEL_38;
    }
    if ( !sub_7F228(a1, v105, 104, 0) )
      return -1;
    goto LABEL_155;
  }
  if ( !v2 )
  {
LABEL_142:
    if ( a1[26] != 11 || a1[575] != 23 || sub_7F228(a1, a1[576], 0, 0) )
    {
      a1[407] = v2;
      return 1;
    }
    return -1;
  }
  v53 = v101;
  v54 = 0;
  while ( 2 )
  {
    if ( a1[250] )
    {
      v55 = v53[2];
      __pld(v53 + 26);
      if ( v55 > 0x4400 )
      {
        sub_95494(a1, 22, 143, 140, "ssl/record/ssl3_record.c", 688);
        return -1;
      }
      if ( !sub_7F2F8((int)a1, v53) )
      {
        sub_95494(a1, 30, 143, 107, "ssl/record/ssl3_record.c", 693);
        return -1;
      }
    }
    v56 = (int *)a1[1];
    if ( (*(_DWORD *)(v56[25] + 48) & 8) != 0 )
      goto LABEL_156;
    v57 = *v56 <= 0x10000;
    if ( *v56 != 0x10000 )
      v57 = *v56 <= 771;
    if ( v57 )
      goto LABEL_156;
    if ( !a1[243] )
    {
      v59 = v53[2];
      v58 = v53[1];
      goto LABEL_134;
    }
    v58 = v53[1];
    if ( v58 == 21 )
    {
      v59 = v53[2];
      goto LABEL_134;
    }
    v60 = v53[2];
    v61 = v58 != 23;
    if ( !v60 )
      v61 |= 1u;
    if ( v61 )
    {
      sub_95494(a1, 10, 143, 443, "ssl/record/ssl3_record.c", 706);
      return -1;
    }
    v62 = v60 - 1;
    if ( v60 == 1 )
    {
      v63 = (_BYTE *)v53[5];
    }
    else
    {
      v64 = v53[5];
      v63 = (_BYTE *)(v64 + v62);
      if ( !*(_BYTE *)(v64 + v62) )
      {
        v65 = (_BYTE *)(v60 - 2 + v64);
        while ( 1 )
        {
          --v62;
          v63 = v65--;
          if ( !v62 )
            break;
          if ( *v63 )
            goto LABEL_124;
        }
        v63 = (_BYTE *)v53[5];
      }
    }
LABEL_124:
    v53[2] = v62;
    v66 = (unsigned __int8)*v63;
    v53[1] = v66;
    if ( (unsigned int)(v66 - 21) <= 2 )
    {
      v67 = (void (__fastcall *)(_DWORD, unsigned int, int, _BYTE *, int, unsigned int *, unsigned int))a1[33];
      if ( v67 )
      {
        v67(0, *a1, 257, v63, 1, a1, a1[34]);
        v68 = (int *)a1[1];
        if ( (*(_DWORD *)(v68[25] + 48) & 8) == 0 )
        {
          v69 = *v68;
          v59 = v53[2];
          v70 = v69 <= 0x10000;
          if ( v69 != 0x10000 )
            v70 = v69 <= 771;
          v71 = !v70;
          goto LABEL_132;
        }
LABEL_156:
        v59 = v53[2];
LABEL_135:
        if ( v59 > 0x4000 )
        {
          v100 = 744;
        }
        else
        {
          v72 = a1[285];
          if ( !v72 || (v73 = *(_BYTE *)(v72 + 492) - 1, v73 > 3u) || 512 << v73 >= v59 )
          {
            v53[4] = 0;
            if ( v59 )
            {
              a1[963] = 0;
            }
            else
            {
              v74 = a1[963] + 1;
              a1[963] = v74;
              if ( v74 > 0x20 )
              {
                sub_95494(a1, 10, 143, 298, "ssl/record/ssl3_record.c", 771);
                return -1;
              }
            }
            ++v54;
            v53 += 12;
            if ( v54 == v2 )
              goto LABEL_142;
            continue;
          }
          v100 = 752;
        }
        sub_95494(a1, 22, 143, 146, "ssl/record/ssl3_record.c", v100);
        return -1;
      }
      v83 = *v56;
      v59 = v62;
      v84 = v83 <= 0x10000;
      if ( v83 != 0x10000 )
        v84 = v83 <= 771;
      v71 = !v84;
LABEL_132:
      if ( !v71 )
        goto LABEL_135;
      v58 = v53[1];
LABEL_134:
      __pld(v53 + 25);
      if ( (unsigned int)(v58 - 21) <= 1 && !v59 )
      {
        sub_95494(a1, 10, 143, 271, "ssl/record/ssl3_record.c", 738);
        return -1;
      }
      goto LABEL_135;
    }
    break;
  }
  sub_95494(a1, 10, 143, 443, "ssl/record/ssl3_record.c", 721);
  return -1;
}
