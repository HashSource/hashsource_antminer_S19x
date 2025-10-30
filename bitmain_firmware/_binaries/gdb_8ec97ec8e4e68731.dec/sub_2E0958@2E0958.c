int __fastcall sub_2E0958(
        int a1,
        int a2,
        const char *a3,
        int a4,
        char ***a5,
        unsigned int *a6,
        int *a7,
        char **a8,
        _BOOL4 *a9,
        _DWORD *a10,
        _DWORD *a11,
        _DWORD *a12,
        _DWORD *a13,
        _DWORD *a14,
        const char **a15)
{
  int v16; // r8
  const char *v18; // r9
  char **v19; // lr
  int v20; // r5
  char v21; // r9
  char *v22; // r0
  const char *v23; // r3
  int v24; // r9
  int v25; // r4
  const char *v26; // r0
  bool v27; // zf
  _DWORD *v28; // r3
  char *v29; // r9
  _BOOL4 v30; // r11
  int v31; // r3
  unsigned int v32; // r10
  int v33; // r2
  unsigned int v34; // r7
  int v35; // r7
  unsigned int v36; // r2
  unsigned int v37; // r3
  bool v38; // cc
  int v39; // r10
  int v40; // r2
  int v41; // r3
  bool v42; // zf
  char *v43; // r3
  char **v44; // r2
  int v45; // r1
  int v46; // r1
  int result; // r0
  unsigned int v48; // r1
  int v49; // r2
  bool v50; // zf
  char *v51; // r0
  _BOOL4 v52; // r2
  char v53; // r3
  char v54; // r3
  _BOOL4 v55; // r3
  int v56; // r2
  int v57; // r3
  _BOOL4 v58; // r2
  int v59; // r3
  int (__fastcall *v60)(int, int, char ***, int, int, char *, char **); // r11
  unsigned int v61; // r3
  unsigned int v62; // r2
  int (__fastcall *v63)(char **); // r3
  _BOOL4 v64; // r3
  _BOOL4 v65; // r2
  int v66; // r12
  char v67; // r2
  unsigned int v68; // r2
  int (__fastcall *v69)(char **); // r3
  int v70; // r3
  int v71; // r3
  int v72; // r3
  char v73; // r2
  int v74; // r3
  int v75; // r2
  int v76; // r3
  void (__fastcall *v77)(int, int, int); // r3
  int v78; // r2
  unsigned int v79; // r3
  int v80; // r3
  int v81; // r2
  int v82; // r2
  int v83; // r3
  void (__fastcall *v84)(int, int, int); // r3
  char v85; // r3
  char v86; // r3
  char **v88; // [sp+14h] [bp-60h]
  int v89; // [sp+18h] [bp-5Ch]
  int v90; // [sp+1Ch] [bp-58h]
  int v91; // [sp+1Ch] [bp-58h]
  int v92; // [sp+30h] [bp-44h]
  const char *v93; // [sp+30h] [bp-44h]
  _BOOL4 v94; // [sp+34h] [bp-40h]
  const char *v95; // [sp+44h] [bp-30h]
  int v96; // [sp+48h] [bp-2Ch]
  char **v97; // [sp+4Ch] [bp-28h]
  _BOOL4 v98; // [sp+50h] [bp-24h]
  int v99; // [sp+54h] [bp-20h]
  int v100; // [sp+58h] [bp-1Ch]
  int v101; // [sp+5Ch] [bp-18h]
  int v102; // [sp+60h] [bp-14h]
  int v103; // [sp+60h] [bp-14h]
  int v104; // [sp+64h] [bp-10h]
  int v105; // [sp+68h] [bp-Ch]

  v16 = a1;
  v18 = *a15;
  v19 = *a5;
  *a11 = 0;
  *a12 = 0;
  v88 = v19;
  v95 = v18;
  v90 = *(unsigned __int8 *)(a4 + 12) >> 4;
  if ( v19 == &off_4708A8 )
    v20 = sub_2FC960(a1, a2, a3, 1, 0, 0);
  else
    v20 = sub_2FC920(*(_DWORD *)(a2 + 28), a3, 1);
  if ( !v20 )
    return 0;
  *a7 = v20;
  v21 = *(_BYTE *)(v20 + 52);
  v89 = *(_DWORD *)(*(_DWORD *)(v16 + 4) + 444);
  if ( (v21 & 6) == 2 )
    goto LABEL_12;
  v22 = strrchr(a3, 64);
  v23 = v22;
  if ( !v22 )
  {
    *(_BYTE *)(v20 + 52) = v21 & 0xF9 | 2;
    goto LABEL_13;
  }
  if ( (v21 & 6) != 0 )
    goto LABEL_10;
  if ( a3 < v22 && *(v22 - 1) != 64 )
  {
    *(_BYTE *)(v20 + 52) = v21 | 6;
LABEL_10:
    if ( v22[1] )
    {
      v23 = v22 + 1;
      goto LABEL_13;
    }
    goto LABEL_12;
  }
  *(_BYTE *)(v20 + 52) = *(_BYTE *)(v20 + 52) & 0xF9 | 4;
  if ( !v22[1] )
  {
LABEL_12:
    v23 = 0;
    goto LABEL_13;
  }
  v23 = v22 + 1;
LABEL_13:
  v24 = *(unsigned __int8 *)(v20 + 12);
  v25 = v20;
  v26 = *a15;
  if ( (unsigned int)(v24 - 6) > 1 )
  {
    if ( !v26 )
LABEL_20:
      *a15 = (const char *)1;
  }
  else
  {
    do
    {
      v25 = *(_DWORD *)(v25 + 20);
      v24 = *(unsigned __int8 *)(v25 + 12);
    }
    while ( (unsigned int)(v24 - 6) <= 1 );
    if ( !v26 )
    {
      v27 = v24 == 0;
      if ( *(_BYTE *)(v25 + 12) )
        v27 = v20 == v25;
      if ( v27 )
        goto LABEL_20;
      v48 = *(unsigned __int8 *)(v25 + 52);
      v49 = *(_BYTE *)(v20 + 52) & 6;
      v50 = v49 == 6;
      if ( v49 != 6 )
        v50 = (v48 & 6) == 6;
      if ( !v50 )
        goto LABEL_20;
      if ( ((v48 >> 1) & 3) > 1 )
      {
        v93 = v23;
        v51 = strrchr(*(const char **)(v25 + 4), 64);
        v23 = v93;
        v26 = v51 + 1;
      }
      if ( v23 == v26 )
      {
        v52 = 1;
      }
      else
      {
        v52 = (_BOOL4)v23;
        if ( v23 )
          v52 = 1;
        if ( !v26 )
          v52 = 0;
        if ( v52 )
          v52 = strcmp(v26, v23) == 0;
      }
      *a15 = (const char *)v52;
    }
  }
  switch ( v24 )
  {
    case 1:
    case 2:
      v29 = *(char **)(v25 + 20);
      v97 = 0;
      break;
    case 3:
    case 4:
      v97 = *(char ***)(v25 + 20);
      v29 = v97[37];
      break;
    case 5:
      v28 = *(_DWORD **)(v25 + 20);
      v97 = (char **)v28[1];
      v29 = v97[37];
      if ( a10 )
        *a10 = *v28;
      break;
    default:
      v29 = 0;
      v97 = 0;
      break;
  }
  if ( !*a8 )
    *a8 = v29;
  v30 = ((*(_BYTE *)(v25 + 12) - 2) & 0xFD) == 0;
  v94 = v30;
  if ( a9 )
    *a9 = v30;
  sub_2DB778(a2, v25, a4);
  v31 = (*(_DWORD *)(v16 + 40) >> 5) & 0xFFFFF;
  v92 = (*(_DWORD *)(v16 + 40) >> 5) & 0x40;
  if ( v92 )
  {
    if ( v88 == &off_4708A8 )
    {
      if ( v90 != 2 )
      {
        *(_BYTE *)(v25 + 53) |= 1u;
        *(_BYTE *)(v20 + 53) |= 1u;
      }
    }
    else
    {
      if ( *a15 )
        *(_BYTE *)(v25 + 52) |= 0x80u;
      *(_BYTE *)(v20 + 52) |= 0x80u;
    }
  }
  v32 = *(unsigned __int8 *)(v25 + 12);
  if ( !*(_BYTE *)(v25 + 12) )
  {
    *(_BYTE *)(v25 + 52) = *(_BYTE *)(v25 + 52) & 0xFE | v32 & 1;
    return 1;
  }
  v33 = v31 & 0x40;
  v34 = __clz(v90 - 2);
  if ( (v31 & 0x40) != 0 )
    v33 = 1;
  v35 = v34 >> 5;
  v99 = v33;
  if ( (char *)v16 == v29 )
  {
    if ( v35 | v30 && (!v92 || (*(_BYTE *)(v25 + 51) & 2) == 0) )
      return 1;
    v100 = (*((_DWORD *)v29 + 10) >> 11) & 1;
  }
  else if ( v29 )
  {
    v36 = (*((_DWORD *)v29 + 10) >> 5) & 0xFFFFF;
    v100 = (v36 >> 6) & 1;
    if ( ((v99 ^ v100) & ((v31 ^ v36) >> 16)) != 0 )
    {
      *(_BYTE *)(v25 + 13) |= 2u;
      *(_BYTE *)(v20 + 13) |= 2u;
    }
  }
  else if ( v97 )
  {
    v100 = (*((_DWORD *)v97[38] + 3) >> 15) & 1;
  }
  else
  {
    v100 = 0;
  }
  if ( v88 == &off_4708A8 )
    v37 = 0;
  else
    v37 = (unsigned int)v88[5];
  if ( v88 != &off_4708A8 )
    v37 = ((v37 ^ 0x1000) >> 12) & 1;
  v96 = v37;
  v38 = v32 > 5;
  if ( v32 != 5 )
    v38 = v32 - 1 > 1;
  v39 = v38;
  v102 = v39;
  v98 = (*(_BYTE *)(a4 + 12) & 0xF) != 0 && (*(int (__fastcall **)(int))(v89 + 360))(*(_BYTE *)(a4 + 12) & 0xF) != 0;
  if ( *(_BYTE *)(v25 + 48) )
  {
    if ( (*(int (__fastcall **)(_DWORD))(v89 + 360))(*(unsigned __int8 *)(v25 + 48)) )
    {
      if ( v98 )
      {
        v101 = 1;
        goto LABEL_58;
      }
      v101 = 1;
    }
    else
    {
      v101 = 0;
    }
    v64 = *(unsigned __int8 *)(v25 + 48) != (*(_BYTE *)(a4 + 12) & 0xF);
    if ( !*(_BYTE *)(v25 + 48) )
      v64 = 0;
    if ( (*(_BYTE *)(a4 + 12) & 0xF) == 0 )
      v64 = 0;
    if ( v64 && (v96 || ((unsigned int)v88[5] & 0x1000) != 0) && (v39 || *(_BYTE *)(v25 + 12) == 5) )
    {
      if ( (v99 & (v100 ^ 1)) != 0 )
        goto LABEL_137;
      v65 = v20 != v25;
      if ( v92 )
        v65 = 0;
      if ( (v65 & v100) != 0 )
      {
        (*(void (__fastcall **)(int, int, int))(v89 + 224))(a2, v20, 1);
        v66 = *(_DWORD *)(v20 + 16);
        v67 = *(_BYTE *)(v20 + 51) & 0xF3;
        *(_BYTE *)(v20 + 52) &= 0x77u;
        *(_BYTE *)(v20 + 51) = v67;
        if ( v66 || *(_DWORD *)(*(_DWORD *)(a2 + 28) + 32) == v20 )
        {
          *(_DWORD *)(v20 + 20) = v16;
          *(_BYTE *)(v20 + 12) = 1;
          return 1;
        }
        else
        {
          *(_BYTE *)(v20 + 12) = 0;
          *(_DWORD *)(v20 + 20) = 0;
          return 1;
        }
      }
    }
  }
  else
  {
    v101 = *(unsigned __int8 *)(v25 + 48);
  }
LABEL_58:
  if ( v29 )
  {
    if ( (*((_DWORD *)v29 + 10) & 0x200000) == 0 && (*(_DWORD *)(v16 + 40) & 0x200000) == 0 )
    {
      v40 = *(unsigned __int8 *)(v25 + 48);
      v41 = *(_BYTE *)(a4 + 12) & 0xF;
      if ( v40 != v41 )
      {
        v42 = v41 == 6;
        if ( v41 != 6 )
          v42 = v40 == 6;
        if ( v42 )
        {
          if ( v40 == 6 )
          {
            v43 = v29;
            v44 = v97;
            v29 = (char *)v16;
            v16 = (int)v43;
            v97 = v88;
            v45 = v96;
            v88 = v44;
            v96 = v39;
            v102 = v45;
          }
          v46 = *(_DWORD *)(v25 + 4);
          if ( (v102 & v96) != 0 )
          {
            sub_2A6A5C(
              "%s: TLS definition in %B section %A mismatches non-TLS definition in %B section %A",
              v46,
              v16,
              v88,
              v29,
              v97);
          }
          else if ( v102 | v96 )
          {
            if ( v96 )
              sub_2A6A5C("%s: TLS definition in %B section %A mismatches non-TLS reference in %B", v46, v16, v88, v29);
            else
              sub_2A6A5C("%s: TLS reference in %B mismatches non-TLS definition in %B section %A", v46, v16, v29, v97);
          }
          else
          {
            sub_2A6A5C("%s: TLS reference in %B mismatches non-TLS reference in %B", v46, v16, v29);
          }
          ((void (__fastcall *)(int))loc_2A6C48)(17);
          return 0;
        }
      }
    }
  }
  if ( v92 )
  {
    v56 = *(_BYTE *)(v25 + 49) & 3;
    v57 = v56;
    if ( (*(_BYTE *)(v25 + 49) & 3) != 0 )
      v56 = v88 != &off_4708A8;
    if ( v56 )
    {
      *a11 = 1;
      *(_BYTE *)(v25 + 51) |= 4u;
      *(_BYTE *)(v20 + 51) |= 4u;
      if ( v57 == 3 )
        return sub_2E0858(a2, v25);
      return 1;
    }
    v55 = v90 != 2;
    if ( v39 )
      v58 = 0;
    else
      v58 = v30;
    v94 = v58;
    v91 = v96;
LABEL_113:
    if ( (v98 & v101) != 0 )
      *a13 = 1;
    if ( !(v94 | v35) )
    {
      if ( !v96 )
      {
        if ( *a13 || *(_BYTE *)(v25 + 12) == 1 )
          goto LABEL_121;
        goto LABEL_122;
      }
      if ( *(_BYTE *)(v25 + 12) != 1 )
      {
        if ( *a13 )
          goto LABEL_121;
LABEL_122:
        if ( (v99 & v91 & v55) != 0 && ((unsigned int)v88[5] & 3) == 1 )
        {
          if ( *(_DWORD *)(a4 + 4) )
            v74 = !v98;
          else
            v74 = 0;
          v103 = v74;
        }
        else
        {
          v103 = 0;
        }
        v104 = v39 & v100;
        if ( (v39 & v100) == 0 )
        {
          v105 = 0;
          goto LABEL_128;
        }
        if ( *(_BYTE *)(v25 + 12) == 3 )
        {
          v59 = *(_BYTE *)(v25 + 51) & 8;
          if ( (*(_BYTE *)(v25 + 51) & 8) == 0 )
            goto LABEL_127;
          if ( (*(_DWORD *)(*(_DWORD *)(v25 + 20) + 20) & 3) == 1 )
          {
            if ( *(_DWORD *)(v25 + 44) )
              v83 = v101 ^ 1;
            else
              v83 = 0;
            v105 = v83;
            goto LABEL_128;
          }
        }
        v59 = 0;
LABEL_127:
        v105 = v59;
LABEL_128:
        v60 = *(int (__fastcall **)(int, int, char ***, int, int, char *, char **))(v89 + 352);
        if ( !v60 )
          goto LABEL_131;
        if ( v60(v25, a4, a5, v96, v39, v29, v97) )
        {
          v88 = *a5;
LABEL_131:
          if ( (v39 & (v100 ^ 1)) == 0
            || (v91 & !v94) == 0
            || (unsigned int)v95 | v99 | v35
            || (*(_BYTE *)(v25 + 51) & 2) == 0
            || v29 && (*((_DWORD *)v29 + 10) & 0x200000) != 0 && (*(_DWORD *)(v16 + 40) & 0x200000) == 0 )
          {
            if ( (v103 & v105) != 0 && *(_DWORD *)(a4 + 4) != *(_DWORD *)(v25 + 44) )
            {
              (*(void (__fastcall **)(int))(*(_DWORD *)(a2 + 24) + 8))(a2);
              v61 = *(_DWORD *)(a4 + 4);
              if ( v61 > *(_DWORD *)(v25 + 44) )
                *(_DWORD *)(v25 + 44) = v61;
              *a14 = 1;
            }
            if ( (v99 & v91) != 0 )
            {
              if ( v39 )
                goto LABEL_207;
              if ( *(_BYTE *)(v25 + 12) == 5 )
              {
                if ( !(v98 | v35) )
                {
                  if ( v103 )
                  {
                    v62 = *(_DWORD *)(a4 + 4);
                    v63 = *(int (__fastcall **)(char **))(v89 + 348);
                    *a12 = 1;
                    *a6 = v62;
                    *a5 = (char **)v63(v97);
                    *a14 = 1;
                  }
                  return 1;
                }
LABEL_207:
                *a12 = 1;
                *a5 = &off_4708A8;
                v75 = *(unsigned __int8 *)(v25 + 12);
                *a14 = 1;
                if ( v75 == 5 )
                  *a13 = 1;
              }
              return 1;
            }
            if ( v103 && *(_BYTE *)(v25 + 12) == 5 )
            {
              v68 = *(_DWORD *)(a4 + 4);
              *a12 = 1;
              v69 = *(int (__fastcall **)(char **))(v89 + 348);
              *a6 = v68;
              v88 = (char **)v69(v97);
              *a5 = v88;
              *a14 = 1;
              if ( v92 )
                return 1;
              v70 = (unsigned int)v88[5] & 0x1000;
              if ( !v70 )
                return 1;
              if ( !(v94 | v101) )
                goto LABEL_231;
            }
            else
            {
              if ( (v39 & v91) != 0 )
              {
                if ( !v35 )
                {
                  if ( v92 )
                    return 1;
                  goto LABEL_188;
                }
                if ( !v29 || (*((_DWORD *)v29 + 10) & 0x200000) == 0 || (*(_DWORD *)(v16 + 40) & 0x200000) != 0 )
                {
                  v35 = 0;
                  *a11 = 1;
                }
                sub_2DC5D8(*(_DWORD *)(v16 + 4), v25, a4, v88 + 5, v35, v99);
                if ( *(_DWORD *)(v25 + 32) != -1 && (*(_BYTE *)(v25 + 49) & 3u) - 1 <= 1 )
                  (*(void (__fastcall **)(int, int, int))(v89 + 224))(a2, v25, 1);
              }
              else
              {
                v35 = v96;
              }
              if ( v92 )
                return 1;
              if ( !v35 )
              {
                v70 = (unsigned int)v88[5] & 0x1000;
                if ( !v70 )
                  return 1;
                if ( !(v94 | v101) )
                  goto LABEL_231;
                if ( !v104 )
                  goto LABEL_230;
                goto LABEL_189;
              }
            }
LABEL_188:
            if ( !v104 )
            {
LABEL_230:
              v70 = (unsigned int)v88[5] & 0x1000;
LABEL_231:
              v78 = v105;
              if ( !v70 )
                v78 = 0;
              if ( !v78 )
                return 1;
              (*(void (__fastcall **)(int))(*(_DWORD *)(a2 + 24) + 8))(a2);
              v79 = *(_DWORD *)(v25 + 44);
              if ( v79 > *a6 )
                *a6 = v79;
              if ( !a10 )
                sub_2A6BBC("elflink.c", 1768);
              v80 = *(_DWORD *)(v25 + 20);
              result = 1;
              v81 = *(_DWORD *)(v80 + 64);
              v72 = *(_DWORD *)(v80 + 148);
              *a10 = v81;
              *(_BYTE *)(v25 + 12) = 1;
              v82 = *(unsigned __int8 *)(v20 + 12);
              *(_DWORD *)(v25 + 20) = v72;
              *a14 = 1;
              *a13 = 1;
              if ( v82 != 6 )
              {
                *(_DWORD *)(v25 + 64) = 0;
                return result;
              }
LABEL_215:
              *(_DWORD *)(v20 + 20) = v72;
              v77 = *(void (__fastcall **)(int, int, int))(v89 + 220);
              *(_BYTE *)(v20 + 12) = 1;
              *(_DWORD *)(v25 + 20) = v20;
              *(_BYTE *)(v25 + 12) = 6;
              v77(a2, v20, v25);
              if ( (*(_BYTE *)(v25 + 51) & 8) != 0 )
              {
                *(_BYTE *)(v25 + 51) &= ~8u;
                *(_BYTE *)(v20 + 51) |= 4u;
                return 1;
              }
              return 1;
            }
LABEL_189:
            if ( (*(_BYTE *)(v25 + 51) & 8) != 0 )
            {
              v71 = *(_DWORD *)(v25 + 20);
              *(_BYTE *)(v25 + 12) = 1;
              v72 = *(_DWORD *)(v71 + 148);
              *(_DWORD *)(v25 + 20) = v72;
              *a14 = 1;
              if ( ((unsigned int)v88[5] & 0x1000) != 0 )
              {
                if ( v101 )
                {
                  v73 = *(_BYTE *)(v25 + 51);
                  *(_BYTE *)(v25 + 48) = 0;
                  *(_BYTE *)(v25 + 51) = v73 & 0xF7;
                }
                *a13 = 1;
              }
              if ( *(_BYTE *)(v20 + 12) != 6 )
              {
                *(_DWORD *)(v25 + 64) = 0;
                return 1;
              }
              goto LABEL_215;
            }
            goto LABEL_230;
          }
          (*(void (__fastcall **)(int))(*(_DWORD *)(a2 + 24) + 4))(a2);
LABEL_137:
          *a11 = 1;
          return 1;
        }
        return 0;
      }
    }
    *a13 = 1;
LABEL_121:
    *a14 = 1;
    goto LABEL_122;
  }
  if ( (*(_BYTE *)(a4 + 13) & 3) == 0 || (*(_BYTE *)(v25 + 51) & 8) == 0 )
  {
    if ( v96 )
    {
      if ( v100 )
      {
        v55 = 1;
        v35 = 0;
        v91 = 1;
      }
      else if ( (*(_BYTE *)(v25 + 13) & 8) != 0 )
      {
        v55 = 1;
        v35 = 0;
        v91 = 1;
      }
      else
      {
        v76 = v90;
        v91 = 1;
        v55 = v76 != 2;
      }
    }
    else
    {
      v55 = v90 != 2;
      v91 = 0;
    }
    goto LABEL_113;
  }
  if ( *(_BYTE *)(v20 + 12) == 6 )
  {
    if ( (*(_BYTE *)(v25 + 51) & 1) != 0 )
    {
      v84 = *(void (__fastcall **)(int, int, int))(v89 + 220);
      *(_BYTE *)(v20 + 12) = *(_BYTE *)(v25 + 12);
      *(_BYTE *)(v25 + 12) = 6;
      v84(a2, v20, v25);
      *(_DWORD *)(v25 + 20) = v20;
      if ( (*(_BYTE *)(a4 + 13) & 3) == 3 )
      {
        *(_BYTE *)(v25 + 51) |= 4u;
      }
      else
      {
        (*(void (__fastcall **)(int, int, int))(v89 + 224))(a2, v25, 1);
        v85 = *(_BYTE *)(v25 + 51) & 0xFB;
        *(_BYTE *)(v25 + 52) &= ~8u;
        *(_BYTE *)(v25 + 51) = v85;
      }
      v86 = *(_BYTE *)(v25 + 51);
      *(_DWORD *)(v25 + 44) = 0;
      *(_BYTE *)(v25 + 48) = 0;
      *(_BYTE *)(v25 + 51) = v86 & 0xF7;
      v25 = v20;
    }
    else
    {
      v25 = v20;
    }
  }
  if ( *(_DWORD *)(v25 + 16) || *(_DWORD *)(*(_DWORD *)(a2 + 28) + 32) == v25 )
  {
    *(_DWORD *)(v25 + 20) = v16;
    *(_BYTE *)(v25 + 12) = 1;
  }
  else
  {
    *(_BYTE *)(v25 + 12) = 0;
    *(_DWORD *)(v25 + 20) = 0;
  }
  if ( (*(_BYTE *)(a4 + 13) & 3) == 3 )
  {
    *(_BYTE *)(v25 + 51) |= 4u;
  }
  else
  {
    (*(void (__fastcall **)(int, int, int))(v89 + 224))(a2, v25, 1);
    v53 = *(_BYTE *)(v25 + 51) & 0xFB;
    *(_BYTE *)(v25 + 52) &= ~8u;
    *(_BYTE *)(v25 + 51) = v53;
  }
  v54 = *(_BYTE *)(v25 + 51);
  *(_DWORD *)(v25 + 44) = 0;
  *(_BYTE *)(v25 + 48) = 0;
  *(_BYTE *)(v25 + 51) = v54 & 0xF7;
  return 1;
}
