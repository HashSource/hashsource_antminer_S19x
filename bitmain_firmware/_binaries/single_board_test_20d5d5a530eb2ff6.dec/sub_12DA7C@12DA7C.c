bool __fastcall sub_12DA7C(int a1, int *a2, int a3, int *a4, int *a5)
{
  int *v5; // r10
  _DWORD *v7; // r1
  int v9; // r2
  int v10; // r3
  const char *v11; // r6
  const char *v12; // r7
  int v13; // r4
  const char *v14; // r3
  int v15; // r6
  int v16; // r9
  signed int v17; // r5
  _DWORD *v18; // r11
  int v19; // r0
  unsigned __int8 *v20; // r4
  _DWORD *v21; // r7
  const char *v22; // r3
  int (__fastcall *v24)(int, unsigned int **, unsigned __int8 *, int, int *); // r7
  int (__fastcall *v25)(int, unsigned int **, int, char *, int *); // r4
  int v26; // r0
  int v27; // r0
  int v28; // r0
  _DWORD *v29; // r7
  int v30; // r8
  int v31; // r0
  _DWORD *v32; // r0
  _DWORD *v33; // r11
  int v34; // r3
  unsigned int v35; // r9
  unsigned int *v36; // r8
  int v37; // r3
  int *v38; // r7
  unsigned __int8 *v39; // r8
  int v40; // r9
  int v41; // r4
  int v42; // r0
  const char *v43; // r1
  int (__fastcall *v44)(int, int *, unsigned __int8 *, int, int *); // r6
  int v45; // r3
  const char *v46; // r1
  const char *v47; // r1
  int v48; // r3
  int (__fastcall *v49)(int, int *, int, char *, int *); // r7
  int v50; // r0
  int v51; // r0
  bool v52; // zf
  int v53; // r0
  _DWORD *v54; // r6
  int v55; // r7
  int v56; // r0
  _DWORD *v57; // r0
  _DWORD *v58; // r10
  int v59; // r7
  char *v60; // r0
  char *v61; // r4
  const char *v62; // r0
  char *v63; // r7
  _BOOL4 v64; // r4
  int v65; // r3
  unsigned int v66; // r7
  unsigned int *v67; // r6
  int v68; // r3
  int v69; // r4
  int v70; // r0
  const char *v71; // r0
  int v72; // r5
  int v73; // r5
  char *v74; // r0
  char *v75; // r6
  const char *v76; // r0
  char *v77; // r6
  int v78; // r3
  const char *v79; // r1
  int v80; // [sp+Ch] [bp-90h]
  int (__fastcall *v81)(int, int *, unsigned __int8 *, int *); // [sp+Ch] [bp-90h]
  int (__fastcall *v84)(int, unsigned int **, unsigned __int8 *, int *); // [sp+18h] [bp-84h]
  _DWORD *v85; // [sp+24h] [bp-78h]
  int *v86; // [sp+34h] [bp-68h] BYREF
  unsigned int *v87; // [sp+38h] [bp-64h] BYREF
  int v88; // [sp+3Ch] [bp-60h] BYREF
  int v89; // [sp+40h] [bp-5Ch]
  int *v90; // [sp+44h] [bp-58h]
  char v91[84]; // [sp+48h] [bp-54h] BYREF

  v5 = a5;
  v7 = a4;
  v9 = *a4;
  v10 = *a5;
  v11 = (const char *)(*a5 & 0x80);
  if ( v11 )
  {
    v7 = (_DWORD *)v7[4];
    v11 = (const char *)v7[6];
  }
  v12 = (const char *)(v10 << 25);
  if ( (v10 & 0x40) != 0 )
    v12 = 0;
  else
    v7 = a4;
  if ( (v10 & 0x40) == 0 )
    v12 = (const char *)v7[3];
  if ( (v9 & 0x1000) != 0 )
  {
    v86 = a2;
    a2 = (int *)&v86;
  }
  v13 = v9 & 6;
  if ( (v9 & 6) != 0 )
  {
    if ( v12 )
    {
      if ( (v10 & 4) != 0 )
      {
        if ( (v9 & 2) != 0 )
          v14 = "SET";
        else
          v14 = "SEQUENCE";
        if ( sub_B550C(a1, "%*s%s OF %s {\n", a3, &byte_1A4198, v14, (const char *)a4[3]) <= 0 )
          return 0;
      }
      else if ( sub_B550C(a1, "%*s%s:\n", a3, &byte_1A4198, v12) <= 0 )
      {
        return 0;
      }
    }
    v15 = a1;
    v16 = *a2;
    v17 = 0;
    v18 = (_DWORD *)v16;
    if ( sub_10C010(v16) > 0 )
    {
      while ( 1 )
      {
        if ( v17 > 0 && sub_B6C30(v15, (int)"\n") <= 0 )
          return 0;
        v19 = sub_10C01C(v18, v17);
        v87 = (unsigned int *)v19;
        v20 = (unsigned __int8 *)a4[4];
        v21 = (_DWORD *)*((_DWORD *)v20 + 4);
        v80 = a3 + 2;
        if ( v21 )
        {
          v84 = (int (__fastcall *)(int, unsigned int **, unsigned __int8 *, int *))v21[4];
          if ( v84 )
          {
            v88 = v15;
            v90 = a5;
            v89 = a3 + 2;
          }
        }
        else
        {
          v84 = 0;
        }
        if ( !*v20 )
          break;
        if ( !v19 )
          goto LABEL_25;
        switch ( *v20 )
        {
          case 1u:
          case 6u:
            if ( !v84 )
              goto LABEL_58;
            v28 = v84(8, &v87, v20, &v88);
            if ( !v28 )
              return 0;
            if ( v28 == 2 )
              goto LABEL_27;
LABEL_58:
            v29 = (_DWORD *)*((_DWORD *)v20 + 2);
            if ( *((int *)v20 + 3) <= 0 )
              goto LABEL_91;
            v30 = 0;
            v85 = v18;
            do
            {
              ++v30;
              v32 = sub_B27AC(&v87, v29, (_DWORD *)1);
              v29 += 5;
              v33 = v32;
              if ( v32 )
              {
                v31 = sub_B27A4(&v87, (int)v32);
                if ( sub_12DA7C(v15, v31, a3 + 4, v33, a5) )
                  continue;
              }
              return 0;
            }
            while ( v30 < *((_DWORD *)v20 + 3) );
            v18 = v85;
LABEL_91:
            if ( ((*a5 & 2) == 0 || sub_B550C(v15, "%*s}\n", v80, &byte_1A4198) >= 0)
              && (!v84 || v84(9, &v87, v20, &v88)) )
            {
              goto LABEL_27;
            }
            return 0;
          case 2u:
            v27 = sub_B2598(&v87, (int)v20);
            if ( v27 >= 0 && v27 < *((_DWORD *)v20 + 3) )
            {
              v41 = *((_DWORD *)v20 + 2) + 20 * v27;
              v42 = sub_B27A4(&v87, v41);
              if ( !sub_12DA7C(v15, v42, v80, v41, a5) )
                return 0;
              ++v17;
            }
            else
            {
              if ( sub_B550C(v15, "ERROR: selector [%d] invalid\n", v27) <= 0 )
                return 0;
              ++v17;
            }
            break;
          case 4u:
            if ( v21 )
            {
              v25 = (int (__fastcall *)(int, unsigned int **, int, char *, int *))v21[6];
              if ( v25 )
              {
                v26 = v25(v15, &v87, v80, &byte_1A4198, a5);
                if ( !v26 || v26 == 2 && sub_B6C30(v15, (int)"\n") <= 0 )
                  return 0;
              }
            }
            goto LABEL_27;
          case 5u:
            goto LABEL_40;
          default:
            sub_B550C(v15, "Unprocessed type %d\n", *v20);
            return 0;
        }
LABEL_28:
        if ( v17 >= sub_10C010((int)v18) )
          goto LABEL_29;
      }
      if ( *((_DWORD *)v20 + 1) != 1 && !v19 )
      {
LABEL_25:
        if ( (*a5 & 1) != 0 && sub_B6C30(v15, (int)"<ABSENT>\n") <= 0 )
          return 0;
LABEL_27:
        ++v17;
        goto LABEL_28;
      }
      v34 = *((_DWORD *)v20 + 2);
      if ( v34 )
      {
        if ( !sub_12DA7C(v15, &v87, v80, v34, a5) )
          return 0;
        ++v17;
        goto LABEL_28;
      }
LABEL_40:
      if ( !sub_12D9A4(v15, v80, 0, 0, a5) )
        return 0;
      if ( v21 )
      {
        v24 = (int (__fastcall *)(int, unsigned int **, unsigned __int8 *, int, int *))v21[7];
        if ( v24 )
        {
          if ( !v24(v15, &v87, v20, v80, a5) )
            return 0;
          ++v17;
          goto LABEL_28;
        }
      }
      if ( *v20 == 5 )
      {
        v36 = v87;
        v35 = v87[1] & 0xFFFFFEFF;
      }
      else
      {
        v35 = *((_DWORD *)v20 + 1);
        if ( v35 == 1 )
        {
          if ( (*a5 & 8) != 0 )
          {
            v47 = sub_12C9C0(*((_DWORD *)v20 + 1));
            if ( v47 )
            {
              if ( sub_B6C30(v15, (int)v47) <= 0 || sub_B6C30(v15, (int)&word_1B5258) <= 0 )
                return 0;
            }
          }
          v38 = (int *)&v87;
LABEL_116:
          v45 = *v38;
          if ( *v38 != -1 || (v45 = *((_DWORD *)v20 + 5), v46 = "BOOL ABSENT", v45 != -1) )
          {
            if ( v45 )
              v46 = "TRUE";
            else
              v46 = "FALSE";
          }
          if ( sub_B6C30(v15, (int)v46) <= 0 )
            return 0;
LABEL_120:
          if ( sub_B6C30(v15, (int)"\n") <= 0 )
            return 0;
          goto LABEL_27;
        }
        v36 = v87;
      }
      v37 = *a5;
      if ( v35 == -4 )
      {
        v38 = (int *)(v36 + 1);
        v35 = *v36;
        v36 = (unsigned int *)v36[1];
        if ( (v37 & 0x10) != 0 )
        {
LABEL_75:
          if ( v35 != 5 )
            goto LABEL_103;
LABEL_76:
          if ( sub_B6C30(v15, (int)"NULL\n") <= 0 )
            return 0;
          ++v17;
          goto LABEL_28;
        }
        v43 = sub_12C9C0(v35);
      }
      else
      {
        if ( (v37 & 8) == 0 )
        {
          v38 = (int *)&v87;
          goto LABEL_75;
        }
        v38 = (int *)&v87;
        v43 = sub_12C9C0(v35);
      }
      if ( v35 != 5 )
      {
        if ( !v43 || sub_B6C30(v15, (int)v43) > 0 && sub_B6C30(v15, (int)&word_1B5258) > 0 )
        {
LABEL_103:
          switch ( v35 )
          {
            case 0xFFFFFFFD:
            case 0x10u:
            case 0x11u:
              if ( sub_B6C30(v15, (int)"\n") <= 0 || sub_12D234(v15, (unsigned __int8 *)v36[2], *v36, v80, 0) <= 0 )
                return 0;
              goto LABEL_27;
            case 1u:
              goto LABEL_116;
            case 2u:
            case 0xAu:
              v62 = sub_122434(0, (int)v36);
              v63 = (char *)v62;
              if ( !v62 )
                return 0;
              v64 = sub_B6C30(v15, (int)v62) > 0;
              CRYPTO_free(v63);
              if ( !v64 )
                return 0;
              goto LABEL_120;
            case 3u:
            case 4u:
              if ( v36[1] == 3 )
              {
                if ( sub_B550C(v15, " (%ld unused bits)\n", v36[3] & 7) <= 0 )
                  return 0;
              }
              else if ( sub_B6C30(v15, (int)"\n") <= 0 )
              {
                return 0;
              }
              if ( (int)*v36 > 0 && sub_12F2E8(v15, v36[2], *v36, a3 + 4) <= 0 )
                return 0;
              goto LABEL_27;
            case 6u:
              v59 = *v38;
              v60 = sub_EAC84(v59);
              v61 = sub_EAB40((unsigned int)v60);
              if ( !v61 )
                v61 = &byte_1A4198;
              sub_EACFC(v91, 80, v59, 1);
              if ( sub_B550C(v15, "%s (%s)", v61, v91) <= 0 )
                return 0;
              goto LABEL_120;
            case 0x17u:
              if ( !sub_12B604(v15, (int *)v36) )
                return 0;
              goto LABEL_120;
            case 0x18u:
              if ( !sub_12614C(v15, (int)v36) )
                return 0;
              goto LABEL_120;
            default:
              if ( !sub_12A704(v15, (int *)v36, a5[4]) )
                return 0;
              goto LABEL_120;
          }
        }
        return 0;
      }
      goto LABEL_76;
    }
LABEL_29:
    if ( v17 || (!v18 ? (v22 = "ABSENT") : (v22 = "EMPTY"), sub_B550C(v15, "%*s<%s>\n", a3 + 2, &byte_1A4198, v22) > 0) )
    {
      if ( (*a5 & 2) == 0 )
        return 1;
      return sub_B550C(v15, "%*s}\n", a3, &byte_1A4198) > 0;
    }
    return 0;
  }
  v39 = (unsigned __int8 *)a4[4];
  v40 = *((_DWORD *)v39 + 4);
  if ( v40 )
  {
    v81 = *(int (__fastcall **)(int, int *, unsigned __int8 *, int *))(v40 + 16);
    if ( v81 )
    {
      v88 = a1;
      v90 = a5;
      v89 = a3;
    }
  }
  else
  {
    v81 = 0;
  }
  if ( *v39 )
  {
    if ( *a2 )
    {
      switch ( *v39 )
      {
        case 1u:
        case 6u:
          if ( !sub_12D9A4(a1, a3, (int)v12, v11, a5) )
            return v13;
          v52 = v11 == 0;
          if ( !v11 )
            v52 = v12 == 0;
          if ( v52 )
            goto LABEL_141;
          if ( (*a5 & 2) != 0 )
          {
            if ( sub_B6C30(a1, (int)" {\n") <= 0 )
              return v13;
          }
          else if ( sub_B6C30(a1, (int)"\n") <= 0 )
          {
            return v13;
          }
LABEL_141:
          if ( v81 )
          {
            v53 = v81(8, a2, v39, &v88);
            if ( !v53 )
              return v13;
            if ( v53 == 2 )
              return 1;
          }
          v54 = (_DWORD *)*((_DWORD *)v39 + 2);
          if ( *((int *)v39 + 3) > 0 )
          {
            v55 = 0;
            do
            {
              ++v55;
              v57 = sub_B27AC(a2, v54, (_DWORD *)1);
              v54 += 5;
              v58 = v57;
              if ( v57 )
              {
                v56 = sub_B27A4(a2, (int)v57);
                if ( sub_12DA7C(a1, v56, a3 + 2, v58, a5) )
                  continue;
              }
              return 0;
            }
            while ( v55 < *((_DWORD *)v39 + 3) );
            v5 = a5;
            v13 = 0;
          }
          if ( (*v5 & 2) != 0 && sub_B550C(a1, "%*s}\n", a3, &byte_1A4198) < 0 )
            return v13;
          if ( !v81 )
            return 1;
          return v81(9, a2, v39, &v88) != 0;
        case 2u:
          v51 = sub_B2598(a2, (int)v39);
          if ( v51 < 0 || v51 >= *((_DWORD *)v39 + 3) )
            return sub_B550C(a1, "ERROR: selector [%d] invalid\n", v51) > 0;
          v69 = *((_DWORD *)v39 + 2) + 20 * v51;
          v70 = sub_B27A4(a2, v69);
          return sub_12DA7C(a1, v70, a3, v69, a5) != 0;
        case 4u:
          if ( !sub_12D9A4(a1, a3, (int)v12, v11, a5) )
            return v13;
          v48 = *((_DWORD *)v39 + 4);
          if ( v48 )
          {
            v49 = *(int (__fastcall **)(int, int *, int, char *, int *))(v48 + 24);
            if ( v49 )
            {
              v50 = v49(a1, a2, a3, &byte_1A4198, a5);
              if ( !v50 )
                return v13;
              if ( v50 == 2 )
                return sub_B6C30(a1, (int)"\n") > 0;
              return 1;
            }
          }
          if ( !v11 )
            return 1;
          v13 = sub_B550C(a1, ":EXTERNAL TYPE %s\n", v11) > 0;
          break;
        case 5u:
          goto LABEL_107;
        default:
          sub_B550C(a1, "Unprocessed type %d\n", *v39);
          return v13;
      }
      return v13;
    }
    goto LABEL_84;
  }
  if ( *((_DWORD *)v39 + 1) != 1 && !*a2 )
  {
LABEL_84:
    if ( (v10 & 1) == 0 )
      return 1;
    if ( sub_12D9A4(a1, a3, (int)v12, v11, a5) )
      return sub_B6C30(a1, (int)"<ABSENT>\n") > 0;
    return v13;
  }
  v65 = *((_DWORD *)v39 + 2);
  if ( v65 )
    return sub_12DA7C(a1, a2, a3, v65, a5) != 0;
LABEL_107:
  if ( sub_12D9A4(a1, a3, (int)v12, v11, a5) )
  {
    if ( v40 )
    {
      v44 = *(int (__fastcall **)(int, int *, unsigned __int8 *, int, int *))(v40 + 28);
      if ( v44 )
        return v44(a1, a2, v39, a3, a5) != 0;
    }
    if ( *v39 == 5 )
    {
      v67 = (unsigned int *)*a2;
      v66 = *(_DWORD *)(*a2 + 4) & 0xFFFFFEFF;
    }
    else
    {
      v66 = *((_DWORD *)v39 + 1);
      if ( v66 == 1 )
      {
        if ( (*a5 & 8) == 0 )
        {
LABEL_227:
          v78 = *a2;
          if ( *a2 == -1 && (v78 = *((_DWORD *)v39 + 5), v78 == -1) )
          {
            v79 = "BOOL ABSENT";
          }
          else if ( v78 )
          {
            v79 = "TRUE";
          }
          else
          {
            v79 = "FALSE";
          }
          if ( sub_B6C30(a1, (int)v79) > 0 )
          {
LABEL_200:
            if ( sub_B6C30(a1, (int)"\n") > 0 )
              return 1;
          }
          return v13;
        }
        v67 = 0;
        goto LABEL_193;
      }
      v67 = (unsigned int *)*a2;
    }
    v68 = *a5;
    if ( v66 == -4 )
    {
      a2 = (int *)(v67 + 1);
      v66 = *v67;
      v67 = (unsigned int *)v67[1];
      if ( (v68 & 0x10) != 0 )
      {
LABEL_183:
        if ( v66 == 5 )
          goto LABEL_184;
        goto LABEL_197;
      }
    }
    else if ( (v68 & 8) == 0 )
    {
      goto LABEL_183;
    }
LABEL_193:
    v71 = sub_12C9C0(v66);
    if ( v66 == 5 )
    {
LABEL_184:
      if ( sub_B6C30(a1, (int)"NULL\n") > 0 )
        return 1;
      return v13;
    }
    if ( v71 && (sub_B6C30(a1, (int)v71) <= 0 || sub_B6C30(a1, (int)&word_1B5258) <= 0) )
      return v13;
LABEL_197:
    switch ( v66 )
    {
      case 0xFFFFFFFD:
      case 0x10u:
      case 0x11u:
        if ( sub_B6C30(a1, (int)"\n") <= 0 || sub_12D234(a1, (unsigned __int8 *)v67[2], *v67, a3, 0) <= 0 )
          return v13;
        return 1;
      case 1u:
        goto LABEL_227;
      case 2u:
      case 0xAu:
        v76 = sub_122434(0, (int)v67);
        v77 = (char *)v76;
        if ( !v76 )
          return v13;
        v72 = sub_B6C30(a1, (int)v76) > 0;
        CRYPTO_free(v77);
        goto LABEL_199;
      case 3u:
      case 4u:
        if ( v67[1] == 3 )
        {
          if ( sub_B550C(a1, " (%ld unused bits)\n", v67[3] & 7) <= 0 )
            return v13;
        }
        else if ( sub_B6C30(a1, (int)"\n") <= 0 )
        {
          return v13;
        }
        if ( (int)*v67 > 0 && sub_12F2E8(a1, v67[2], *v67, a3 + 2) <= 0 )
          return v13;
        return 1;
      case 6u:
        v73 = *a2;
        v74 = sub_EAC84(v73);
        v75 = sub_EAB40((unsigned int)v74);
        if ( !v75 )
          v75 = &byte_1A4198;
        sub_EACFC(v91, 80, v73, 1);
        v72 = sub_B550C(a1, "%s (%s)", v75, v91) > 0;
        goto LABEL_199;
      case 0x17u:
        v72 = sub_12B604(a1, (int *)v67);
        goto LABEL_199;
      case 0x18u:
        v72 = sub_12614C(a1, (int)v67);
        goto LABEL_199;
      default:
        v72 = sub_12A704(a1, (int *)v67, a5[4]);
LABEL_199:
        if ( v72 )
          goto LABEL_200;
        return v13;
    }
  }
  return v13;
}
