int __fastcall sub_2D6E9C(int a1, int a2)
{
  int v3; // r6
  int v4; // r10
  unsigned int v5; // r7
  char *v6; // r4
  unsigned int v7; // r0
  int v8; // r2
  unsigned int v9; // r0
  int v10; // r3
  void *v12; // r0
  int v13; // r3
  int v14; // r6
  _DWORD *v15; // r3
  int v16; // r2
  char *v17; // r0
  int v18; // r7
  int v19; // r0
  int v20; // r2
  int v21; // r9
  char *v22; // r10
  unsigned int v23; // r2
  unsigned int v24; // r1
  unsigned int v25; // r3
  char *v26; // r0
  unsigned int v27; // r9
  int v28; // r8
  unsigned int v29; // r11
  char *v30; // r0
  bool v31; // cf
  int v32; // r8
  void *v33; // r0
  int v34; // r3
  char *v35; // r10
  int v36; // r1
  int v37; // r2
  int v38; // r3
  int v39; // r9
  unsigned int v40; // r1
  unsigned int v41; // r0
  unsigned int v42; // r2
  int v43; // r3
  int v44; // r3
  unsigned int v45; // r3
  int v46; // r6
  unsigned int v47; // r8
  int v48; // r8
  int v49; // r4
  unsigned int v50; // r2
  unsigned int v51; // r1
  char *v52; // r0
  unsigned int v53; // r2
  int v54; // r0
  int v55; // r0
  int v56; // r2
  unsigned int v57; // r3
  bool v58; // cf
  int v59; // r1
  int v60; // r0
  unsigned int v61; // r3
  unsigned int v62; // r4
  int v63; // r8
  int v64; // r7
  int v65; // r0
  int v66; // r3
  unsigned int v67; // r0
  unsigned int v68; // r2
  unsigned int v69; // r2
  int v70; // r0
  int v71; // [sp+8h] [bp-5Ch]
  char *v72; // [sp+8h] [bp-5Ch]
  char *ptr; // [sp+Ch] [bp-58h]
  int v74; // [sp+10h] [bp-54h]
  int v75; // [sp+10h] [bp-54h]
  int v76; // [sp+14h] [bp-50h]
  int v77; // [sp+14h] [bp-50h]
  int v78; // [sp+18h] [bp-4Ch]
  char *v79; // [sp+1Ch] [bp-48h]
  int v80; // [sp+1Ch] [bp-48h]
  int v81; // [sp+20h] [bp-44h]
  int v82; // [sp+20h] [bp-44h]
  unsigned int v83; // [sp+28h] [bp-3Ch]
  int v84; // [sp+2Ch] [bp-38h]
  unsigned int v85; // [sp+34h] [bp-30h]
  int v86; // [sp+38h] [bp-2Ch] BYREF
  int v87; // [sp+3Ch] [bp-28h]
  int v88; // [sp+40h] [bp-24h]
  int v89; // [sp+44h] [bp-20h]
  unsigned int v90; // [sp+48h] [bp-1Ch]

  v3 = *(_DWORD *)(a1 + 160);
  v4 = a2;
  v5 = *(_DWORD *)(v3 + 2336);
  if ( !v5 )
  {
    if ( *(_DWORD *)(v3 + 2332) )
    {
LABEL_3:
      v6 = *(char **)(v3 + 496);
      if ( !v6 )
      {
LABEL_7:
        sub_2A6A5C("%B: .gnu.version_d invalid entry", a1);
        ((void (__fastcall *)(int))loc_2A6C48)(17);
        goto LABEL_8;
      }
      v7 = *(_DWORD *)(v3 + 488);
      if ( v7 <= 0x13 )
      {
        v6 = 0;
        goto LABEL_7;
      }
      v26 = (char *)sub_2AB368(v7);
      v6 = v26;
      if ( !v26 )
      {
        v44 = *(_DWORD *)(a1 + 160);
        *(_DWORD *)(v44 + 576) = 0;
        *(_DWORD *)(v44 + 568) = 0;
        return 0;
      }
      if ( sub_2A8A04(a1, *(_QWORD *)(v3 + 480), 0)
        || (v71 = sub_2A87D8((int)v6, *(_DWORD *)(v3 + 488), a1), v71 != *(_DWORD *)(v3 + 488)) )
      {
LABEL_8:
        v8 = *(_DWORD *)(a1 + 160);
        goto LABEL_9;
      }
      v27 = *(_DWORD *)(v3 + 496);
      if ( v27 )
      {
        v27 = 0;
        v28 = (int)v6;
        v29 = 0;
        while ( 1 )
        {
          ++v29;
          sub_2CD328(a1, v28, (int)&v86);
          v30 = &v6[v71 - 20 - v28];
          if ( (v87 & 0x7FFF) == 0 )
            goto LABEL_7;
          if ( v27 < (v87 & 0x7FFFu) )
            v27 = v87 & 0x7FFF;
          v28 += v90;
          if ( v90 )
          {
            if ( v90 > (unsigned int)v30 )
              goto LABEL_7;
            if ( *(_DWORD *)(v3 + 496) > v29 )
              continue;
          }
          break;
        }
      }
      if ( v4 )
      {
        v31 = v27 >= v5;
        if ( v27 >= v5 )
          ++v27;
        else
          ++v5;
        if ( v31 )
          v5 = v27;
        else
          v27 = v5;
      }
      v32 = *(_DWORD *)(a1 + 160);
      v33 = sub_2AD188(a1, v27, 0x28u);
      v8 = *(_DWORD *)(a1 + 160);
      *(_DWORD *)(v32 + 576) = v33;
      v77 = *(_DWORD *)(v8 + 576);
      if ( v77 )
      {
        v34 = *(_DWORD *)(v3 + 496);
        *(_DWORD *)(v8 + 568) = v27;
        if ( v34 )
        {
          v84 = v4;
          v35 = &v6[v71 - 8];
          v80 = 0;
          v75 = (int)v6;
          v72 = v6;
          v85 = v27;
          v83 = v5;
          while ( 1 )
          {
            sub_2CD328(a1, v75, (int)&v86);
            if ( (v87 & 0x7FFF) == 0 )
            {
LABEL_66:
              v6 = v72;
              goto LABEL_7;
            }
            v36 = v87;
            v37 = v88;
            v38 = v89;
            v82 = 40 * (v87 & 0x7FFF);
            v39 = v77 + v82 - 40;
            *(_DWORD *)v39 = v86;
            *(_DWORD *)(v39 + 4) = v36;
            v40 = *(unsigned __int16 *)(v39 + 6);
            *(_DWORD *)(v39 + 8) = v37;
            *(_DWORD *)(v39 + 12) = v38;
            v41 = v90;
            *(_DWORD *)(v39 + 20) = a1;
            *(_DWORD *)(v39 + 16) = v41;
            if ( v40 )
            {
              v60 = sub_2AD048(a1, v40, 0x10u);
              *(_DWORD *)(v39 + 32) = v60;
              if ( !v60 )
              {
                v6 = v72;
                v8 = *(_DWORD *)(a1 + 160);
                goto LABEL_9;
              }
              v61 = *(_DWORD *)(v39 + 12);
              if ( v61 > (unsigned int)&v35[-v75] )
                goto LABEL_66;
              v40 = *(unsigned __int16 *)(v39 + 6);
              v62 = v75 + v61;
              if ( *(_WORD *)(v39 + 6) )
              {
                v63 = 0;
                v64 = v60 + 16;
                while ( 1 )
                {
                  v65 = (*(int (__fastcall **)(unsigned int))(*(_DWORD *)(a1 + 4) + 76))(v62);
                  v66 = *(_DWORD *)(a1 + 4);
                  *(_DWORD *)(v64 - 16) = v65;
                  v67 = (*(int (__fastcall **)(unsigned int))(v66 + 76))(v62 + 4);
                  v68 = *(_DWORD *)(v64 - 16);
                  *(_DWORD *)(v64 - 12) = v67;
                  if ( v68 )
                  {
                    v70 = sub_2CD85C(a1, *(_DWORD *)(v3 + 492), v68);
                    *(_DWORD *)(v64 - 8) = v70;
                    if ( !v70 )
                      goto LABEL_66;
                    v67 = *(_DWORD *)(v64 - 12);
                  }
                  else
                  {
                    *(_DWORD *)(v64 - 8) = "";
                  }
                  v69 = (unsigned int)&v35[-v62];
                  *(_DWORD *)(v64 - 4) = 0;
                  v62 += v67;
                  if ( !v67 )
                  {
                    *(_WORD *)(v39 + 6) = v63 + 1;
                    v40 = (unsigned __int16)(v63 + 1);
                    goto LABEL_101;
                  }
                  v40 = *(unsigned __int16 *)(v39 + 6);
                  if ( ++v63 >= v40 )
                    break;
                  *(_DWORD *)(v64 - 4) = v64;
                  v64 += 16;
                  if ( v67 > v69 )
                    goto LABEL_66;
                }
                if ( v67 > v69 )
                  goto LABEL_66;
              }
            }
            else
            {
              v42 = *(_DWORD *)(v39 + 12);
              *(_DWORD *)(v39 + 32) = 0;
              if ( v42 > (unsigned int)&v35[-v75] )
                goto LABEL_66;
            }
LABEL_101:
            v56 = *(_DWORD *)(v39 + 16);
            *(_DWORD *)(v39 + 24) = 0;
            if ( v40 )
              *(_DWORD *)(v39 + 24) = *(_DWORD *)(*(_DWORD *)(v39 + 32) + 8);
            *(_DWORD *)(v39 + 28) = 0;
            if ( v56 )
            {
              v75 += v56;
              v57 = -858993459 * ((v82 - 40) >> 3) + 1;
              v58 = v57 >= v85;
              if ( v57 < v85 )
                v57 = v77 + v82;
              v59 = v80;
              if ( !v58 )
                *(_DWORD *)(v39 + 28) = v57;
              ++v80;
              if ( *(_DWORD *)(v3 + 496) > (unsigned int)(v59 + 1) )
                continue;
            }
            v6 = v72;
            v5 = v83;
            v4 = v84;
            break;
          }
        }
        free(v6);
LABEL_25:
        if ( v4 )
        {
          v14 = *(_DWORD *)(*(_DWORD *)(a1 + 160) + 576) + 40 * v5 - 40;
          *(_DWORD *)v14 = 1;
          *(_WORD *)(v14 + 4) = v5;
          *(_WORD *)(v14 + 6) = 1;
          *(_DWORD *)(v14 + 20) = a1;
          v15 = (_DWORD *)sub_2E9038(a1);
          *(_DWORD *)(v14 + 24) = v15;
          if ( v15 && (*(_DWORD *)(v14 + 28) = 0, v15 = sub_2AD09C(a1, 0x10u), (*(_DWORD *)(v14 + 32) = v15) != 0) )
          {
            v15[2] = *(_DWORD *)(v14 + 24);
            return 1;
          }
          else
          {
            v16 = *(_DWORD *)(a1 + 160);
            *(_DWORD *)(v16 + 576) = v15;
            *(_DWORD *)(v16 + 568) = v15;
            return (int)v15;
          }
        }
        return 1;
      }
LABEL_9:
      *(_DWORD *)(v8 + 576) = 0;
      *(_DWORD *)(v8 + 568) = 0;
LABEL_17:
      if ( v6 )
        free(v6);
      return 0;
    }
    if ( !a2 )
      return 1;
LABEL_21:
    v5 = 3;
    goto LABEL_22;
  }
  v6 = *(char **)(v3 + 440);
  if ( !v6 )
    goto LABEL_14;
  v9 = *(_DWORD *)(v3 + 432);
  if ( (unsigned int)v6 > v9 >> 4 )
  {
    v6 = 0;
LABEL_14:
    sub_2A6A5C("%B: .gnu.version_r invalid entry", a1);
    ((void (__fastcall *)(int))loc_2A6C48)(17);
LABEL_15:
    v10 = *(_DWORD *)(a1 + 160);
LABEL_16:
    *(_DWORD *)(v10 + 580) = 0;
    *(_DWORD *)(v10 + 572) = 0;
    goto LABEL_17;
  }
  v17 = (char *)sub_2AB368(v9);
  v6 = v17;
  if ( !v17 )
  {
    v43 = *(_DWORD *)(a1 + 160);
    *(_DWORD *)(v43 + 580) = 0;
    *(_DWORD *)(v43 + 572) = 0;
    return 0;
  }
  if ( sub_2A8A04(a1, *(_QWORD *)(v3 + 424), 0)
    || sub_2A87D8((int)v6, *(_DWORD *)(v3 + 432), a1) != *(_DWORD *)(v3 + 432) )
  {
    goto LABEL_15;
  }
  v18 = *(_DWORD *)(a1 + 160);
  v19 = sub_2AD048(a1, *(_DWORD *)(v3 + 440), 0x20u);
  v20 = *(_DWORD *)(a1 + 160);
  *(_DWORD *)(v18 + 580) = v19;
  v21 = *(_DWORD *)(v20 + 580);
  v10 = v20;
  if ( !v21 )
    goto LABEL_16;
  v5 = *(_DWORD *)(v3 + 440);
  if ( !v5 )
  {
    v78 = 0;
    goto LABEL_95;
  }
  v81 = v4;
  v5 = 0;
  v22 = &v6[*(_DWORD *)(v3 + 432) - 16];
  v78 = 0;
  v76 = (int)v6;
  v74 = v3;
  ptr = v6;
  sub_2CD4E0(a1, (int)v6, v21);
  while ( 1 )
  {
    v23 = *(_DWORD *)(v21 + 4);
    *(_DWORD *)(v21 + 16) = a1;
    if ( v23 )
    {
      v55 = sub_2CD85C(a1, *(_DWORD *)(v74 + 436), v23);
      *(_DWORD *)(v21 + 20) = v55;
      if ( !v55 )
        goto LABEL_41;
    }
    else
    {
      *(_DWORD *)(v21 + 20) = "";
    }
    v24 = *(unsigned __int16 *)(v21 + 2);
    if ( !*(_WORD *)(v21 + 2) )
    {
      v25 = *(_DWORD *)(v21 + 8);
      *(_DWORD *)(v21 + 24) = v24;
      v79 = &v22[-v76];
      if ( (unsigned int)&v22[-v76] >= v25 )
        goto LABEL_70;
LABEL_41:
      v6 = ptr;
      goto LABEL_14;
    }
    v46 = sub_2AD048(a1, v24, 0x18u);
    *(_DWORD *)(v21 + 24) = v46;
    if ( !v46 )
    {
      v6 = ptr;
      v10 = *(_DWORD *)(a1 + 160);
      goto LABEL_16;
    }
    v47 = *(_DWORD *)(v21 + 8);
    v79 = &v22[-v76];
    if ( v47 > (unsigned int)&v22[-v76] )
      goto LABEL_41;
    v48 = v76 + v47;
    if ( *(_WORD *)(v21 + 2) )
    {
      v49 = 0;
      while ( 1 )
      {
        sub_2CD5D0(a1, v48, v46);
        v50 = *(_DWORD *)(v46 + 8);
        if ( v50 )
        {
          v54 = sub_2CD85C(a1, *(_DWORD *)(v74 + 436), v50);
          *(_DWORD *)(v46 + 16) = v54;
          if ( !v54 )
            goto LABEL_41;
        }
        else
        {
          *(_DWORD *)(v46 + 16) = "";
        }
        v51 = *(unsigned __int16 *)(v46 + 6);
        v52 = &v22[-v48];
        v53 = *(_DWORD *)(v46 + 12);
        v46 += 24;
        *(_DWORD *)(v46 - 4) = 0;
        if ( v5 < v51 )
          v5 = v51;
        v48 += v53;
        if ( !v53 )
        {
          *(_WORD *)(v21 + 2) = v49 + 1;
          goto LABEL_70;
        }
        if ( ++v49 >= (unsigned int)*(unsigned __int16 *)(v21 + 2) )
          break;
        *(_DWORD *)(v46 - 4) = v46;
        if ( v53 > (unsigned int)v52 )
          goto LABEL_41;
      }
      if ( v53 > (unsigned int)v52 )
        goto LABEL_41;
    }
LABEL_70:
    v45 = *(_DWORD *)(v21 + 12);
    *(_DWORD *)(v21 + 28) = 0;
    if ( !v45 )
      break;
    if ( (unsigned int)++v78 >= *(_DWORD *)(v74 + 440) )
    {
      v6 = ptr;
      v4 = v81;
      if ( v45 <= (unsigned int)v79 )
      {
        v20 = *(_DWORD *)(a1 + 160);
        goto LABEL_95;
      }
      goto LABEL_14;
    }
    v21 += 32;
    *(_DWORD *)(v21 - 4) = v21;
    if ( v45 > (unsigned int)v79 )
      goto LABEL_41;
    v76 += v45;
    sub_2CD4E0(a1, v76, v21);
  }
  v6 = ptr;
  v4 = v81;
  v20 = *(_DWORD *)(a1 + 160);
LABEL_95:
  *(_DWORD *)(v20 + 572) = v78;
  free(v6);
  v3 = *(_DWORD *)(a1 + 160);
  if ( *(_DWORD *)(v3 + 2332) )
    goto LABEL_3;
  if ( !v4 )
    return 1;
  if ( v5 <= 2 )
    goto LABEL_21;
  ++v5;
LABEL_22:
  v12 = sub_2AD188(a1, v5, 0x28u);
  v13 = *(_DWORD *)(a1 + 160);
  *(_DWORD *)(v3 + 576) = v12;
  if ( *(_DWORD *)(v13 + 576) )
  {
    *(_DWORD *)(v13 + 568) = v5;
    goto LABEL_25;
  }
  return 0;
}
