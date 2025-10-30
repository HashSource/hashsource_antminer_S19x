int __fastcall sub_7E670(int a1, int a2, _DWORD *a3, char *a4, unsigned int a5, int a6, unsigned int *a7)
{
  int v7; // r6
  _DWORD *v8; // r1
  _BOOL4 v9; // r2
  _BOOL4 v10; // r4
  bool v11; // cc
  _BOOL4 v12; // r3
  int v13; // r8
  _BOOL4 v14; // r3
  unsigned int v15; // r5
  int v16; // r3
  unsigned int v17; // r4
  int v18; // r3
  unsigned int v19; // r0
  _DWORD *v20; // r10
  __int64 v21; // r2
  int *v22; // r1
  int v23; // r2
  _BOOL4 v24; // r1
  int v25; // r2
  bool v26; // zf
  int v27; // r2
  int *v28; // r5
  int v29; // r1
  int v30; // r3
  size_t v31; // r4
  void *v32; // r0
  size_t v33; // r3
  unsigned int v34; // r2
  int result; // r0
  int v36; // r3
  int v37; // r7
  unsigned int v38; // r3
  int v39; // r4
  char *v40; // r0
  char *v41; // r2
  char *v42; // r1
  char v43; // t1
  char *v44; // r5
  _BOOL4 v45; // r3
  unsigned int v46; // r9
  char *v47; // r8
  size_t v48; // r7
  _BOOL4 v49; // r2
  _BOOL4 v50; // r1
  int v51; // r2
  size_t v52; // r3
  bool v54; // zf
  int v55; // r1
  int v56; // r0
  int v57; // r2
  int v58; // r3
  int v59; // r5
  int v60; // r3
  int v61; // r4
  int v62; // r3
  int v63; // r4
  void (__fastcall *v64)(_DWORD, _DWORD, int, int, _DWORD, int, _DWORD); // r7
  void (__fastcall *v65)(_DWORD, _DWORD, _DWORD); // r3
  int v66; // r3
  int v67; // r3
  char *v68; // r6
  _BOOL4 v69; // r3
  size_t v70; // r7
  int v71; // r3
  int v72; // r3
  int v73; // r3
  int v74; // r4
  _BOOL4 v75; // r3
  int v76; // r2
  int v77; // r1
  int v78; // r0
  int v82; // [sp+20h] [bp-2Ch]
  int v83; // [sp+20h] [bp-2Ch]
  void (__fastcall *v84)(_DWORD, _DWORD, _DWORD); // [sp+24h] [bp-28h]
  _BOOL4 v85; // [sp+2Ch] [bp-20h]
  _BOOL4 v86; // [sp+30h] [bp-1Ch]
  int v87; // [sp+34h] [bp-18h]
  _BYTE v88[20]; // [sp+38h] [bp-14h] BYREF

  v7 = a1;
  v8 = *(_DWORD **)(a1 + 4);
  if ( (*(_DWORD *)(v8[25] + 48) & 8) != 0 )
  {
    v10 = 1;
    v86 = 0;
    v85 = 0;
  }
  else
  {
    v9 = *v8 >= 772;
    if ( *v8 == 0x10000 )
      v9 = 0;
    v10 = !v9;
    v86 = v9;
    v85 = v9;
  }
  if ( !*(_DWORD *)(a1 + 1636) && !sub_7EFD4(a1) )
    return -1;
  v11 = a2 != 0;
  if ( a2 )
    v11 = (unsigned int)(a2 - 22) > 1;
  if ( v11 || (a6 ? (v12 = a2 != 23) : (v12 = 0), v12) )
  {
    v36 = 1254;
LABEL_67:
    v37 = -1;
    sub_95494(v7, 80, 148, 68, "ssl/record/rec_layer_s3.c", v36);
    return v37;
  }
  if ( a2 == 22 )
  {
    v38 = *(_DWORD *)(v7 + 3848);
    if ( v38 )
    {
      v39 = v7 + 3844;
      if ( a5 )
      {
        v40 = (char *)(v39 + a5);
        v41 = (char *)(v7 + 3844);
        v42 = a4 - 1;
        while ( 1 )
        {
          v43 = *v41++;
          *++v42 = v43;
          v44 = &v41[-v39];
          v38 = *(_DWORD *)(v7 + 3848) - 1;
          *(_DWORD *)(v7 + 3848) = v38;
          if ( v41 == v40 )
            break;
          if ( !v38 )
            goto LABEL_80;
        }
        if ( !v38 )
          goto LABEL_80;
      }
      else
      {
        v44 = 0;
        v40 = (char *)(v7 + 3844);
      }
      *(_BYTE *)(v7 + 3844) = *v40;
      if ( v38 > 1 )
      {
        *(_BYTE *)(v7 + 3845) = v40[1];
        if ( v38 != 2 )
        {
          *(_BYTE *)(v7 + 3846) = v40[2];
          if ( v38 != 3 )
            *(_BYTE *)(v7 + 3847) = v40[3];
        }
      }
LABEL_80:
      if ( a3 )
        *a3 = 22;
      *a7 = (unsigned int)v44;
      return 1;
    }
  }
  if ( !sub_95DA0(v7) && sub_95448(v7) )
  {
    result = (*(int (__fastcall **)(int))(v7 + 24))(v7);
    if ( result < 0 )
      return result;
    if ( !result )
      return -1;
  }
  v13 = v7 + 2296;
  v14 = a2 == 22;
  if ( !a3 )
    v14 = 0;
  v84 = 0;
  v87 = v14 && v10;
LABEL_18:
  while ( 2 )
  {
    while ( 2 )
    {
      while ( 2 )
      {
        while ( 2 )
        {
          while ( 2 )
          {
            while ( 2 )
            {
              v15 = *(_DWORD *)(v7 + 1628);
              *(_DWORD *)(v7 + 20) = 1;
              if ( !v15 )
                goto LABEL_64;
              while ( 1 )
              {
                v16 = *(_DWORD *)(v7 + 2328);
                v17 = v16;
                if ( !v16 )
                  break;
                v18 = v13;
                v17 = 0;
                do
                {
                  ++v17;
                  v18 += 48;
                }
                while ( v15 > v17 && *(_DWORD *)(v18 + 32) );
                if ( v15 != v17 )
                {
                  v16 = 48 * v17;
                  break;
                }
                *(_DWORD *)(v7 + 1628) = 0;
LABEL_64:
                result = sub_80128(v7);
                if ( result <= 0 )
                  return result;
                v15 = *(_DWORD *)(v7 + 1628);
                if ( !v15 )
                {
                  v36 = 1322;
                  goto LABEL_67;
                }
              }
              v19 = *(_DWORD *)(v7 + 3848);
              v20 = (_DWORD *)(v13 + v16);
              HIDWORD(v21) = *(_DWORD *)(v13 + v16 + 4);
              if ( v19 )
              {
                if ( HIDWORD(v21) == 22 )
                {
                  if ( !v20[2] )
                    goto LABEL_39;
                  goto LABEL_34;
                }
                v22 = *(int **)(v7 + 4);
                if ( (*(_DWORD *)(v22[25] + 48) & 8) == 0 )
                {
                  v23 = *v22;
                  v24 = *v22 != 0x10000;
                  if ( v23 < 772 )
                    v24 = 0;
                  if ( v24 )
                  {
                    sub_95494(v7, 10, 148, 293, "ssl/record/rec_layer_s3.c", 1342);
                    return -1;
                  }
                }
              }
              if ( HIDWORD(v21) != 21 && v20[2] )
LABEL_34:
                *(_DWORD *)(v7 + 3892) = 0;
              v25 = *(_DWORD *)(*(_DWORD *)(v7 + 124) + 220);
              v26 = v25 == 0;
              if ( v25 )
                v26 = HIDWORD(v21) == 22;
              if ( !v26 )
              {
                sub_95494(v7, 10, 148, 145, "ssl/record/rec_layer_s3.c", 1360);
                return -1;
              }
LABEL_39:
              v27 = *(_DWORD *)(v7 + 40);
              if ( (v27 & 2) != 0 )
              {
                v37 = 0;
                v20[2] = 0;
                *(_DWORD *)(v7 + 20) = 1;
                return v37;
              }
              if ( a2 == HIDWORD(v21) || HIDWORD(v21) == 20 && v87 )
              {
                if ( sub_95448(v7) )
                  v45 = a2 == 23;
                else
                  v45 = 0;
                if ( v45 )
                {
                  if ( !*(_DWORD *)(v7 + 972) )
                  {
                    sub_95494(v7, 10, 148, 100, "ssl/record/rec_layer_s3.c", 1390);
                    return -1;
                  }
                }
                else if ( a2 == 22 && v20[1] == 20 && *(_DWORD *)(v7 + 3848) )
                {
                  sub_95494(v7, 10, 148, 133, "ssl/record/rec_layer_s3.c", 1398);
                  return -1;
                }
                if ( a3 )
                  *a3 = v20[1];
                if ( a5 )
                {
                  if ( !a6 )
                  {
                    v82 = v13;
                    v46 = 0;
                    v47 = a4;
                    do
                    {
                      v48 = a5 - v46;
                      if ( a5 - v46 >= v20[2] )
                        v48 = v20[2];
                      memcpy(v47, (const void *)(v20[5] + v20[4]), v48);
                      v46 += v48;
                      v47 += v48;
                      v49 = v46 < a5 && a2 == 23;
                      v50 = v49;
                      v51 = v20[4];
                      v52 = v20[2] - v48;
                      v20[2] = v52;
                      v20[4] = v51 + v48;
                      if ( !v52 )
                      {
                        ++v17;
                        *(_DWORD *)(v7 + 1624) = 240;
                        v20 += 12;
                        *(v20 - 8) = 0;
                        *(v20 - 4) = 1;
                      }
                    }
                    while ( v15 > v17 && v50 );
                    a4 = v47;
                    v13 = v82;
                    if ( !v46 )
                      continue;
LABEL_110:
                    v54 = a6 == 0;
                    if ( !a6 )
                      v54 = v15 == v17;
                    if ( v54 && (*(_DWORD *)(v7 + 1264) & 0x10) != 0 && !*(_DWORD *)(v7 + 1652) )
                      sub_7F1A0(v7);
                    v37 = 1;
                    *a7 = v46;
                    return v37;
                  }
                  v83 = v7;
                  v46 = 0;
                  v68 = a4;
                  while ( 1 )
                  {
                    v70 = a5 - v46;
                    if ( a5 - v46 >= v20[2] )
                      v70 = v20[2];
                    memcpy(v68, (const void *)(v20[5] + v20[4]), v70);
                    v71 = v20[2];
                    v68 += v70;
                    if ( v71 )
                    {
                      if ( v71 != v70 )
                        goto LABEL_157;
                    }
                    else
                    {
                      v20[8] = 1;
                    }
                    ++v17;
                    v20 += 12;
LABEL_157:
                    v69 = a2 == 23;
                    v46 += v70;
                    LOBYTE(v69) = a5 > v46 && a2 == 23;
                    if ( v15 <= v17 )
                      v69 = 0;
                    if ( !v69 )
                    {
                      a4 = v68;
                      v7 = v83;
                      if ( v46 )
                        goto LABEL_110;
                      goto LABEL_18;
                    }
                  }
                }
                v37 = 0;
                if ( !v20[2] )
                  v20[8] = 1;
                return v37;
              }
              break;
            }
            if ( *v20 == 2 )
            {
              v36 = 1475;
              goto LABEL_67;
            }
            v28 = *(int **)(v7 + 4);
            v29 = *v28;
            if ( *v28 == 0x10000 )
            {
              LODWORD(v21) = *(_DWORD *)(v7 + 28);
              if ( v21 != 0x1500000000LL )
              {
                *(_DWORD *)v7 = *v20;
                v37 = -1;
                sub_95494(v7, 10, 148, 244, "ssl/record/rec_layer_s3.c", 1489);
                return v37;
              }
LABEL_120:
              v55 = v20[2];
              v56 = v20[5];
              v57 = v20[4];
              v58 = v56 + v57;
              if ( v55 <= 0
                || (v59 = *(unsigned __int8 *)(v56 + v57), v55 == 1)
                || (v63 = *(unsigned __int8 *)(v58 + 1), v55 != 2) )
              {
                sub_95494(v7, 10, 148, 205, "ssl/record/rec_layer_s3.c", 1509);
                return -1;
              }
              v64 = *(void (__fastcall **)(_DWORD, _DWORD, int, int, _DWORD, int, _DWORD))(v7 + 132);
              if ( v64 )
                v64(0, *(_DWORD *)v7, 21, v58, v20[2], v7, *(_DWORD *)(v7 + 136));
              v65 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v7 + 1204);
              if ( v65
                || (v65 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)(v7 + 1232) + 160)) != 0
                || (v65 = v84) != 0 )
              {
                v84 = v65;
                v65(v7, 16388, v63 | (v59 << 8));
              }
              if ( v59 == 1 )
              {
                v73 = *(_DWORD *)(v7 + 3892) + 1;
                *(_DWORD *)(*(_DWORD *)(v7 + 124) + 224) = v63;
                v20[8] = 1;
                *(_DWORD *)(v7 + 3892) = v73;
                if ( v73 != 5 )
                {
                  if ( !v85 )
                  {
                    if ( !v63 )
                      goto LABEL_204;
                    goto LABEL_171;
                  }
                  if ( v63 == 90 )
                    continue;
LABEL_144:
                  if ( !v63 )
                  {
                    v66 = v86;
                    if ( v59 == 1 )
                      v66 = v86 | 1;
                    if ( !v66 )
                    {
                      if ( v59 != 2 )
                      {
LABEL_149:
                        if ( v59 == 1 )
                          continue;
                        v37 = -1;
                        sub_95494(v7, 47, 148, 246, "ssl/record/rec_layer_s3.c", 1581);
                        return v37;
                      }
                      goto LABEL_205;
                    }
LABEL_204:
                    v37 = 0;
                    *(_DWORD *)(v7 + 40) |= 2u;
                    return v37;
                  }
LABEL_171:
                  v72 = v86;
                  if ( v59 == 2 )
                    v72 = v86 | 1;
                  if ( !v72 )
                  {
                    if ( v63 == 100 )
                    {
                      v37 = -1;
                      sub_95494(v7, 40, 148, 339, "ssl/record/rec_layer_s3.c", 1573);
                      return v37;
                    }
                    goto LABEL_149;
                  }
LABEL_205:
                  v76 = *(_DWORD *)(v7 + 124);
                  *(_DWORD *)(v7 + 20) = 1;
                  v37 = 0;
                  *(_DWORD *)(v76 + 228) = v63;
                  sub_95494(v7, -1, 148, v63 + 1000, "ssl/record/rec_layer_s3.c", 1556);
                  sub_B5560(v88, 16, "%d", v63);
                  sub_D1240(2, "SSL alert number ", v88);
                  v77 = *(_DWORD *)(v7 + 1140);
                  v78 = *(_DWORD *)(v7 + 1504);
                  *(_DWORD *)(v7 + 40) |= 2u;
                  v20[8] = 1;
                  sub_8DB08(v78, v77);
                  return v37;
                }
              }
              else
              {
                if ( !v85 || v63 != 90 )
                  goto LABEL_144;
                v67 = *(_DWORD *)(v7 + 3892) + 1;
                *(_DWORD *)(*(_DWORD *)(v7 + 124) + 224) = 90;
                v20[8] = 1;
                *(_DWORD *)(v7 + 3892) = v67;
                if ( v67 != 5 )
                  continue;
              }
              sub_95494(v7, 10, 148, 409, "ssl/record/rec_layer_s3.c", 1535);
              return -1;
            }
            break;
          }
          if ( HIDWORD(v21) == 21 )
            goto LABEL_120;
          if ( (v27 & 1) == 0 )
          {
            if ( HIDWORD(v21) == 22 )
              goto LABEL_50;
            if ( HIDWORD(v21) != 20 )
            {
              if ( v19 > 3 )
                goto LABEL_56;
              if ( SHIDWORD(v21) < 20 )
                goto LABEL_133;
LABEL_58:
              if ( SHIDWORD(v21) <= 22 )
              {
                sub_95494(v7, 10, 148, 68, "ssl/record/rec_layer_s3.c", 1727);
                return -1;
              }
              if ( HIDWORD(v21) != 23 )
                goto LABEL_133;
              if ( !sub_95E70(v7) )
              {
                if ( !sub_95DB4(v7) )
                {
                  v62 = 1759;
                  goto LABEL_134;
                }
                if ( sub_7F228(v7, v20[2], 104, 0) )
                {
                  v20[8] = 1;
                  continue;
                }
                return -1;
              }
              v37 = -1;
              *(_DWORD *)(*(_DWORD *)(v7 + 124) + 252) = 2;
              return v37;
            }
            goto LABEL_199;
          }
          break;
        }
        if ( HIDWORD(v21) != 22 )
        {
          v20[2] = 0;
          v37 = -1;
          v20[8] = 1;
          sub_95494(v7, -1, 148, 291, "ssl/record/rec_layer_s3.c", 1620);
          return v37;
        }
        v30 = (*(_DWORD *)(v28[25] + 48) >> 3) & 1;
        if ( v29 < 772 )
          v30 = 1;
        if ( v30 )
        {
          v60 = *(_DWORD *)(v7 + 1264);
          v20[8] = 1;
          v20[2] = 0;
          if ( (v60 & 4) != 0 )
            continue;
LABEL_124:
          *(_DWORD *)(v7 + 20) = 3;
          v37 = -1;
          v61 = sub_882E0(v7, v29);
          sub_B66FC(v61, 15);
          sub_B6710(v61, 9);
          return v37;
        }
        break;
      }
