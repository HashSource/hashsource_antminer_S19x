_DWORD *__fastcall sub_319DD0(int a1)
{
  unsigned __int8 *v2; // r5
  int *v3; // r5
  _DWORD *v4; // r0
  int v5; // r2
  int v6; // r3
  int v7; // r3
  _DWORD *v8; // r5
  int v10; // r5
  int v11; // r0
  _BYTE *v12; // r3
  _DWORD *v13; // r0
  int v14; // r3
  int v15; // r5
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r1
  char **v22; // r2
  unsigned __int8 *v23; // r12
  int v24; // r3
  _DWORD *v25; // r0
  _BYTE *v26; // r3
  _DWORD *v27; // r5
  int v28; // r0
  _DWORD *v29; // r0
  _BYTE *v30; // r6
  int v31; // r3
  int v32; // r0
  int v33; // r0
  unsigned int v34; // r3
  bool v35; // cc
  int v36; // r1
  _DWORD *v37; // r0
  _BYTE *v38; // r3
  _BYTE *v39; // r1
  int v40; // r3
  unsigned __int8 *v41; // r2
  _DWORD *v42; // r5
  int v43; // r0
  int v44; // r5
  __int64 v45; // r2
  _DWORD *v46; // r5
  _BYTE *v47; // r3
  int v48; // r0
  int v49; // r3
  int v50; // r1
  int v51; // r12
  char **v52; // r0
  int v53; // r2
  int v54; // r3
  int v55; // r6
  unsigned int v56; // r3
  int v57; // r0
  int v58; // r3
  _BYTE *v59; // r2
  __int16 v60; // r3
  int v61; // r0
  _DWORD *v62; // r0
  int v63; // r0
  int v64; // r6
  int v65; // r8
  int v66; // r7
  int v67; // r5
  int v68; // r0
  __int64 v69; // r2
  int v70; // lr
  __int64 v71; // r2
  int v72; // r6
  int v73; // r0
  int v74; // [sp+4h] [bp-4h] BYREF

  v2 = *(unsigned __int8 **)(a1 + 12);
  if ( !sub_313E7C(v2) )
  {
    switch ( *v2 )
    {
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
      case 'N':
      case 'Z':
        v8 = (_DWORD *)sub_31C2F0(a1, 0);
        v74 = (int)v8;
        goto LABEL_19;
      case 'A':
        v39 = v2 + 1;
        *(_DWORD *)(a1 + 12) = v2 + 1;
        v40 = v2[1];
        if ( v40 == 95 )
        {
          v42 = 0;
LABEL_58:
          *(_DWORD *)(a1 + 12) = v39 + 1;
          v43 = sub_319DD0(a1);
          v8 = (_DWORD *)sub_313728((_DWORD *)a1, 42, __SPAIR64__(v43, (unsigned int)v42));
          v74 = (int)v8;
          goto LABEL_19;
        }
        if ( (unsigned int)(v40 - 48) > 9 )
        {
          v64 = *(_DWORD *)(a1 + 48);
          *(_DWORD *)(a1 + 48) = 1;
          v42 = (_DWORD *)sub_31BA00(a1);
          *(_DWORD *)(a1 + 48) = v64;
          if ( v42 )
            goto LABEL_57;
        }
        else
        {
          v41 = v2 + 1;
          do
            *(_DWORD *)(a1 + 12) = ++v41;
          while ( (unsigned int)*v41 - 48 <= 9 );
          v42 = sub_314104((_DWORD *)a1, (int)v39, v41 - v39);
          if ( v42 )
          {
LABEL_57:
            v39 = *(_BYTE **)(a1 + 12);
            if ( *v39 != 95 )
              return 0;
            goto LABEL_58;
          }
        }
        break;
      case 'C':
        *(_DWORD *)(a1 + 12) = v2 + 1;
        v18 = sub_319DD0(a1);
        v8 = (_DWORD *)sub_313728((_DWORD *)a1, 37, (unsigned int)v18);
        v74 = (int)v8;
        goto LABEL_19;
      case 'D':
        *(_DWORD *)(a1 + 12) = v2 + 1;
        if ( v2[1] )
        {
          *(_DWORD *)(a1 + 12) = v2 + 2;
          switch ( v2[1] )
          {
            case 'F':
              v54 = *(_DWORD *)(a1 + 20);
              if ( v54 >= *(_DWORD *)(a1 + 24) )
              {
                MEMORY[0] = 0;
                __und(0);
              }
              v55 = *(_DWORD *)(a1 + 16) + 16 * v54;
              *(_DWORD *)(v55 + 4) = 0;
              v74 = v55;
              *(_DWORD *)(a1 + 20) = v54 + 1;
              *(_DWORD *)v55 = 44;
              v56 = (unsigned __int8)(v2[2] - 48);
              *(_WORD *)(v55 + 12) = v56 <= 9;
              if ( v56 <= 9 )
              {
                sub_313C18((unsigned __int8 **)(a1 + 12));
                v55 = v74;
              }
              v57 = sub_319DD0(a1);
              v58 = v74;
              *(_DWORD *)(v55 + 8) = v57;
              if ( !*(_DWORD *)(v58 + 8) )
                return 0;
              sub_313C18((unsigned __int8 **)(a1 + 12));
              v59 = *(_BYTE **)(a1 + 12);
              v60 = (unsigned __int8)*v59;
              if ( *v59 )
              {
                *(_DWORD *)(a1 + 12) = v59 + 1;
                v60 = *v59 == 115;
              }
              v8 = (_DWORD *)v74;
              *(_WORD *)(v74 + 14) = v60;
              return v8;
            case 'T':
            case 't':
              v10 = *(_DWORD *)(a1 + 48);
              *(_DWORD *)(a1 + 48) = 1;
              v11 = sub_31BA00(a1);
              *(_DWORD *)(a1 + 48) = v10;
              v8 = (_DWORD *)sub_313728((_DWORD *)a1, 66, (unsigned int)v11);
              v74 = (int)v8;
              if ( !v8 )
                return 0;
              v12 = *(_BYTE **)(a1 + 12);
              if ( !*v12 )
                return 0;
              *(_DWORD *)(a1 + 12) = v12 + 1;
              if ( *v12 != 69 )
                return 0;
              goto LABEL_20;
            case 'a':
              return sub_314104((_DWORD *)a1, (int)"auto", 4);
            case 'c':
              return sub_314104((_DWORD *)a1, (int)"decltype(auto)", 14);
            case 'd':
              v49 = *(_DWORD *)(a1 + 20);
              if ( v49 >= *(_DWORD *)(a1 + 24) )
                goto LABEL_92;
              v50 = *(_DWORD *)(a1 + 16);
              v51 = v49 + 1;
              v52 = &off_433620;
              v8 = (_DWORD *)(v50 + 16 * v49);
              v53 = *(_DWORD *)(a1 + 44) + 9;
              goto LABEL_69;
            case 'e':
              v49 = *(_DWORD *)(a1 + 20);
              if ( v49 >= *(_DWORD *)(a1 + 24) )
                goto LABEL_92;
              v50 = *(_DWORD *)(a1 + 16);
              v51 = v49 + 1;
              v52 = &off_433634;
              v8 = (_DWORD *)(v50 + 16 * v49);
              v53 = *(_DWORD *)(a1 + 44) + 10;
              goto LABEL_69;
            case 'f':
              v49 = *(_DWORD *)(a1 + 20);
              if ( v49 >= *(_DWORD *)(a1 + 24) )
                goto LABEL_92;
              v50 = *(_DWORD *)(a1 + 16);
              v51 = v49 + 1;
              v52 = &off_43360C;
              v8 = (_DWORD *)(v50 + 16 * v49);
              v53 = *(_DWORD *)(a1 + 44) + 9;
              goto LABEL_69;
            case 'h':
              v49 = *(_DWORD *)(a1 + 20);
              if ( v49 >= *(_DWORD *)(a1 + 24) )
                goto LABEL_92;
              v50 = *(_DWORD *)(a1 + 16);
              v51 = v49 + 1;
              v52 = &off_433648;
              v8 = (_DWORD *)(v50 + 16 * v49);
              v53 = *(_DWORD *)(a1 + 44) + 4;
              goto LABEL_69;
            case 'i':
              v49 = *(_DWORD *)(a1 + 20);
              if ( v49 >= *(_DWORD *)(a1 + 24) )
                goto LABEL_92;
              v50 = *(_DWORD *)(a1 + 16);
              v51 = v49 + 1;
              v52 = &off_433670;
              v8 = (_DWORD *)(v50 + 16 * v49);
              v53 = *(_DWORD *)(a1 + 44) + 8;
              goto LABEL_69;
            case 'n':
              v49 = *(_DWORD *)(a1 + 20);
              if ( v49 >= *(_DWORD *)(a1 + 24) )
                goto LABEL_92;
              v50 = *(_DWORD *)(a1 + 16);
              v51 = v49 + 1;
              v52 = &off_433684;
              v8 = (_DWORD *)(v50 + 16 * v49);
              v53 = *(_DWORD *)(a1 + 44) + 17;
              goto LABEL_69;
            case 'p':
              v61 = sub_319DD0(a1);
              v8 = (_DWORD *)sub_313728((_DWORD *)a1, 74, (unsigned int)v61);
              v74 = (int)v8;
              goto LABEL_19;
            case 's':
              v49 = *(_DWORD *)(a1 + 20);
              if ( v49 >= *(_DWORD *)(a1 + 24) )
                goto LABEL_92;
              v50 = *(_DWORD *)(a1 + 16);
              v51 = v49 + 1;
              v52 = &off_43365C;
              v8 = (_DWORD *)(v50 + 16 * v49);
              v53 = *(_DWORD *)(a1 + 44) + 8;
LABEL_69:
              v8[1] = 0;
              *(_DWORD *)(a1 + 20) = v51;
              *(_DWORD *)(v50 + 16 * v49) = 39;
              v8[2] = v52;
              *(_DWORD *)(a1 + 44) = v53;
              return v8;
            case 'v':
              if ( v2[2] == 95 )
              {
                v72 = *(_DWORD *)(a1 + 48);
                *(_DWORD *)(a1 + 12) = v2 + 3;
                *(_DWORD *)(a1 + 48) = 1;
                v73 = sub_31BA00(a1);
                *(_DWORD *)(a1 + 48) = v72;
                v46 = (_DWORD *)v73;
              }
              else
              {
                v46 = sub_313CD0(a1);
              }
              if ( !v46 )
                return 0;
              v47 = *(_BYTE **)(a1 + 12);
              if ( *v47 != 95 )
                return 0;
              *(_DWORD *)(a1 + 12) = v47 + 1;
              v48 = sub_319DD0(a1);
              v8 = (_DWORD *)sub_313728((_DWORD *)a1, 45, __SPAIR64__(v48, (unsigned int)v46));
              v74 = (int)v8;
              goto LABEL_19;
            default:
              return 0;
          }
        }
        return 0;
      case 'F':
        v8 = (_DWORD *)sub_31B17C(a1);
        v74 = (int)v8;
        goto LABEL_19;
      case 'G':
        *(_DWORD *)(a1 + 12) = v2 + 1;
        v17 = sub_319DD0(a1);
        v8 = (_DWORD *)sub_313728((_DWORD *)a1, 38, (unsigned int)v17);
        v74 = (int)v8;
        goto LABEL_19;
      case 'M':
        *(_DWORD *)(a1 + 12) = v2 + 1;
        v44 = sub_319DD0(a1);
        if ( !v44 )
          return 0;
        HIDWORD(v45) = sub_319DD0(a1);
        if ( !HIDWORD(v45) )
          return 0;
        LODWORD(v45) = v44;
        v8 = (_DWORD *)sub_313728((_DWORD *)a1, 43, v45);
        v74 = (int)v8;
        goto LABEL_19;
      case 'O':
        *(_DWORD *)(a1 + 12) = v2 + 1;
        v16 = sub_319DD0(a1);
        v8 = (_DWORD *)sub_313728((_DWORD *)a1, 36, (unsigned int)v16);
        v74 = (int)v8;
        goto LABEL_19;
      case 'P':
        *(_DWORD *)(a1 + 12) = v2 + 1;
        v20 = sub_319DD0(a1);
        v8 = (_DWORD *)sub_313728((_DWORD *)a1, 34, (unsigned int)v20);
        v74 = (int)v8;
        goto LABEL_19;
      case 'R':
        *(_DWORD *)(a1 + 12) = v2 + 1;
        v19 = sub_319DD0(a1);
        v8 = (_DWORD *)sub_313728((_DWORD *)a1, 35, (unsigned int)v19);
        v74 = (int)v8;
        goto LABEL_19;
      case 'S':
        v34 = v2[1];
        v35 = v34 > 0x5F;
        if ( v34 != 95 )
          v35 = v34 - 48 > 9;
        v36 = !v35;
        if ( !v35 || v34 - 65 <= 0x19 )
        {
          v37 = sub_3142CC((_DWORD *)a1, 0);
          v38 = *(_BYTE **)(a1 + 12);
          v8 = v37;
          v74 = (int)v37;
          if ( *v38 != 73 )
            return v8;
          v32 = a1;
          goto LABEL_40;
        }
        v62 = (_DWORD *)sub_31C2F0(a1, v36);
        v8 = v62;
        v74 = (int)v62;
        if ( !v62 )
          return 0;
        if ( *v62 == 24 )
          return v8;
        goto LABEL_20;
      case 'T':
        v29 = sub_313D78((_DWORD *)a1);
        v30 = *(_BYTE **)(a1 + 12);
        v8 = v29;
        v74 = (int)v29;
        if ( *v30 != 73 )
          goto LABEL_19;
        if ( *(_DWORD *)(a1 + 52) )
        {
          v65 = *(_DWORD *)(a1 + 20);
          v66 = *(_DWORD *)(a1 + 32);
          v67 = *(_DWORD *)(a1 + 44);
          v68 = sub_31D3A4(a1);
          if ( **(_BYTE **)(a1 + 12) == 73 )
          {
            if ( !v74 )
              return 0;
            v69 = *(_QWORD *)(a1 + 32);
            if ( (int)v69 >= SHIDWORD(v69) )
              return 0;
            v70 = v69 + 1;
            *(_DWORD *)(*(_DWORD *)(a1 + 28) + 4 * v69) = v74;
            v71 = __PAIR64__(v68, v74);
            *(_DWORD *)(a1 + 32) = v70;
            v8 = (_DWORD *)sub_313728((_DWORD *)a1, 4, v71);
            v74 = (int)v8;
          }
          else
          {
            *(_DWORD *)(a1 + 44) = v67;
            *(_DWORD *)(a1 + 12) = v30;
            *(_DWORD *)(a1 + 20) = v65;
            *(_DWORD *)(a1 + 32) = v66;
            v8 = (_DWORD *)v74;
          }
        }
        else
        {
          if ( !v29 )
            return 0;
          v31 = *(_DWORD *)(a1 + 32);
          if ( v31 >= *(_DWORD *)(a1 + 36) )
            return 0;
          v32 = a1;
          *(_DWORD *)(*(_DWORD *)(a1 + 28) + 4 * v31) = v8;
          v8 = (_DWORD *)v74;
          *(_DWORD *)(a1 + 32) = v31 + 1;
LABEL_40:
          v33 = sub_31D3A4(v32);
          v8 = (_DWORD *)sub_313728((_DWORD *)a1, 4, __SPAIR64__(v33, (unsigned int)v8));
          v74 = (int)v8;
        }
LABEL_19:
        if ( !v8 )
          return 0;
LABEL_20:
        v14 = *(_DWORD *)(a1 + 32);
        if ( v14 < *(_DWORD *)(a1 + 36) )
        {
          *(_DWORD *)(*(_DWORD *)(a1 + 28) + 4 * v14) = v8;
          v15 = v74;
          *(_DWORD *)(a1 + 32) = v14 + 1;
          return (_DWORD *)v15;
        }
        return 0;
      case 'U':
        *(_DWORD *)(a1 + 12) = v2 + 1;
        v25 = sub_314170(a1);
        v26 = *(_BYTE **)(a1 + 12);
        v27 = v25;
        v74 = (int)v25;
        if ( *v26 == 73 )
        {
          v63 = sub_31D3A4(a1);
          v74 = sub_313728((_DWORD *)a1, 4, __SPAIR64__(v63, (unsigned int)v27));
        }
        v28 = sub_319DD0(a1);
        v8 = (_DWORD *)sub_313728((_DWORD *)a1, 33, __SPAIR64__(v74, v28));
        v74 = (int)v8;
        goto LABEL_19;
      case 'a':
      case 'b':
      case 'c':
      case 'd':
      case 'e':
      case 'f':
      case 'g':
      case 'h':
      case 'i':
      case 'j':
      case 'l':
      case 'm':
      case 'n':
      case 'o':
      case 's':
      case 't':
      case 'v':
      case 'w':
      case 'x':
      case 'y':
      case 'z':
        v21 = *(_DWORD *)(a1 + 20);
        v22 = &(&off_433404)[5 * *v2 - 485];
        if ( v21 >= *(_DWORD *)(a1 + 24) )
        {
LABEL_92:
          v74 = 0;
          __und(0);
        }
        v23 = v2 + 1;
        v8 = (_DWORD *)(*(_DWORD *)(a1 + 16) + 16 * v21);
        v24 = (int)&v22[1][*(_DWORD *)(a1 + 44)];
        v8[1] = 0;
        *(_DWORD *)(a1 + 20) = v21 + 1;
        *v8 = 39;
        v8[2] = v22;
        *(_DWORD *)(a1 + 12) = v23;
        *(_DWORD *)(a1 + 44) = v24;
        return v8;
      case 'u':
        *(_DWORD *)(a1 + 12) = v2 + 1;
        v13 = sub_314170(a1);
        v8 = (_DWORD *)sub_313728((_DWORD *)a1, 40, (unsigned int)v13);
        v74 = (int)v8;
        goto LABEL_19;
      default:
        return 0;
    }
    return 0;
  }
  v3 = (int *)sub_31C0B8(a1, &v74, 0);
  if ( !v3 )
    return 0;
  v4 = (_DWORD *)(**(_BYTE **)(a1 + 12) == 70 ? sub_31B17C(a1) : sub_319DD0(a1));
  *v3 = (int)v4;
  if ( !v4 )
    return 0;
  v5 = v74;
  if ( (unsigned int)(*v4 - 31) <= 1 )
  {
    v6 = v4[2];
    v4[2] = v74;
    v74 = *v3;
    *v3 = v6;
    v5 = v74;
  }
  if ( !v5 )
    return 0;
  v7 = *(_DWORD *)(a1 + 32);
  if ( v7 >= *(_DWORD *)(a1 + 36) )
    return 0;
  *(_DWORD *)(*(_DWORD *)(a1 + 28) + 4 * v7) = v5;
  v8 = (_DWORD *)v74;
  *(_DWORD *)(a1 + 32) = v7 + 1;
  return v8;
}
