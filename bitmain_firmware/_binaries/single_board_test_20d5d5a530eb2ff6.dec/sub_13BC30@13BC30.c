char *__fastcall sub_13BC30(char *result, int a2, int a3, unsigned int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int v10; // r2
  char *v11; // r4
  unsigned int v12; // r7
  unsigned int v13; // r10
  int v14; // r9
  int v15; // r2
  int v16; // r0
  unsigned int v17; // r8
  int v18; // r6
  int v19; // r5
  char v20; // r11
  char *v21; // r4
  int v22; // r5
  int v23; // r1
  int v24; // r0
  int v25; // r0
  int v26; // r12
  unsigned int v27; // r3
  int v28; // r2
  int v29; // r0
  unsigned int v30; // r8
  char *v31; // r4
  int v32; // r6
  int v33; // r3
  int v34; // r6
  int v35; // r3
  int v36; // r6
  int v37; // r3
  int v38; // r6
  int v39; // r5
  int v40; // r5
  int v41; // r3
  int v42; // r5
  int v43; // r3
  int v44; // r5
  int v45; // r3
  int v46; // r5
  int v47; // r9
  int v48; // r6
  int v49; // r5
  int v50; // r3
  int v51; // r2
  int v52; // r1
  int v53; // r1
  bool v54; // cc
  int v55; // r6
  int v56; // r2
  int v57; // r3
  int v58; // r2
  int v59; // r3
  int v60; // r2
  int v61; // r3
  int v62; // r2
  int v63; // r3
  int v64; // r3
  int v65; // r0
  int v66; // r3
  int v67; // r0
  int v68; // r3
  int v69; // r0
  int v70; // r0
  int v71; // r2
  int v72; // r3
  int v73; // r2
  int v74; // [sp+4h] [bp-40h]
  int v75; // [sp+4h] [bp-40h]
  char v76; // [sp+Ch] [bp-38h]
  char v77; // [sp+Ch] [bp-38h]
  char *src; // [sp+10h] [bp-34h]
  char *srca; // [sp+10h] [bp-34h]
  int v80; // [sp+14h] [bp-30h]
  char v81; // [sp+14h] [bp-30h]
  char *v82; // [sp+20h] [bp-24h]
  unsigned int v83; // [sp+28h] [bp-1Ch] BYREF
  int v84; // [sp+2Ch] [bp-18h]
  unsigned int v85; // [sp+30h] [bp-14h] BYREF
  int v86; // [sp+34h] [bp-10h]
  int v87; // [sp+38h] [bp-Ch]
  int v88; // [sp+3Ch] [bp-8h]

  v74 = a2;
  if ( a3 <= 64 )
  {
    v10 = a3 + 7;
    v11 = result;
    v12 = v10 >> 3;
    v13 = *(_DWORD *)a8;
    v14 = *(_DWORD *)(a8 + 4);
    if ( a9 )
    {
      if ( a4 >= v12 )
      {
        v15 = v10 & (a3 >> 31);
        if ( a3 >= 0 )
          v15 = a3;
        LOBYTE(v16) = a3 & 7;
        v80 = a3 & 7;
        if ( a3 <= 0 )
          v16 = -(-a3 & 7);
        v17 = a4 - v12;
        v76 = 8 - v16;
        v18 = *(_DWORD *)(a8 + 4);
        v19 = a2;
        v75 = a3;
        v20 = v16;
        src = (char *)&v85 + (v15 >> 3);
        do
        {
          v21 = &v11[v12];
          v83 = v13;
          v84 = v18;
          sub_13E794(&v83, a5, a6, a7);
          switch ( v12 )
          {
            case 1u:
              v62 = 0;
              v68 = 0;
              goto LABEL_76;
            case 2u:
              v62 = 0;
              v66 = 0;
              goto LABEL_75;
            case 3u:
              v62 = 0;
              v64 = 0;
              goto LABEL_74;
            case 4u:
              v62 = 0;
              goto LABEL_73;
            case 5u:
              v60 = 0;
              goto LABEL_72;
            case 6u:
              v58 = 0;
              goto LABEL_71;
            case 7u:
              v56 = 0;
              goto LABEL_70;
            case 8u:
              v73 = (unsigned __int8)*--v21;
              v56 = v73 << 24;
LABEL_70:
              v57 = (unsigned __int8)*--v21;
              v58 = v56 | (v57 << 16);
LABEL_71:
              v59 = (unsigned __int8)*--v21;
              v60 = v58 | (v59 << 8);
LABEL_72:
              v61 = (unsigned __int8)*--v21;
              v62 = v60 | v61;
LABEL_73:
              v63 = (unsigned __int8)*--v21;
              v64 = v63 << 24;
LABEL_74:
              v65 = (unsigned __int8)*--v21;
              v66 = v64 | (v65 << 16);
LABEL_75:
              v67 = (unsigned __int8)*--v21;
              v68 = v66 | (v67 << 8);
LABEL_76:
              v69 = (unsigned __int8)*--v21;
              v70 = v69 | v68;
              break;
            default:
              v62 = 0;
              v70 = 0;
              break;
          }
          v11 = &v21[v12];
          v22 = v19 + v12;
          v71 = v62 ^ v84;
          v72 = v83 ^ v70;
          switch ( v12 )
          {
            case 1u:
              v25 = v22;
              goto LABEL_17;
            case 2u:
              goto LABEL_16;
            case 3u:
              v24 = v22;
              goto LABEL_15;
            case 4u:
              goto LABEL_14;
            case 5u:
              v23 = v22;
              goto LABEL_13;
            case 6u:
              goto LABEL_12;
            case 7u:
              goto LABEL_11;
            case 8u:
              *(_BYTE *)--v22 = HIBYTE(v71);
LABEL_11:
              *(_BYTE *)--v22 = BYTE2(v71);
LABEL_12:
              v23 = v22 - 1;
              *(_BYTE *)(v22 - 1) = BYTE1(v71);
LABEL_13:
              v22 = v23 - 1;
              *(_BYTE *)(v23 - 1) = v71;
LABEL_14:
              v24 = v22 - 1;
              *(_BYTE *)(v22 - 1) = HIBYTE(v72);
LABEL_15:
              v22 = v24 - 1;
              *(_BYTE *)(v24 - 1) = BYTE2(v72);
LABEL_16:
              v25 = v22 - 1;
              *(_BYTE *)(v22 - 1) = BYTE1(v72);
LABEL_17:
              v22 = v25 - 1;
              *(_BYTE *)(v25 - 1) = v72;
              break;
            default:
              break;
          }
          v19 = v22 + v12;
          if ( v75 == 32 )
          {
            v13 = v18;
            v18 = v72;
          }
          else if ( v75 == 64 )
          {
            v18 = v71;
            v13 = v72;
          }
          else
          {
            v87 = v72;
            v85 = v13;
            v86 = v18;
            v88 = v71;
            if ( v80 )
            {
              memmove(&v85, src, 9u);
              LOBYTE(v85) = ((unsigned __int8)v85 << v20) | ((int)BYTE1(v85) >> v76);
              BYTE1(v85) = (BYTE1(v85) << v20) | ((int)BYTE2(v85) >> v76);
              BYTE2(v85) = (BYTE2(v85) << v20) | ((int)HIBYTE(v85) >> v76);
              HIBYTE(v85) = (HIBYTE(v85) << v20) | ((int)(unsigned __int8)v86 >> v76);
              v26 = (int)BYTE1(v86) >> v76;
              BYTE1(v86) = (BYTE1(v86) << v20) | ((int)BYTE2(v86) >> v76);
              LOBYTE(v86) = ((unsigned __int8)v86 << v20) | v26;
              BYTE2(v86) = (BYTE2(v86) << v20) | ((int)HIBYTE(v86) >> v76);
              HIBYTE(v86) = ((int)(unsigned __int8)v87 >> v76) | (HIBYTE(v86) << v20);
            }
            else
            {
              memmove(&v85, src, 8u);
            }
            v13 = v85;
            v18 = v86;
          }
          v27 = v17;
          v17 -= v12;
        }
        while ( v12 <= v27 );
        v14 = v18;
      }
    }
    else if ( a4 >= v12 )
    {
      v28 = v10 & (a3 >> 31);
      if ( a3 >= 0 )
        v28 = a3;
      LOBYTE(v29) = a3 & 7;
      if ( a3 <= 0 )
        v29 = -(-a3 & 7);
      v30 = a4 - v12;
      v77 = 8 - v29;
      v81 = v29;
      v82 = (char *)&v85 + (v28 >> 3);
      srca = v11;
      do
      {
        v83 = v13;
        v84 = v14;
        sub_13E794(&v83, a5, a6, a7);
        v31 = &srca[v12];
        switch ( v12 )
        {
          case 1u:
            v38 = 0;
            v44 = 0;
            goto LABEL_41;
          case 2u:
            v38 = 0;
            v42 = 0;
            goto LABEL_40;
          case 3u:
            v38 = 0;
            v40 = 0;
            goto LABEL_39;
          case 4u:
            v38 = 0;
            goto LABEL_38;
          case 5u:
            v36 = 0;
            goto LABEL_37;
          case 6u:
            v34 = 0;
            goto LABEL_36;
          case 7u:
            v32 = 0;
            goto LABEL_35;
          case 8u:
            v55 = (unsigned __int8)*--v31;
            v32 = v55 << 24;
LABEL_35:
            v33 = (unsigned __int8)*--v31;
            v34 = v32 | (v33 << 16);
LABEL_36:
            v35 = (unsigned __int8)*--v31;
            v36 = v34 | (v35 << 8);
LABEL_37:
            v37 = (unsigned __int8)*--v31;
            v38 = v36 | v37;
LABEL_38:
            v39 = (unsigned __int8)*--v31;
            v40 = v39 << 24;
LABEL_39:
            v41 = (unsigned __int8)*--v31;
            v42 = v40 | (v41 << 16);
LABEL_40:
            v43 = (unsigned __int8)*--v31;
            v44 = v42 | (v43 << 8);
LABEL_41:
            v45 = (unsigned __int8)*--v31;
            v46 = v44 | v45;
            break;
          default:
            v38 = 0;
            v46 = 0;
            break;
        }
        srca = &v31[v12];
        if ( a3 == 32 )
        {
          v13 = v14;
          v14 = v46;
        }
        else if ( a3 == 64 )
        {
          v14 = v38;
          v13 = v46;
        }
        else
        {
          v86 = v14;
          v88 = v38;
          v85 = v13;
          v87 = v46;
          if ( (a3 & 7) != 0 )
          {
            memmove(&v85, v82, 9u);
            LOBYTE(v85) = ((unsigned __int8)v85 << v81) | ((int)BYTE1(v85) >> v77);
            BYTE1(v85) = (BYTE1(v85) << v81) | ((int)BYTE2(v85) >> v77);
            BYTE2(v85) = (BYTE2(v85) << v81) | ((int)HIBYTE(v85) >> v77);
            HIBYTE(v85) = (HIBYTE(v85) << v81) | ((int)(unsigned __int8)v86 >> v77);
            v47 = (int)BYTE1(v86) >> v77;
            BYTE1(v86) = (BYTE1(v86) << v81) | ((int)BYTE2(v86) >> v77);
            LOBYTE(v86) = ((unsigned __int8)v86 << v81) | v47;
            BYTE2(v86) = (BYTE2(v86) << v81) | ((int)HIBYTE(v86) >> v77);
            HIBYTE(v86) = ((int)(unsigned __int8)v87 >> v77) | (HIBYTE(v86) << v81);
          }
          else
          {
            memmove(&v85, v82, 8u);
          }
          v13 = v85;
          v14 = v86;
        }
        v48 = v38 ^ v84;
        v49 = v46 ^ v83;
        v50 = v74 + v12;
        switch ( v12 )
        {
          case 1u:
            v53 = v74 + v12;
            goto LABEL_55;
          case 2u:
            goto LABEL_54;
          case 3u:
            v52 = v74 + v12;
            goto LABEL_53;
          case 4u:
            goto LABEL_52;
          case 5u:
            v51 = v74 + v12;
            goto LABEL_51;
          case 6u:
            goto LABEL_50;
          case 7u:
            goto LABEL_49;
          case 8u:
            *(_BYTE *)--v50 = HIBYTE(v48);
LABEL_49:
            *(_BYTE *)--v50 = BYTE2(v48);
LABEL_50:
            v51 = v50 - 1;
            *(_BYTE *)(v50 - 1) = BYTE1(v48);
LABEL_51:
            v50 = v51 - 1;
            *(_BYTE *)(v51 - 1) = v48;
LABEL_52:
            v52 = v50 - 1;
            *(_BYTE *)(v50 - 1) = HIBYTE(v49);
LABEL_53:
            v50 = v52 - 1;
            *(_BYTE *)(v52 - 1) = BYTE2(v49);
LABEL_54:
            v53 = v50 - 1;
            *(_BYTE *)(v50 - 1) = BYTE1(v49);
LABEL_55:
            v50 = v53 - 1;
            *(_BYTE *)(v53 - 1) = v49;
            break;
          default:
            break;
        }
        v54 = v12 > v30;
        v74 = v50 + v12;
        v30 -= v12;
      }
      while ( !v54 );
    }
    result = (char *)HIBYTE(v13);
    *(_BYTE *)a8 = v13;
    *(_BYTE *)(a8 + 4) = v14;
    *(_BYTE *)(a8 + 1) = BYTE1(v13);
    *(_BYTE *)(a8 + 2) = BYTE2(v13);
    *(_BYTE *)(a8 + 3) = HIBYTE(v13);
    *(_BYTE *)(a8 + 5) = BYTE1(v14);
    *(_BYTE *)(a8 + 6) = BYTE2(v14);
    *(_BYTE *)(a8 + 7) = HIBYTE(v14);
  }
  return result;
}
