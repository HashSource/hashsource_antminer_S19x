int __fastcall sub_52768(int a1)
{
  int v1; // r5
  unsigned __int8 **v2; // r11
  double v3; // r0
  int v4; // r3
  size_t v5; // r7
  bool *v6; // r12
  int v7; // r1
  int v8; // r2
  unsigned int v9; // r0
  bool v10; // cc
  unsigned __int8 *v11; // r0
  int v12; // t1
  unsigned int v13; // lr
  bool v14; // cc
  int v15; // r2
  int v16; // r1
  bool *v17; // r0
  bool v18; // zf
  int v19; // t1
  bool v20; // zf
  _BOOL4 v21; // lr
  bool *v22; // r9
  int v23; // r0
  unsigned int v24; // r3
  _BOOL4 v25; // t1
  bool v26; // zf
  int v27; // r9
  int v28; // r2
  unsigned __int8 *v29; // r9
  int v30; // r3
  bool v31; // zf
  int v32; // r9
  char v33; // r0
  int v34; // r6
  char v35; // r0
  int v36; // r1
  char v37; // r0
  int v38; // r1
  double v39; // d0
  char *v40; // r0
  bool v41; // zf
  int v42; // r9
  int v43; // r0
  signed int v44; // r3
  int v45; // r1
  int v46; // r10
  int v47; // r9
  __int64 v48; // d16
  unsigned __int8 *v49; // r8
  int v50; // r0
  int v51; // r8
  int v52; // r10
  unsigned int v53; // r5
  int v54; // r2
  int v55; // r0
  unsigned int v56; // r1
  int v57; // r3
  const char *v58; // r0
  int v59; // r1
  bool *v60; // r2
  _BOOL4 v61; // t1
  int v62; // r0
  int v63; // r3
  int v64; // r9
  const char *v65; // r0
  int v66; // r1
  bool *v67; // r2
  _BOOL4 v68; // t1
  int v69; // r0
  int v70; // r3
  int v71; // r9
  const char *v72; // r0
  int v73; // r1
  bool *v74; // r2
  _BOOL4 v75; // t1
  int v76; // r0
  int v77; // r7
  int v78; // r2
  int v79; // r0
  unsigned int v80; // r3
  int v81; // r3
  int v82; // r8
  bool v83; // cc
  __int16 v84; // r2
  int v85; // r2
  int v86; // r9
  unsigned __int16 v87; // r0
  const char *v88; // r0
  const char *v89; // r0
  unsigned __int8 *v91; // [sp+8h] [bp-114h]
  int v92; // [sp+14h] [bp-108h]
  unsigned int v93; // [sp+14h] [bp-108h]
  unsigned __int8 v94; // [sp+18h] [bp-104h]
  int v95; // [sp+18h] [bp-104h]
  int v96; // [sp+18h] [bp-104h]
  size_t v97; // [sp+30h] [bp-ECh]
  __int16 v98; // [sp+3Ch] [bp-E0h]
  _DWORD v99[2]; // [sp+40h] [bp-DCh] BYREF
  _DWORD v100[3]; // [sp+48h] [bp-D4h] BYREF
  int v101; // [sp+54h] [bp-C8h] BYREF
  unsigned int v102; // [sp+58h] [bp-C4h]
  int v103; // [sp+5Ch] [bp-C0h]
  int v104; // [sp+60h] [bp-BCh] BYREF
  unsigned int v105; // [sp+64h] [bp-B8h]
  int v106; // [sp+68h] [bp-B4h] BYREF
  _DWORD v107[2]; // [sp+6Ch] [bp-B0h] BYREF
  __int16 v108; // [sp+74h] [bp-A8h]
  unsigned int v109; // [sp+78h] [bp-A4h] BYREF
  signed int v110; // [sp+7Ch] [bp-A0h]
  bool *v111; // [sp+84h] [bp-98h] BYREF
  bool *v112; // [sp+88h] [bp-94h]
  int v113; // [sp+8Ch] [bp-90h]
  int v114; // [sp+90h] [bp-8Ch]
  bool v115; // [sp+94h] [bp-88h] BYREF
  unsigned __int8 v116; // [sp+95h] [bp-87h] BYREF
  unsigned __int8 v117; // [sp+96h] [bp-86h] BYREF
  char s1[125]; // [sp+97h] [bp-85h] BYREF

  v1 = *(_DWORD *)(a1 + 4);
  v2 = *(unsigned __int8 ***)(v1 + 84);
  v91 = *v2;
  v104 = 0;
  v103 = 0;
  v107[0] = 0;
  v107[1] = 0;
  v108 = 0;
  v105 = 0;
  v106 = 0;
  LODWORD(v3) = sub_3A6D4(a1, &v115, 128, &v101);
  v111 = &v115;
  v112 = &v115;
  v114 = 0;
  v4 = LODWORD(v3) & ~(SLODWORD(v3) >> 31);
  v5 = LODWORD(v3);
  v6 = &v115 + v4;
  v113 = v4;
  *(&v115 + v4) = 0;
  if ( !v115 )
    return LODWORD(v3);
  if ( v115 != 36 )
    goto LABEL_3;
  v7 = v116;
  v111 = (bool *)&v116;
  v113 = v4 - 1;
  v112 = (bool *)&v116;
  if ( (unsigned int)v116 - 65 > 0x19 )
    goto LABEL_3;
  v8 = v117;
  v9 = v117 - 65;
  v10 = v9 > 0x19;
  if ( v9 > 0x19 )
    v10 = (unsigned int)v117 - 48 > 9;
  v11 = &v117;
  if ( !v10 )
  {
    do
    {
      v7 ^= v8;
      v12 = *++v11;
      v8 = v12;
      v13 = v12 - 48;
      v14 = (unsigned int)(v12 - 65) > 0x19;
      if ( (unsigned int)(v12 - 65) > 0x19 )
        v14 = v13 > 9;
    }
    while ( !v14 );
  }
  if ( v8 != 44 || v11 - &v116 <= 4 )
  {
LABEL_3:
    LODWORD(v3) = sub_39C88(v1, 2);
    return LODWORD(v3);
  }
  v15 = v11[1];
  v16 = v7 ^ 0x2C;
  v17 = (bool *)(v11 + 1);
  v18 = v15 == 42;
  if ( v15 != 42 )
    v18 = v15 == 0;
  if ( !v18 )
  {
    do
    {
      v16 ^= v15;
      v19 = *++v17;
      v15 = v19;
      v20 = v19 == 42;
      if ( v19 != 42 )
        v20 = v15 == 0;
    }
    while ( !v20 );
  }
  if ( v15 )
  {
    if ( v15 != 42 || v17 != v6 - 3 || v17 - (bool *)&v116 > 79 )
      goto LABEL_3;
    v21 = v17[1];
    v22 = v6 - 2;
    if ( v17[1] )
    {
      v23 = 0;
      do
      {
        v24 = (unsigned __int8)(v21 - 48);
        if ( v24 > 9 )
        {
          if ( (unsigned int)(v21 - 65) > 5 )
            break;
          LOBYTE(v24) = v21 - 55;
        }
        v25 = *++v22;
        v21 = v25;
        v23 = (unsigned __int8)(v24 + 16 * v23);
      }
      while ( v25 );
    }
    else
    {
      v23 = v17[1];
    }
    v26 = v6 == v22;
    if ( v6 == v22 )
      v26 = v16 == v23;
    if ( !v26 )
      goto LABEL_3;
    v94 = 2;
  }
  else
  {
    v94 = 1;
  }
  ++*((_DWORD *)v91 + 4);
  LODWORD(v3) = strncmp(s1, "RMC,", 4u);
  v27 = LODWORD(v3);
  if ( LODWORD(v3) )
  {
    LODWORD(v3) = strncmp(s1, "GGA,", 4u);
    if ( LODWORD(v3) )
    {
      LODWORD(v3) = strncmp(s1, "GLL,", 4u);
      if ( LODWORD(v3) )
      {
        LODWORD(v3) = strncmp(s1, "ZDA,", 4u);
        if ( LODWORD(v3) )
        {
          LODWORD(v3) = strncmp(s1, "ZDG,", 4u);
          if ( LODWORD(v3) )
          {
            LODWORD(v3) = strncmp((const char *)&v116, "PGRMF,", 6u);
            if ( LODWORD(v3) )
              return LODWORD(v3);
            v27 = 5;
            v92 = 5;
          }
          else
          {
            v27 = 4;
            v92 = 4;
          }
        }
        else
        {
          v27 = 3;
          v92 = 3;
        }
      }
      else
      {
        v27 = 2;
        v92 = 2;
      }
    }
    else
    {
      v27 = 1;
      v92 = 1;
    }
  }
  else
  {
    v92 = 0;
  }
  v28 = *(_DWORD *)(v1 + 76);
  if ( (v28 & 0x80) != 0 )
  {
    LODWORD(v3) = -32;
    v39 = (double)v102;
    ldexp(v3, v28);
    v40 = strchr((const char *)&v115, 44);
    LODWORD(v3) = sub_42E1C(v1 + 16, (int)"delay %0.6f %.*s", v39, v40 - (char *)&v115, (const char *)&v115);
    v28 = *(_DWORD *)(v1 + 76);
  }
  if ( (v28 & 0xFF0F) != 0 && (v28 & *(_DWORD *)&byte_9A7DC[4 * v27 + 28]) == 0 )
    goto LABEL_44;
  v29 = &v91[v27];
  if ( v29[40] > (unsigned int)v94 )
  {
    LODWORD(v3) = sub_39C88(v1, 2);
    ++*((_DWORD *)v91 + 7);
    return LODWORD(v3);
  }
  v30 = *v91;
  v29[40] = v94;
  v31 = v92 == 4;
  if ( v92 != 4 )
    v31 = v30 == 0;
  if ( !v31 )
    goto LABEL_44;
  switch ( v92 )
  {
    case 1:
      v95 = sub_520F8((const char *)v107, &v104, (int)&v111, 1);
      v37 = sub_51B74((int)&v111, 6, 48, 1);
      v38 = v101;
      *((_BYTE *)v2 + 40) = v37;
      v32 = sub_51EC0((int)v107, v38);
      if ( ((_BYTE)v2[192] & 8) != 0 )
        sub_5226C(&v111, 2, 4, -1);
      goto LABEL_52;
    case 2:
      v95 = sub_520F8((const char *)v107, &v104, (int)&v111, 5);
      v35 = sub_51B74((int)&v111, 6, 65, 0);
      v36 = v101;
      *((_BYTE *)v2 + 40) = v35;
      v32 = sub_51EC0((int)v107, v36);
      if ( ((_BYTE)v2[192] & 8) != 0 )
        sub_5226C(&v111, 1, 3, -1);
      goto LABEL_52;
    case 3:
      *((_BYTE *)v2 + 40) = 0;
      v95 = sub_520F8((const char *)v107, &v104, (int)&v111, 1);
      v32 = sub_51F80((int)v107, (int)&v111, 2, 1);
      goto LABEL_52;
    case 4:
      v95 = sub_520F8((const char *)v107, &v104, (int)&v111, 1);
      v32 = sub_51F80((int)v107, (int)&v111, 2, 1);
      v33 = sub_51B74((int)&v111, 4, 48, 1);
      v103 = -1;
      *((_BYTE *)v2 + 40) = v33;
      goto LABEL_52;
    case 5:
      v57 = v114;
      if ( v114 > 1 )
      {
        v58 = (const char *)v111;
        v57 = 0;
        v114 = 0;
        v112 = v111;
      }
      else
      {
        v58 = (const char *)v112;
        if ( v114 == 1 )
          goto LABEL_119;
      }
      v59 = *(unsigned __int8 *)v58;
      if ( *v58 )
      {
        v60 = (bool *)(v58 + 1);
        do
        {
          if ( v59 == 44 )
            ++v57;
          v112 = v60;
          v114 = v57;
          v58 = (const char *)v60;
          if ( v57 == 1 )
            break;
          v61 = *v60++;
          v59 = v61;
        }
        while ( v61 );
      }
LABEL_119:
      v62 = sscanf(v58, "%hu", &v106);
      v63 = v114;
      v64 = v62;
      if ( v114 > 2 )
      {
        v65 = (const char *)v111;
        v63 = 0;
        v114 = 0;
        v112 = v111;
      }
      else
      {
        v65 = (const char *)v112;
        if ( v114 == 2 )
          goto LABEL_127;
      }
      v66 = *(unsigned __int8 *)v65;
      if ( *v65 )
      {
        v67 = (bool *)(v65 + 1);
        do
        {
          if ( v66 == 44 )
            ++v63;
          v112 = v67;
          v114 = v63;
          v65 = (const char *)v67;
          if ( v63 == 2 )
            break;
          v68 = *v67++;
          v66 = v68;
        }
        while ( v68 );
      }
LABEL_127:
      v69 = sscanf(v65, "%lu", &v109);
      v70 = v114;
      v71 = v64 + v69;
      if ( v114 > 5 )
      {
        v72 = (const char *)v111;
        v70 = 0;
        v114 = 0;
        v112 = v111;
      }
      else
      {
        v72 = (const char *)v112;
        if ( v114 == 5 )
          goto LABEL_135;
      }
      v73 = *(unsigned __int8 *)v72;
      if ( *v72 )
      {
        v74 = (bool *)(v72 + 1);
        do
        {
          if ( v73 == 44 )
            ++v70;
          v112 = v74;
          v114 = v70;
          v72 = (const char *)v74;
          if ( v70 > 4 )
            break;
          v75 = *v74++;
          v73 = v75;
        }
        while ( v75 );
      }
LABEL_135:
      if ( v71 + sscanf(v72, "%hd", (char *)&v106 + 2) == 3
        && (unsigned __int16)v106 < 0x400u
        && v109 <= (unsigned int)"figuration item on line %d longer than limit of %lu, began with '%s'" )
      {
        v105 = v109;
        v32 = sub_51F80((int)v107, (int)&v111, 3, 0);
        if ( v32 )
        {
          v95 = sub_520F8((const char *)v107, &v104, (int)&v111, 4);
          *((_BYTE *)v2 + 40) = sub_51B74((int)&v111, 11, 48, 1);
          v76 = sub_675B8(v107);
          v97 = v5;
          v77 = 5;
          v78 = *((unsigned __int16 *)v91 + 1);
          v98 = LOWORD(v107[0]) % 0x64u;
          v79 = v76 + SHIWORD(v106);
          v80 = (unsigned int)v79 >> 31;
          if ( v79 > (int)&loc_1517C + 3 )
            v81 = 1 - v80;
          else
            v81 = -v80;
          v82 = v81;
          while ( 1 )
          {
            v83 = (unsigned int)(v78 - 19) > 4;
            if ( (unsigned int)(v78 - 19) > 4 )
              *((_WORD *)v91 + 1) = 19;
            else
              LOWORD(v78) = 5 * v78;
            if ( v83 )
              v84 = 1900;
            else
              v84 = 5 * v78;
            if ( !v83 )
              v84 *= 4;
            LOWORD(v107[0]) = v84 + v98;
            v85 = v82 + sub_67430(v107) - 722819;
            if ( v85 >= 0 && (unsigned __int16)v106 == (((__int16)v85 / 7) & 0x3FF) )
              break;
            --v77;
            v78 = (unsigned __int16)(*((_WORD *)v91 + 1) + 1);
            *((_WORD *)v91 + 1) = v78;
            if ( !v77 )
            {
              v32 = 0;
              v5 = v97;
              LOWORD(v107[0]) = v98;
              goto LABEL_137;
            }
          }
          v32 = 1;
          v5 = v97;
        }
        else
        {
          v95 = sub_520F8((const char *)v107, &v104, (int)&v111, 4);
          *((_BYTE *)v2 + 40) = sub_51B74((int)&v111, 11, 48, 1);
        }
      }
      else
      {
        v32 = 0;
        v95 = sub_520F8((const char *)v107, &v104, (int)&v111, 4);
        *((_BYTE *)v2 + 40) = sub_51B74((int)&v111, 11, 48, 1);
      }
LABEL_137:
      if ( ((_BYTE)v2[192] & 8) != 0 )
        sub_5226C(&v111, 6, 8, -1);
LABEL_52:
      if ( !v95 )
      {
        v34 = 6;
        ++*((_DWORD *)v91 + 7);
LABEL_54:
        if ( v5 >= 0x7F )
          v5 = 127;
        v2[46] = (unsigned __int8 *)v5;
        memcpy(v2 + 14, &v115, v5);
        *((_BYTE *)v2 + v5 + 56) = 0;
        LODWORD(v3) = sub_39C88(v1, v34);
        return LODWORD(v3);
      }
      if ( !v32 )
      {
        v34 = 5;
        ++*((_DWORD *)v91 + 7);
        goto LABEL_54;
      }
      if ( *((_BYTE *)v2 + 40) == 3 )
      {
        v34 = 2;
        ++*((_DWORD *)v91 + 6);
        goto LABEL_54;
      }
      v41 = v92 == 4;
      if ( v92 == 4 )
        v41 = *v91 == 0;
      if ( v41 )
      {
        v89 = (const char *)sub_6B36C(v1 + 16);
        sub_65D40(6, "%s using GPS time as if it were UTC", v89);
        *v91 = 1;
      }
      v96 = **(_DWORD **)(v1 + 84);
      v42 = sub_675B8(v107);
      v43 = sub_67430(v107);
      v44 = v104;
      v45 = v103;
      v46 = v43 - 693596;
      if ( v104 < 0 )
      {
        do
        {
          --v45;
          v44 += 1000000000;
        }
        while ( v44 < 0 );
      }
      else if ( v104 > 999999999 )
      {
        if ( v104 - 1000000000 <= 999999999 )
          v45 = v103 + 1;
        else
          v44 = v104 - 2013265920;
        if ( v104 - 1000000000 <= 999999999 )
        {
          v44 = v104 - 1000000000;
        }
        else
        {
          v45 += 2;
          v44 += 13265920;
        }
      }
      v47 = v42 + v45;
      v48 = vshld_n_s64(vshrd_n_s64(vdup_n_s32(v44).n64_i64[0], 0x20u), 0x20u);
      v93 = sub_8D518(v48 + 500000000, (unsigned __int64)(v48 + 500000000) >> 32, 1000000000, 0);
      if ( (*(_DWORD *)(v1 + 76) & 0x2000000) == 0 )
      {
        if ( v47 <= 86399 )
        {
          if ( v47 >= 0 )
          {
LABEL_98:
            sub_6694C((int)v99, v101, 0);
            v100[0] = v99[0];
            v100[1] = v99[1];
            sub_66A00(&v109, v100);
            v50 = v109 - 3584;
            if ( v47 < v110 || v47 == v110 && v93 < v102 )
              v50 = v109 - 3583;
            if ( v50 < dword_BE608 )
              v50 = dword_BE608;
            v51 = sub_667F8(v50, v46, 7168);
            v52 = (v51 - v46) / 7;
            if ( v52 != *(__int16 *)(v96 + 12) )
            {
              *(_WORD *)(v96 + 12) = v52;
              if ( (ntp_syslogmask & 0x100) != 0 )
              {
                v88 = (const char *)sub_6B36C(v1 + 16);
                sub_65D40(6, "%s Changed GPS epoch warp to %d weeks", v88, v52);
              }
            }
            LODWORD(v3) = sub_6702C(v99, v51, v47);
            v53 = v99[0];
            goto LABEL_106;
          }
          v49 = v91;
          do
          {
            --v46;
            v47 += 86400;
          }
          while ( v47 < 0 );
        }
        else
        {
          v49 = v91;
          do
          {
            ++v46;
            v47 -= 86400;
          }
          while ( v47 > 86399 );
        }
        v91 = v49;
        goto LABEL_98;
      }
      LODWORD(v3) = sub_6702C(v99, v46, v47);
      v53 = v99[0];
LABEL_106:
      if ( *((_DWORD *)v91 + 1) == v53 && *((_DWORD *)v91 + 2) == v93 )
      {
LABEL_44:
        ++*((_DWORD *)v91 + 8);
        return LODWORD(v3);
      }
      v54 = *((_DWORD *)v91 + 5);
      if ( v5 >= 0x7F )
        v5 = 127;
      *((_DWORD *)v91 + 1) = v53;
      *((_DWORD *)v91 + 2) = v93;
      *((_DWORD *)v91 + 5) = v54 + 1;
      v2[46] = (unsigned __int8 *)v5;
      memcpy(v2 + 14, &v115, v5);
      v55 = v101;
      v56 = v102;
      *((_BYTE *)v2 + v5 + 56) = 0;
      v2[58] = (unsigned __int8 *)v55;
      v2[59] = (unsigned __int8 *)v56;
      v109 = v53;
      v110 = v93;
      LODWORD(v3) = sub_3A258(__SPAIR64__(v53, (unsigned int)v2), v93);
      return LODWORD(v3);
    default:
      v95 = sub_520F8((const char *)v107, &v104, (int)&v111, 1);
      *((_BYTE *)v2 + 40) = sub_51B74((int)&v111, 2, 65, 0);
      if ( sub_51F80((int)v107, (int)&v111, 9, 0) )
      {
        sub_67758(&v109, v101, 0);
        v86 = (unsigned __int16)v109 - 20;
        if ( v86 < dword_BE60C )
          v86 = dword_BE60C;
        v87 = sub_667F8(v86, LOWORD(v107[0]), 100);
        LOWORD(v107[0]) = v87;
        v32 = v87 >= v86 && v87 <= v86 + 99;
      }
      else
      {
        v32 = 0;
      }
      if ( ((_BYTE)v2[192] & 8) != 0 )
        sub_5226C(&v111, 3, 4, 5, 6, -1);
      goto LABEL_52;
  }
}