LABEL_50:
      v31 = 4 - v19;
      v32 = (void *)(v19 + v7 + 3844);
      if ( v31 >= v20[2] )
        v31 = v20[2];
      memcpy(v32, (const void *)(v20[5] + v20[4]), v31);
      v33 = v20[2] - v31;
      v20[4] += v31;
      v20[2] = v33;
      v34 = *(_DWORD *)(v7 + 3848) + v31;
      *(_DWORD *)(v7 + 3848) = v34;
      if ( !v20[2] )
      {
        v20[8] = 1;
        v34 = *(_DWORD *)(v7 + 3848);
      }
      if ( v34 <= 3 )
        continue;
      break;
    }
    if ( v20[1] == 20 )
    {
LABEL_199:
      sub_95494(v7, 10, 148, 133, "ssl/record/rec_layer_s3.c", 1655);
      return -1;
    }
LABEL_56:
    if ( sub_95DA0(v7) )
    {
      HIDWORD(v21) = v20[1];
      if ( SHIDWORD(v21) >= 20 )
        goto LABEL_58;
LABEL_133:
      v62 = 1716;
LABEL_134:
      sub_95494(v7, 10, 148, 245, "ssl/record/rec_layer_s3.c", v62);
      return -1;
    }
    v74 = *(_DWORD *)(v7 + 104);
    sub_95D9C(v7, 1);
    result = (*(int (__fastcall **)(int))(v7 + 24))(v7);
    if ( result >= 0 )
    {
      v75 = result == 0;
      if ( v74 == 11 )
        v75 = 1;
      if ( !v75 )
      {
        if ( (*(_DWORD *)(v7 + 1264) & 4) != 0 || *(_DWORD *)(v7 + 1652) )
          continue;
        goto LABEL_124;
      }
      return -1;
    }
    return result;
  }
}
