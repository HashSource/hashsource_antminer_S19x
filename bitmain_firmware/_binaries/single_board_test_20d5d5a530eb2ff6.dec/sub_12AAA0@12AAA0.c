int __fastcall sub_12AAA0(_DWORD *a1, int *a2)
{
  int v2; // r4
  int v3; // r3
  int v4; // r4
  int v7; // r11
  int v8; // r7
  unsigned __int8 *v9; // r4
  int v10; // r5
  int v11; // r0
  bool v13; // zf
  int v14; // r8
  int v15; // r2
  int v16; // lr
  int v17; // r10
  int v18; // r1
  int *v19; // r9
  int v20; // r1
  int v21; // r5
  unsigned __int8 *v22; // r3
  unsigned __int8 *v23; // r6
  int v24; // r7
  int v25; // r4
  int v26; // r11
  unsigned __int8 *v27; // r8
  int v28; // r6
  int v29; // lr
  int v30; // r3
  char *v31; // r2
  int v32; // r3
  int v33; // r8
  int v34; // r2
  __int64 v35; // r0
  int v36; // r12
  int v37; // r3
  int v38; // r3
  int v39; // r3
  int v40; // r1
  int v41; // r2
  int v42; // r2
  __int64 v43; // r0
  int v44; // r2
  int v45; // r9
  int v46; // r4
  unsigned __int8 *v47; // r5
  unsigned __int8 *v48; // r6
  int v49; // r1
  int v50; // r2
  int v51; // r3
  int v52; // r1
  int v53; // r2
  int v54; // r3
  int v55; // r1
  int v56; // r2
  int v57; // r6
  unsigned __int8 *v58; // r7
  int v59; // r10
  int v60; // r10
  int v61; // r3
  int v62; // r1
  int v63; // r3
  int v64; // [sp+0h] [bp-74h]
  _BOOL4 v65; // [sp+4h] [bp-70h]
  int v66; // [sp+4h] [bp-70h]
  int v67; // [sp+8h] [bp-6Ch]
  int *v68; // [sp+Ch] [bp-68h]
  int v69; // [sp+Ch] [bp-68h]
  unsigned __int8 *v70; // [sp+10h] [bp-64h]
  int v71; // [sp+10h] [bp-64h]
  int v72; // [sp+18h] [bp-5Ch]
  __int64 v73; // [sp+18h] [bp-5Ch]
  __int64 v74; // [sp+18h] [bp-5Ch]
  _BOOL4 v75; // [sp+20h] [bp-54h]
  int v76; // [sp+24h] [bp-50h]
  int v78; // [sp+30h] [bp-44h]
  _DWORD s[12]; // [sp+44h] [bp-30h] BYREF

  v3 = a2[1];
  if ( v3 == 23 )
  {
    v78 = 7;
    v64 = 5;
    v67 = 6;
    v65 = (a2[3] & 0x100) == 0;
    if ( (a2[3] & 0x100) != 0 )
      v2 = 13;
    v75 = (a2[3] & 0x100) != 0;
    if ( (a2[3] & 0x100) == 0 )
      v2 = 11;
  }
  else
  {
    if ( v3 != 24 )
      return 0;
    v78 = 8;
    v64 = 6;
    v67 = 7;
    if ( (a2[3] & 0x100) != 0 )
      v2 = 15;
    else
      v2 = 13;
    v65 = (a2[3] & 0x100) == 0;
    v75 = (a2[3] & 0x100) != 0;
  }
  v7 = *a2;
  v70 = (unsigned __int8 *)a2[2];
  memset(s, 0, 0x2Cu);
  if ( v2 > v7 )
    return 0;
  v8 = 0;
  v9 = v70;
  v10 = 0;
  v68 = a2;
  while ( 2 )
  {
    v11 = *v9;
    if ( v64 == v10 && v65 )
    {
      v13 = (((_BYTE)v11 - 43) & 0xFD) == 0;
      if ( (((_BYTE)v11 - 43) & 0xFD) != 0 )
        v13 = v11 == 90;
      if ( v13 )
      {
        v19 = v68;
        v17 = v68[1];
        goto LABEL_31;
      }
    }
    if ( !sub_BDB60(v11) )
      return 0;
    v14 = *v9 - 48;
    if ( v7 == v8 + 1 )
      return 0;
    if ( !sub_BDB60(v9[1]) )
      return 0;
    v8 += 2;
    v15 = v9[1] + 10 * v14;
    v16 = v15 - 48;
    if ( v7 == v8 )
      return 0;
    v17 = v68[1];
    v18 = v17 == 23 ? v10 + 1 : v10;
    if ( v16 < dword_1CAAA0[v18] || v16 > dword_1CAAA0[v18 + 9] )
      return 0;
    switch ( v18 )
    {
      case 0:
        s[5] = 100 * v16 - 1900;
        goto LABEL_29;
      case 1:
        if ( v17 == 23 )
        {
          if ( v16 > 49 )
            v41 = v15 - 48;
          else
            v41 = v15 + 52;
          s[5] = v41;
        }
        else
        {
          s[5] += v16;
        }
        goto LABEL_29;
      case 2:
        s[4] = v15 - 49;
        goto LABEL_29;
      case 3:
        if ( s[4] == 1 )
        {
          v33 = s[5];
          v38 = s[5] + 1900;
          v73 = 1374389535LL * (s[5] + 1900);
          if ( s[5] + 1900 == 400 * ((s[5] + 1900) / 400) )
          {
            v39 = 29;
          }
          else if ( v38 == 100 * ((SHIDWORD(v73) >> 5) - ((s[5] + 1900) >> 31)) )
          {
            v39 = 28;
          }
          else if ( (v38 & 3) != 0 )
          {
            v39 = 28;
          }
          else
          {
            v39 = 29;
          }
          if ( v16 > v39 )
            return 0;
          s[3] = v15 - 48;
          s[7] = v15 - 18;
          goto LABEL_79;
        }
        v31 = (char *)&dword_1CAAA0[s[4]];
        if ( v16 > *((_DWORD *)v31 + 18) )
          return 0;
        v32 = *((_DWORD *)v31 + 30);
        v33 = s[5];
        s[3] = v16;
        v34 = s[5] + 1900;
        v72 = v32 + v16 - 1;
        if ( s[4] <= 1 )
        {
          s[7] = v32 + v16 - 1;
LABEL_79:
          v34 = v33 + 1899;
          v40 = s[4] + 14;
          v76 = (v33 + 1899) >> 31;
          v36 = (v33 + 1899) % 100;
          goto LABEL_86;
        }
        v35 = 1374389535LL * v34;
        v76 = v34 >> 31;
        if ( v34 == 400 * (v34 / 400) )
        {
          v37 = 1;
          v36 = v34 - 100 * ((SHIDWORD(v35) >> 5) - v76);
        }
        else
        {
          v36 = v34 - 100 * ((SHIDWORD(v35) >> 5) - v76);
          if ( v34 == 100 * ((SHIDWORD(v35) >> 5) - v76) )
            v37 = v34 - 100 * ((SHIDWORD(v35) >> 5) - v76);
          else
            v37 = (v34 & 3) == 0;
        }
        v40 = s[4] + 2;
        s[7] = v72 + v37;
LABEL_86:
        v74 = 1374389535LL * v34;
        v42 = 13 * v40;
        v43 = 22333829947LL * v40;
        v44 = v42 >> 31;
        v45 = (v36 + 3) & (v36 >> 31);
        if ( v36 >= 0 )
          v45 = v36;
        s[6] = (5 * ((SHIDWORD(v74) >> 5) - v76)
              + (SHIDWORD(v74) >> 7)
              - v76
              + (SHIDWORD(v43) >> 1)
              - v44
              + v16
              + v36
              + (v45 >> 2)
              + 6)
             % 7;
LABEL_29:
        ++v10;
        v9 += 2;
        if ( v67 != v10 )
          continue;
        v19 = v68;
        v11 = v70[v8];
LABEL_31:
        if ( v17 == 24 && v11 == 46 )
        {
          if ( !v75 )
          {
            v46 = v8 + 1;
            if ( v7 != v8 + 1 && v7 > v8 + 1 )
            {
              ++v8;
              v47 = &v70[v46];
              while ( 1 )
              {
                v48 = v47++;
                if ( !sub_BDB60(*v48) )
                  break;
                if ( v7 == ++v8 )
                  return 0;
              }
              if ( v46 != v8 )
              {
                v11 = *v48;
                if ( v11 == 90 )
                  goto LABEL_101;
LABEL_34:
                if ( ((v11 - 43) & 0xFD) == 0 )
                {
                  v20 = v11 == 45 ? 1 : -1;
                  v66 = v20;
                  if ( v7 == v8 + 5 )
                  {
                    v21 = v8 + 1;
                    if ( a1 )
                    {
                      v22 = v70;
                      v69 = (v11 - 43) & 0xFD;
                      v71 = v7;
                      v23 = &v22[v8];
                      v24 = v8 + 3;
                      v25 = v67 + 1;
                      v26 = v67;
                      v27 = v23;
                      while ( sub_BDB60(v27[1]) )
                      {
                        v28 = v27[1] - 48;
                        if ( !sub_BDB60(v27[2]) )
                          break;
                        v29 = v19[1] == 23 ? v25 : v26;
                        v30 = v27[2] + 10 * v28 - 48;
                        if ( v30 < dword_1CAAA0[v29] || v30 > dword_1CAAA0[v29 + 9] )
                          break;
                        if ( v67 == v26 )
                        {
                          v69 = 3600 * v30;
                        }
                        else
                        {
                          if ( v26 == v78 )
                            v69 += 60 * v30;
                          if ( v25 > v78 )
                          {
                            v21 = v24;
                            v7 = v71;
                            if ( !v69 || sub_160410(s, 0, v66 * v69) )
                              goto LABEL_102;
                            return 0;
                          }
                        }
                        v27 += 2;
                        ++v25;
                        ++v26;
                        v24 += 2;
                      }
                    }
                    else
                    {
                      v57 = v67;
                      v58 = &v70[v8];
                      while ( sub_BDB60(v58[1]) )
                      {
                        v59 = v58[1] - 48;
                        if ( !sub_BDB60(v58[2]) )
                          break;
                        v60 = 5 * v59;
                        v61 = v58[2];
                        v62 = v57;
                        v21 += 2;
                        v58 += 2;
                        if ( v19[1] == 23 )
                          v62 = v57 + 1;
                        ++v57;
                        v63 = v61 + 2 * v60 - 48;
                        if ( dword_1CAAA0[v62] > v63 || dword_1CAAA0[v62 + 9] < v63 )
                          break;
                        if ( v57 > v78 )
                          goto LABEL_102;
                      }
                    }
                  }
                }
              }
            }
          }
          return 0;
        }
        if ( v11 != 90 )
        {
          if ( !v75 )
            goto LABEL_34;
          return 0;
        }
LABEL_101:
        v21 = v8 + 1;
LABEL_102:
        if ( v21 != v7 )
          return 0;
        v4 = 1;
        if ( a1 )
        {
          v49 = s[1];
          v50 = s[2];
          v51 = s[3];
          *a1 = s[0];
          a1[1] = v49;
          a1[2] = v50;
          a1[3] = v51;
          v52 = s[5];
          v53 = s[6];
          v54 = s[7];
          a1[4] = s[4];
          a1[5] = v52;
          a1[6] = v53;
          a1[7] = v54;
          v55 = s[9];
          v56 = s[10];
          a1[8] = s[8];
          a1[9] = v55;
          a1[10] = v56;
        }
        return v4;
      case 4:
        s[2] = v15 - 48;
        goto LABEL_29;
      case 5:
        s[1] = v15 - 48;
        goto LABEL_29;
      case 6:
        s[0] = v15 - 48;
        goto LABEL_29;
      default:
        goto LABEL_29;
    }
  }
}
