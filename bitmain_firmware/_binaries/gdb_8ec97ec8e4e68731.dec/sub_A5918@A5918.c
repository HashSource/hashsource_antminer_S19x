int __fastcall sub_A5918(int *a1, int *a2, int a3, int a4)
{
  int v5; // r10
  int v7; // r12
  char *v8; // r9
  int v9; // r0
  int v10; // r3
  int *v11; // r8
  int *v12; // r7
  int v13; // r4
  int v14; // r0
  int v15; // r3
  int *v16; // r4
  int v17; // r7
  int v18; // r9
  int v19; // r3
  int v20; // r4
  int v22; // r4
  int v23; // r0
  int v24; // r0
  int v25; // r2
  int v26; // r0
  int v27; // r7
  unsigned int v28; // r3
  unsigned int v29; // r2
  int v30; // r0
  int v31; // r4
  int v32; // r4
  int v33; // r3
  int v34; // r6
  int v35; // r9
  int v36; // r0
  _DWORD *v37; // r3
  int v38; // r2
  int v39; // r3
  int v40; // r7
  unsigned int v41; // r3
  unsigned int v42; // r2
  bool v43; // cc
  int v44; // r3
  int v45; // r0
  int v46; // r3
  _DWORD *v47; // r7
  int v48; // r3
  int v49; // r8
  char **v50; // r3
  _DWORD *v51; // lr
  unsigned int v52; // r2
  int v53; // r2
  char **v54; // r12
  int v55; // r1
  bool v56; // zf
  char **v57; // r1
  char *v58; // r0
  char *v59; // r1
  int v60; // r4
  const char **v61; // r4
  const char *v62; // r1
  char **v63; // r3
  _BOOL4 v64; // r0
  const char *v65; // r1
  char **v66; // r3
  char **v67; // r2
  const char *v68; // r12
  const char *v69; // r0
  const char *v70; // r2
  int v71; // r12
  char *v72; // r12
  int v73; // r0
  const char *v74; // r2
  int v75; // r0
  int v76; // r0
  const char **v77; // r0
  const char *v78; // r1
  const char **v79; // r0
  const char *v80; // r1
  int v81; // [sp+0h] [bp-64h] BYREF
  char *v82; // [sp+4h] [bp-60h]
  _DWORD v83[4]; // [sp+8h] [bp-5Ch] BYREF
  int v84; // [sp+18h] [bp-4Ch] BYREF
  int v85; // [sp+1Ch] [bp-48h]
  int v86; // [sp+20h] [bp-44h]
  int v87; // [sp+24h] [bp-40h]
  const char *v88; // [sp+28h] [bp-3Ch]
  void *v89; // [sp+2Ch] [bp-38h]
  int v90; // [sp+34h] [bp-30h] BYREF
  int v91; // [sp+38h] [bp-2Ch] BYREF
  char **v92[2]; // [sp+3Ch] [bp-28h] BYREF

  v5 = *a2;
  v7 = *a1;
  v86 = a3;
  v85 = a4;
  v8 = *(char **)(v7 + 16 * (v5 + 1));
  v89 = sub_9253C((int)nullsub_39, 0);
  v9 = *a1;
  v88 = v8 - 1;
  v90 = 0;
  switch ( (unsigned int)v8 )
  {
    case 1u:
    case 2u:
    case 3u:
    case 4u:
    case 5u:
    case 6u:
    case 9u:
    case 0xAu:
    case 0xBu:
    case 0xCu:
    case 0xDu:
    case 0xEu:
    case 0xFu:
    case 0x10u:
    case 0x11u:
    case 0x12u:
    case 0x13u:
    case 0x14u:
    case 0x16u:
    case 0x17u:
    case 0x18u:
    case 0x21u:
      v44 = *a2;
      v11 = &v81;
      v90 = 2;
      *a2 = v44 + 1;
      goto LABEL_3;
    case 0x15u:
      ++*a2;
      v45 = sub_A5918(a1, a2, 0);
      if ( v45 )
        sub_26BC70(v45);
      goto LABEL_32;
    case 0x24u:
      v46 = *a2;
      v11 = &v81;
      v90 = 3;
      *a2 = v46 + 1;
      goto LABEL_3;
    case 0x26u:
    case 0x27u:
    case 0x28u:
    case 0x2Au:
      v11 = v83;
      v16 = v83;
      *a2 += 4;
      goto LABEL_6;
    case 0x2Bu:
    case 0x2Du:
    case 0x4Fu:
    case 0x58u:
      v11 = v83;
      v16 = v83;
      *a2 += 3;
      goto LABEL_6;
    case 0x2Cu:
      v27 = v9 + 16 * v5;
      v28 = *(_DWORD *)(v27 + 32);
      v29 = *(_DWORD *)(v27 + 36);
      v30 = *a2 + 4;
      v83[0] = 0;
      *a2 = v30 + (__int64)(__PAIR64__(v29, v28) + 16) / 16;
LABEL_20:
      sub_92620(v89);
      return 0;
    case 0x2Eu:
      v31 = v5 + 3;
      v87 = 16 * v5;
      v47 = (_DWORD *)(v9 + 16 * v5);
      v48 = *a2;
      if ( v47[16] != 40 || (*(_BYTE *)(v47[24] + 32) & 7) != 0 )
      {
        *a2 = v48 + 3;
        sub_A5918(a1, a2, 0);
      }
      else
      {
        *a2 = v48 + 7;
      }
      v90 = sub_26725C(v47[8], v47[9]);
      v11 = &v84;
      if ( v90 > 0 )
        goto LABEL_3;
      v17 = *a1;
      v84 = 0;
LABEL_22:
      if ( *(_DWORD *)(v17 + 16 * (v31 + 1)) != 40 )
        goto LABEL_11;
      v32 = v17 + v87;
      v33 = *(_DWORD *)(v17 + v87 + 96);
      v34 = *(_BYTE *)(v33 + 32) & 7;
      if ( (*(_BYTE *)(v33 + 32) & 7) != 0 )
        goto LABEL_11;
      v35 = sub_A5400(*(char **)v33, *(_DWORD *)(v32 + 80), (char *)1, v92);
      sub_9253C((int)sub_9AD58, (int)v92[0]);
      if ( v35 == 1 )
        goto LABEL_27;
      v36 = sub_A1F68((const char *)v92[0], v35, v11, v90, **(const char ***)(v32 + 96), v85);
      if ( v36 < 0 )
      {
        v77 = *(const char ***)(v32 + 96);
        if ( !dword_46D448 )
        {
LABEL_119:
          v78 = *v77;
          goto LABEL_120;
        }
LABEL_126:
        v78 = (const char *)sub_21B3C4(v77);
LABEL_120:
        sub_946E0("Could not find a match for %s", v78);
      }
      v34 = 8 * v36;
LABEL_27:
      v37 = (char **)((char *)v92[0] + v34);
      v56 = dword_487CE0 == 0;
      *(_DWORD *)(v32 + 80) = *(char **)((char *)v92[0] + v34 + 4);
      *(_DWORD *)(v32 + 96) = *v37;
      if ( !v56 )
      {
        if ( !sub_C2360(v37[1]) )
          goto LABEL_11;
        v37 = (char **)((char *)v92[0] + v34);
      }
      dword_487CE0 = v37[1];
LABEL_11:
      *a2 = v5;
      sub_92620(v89);
      if ( *(_DWORD *)(v17 + v87 + 16) == 42 )
        return sub_14D68C(2, *(_DWORD *)(v17 + v87 + 32), *(_DWORD *)(v17 + v87 + 48));
      else
        return sub_14C9EC(0, v17, a2, 2);
    case 0x32u:
      v17 = v9;
      v83[0] = 0;
      v87 = 16 * v5;
      goto LABEL_11;
    case 0x34u:
    case 0x38u:
      v10 = *a2;
      v11 = v83;
      v90 = 1;
      *a2 = v10 + 3;
      goto LABEL_3;
    case 0x3Au:
    case 0x3Bu:
    case 0x3Du:
    case 0x44u:
    case 0x48u:
      v39 = *a2;
      v90 = 1;
      v11 = v83;
      *a2 = v39 + 1;
      goto LABEL_3;
    case 0x3Eu:
      ++*a2;
      sub_A5918(a1, a2, 0);
      v38 = v90;
      goto LABEL_33;
    case 0x51u:
      v40 = v9 + 16 * v5;
      v41 = *(_DWORD *)(v40 + 32);
      v42 = *(_DWORD *)(v40 + 36);
      v11 = v83;
      v90 = 1;
      *a2 += 4 + (__int64)(__PAIR64__(v42, v41) + 16) / 16;
      goto LABEL_3;
    case 0x59u:
    case 0x62u:
    case 0x63u:
    case 0x64u:
    case 0x65u:
    case 0x66u:
    case 0x68u:
    case 0x69u:
    case 0x6Au:
    case 0x6Bu:
    case 0x6Cu:
    case 0x6Du:
    case 0x6Eu:
    case 0x70u:
    case 0x71u:
    case 0x72u:
    case 0x73u:
    case 0x74u:
    case 0x75u:
      sub_9B138(v9, v5, &v91, &v90);
      v43 = v90 <= 0;
      *a2 += v91;
      v11 = &v84;
      if ( !v43 )
        goto LABEL_3;
      v9 = *a1;
      v16 = &v84;
      goto LABEL_6;
    case 0x6Fu:
      *a2 += 3;
      sub_171258(*(_DWORD *)(v9 + 16 * (v5 + 2)));
LABEL_32:
      sub_A5918(a1, a2, 1);
      v38 = v90;
LABEL_33:
      v11 = v83;
      if ( v38 <= 0 )
      {
        v17 = *a1;
        v83[0] = 0;
LABEL_35:
        v87 = 16 * v5;
        goto LABEL_11;
      }
LABEL_3:
      v12 = v11 - 1;
      v13 = 0;
      do
      {
        v14 = sub_A5918(a1, a2, 1);
        v15 = v90;
        ++v13;
        v12[1] = v14;
        ++v12;
      }
      while ( v15 > v13 );
      v9 = *a1;
      v16 = &v11[v13];
LABEL_6:
      *v16 = 0;
      v17 = v9;
      switch ( (unsigned int)v88 )
      {
        case 0u:
        case 1u:
        case 2u:
        case 3u:
        case 4u:
        case 5u:
        case 0xAu:
        case 0xBu:
        case 0xCu:
        case 0xDu:
        case 0xEu:
        case 0xFu:
        case 0x10u:
        case 0x11u:
        case 0x12u:
        case 0x17u:
        case 0x20u:
        case 0x39u:
        case 0x3Au:
        case 0x43u:
        case 0x47u:
          v22 = *v11;
          if ( *v11 )
          {
            v23 = sub_26BC70(*v11);
            v22 = sub_A0870(v23);
            v24 = v11[1];
            if ( !v24 )
            {
              v25 = 0;
              goto LABEL_17;
            }
          }
          else
          {
            v24 = v11[1];
            if ( !v24 )
              goto LABEL_35;
          }
          v26 = sub_26BC70(v24);
          v25 = sub_A0870(v26);
LABEL_17:
          if ( !v22 )
            goto LABEL_35;
          switch ( (unsigned int)v88 )
          {
            case 0u:
            case 1u:
            case 2u:
            case 3u:
              v88 = (const char *)v25;
              if ( !sub_9A37C(v22) )
                goto LABEL_88;
              v64 = sub_9A37C((int)v88) == 0;
              break;
            case 4u:
            case 5u:
            case 0xAu:
            case 0xBu:
            case 0xCu:
              v88 = (const char *)v25;
              v75 = sub_9A3D8(v22);
              v74 = v88;
              if ( v75 )
                goto LABEL_103;
              goto LABEL_88;
            case 0xDu:
            case 0xEu:
            case 0xFu:
            case 0x10u:
            case 0x11u:
            case 0x12u:
              switch ( **(_BYTE **)(v22 + 24) )
              {
                case 5:
                case 8:
                case 9:
                case 0xC:
                  if ( v25 )
                  {
                    switch ( **(_BYTE **)(v25 + 24) )
                    {
                      case 5:
                      case 8:
                      case 9:
                      case 0xC:
                        goto LABEL_35;
                      default:
                        goto LABEL_88;
                    }
                  }
                  break;
                default:
                  goto LABEL_88;
              }
              goto LABEL_88;
            case 0x17u:
              v88 = (const char *)v25;
              v73 = sub_9A37C(v22);
              v74 = v88;
              if ( !v73 )
                goto LABEL_89;
LABEL_103:
              v64 = sub_9A3D8((int)v74) == 0;
              break;
            case 0x20u:
              v88 = (const char *)v25;
              if ( !sub_A1DB4(v22) )
                goto LABEL_89;
              v64 = !sub_A1DB4((int)v88);
              break;
            case 0x39u:
            case 0x3Au:
            case 0x43u:
            case 0x47u:
              v64 = sub_9A37C(v22) == 0;
              break;
            default:
              goto LABEL_35;
          }
          if ( !v64 )
            goto LABEL_35;
LABEL_88:
          if ( v8 == (char *)1 )
          {
            v88 = (const char *)sub_A5400("\"+\"", 0, (char *)1, v92);
            sub_9253C((int)sub_9AD58, (int)v92[0]);
            v70 = "\"+\"";
            v69 = (const char *)v92[0];
            v66 = (char **)v90;
          }
          else
          {
LABEL_89:
            v65 = "Osubtract";
            v66 = off_374070;
            v67 = 0;
            while ( 1 )
            {
              v67 = (char **)((char *)v67 + 1);
              if ( !v65 )
LABEL_117:
                sub_946E0("Could not find operator name for opcode", v65, v67, v66);
              v66 += 3;
              if ( v8 == v66[2] )
                break;
              v65 = v66[3];
            }
            v88 = (const char *)sub_A5400(*(char **)&asc_373FF8[12 * (_DWORD)v67 + 124], 0, (char *)1, v92);
            sub_9253C((int)sub_9AD58, (int)v92[0]);
            v68 = "Osubtract";
            v67 = off_374070;
            v69 = (const char *)v92[0];
            v66 = (char **)v90;
            v65 = 0;
            while ( 1 )
            {
              ++v65;
              if ( !v68 )
                goto LABEL_117;
              v67 += 3;
              if ( v8 == v67[2] )
                break;
              v68 = v67[3];
            }
            v70 = *(const char **)&asc_373FF8[12 * (_DWORD)v65 + 124];
          }
          v71 = sub_A1F68(v69, (int)v88, v11, (int)v66, v70, 0);
          if ( v71 < 0 )
            goto LABEL_35;
          v82 = v92[0][2 * v71 + 1];
          v72 = v92[0][2 * v71];
          v87 = 16 * v5;
          sub_9BE18((int)a1, v5, v90, 1, (int)v72, (int)v82);
          v17 = *a1;
          goto LABEL_11;
        case 0x27u:
          v18 = v9 + 16 * v5;
          v87 = 16 * v5;
          v19 = *(_DWORD *)(v18 + 48);
          v20 = *(_BYTE *)(v19 + 32) & 7;
          if ( (*(_BYTE *)(v19 + 32) & 7) != 0 )
            goto LABEL_8;
          v49 = sub_A5400(*(char **)v19, *(_DWORD *)(v18 + 32), (char *)1, v92);
          sub_9253C((int)sub_9AD58, (int)v92[0]);
          if ( v49 <= 1 )
            goto LABEL_73;
          v50 = v92[0];
          v51 = off_46DBB8;
          break;
        case 0x2Bu:
        case 0x57u:
          goto LABEL_20;
        case 0x2Du:
          v31 = v5 + 3;
          v87 = 16 * v5;
          goto LABEL_22;
        default:
          goto LABEL_35;
      }
      while ( 1 )
      {
        v52 = *((_DWORD *)off_46DBB8 + 4 * (*((unsigned __int8 *)v92[0][2 * v20] + 32) >> 3));
        if ( v52 >= 3 && (v52 <= 7 || v52 == 14) )
          break;
        if ( v49 == ++v20 )
          goto LABEL_76;
      }
      if ( v49 <= v20 )
        goto LABEL_76;
      v53 = 0;
      do
      {
        v54 = &v50[2 * v53];
        v55 = v51[4 * ((unsigned __int8)(*v54)[32] >> 3)];
        v56 = v55 == 8;
        if ( v55 == 8 )
          v55 = v49 + 0x1FFFFFFF;
        else
          ++v53;
        if ( v56 )
        {
          v57 = &v50[2 * v55];
          --v49;
          v58 = *v57;
          v59 = v57[1];
          *v54 = v58;
          v54[1] = v59;
        }
      }
      while ( v53 < v49 );
LABEL_73:
      if ( !v49 )
      {
        v79 = *(const char ***)(v18 + 48);
        if ( dword_46D448 )
          v80 = (const char *)sub_21B3C4(v79);
        else
          v80 = *v79;
        sub_946E0("No definition found for %s", v80);
      }
      if ( v49 == 1 )
      {
        v60 = 0;
      }
      else
      {
LABEL_76:
        v61 = *(const char ***)(v18 + 48);
        if ( v86 && (v88 = (const char *)v92[0], !sub_9A42C((int)v92[0], v49)) )
        {
          v76 = sub_A1F68(v88, v49, 0, 0, *v61, v85);
          if ( v76 < 0 )
          {
            v77 = *(const char ***)(v18 + 48);
            if ( !dword_46D448 )
              goto LABEL_119;
            goto LABEL_126;
          }
          v60 = 2 * v76;
        }
        else
        {
          if ( dword_46D448 )
            v62 = (const char *)sub_21B3C4(v61);
          else
            v62 = *v61;
          v60 = 0;
          sub_259F10("Multiple matches for %s\n", v62);
          sub_9F75C((const char *)v92[0], v49, 1);
        }
      }
      v63 = &v92[0][v60];
      v56 = dword_487CE0 == 0;
      *(_DWORD *)(v18 + 32) = v92[0][v60 + 1];
      *(_DWORD *)(v18 + 48) = *v63;
      if ( v56 )
        goto LABEL_85;
      if ( sub_C2360(v63[1]) )
      {
        v63 = &v92[0][v60];
LABEL_85:
        dword_487CE0 = (int)v63[1];
      }
LABEL_8:
      if ( v86 && **(_BYTE **)(*(_DWORD *)(*(_DWORD *)(v18 + 48) + 24) + 24) == 7 )
      {
        sub_9BE18((int)a1, v5, 0, 0, *(_DWORD *)(v18 + 48), *(_DWORD *)(v18 + 32));
        v17 = *a1;
      }
      goto LABEL_11;
    default:
      sub_946E0("Unexpected operator during name resolution");
  }
}
