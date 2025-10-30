int __fastcall sub_2B0910(_DWORD *a1)
{
  int v2; // r11
  int v3; // r0
  bool v4; // zf
  char v5; // r3
  int v6; // r3
  char *v7; // r0
  char *v8; // r5
  bool v9; // zf
  int v10; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r1
  int v15; // r5
  unsigned int v16; // r5
  char v17; // r8
  bool v18; // zf
  unsigned int v19; // r3
  unsigned int v20; // r9
  int v21; // r0
  int v22; // r0
  int v23; // r7
  bool v24; // zf
  bool v25; // zf
  _BYTE *v26; // r0
  _BYTE *v27; // r6
  char *v28; // r5
  unsigned int v29; // r7
  int v30; // r0
  char v31; // r9
  unsigned int v32; // r11
  char *v33; // r0
  int v34; // r6
  int v35; // r3
  _DWORD *v36; // r0
  int v37; // r2
  _DWORD *v38; // r3
  bool v39; // zf
  bool v40; // zf
  int v41; // r3
  unsigned __int8 *v42; // r2
  int v43; // r1
  int v44; // lr
  int v45; // r12
  int v46; // r3
  int v47; // r0
  unsigned __int8 *v48; // r3
  int v49; // r0
  int v50; // r1
  int v51; // r3
  int v52; // lr
  unsigned __int8 *v53; // r6
  int v54; // r1
  unsigned int v55; // r7
  int v56; // r2
  int v57; // r0
  int v58; // lr
  char v59; // r3
  int v60; // r12
  int v61; // r8
  char v62; // r5
  unsigned __int8 *v63; // r3
  int v64; // r1
  size_t v65; // r0
  char *v66; // r0
  char *v67; // r0
  _DWORD *v68; // r0
  unsigned __int8 *v69; // r6
  int v70; // r1
  int v71; // r2
  unsigned __int8 *v72; // r6
  int v73; // r2
  int v74; // r1
  int v75; // r3
  int v76; // r3
  int v77; // r0
  int v78; // r2
  int v79; // r3
  int v80; // r0
  int v81; // r2
  unsigned __int8 *ptr; // [sp+8h] [bp-44h]
  int v83; // [sp+Ch] [bp-40h]
  unsigned int v84; // [sp+10h] [bp-3Ch]
  __int64 v85; // [sp+1Ch] [bp-30h]
  int v86; // [sp+1Ch] [bp-30h]
  char v87; // [sp+2Ch] [bp-20h] BYREF
  unsigned __int8 v88; // [sp+2Dh] [bp-1Fh]
  unsigned __int8 v89; // [sp+2Eh] [bp-1Eh]
  int v90; // [sp+30h] [bp-1Ch] BYREF
  char s[24]; // [sp+34h] [bp-18h] BYREF

  v90 = 0;
  v2 = sub_2A8A04((int)a1, 0, 0);
  if ( !v2 )
  {
    v84 = 0;
    ptr = 0;
    v83 = 1;
    while ( 1 )
    {
      v3 = sub_2B0110((int)a1, &v90);
      if ( v3 == -1 )
      {
        if ( v90 )
          goto LABEL_27;
LABEL_113:
        if ( ptr )
          free(ptr);
        return 1;
      }
      v4 = v3 == 83;
      if ( v3 != 83 )
        v4 = v3 == 13;
      v5 = !v4;
      if ( v3 == 10 )
        v6 = 0;
      else
        v6 = v5 & 1;
      if ( v6 )
        v2 = 0;
      if ( v3 == 32 )
      {
        v86 = v2;
        do
        {
          do
          {
            v22 = sub_2B0110((int)a1, &v90);
            v23 = v22;
            if ( v22 == -1 )
              goto LABEL_26;
            v24 = v22 == 9;
            if ( v22 != 9 )
              v24 = v22 == 32;
          }
          while ( v24 );
          v25 = v22 == 13;
          if ( v22 != 13 )
            v25 = v22 == 10;
          if ( v25 )
            break;
          v26 = sub_2AB368(11);
          v27 = v26;
          if ( !v26 )
            goto LABEL_27;
          *v26 = v23;
          v28 = v26 + 1;
          v29 = 10;
          while ( 1 )
          {
            v30 = sub_2B0110((int)a1, &v90);
            v31 = v30;
            v32 = v28 - v27;
            if ( v30 == -1 )
            {
              sub_2B086C(v90);
LABEL_70:
              free(v27);
              goto LABEL_27;
            }
            if ( (word_438898[(unsigned __int8)v30] & 0x40) != 0 )
              break;
            if ( v32 >= v29 )
            {
              v29 *= 2;
              v33 = (char *)sub_2AB3FC(v27, v29 + 1);
              v28 = &v33[v32];
              if ( !v33 )
                goto LABEL_70;
              v27 = v33;
            }
            *v28++ = v31;
          }
          *v28 = 0;
          v7 = (char *)sub_2ACBF4((int)a1, v28 + 1 - v27);
          v8 = v7;
          if ( !v7 )
            goto LABEL_70;
          strcpy(v7, v27);
          free(v27);
          do
          {
            v10 = sub_2B0110((int)a1, &v90);
            if ( v10 == -1 )
              goto LABEL_26;
            v9 = v10 == 9;
            if ( v10 != 9 )
              v9 = v10 == 32;
          }
          while ( v9 );
          v23 = v10;
          if ( v10 == 36 )
          {
            v23 = sub_2B0110((int)a1, &v90);
            if ( v23 == -1 )
            {
LABEL_26:
              sub_2B086C(v90);
              goto LABEL_27;
            }
          }
          v34 = 0;
          while ( 1 )
          {
            v35 = (unsigned __int8)aCccccccccccccc[(unsigned __int8)v23];
            if ( v35 == 99 )
              break;
            v34 = v35 + 16 * v34;
            v23 = sub_2B0110((int)a1, &v90);
            if ( v23 == -1 )
              goto LABEL_26;
          }
          v36 = (_DWORD *)sub_2ACBF4((int)a1, 12);
          if ( !v36 )
            goto LABEL_27;
          v37 = a1[40];
          v36[1] = v8;
          v36[2] = v34;
          v38 = *(_DWORD **)(v37 + 12);
          v39 = v38 == 0;
          if ( v38 )
            v38 = *(_DWORD **)(v37 + 16);
          else
            *(_DWORD *)(v37 + 12) = v36;
          if ( !v39 )
            *v38 = v36;
          v40 = v23 == 9;
          if ( v23 != 9 )
            v40 = v23 == 32;
          v41 = a1[31];
          *(_DWORD *)(v37 + 16) = v36;
          *v36 = 0;
          a1[31] = v41 + 1;
        }
        while ( v40 );
        v2 = v86;
        if ( v23 == 10 )
          goto LABEL_52;
        if ( v23 != 13 )
        {
          sub_2B087C((int)a1, v83, v23, v90);
          goto LABEL_27;
        }
      }
      else if ( v3 > 32 )
      {
        if ( v3 != 36 )
        {
          if ( v3 != 83 )
          {
LABEL_18:
            sub_2B087C((int)a1, v83, v3, v90);
            goto LABEL_27;
          }
          LODWORD(v85) = sub_2A890C((int)a1);
          HIDWORD(v85) = v12;
          if ( sub_2A87D8((int)&v87, 3u, (int)a1) != 3 )
          {
LABEL_27:
            if ( ptr )
              free(ptr);
            return 0;
          }
          v13 = v88;
          v14 = (unsigned __int8)aCccccccccccccc[v88];
          if ( v14 == 99 || (v13 = v89, v15 = (unsigned __int8)aCccccccccccccc[v89], v15 == 99) )
          {
            sub_2B087C((int)a1, v83, v13, v90);
            goto LABEL_27;
          }
          v16 = v15 + 16 * v14;
          v17 = v16;
          v18 = v87 == 56;
          if ( v87 != 56 )
            v18 = v87 == 50;
          if ( v18 )
          {
            v19 = 4;
          }
          else if ( (v87 & 0xFB) == 0x33 )
          {
            v19 = 5;
          }
          else
          {
            v19 = 3;
          }
          if ( v19 > v16 )
          {
            sub_2A6A5C("%B:%d: byte count %d too small\n", a1, v83, v16);
            ((void (__fastcall *)(int))loc_2A6C48)(17);
            goto LABEL_27;
          }
          if ( 2 * v16 <= v84 )
          {
LABEL_48:
            if ( 2 * v16 == sub_2A87D8((int)ptr, 2 * v16, (int)a1) )
            {
              v20 = v16 - 1;
              switch ( v87 )
              {
                case '0':
                case '5':
                  v2 = 0;
                  continue;
                case '1':
                  v53 = ptr;
                  v54 = 0;
                  goto LABEL_93;
                case '2':
                  v72 = ptr;
                  v73 = 0;
                  goto LABEL_107;
                case '3':
                  v20 = v16 - 2;
                  v72 = ptr + 2;
                  v78 = (unsigned __int8)aCccccccccccccc[ptr[1]];
                  v79 = 16 * (unsigned __int8)aCccccccccccccc[*ptr];
                  v17 = v78 + v16 + v79;
                  v73 = (v79 + v78) << 8;
LABEL_107:
                  v74 = *v72;
                  --v20;
                  v75 = v72[1];
                  v53 = v72 + 2;
                  v76 = (unsigned __int8)aCccccccccccccc[v75];
                  v77 = 16 * (unsigned __int8)aCccccccccccccc[v74];
                  v17 += v76 + v77;
                  v54 = ((v77 + v76) | v73) << 8;
LABEL_93:
                  v55 = v20 - 2;
                  v56 = (unsigned __int8)aCccccccccccccc[v53[1]];
                  v57 = (unsigned __int8)aCccccccccccccc[v53[3]];
                  v58 = 16 * (unsigned __int8)aCccccccccccccc[*v53];
                  v59 = v17 + v56 + v57;
                  v60 = 16 * (unsigned __int8)aCccccccccccccc[v53[2]];
                  v61 = (v60 + v57) | (((v58 + v56) | v54) << 8);
                  v62 = v59 + v58 + v60;
                  v63 = v53 + 4;
                  if ( v2 && (v64 = *(_DWORD *)(v2 + 36), v64 + *(_DWORD *)(v2 + 28) == v61) )
                  {
                    *(_DWORD *)(v2 + 36) = v64 + v55;
                  }
                  else
                  {
                    sprintf(s, ".sec%d", a1[27] + 1);
                    v65 = strlen(s);
                    v66 = (char *)sub_2ACBF4((int)a1, v65 + 1);
                    v67 = strcpy(v66, s);
                    v68 = (_DWORD *)sub_2ADBE8((int)a1, v67, 259);
                    v2 = (int)v68;
                    if ( !v68 )
                      goto LABEL_27;
                    v68[7] = v61;
                    v68[8] = v61;
                    v68[20] = v85 - 1;
                    v68[9] = v55;
                    v63 = v53 + 4;
                    v68[21] = (unsigned __int64)(v85 - 1) >> 32;
                  }
                  if ( v20 != 2 )
                  {
                    v69 = v53 + 6;
                    do
                    {
                      v70 = *(v69 - 2);
                      --v55;
                      v71 = *(v69 - 1);
                      v69 += 2;
                      v62 += aCccccccccccccc[v71] + 16 * aCccccccccccccc[v70];
                    }
                    while ( v55 );
                    v63 += 2 * v20 + -4;
                  }
                  if ( (unsigned __int8)~v62 == (unsigned __int8)aCccccccccccccc[v63[1]]
                                              + 16 * (unsigned __int8)aCccccccccccccc[*v63] )
                    continue;
LABEL_89:
                  sub_2A6A5C("%B:%d: Bad checksum in S-record file\n", a1, v83);
                  ((void (__fastcall *)(int))loc_2A6C48)(17);
                  break;
                case '7':
                  v48 = ptr + 2;
                  v80 = (unsigned __int8)aCccccccccccccc[ptr[1]];
                  v81 = 16 * (unsigned __int8)aCccccccccccccc[*ptr];
                  v17 = v80 + v16 + v81;
                  v49 = (v81 + v80) << 8;
                  goto LABEL_91;
                case '8':
                  v48 = ptr;
                  v49 = 0;
LABEL_91:
                  v50 = *v48;
                  v42 = v48 + 2;
                  v51 = (unsigned __int8)aCccccccccccccc[v48[1]];
                  v52 = 16 * (unsigned __int8)aCccccccccccccc[v50];
                  v17 += v51 + v52;
                  v43 = ((v52 + v51) | v49) << 8;
                  goto LABEL_88;
                case '9':
                  v42 = ptr;
                  v43 = 0;
LABEL_88:
                  v44 = (unsigned __int8)aCccccccccccccc[v42[1]];
                  v45 = 16 * (unsigned __int8)aCccccccccccccc[*v42];
                  v46 = (unsigned __int8)aCccccccccccccc[v42[3]];
                  v47 = 16 * (unsigned __int8)aCccccccccccccc[v42[2]];
                  a1[29] = (v47 + v46) | (((v45 + v44) | v43) << 8);
                  if ( (unsigned __int8)~(v17 + v44 + v46 + v45 + v47) != (unsigned __int8)aCccccccccccccc[v42[5]]
                                                                        + 16 * (unsigned __int8)aCccccccccccccc[v42[4]] )
                    goto LABEL_89;
                  goto LABEL_113;
                default:
                  continue;
              }
            }
            goto LABEL_27;
          }
          if ( ptr )
            free(ptr);
          ptr = (unsigned __int8 *)sub_2AB368(2 * v16);
          if ( ptr )
          {
            v84 = 2 * v16;
            goto LABEL_48;
          }
          return 0;
        }
        while ( 1 )
        {
          v21 = sub_2B0110((int)a1, &v90);
          if ( v21 == 10 )
            break;
          if ( v21 == -1 )
            goto LABEL_26;
        }
LABEL_52:
        ++v83;
      }
      else
      {
        if ( v3 == 10 )
          goto LABEL_52;
        if ( v3 != 13 )
          goto LABEL_18;
      }
    }
  }
  return 0;
}
