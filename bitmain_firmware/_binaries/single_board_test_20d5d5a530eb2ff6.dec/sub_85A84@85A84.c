int __fastcall sub_85A84(unsigned __int8 *a1, int **a2, int *a3, _DWORD **a4, unsigned int *a5)
{
  unsigned __int8 *i; // r6
  int v6; // r8
  int v7; // r0
  unsigned __int8 *v8; // r5
  int v9; // r4
  bool v10; // zf
  int v11; // r11
  bool v13; // zf
  const char *v14; // r9
  int v15; // r11
  unsigned int v16; // r2
  unsigned int v17; // t1
  bool v18; // cc
  size_t v19; // r5
  bool v20; // cc
  _BOOL4 v21; // r0
  _DWORD **v22; // r7
  _DWORD *v23; // r4
  size_t v24; // r10
  const char *v25; // r5
  _DWORD *v26; // t1
  bool v27; // zf
  char v28; // r3
  int v29; // r3
  int v30; // t1
  bool v31; // zf
  int v32; // r3
  int v33; // r3
  int v34; // r3
  int v35; // r3
  int v36; // r3
  int v37; // r2
  int v38; // r1
  int v39; // r5
  int v40; // r4
  int v41; // r12
  int *v42; // r11
  int *v43; // r10
  _DWORD *v44; // lr
  int *v45; // r7
  int *v46; // r3
  int v47; // lr
  bool v48; // zf
  int *v49; // r3
  int v50; // r2
  int v51; // r1
  int *v52; // r0
  int v53; // r4
  int v54; // r3
  bool v55; // zf
  unsigned int v56; // r3
  bool v57; // zf
  char v58; // r3
  int v59; // r3
  int v60; // t1
  bool v61; // zf
  int v62; // r2
  int v63; // r3
  bool v64; // zf
  int v65; // r3
  int v66; // r1
  int v70; // [sp+20h] [bp-2Ch]
  int v71; // [sp+24h] [bp-28h]
  int v72; // [sp+28h] [bp-24h]
  int v73; // [sp+2Ch] [bp-20h]
  int v74; // [sp+30h] [bp-1Ch]
  int v75; // [sp+34h] [bp-18h]
  int v76; // [sp+38h] [bp-14h]

  i = a1;
  v6 = 1;
  v7 = *a1;
LABEL_2:
  if ( v7 )
  {
    while ( 1 )
    {
      switch ( v7 )
      {
        case '-':
          v8 = i + 1;
          v9 = 3;
          goto LABEL_22;
        case '+':
          v8 = i + 1;
          v9 = 4;
          goto LABEL_22;
        case '!':
          v8 = i + 1;
          v9 = 2;
          goto LABEL_22;
        case '@':
          v8 = i + 1;
          v9 = 5;
          goto LABEL_22;
      }
      v10 = v7 == 32;
      if ( v7 != 32 )
        v10 = v7 == 58;
      if ( !v10 )
      {
        v13 = v7 == 44;
        if ( v7 != 44 )
          v13 = v7 == 59;
        if ( !v13 )
          break;
      }
      v7 = *++i;
      if ( !v7 )
        return v6;
    }
    v8 = i;
    v9 = 1;
LABEL_22:
    v14 = (const char *)v8;
    v15 = v9;
    v76 = 0;
    v70 = 0;
    v74 = 0;
    v73 = 0;
    v72 = 0;
    v75 = 0;
    while ( 1 )
    {
      v16 = *(unsigned __int8 *)v14;
      for ( i = (unsigned __int8 *)v14; ; ++i )
      {
        v18 = v16 - 48 > 9;
        if ( v16 - 48 > 9 )
          v18 = (v16 & 0xFFFFFFDF) - 65 > 0x19;
        v19 = i - (unsigned __int8 *)v14;
        if ( v18 )
        {
          v20 = v16 > 0x3D;
          if ( v16 != 61 )
            v20 = v16 - 45 > 1;
          v21 = !v20;
          if ( v20 )
            break;
        }
        v17 = i[1];
        v16 = v17;
      }
      if ( !v19 )
      {
        v11 = 0;
        sub_D0048(20, 230, 280, "ssl/ssl_ciph.c", 1028);
        return v11;
      }
      if ( v15 == 5 )
      {
        if ( i - (unsigned __int8 *)v14 == 8 )
        {
          if ( !strncmp(v14, "STRENGTH", 8u) )
          {
            if ( sub_85978(a2, a3) )
              goto LABEL_153;
            goto LABEL_174;
          }
        }
        else if ( i - (unsigned __int8 *)v14 == 10 && !strncmp(v14, "SECLEVEL=", 9u) )
        {
          v56 = *((unsigned __int8 *)v14 + 9) - 48;
          if ( v56 <= 5 )
          {
            *a5 = v56;
LABEL_153:
            v7 = *i;
            if ( !*i )
              return v6;
            v57 = v7 == 44;
            if ( v7 != 44 )
              v57 = v7 == 32;
            v58 = !v57;
            if ( (unsigned int)(v7 - 58) > 1 )
              v59 = v58 & 1;
            else
              v59 = 0;
            while ( v59 )
            {
              v60 = *++i;
              v7 = v60;
              v61 = v60 == 32;
              if ( v60 != 32 )
                v61 = v7 == 44;
              LOBYTE(v59) = !v61;
              if ( (unsigned int)(v7 - 58) <= 1 )
                v59 = 0;
              if ( !v7 )
                return v6;
            }
            goto LABEL_2;
          }
          v62 = 1185;
LABEL_173:
          sub_D0048(20, 230, 280, "ssl/ssl_ciph.c", v62);
LABEL_174:
          v6 = 0;
          goto LABEL_153;
        }
        v62 = 1191;
        goto LABEL_173;
      }
      v22 = a4;
      if ( v16 == 43 )
      {
        ++i;
        v71 = 1;
      }
      v23 = *a4;
      if ( v16 != 43 )
        v71 = v21;
      if ( !v23 )
      {
LABEL_47:
        v7 = *i;
        if ( !*i )
          return v6;
        v27 = v7 == 32;
        if ( v7 != 32 )
          v27 = v7 == 44;
        v28 = !v27;
        if ( (unsigned int)(v7 - 58) > 1 )
          v29 = v28 & 1;
        else
          v29 = 0;
        while ( v29 )
        {
          v30 = *++i;
          v7 = v30;
          v31 = v30 == 44;
          if ( v30 != 44 )
            v31 = v7 == 32;
          LOBYTE(v29) = !v31;
          if ( (unsigned int)(v7 - 58) <= 1 )
            v29 = 0;
          if ( !v7 )
            return v6;
        }
        goto LABEL_2;
      }
      v24 = v19;
      while ( 1 )
      {
        v25 = (const char *)v23[1];
        if ( !strncmp(v14, v25, v24) && !v25[v24] )
          break;
        v26 = v22[1];
        ++v22;
        v23 = v26;
        if ( !v26 )
          goto LABEL_47;
      }
      v32 = v23[4];
      if ( v32 )
      {
        if ( v75 )
        {
          v75 &= v32;
          if ( !v75 )
            goto LABEL_47;
        }
        else
        {
          v75 = v23[4];
        }
      }
      v33 = v23[5];
      if ( v33 )
      {
        if ( v72 )
        {
          v72 &= v33;
          if ( !v72 )
            goto LABEL_47;
        }
        else
        {
          v72 = v23[5];
        }
      }
      v34 = v23[6];
      if ( v34 )
      {
        if ( v73 )
        {
          v73 &= v34;
          if ( !v73 )
            goto LABEL_47;
        }
        else
        {
          v73 = v23[6];
        }
      }
      v35 = v23[7];
      if ( v35 )
      {
        if ( v74 )
        {
          v74 &= v35;
          if ( !v74 )
            goto LABEL_47;
        }
        else
        {
          v74 = v23[7];
        }
      }
      v36 = v23[12];
      v37 = v36 & 0x1F;
      if ( (v36 & 0x1F) != 0 )
      {
        if ( !(v70 << 27) )
        {
          v38 = v36 & 0x20;
          if ( (v36 & 0x20) == 0 )
          {
            v70 = v36 & 0x1F;
            goto LABEL_84;
          }
          goto LABEL_144;
        }
        v70 &= v36 | 0xFFFFFFE0;
        if ( !(v70 << 27) )
          goto LABEL_47;
      }
      v38 = v36 & 0x20;
      if ( (v36 & 0x20) == 0 )
        goto LABEL_84;
      if ( (v70 & 0x20) == 0 )
      {
        v37 = v70;
LABEL_144:
        v70 = v38 | v37;
        goto LABEL_84;
      }
      v70 &= v36 | 0xFFFFFFDF;
      if ( (v70 & 0x20) == 0 )
        goto LABEL_47;
LABEL_84:
      if ( *v23 )
      {
        v39 = v23[3];
      }
      else
      {
        v54 = v23[8];
        if ( v54 )
        {
          v55 = v54 == v76;
          if ( v54 != v76 )
            v55 = v76 == 0;
          v39 = !v55;
          if ( !v55 )
            goto LABEL_47;
          v76 = v23[8];
        }
        else
        {
          v39 = 0;
        }
      }
      if ( !v71 )
      {
        v40 = v15;
        if ( v15 == 3 )
        {
          v41 = 1;
          v42 = *a2;
          v43 = *a2;
          v44 = (_DWORD *)*a3;
          v45 = (int *)*a3;
        }
        else
        {
          v41 = 0;
          v45 = *a2;
          v43 = *a2;
          v42 = (int *)*a3;
          v44 = (_DWORD *)*a3;
        }
        v46 = 0;
        v71 = (int)v44;
        v47 = v40;
        while ( 1 )
        {
          v48 = v46 == v42;
          if ( v46 != v42 )
            v48 = v45 == 0;
          if ( v48 )
            break;
          v49 = (int *)v45[3];
          v50 = v45[4];
          v51 = *v45;
          if ( v41 )
            v52 = (int *)v45[4];
          else
            v52 = (int *)v45[3];
          if ( (!v39 || v39 == *(_DWORD *)(v51 + 12))
            && (!v75 || (v75 & *(_DWORD *)(v51 + 16)) != 0)
            && (!v72 || (v72 & *(_DWORD *)(v51 + 20)) != 0)
            && (!v73 || (v73 & *(_DWORD *)(v51 + 24)) != 0)
            && (!v74 || (v74 & *(_DWORD *)(v51 + 28)) != 0)
            && (!v76 || v76 == *(_DWORD *)(v51 + 32))
            && ((v70 & 0x1F) == 0 || (*(_BYTE *)(v51 + 48) & 0x1F & (unsigned __int8)v70) != 0) )
          {
            if ( (v70 & 0x20) == 0 || (v51 = *(_DWORD *)(v51 + 48) & 0x20, (v51 & v70) != 0) )
            {
              switch ( v47 )
              {
                case 1:
                  if ( !v45[1] )
                  {
                    if ( v45 != (int *)v71 )
                    {
                      if ( v45 == v43 )
                        v43 = (int *)v45[3];
                      if ( v50 )
                      {
                        *(_DWORD *)(v50 + 12) = v49;
                        v49 = (int *)v45[3];
                      }
                      if ( v49 )
                        v49[4] = v50;
                      v63 = v71;
                      v71 = (int)v45;
                      *(_DWORD *)(v63 + 12) = v45;
                      v45[4] = v63;
                      v45[3] = 0;
                    }
                    v45[1] = 1;
                  }
                  break;
                case 4:
                  v64 = v45 == (int *)v71;
                  if ( v45 != (int *)v71 )
                    v64 = v45[1] == 0;
                  if ( !v64 )
                  {
                    if ( v45 == v43 )
                      v43 = (int *)v45[3];
                    if ( v50 )
                    {
                      *(_DWORD *)(v50 + 12) = v49;
                      v49 = (int *)v45[3];
                    }
                    if ( v49 )
                      v49[4] = v50;
                    v65 = v71;
                    v71 = (int)v45;
                    *(_DWORD *)(v65 + 12) = v45;
                    v45[4] = v65;
                    v45[3] = 0;
                  }
                  break;
                case 3:
                  if ( v45[1] )
                  {
                    if ( v45 != v43 )
                    {
                      v66 = v71;
                      if ( v45 == (int *)v71 )
                        v66 = v45[4];
                      v71 = v66;
                      if ( v49 )
                      {
                        v49[4] = v50;
                        v50 = v45[4];
                      }
                      if ( v50 )
                        *(_DWORD *)(v50 + 12) = v49;
                      v43[4] = (int)v45;
                      v45[3] = (int)v43;
                      v43 = v45;
                      v45[4] = 0;
                    }
                    v45[1] = 0;
                  }
                  break;
                default:
                  v53 = v71;
                  if ( v45 == v43 )
                    v51 = v45[3];
                  else
                    *(_DWORD *)(v50 + 12) = v49;
                  if ( v45 != v43 )
                  {
                    v51 = v45[3];
                    v49 = v43;
                  }
                  if ( v45 == (int *)v71 )
                    v53 = v50;
                  v71 = v53;
                  v45[1] = 0;
                  if ( v51 )
                  {
                    *(_DWORD *)(v51 + 16) = v50;
                    v50 = v45[4];
                  }
                  if ( v50 )
                    *(_DWORD *)(v50 + 12) = v51;
                  v43 = v49;
                  v45[3] = 0;
                  v45[4] = 0;
                  break;
              }
            }
          }
          v46 = v45;
          v45 = v52;
        }
        *a2 = v43;
        *a3 = v71;
        v7 = *i;
        if ( *i )
          goto LABEL_2;
        return v6;
      }
      v14 = (const char *)i;
    }
  }
  return v6;
}
