int sub_8832C()
{
  int v0; // r6
  int *v1; // r11
  int v2; // r3
  int v3; // r4
  _WORD *v4; // r8
  int *v5; // r7
  int v6; // r1
  unsigned __int8 *v7; // r2
  unsigned int v8; // r5
  int v9; // r0
  int v10; // r3
  int v11; // r5
  char *v12; // r4
  int v13; // r9
  int v14; // r6
  bool v15; // zf
  int *v16; // r3
  int v17; // r0
  int v18; // r1
  int v19; // r2
  int v20; // r3
  int v21; // r1
  int v22; // r4
  int *v23; // r4
  int v24; // r7
  int v25; // r12
  char *v26; // r5
  int v27; // r1
  int v28; // r2
  int v29; // r3
  int v30; // lr
  int v31; // r2
  int v32; // r3
  int v33; // r3
  int v34; // r7
  unsigned int v35; // r2
  int v36; // r3
  size_t v37; // r8
  size_t v38; // r7
  int v39; // r5
  char *v40; // r9
  _WORD *v41; // r2
  unsigned int v42; // r4
  int v43; // r6
  _BOOL4 v44; // r5
  unsigned int v45; // r3
  __int16 *i; // r8
  int v47; // t1
  _WORD *v49; // r4
  int v50; // r11
  int v51; // r0
  int v52; // r1
  int v53; // r2
  int v54; // r3
  int v55; // r4
  int v56; // r1
  int v57; // r1
  int v58; // r4
  int v59; // r0
  int v60; // r4
  int v61; // r0
  int v62; // r1
  int v63; // r0
  int v64; // r4
  __int64 v65; // r0
  int v66; // r0
  int v67; // r4
  __int64 v68; // r0
  int v69; // r0
  const char *v70; // r0
  int v71; // r1
  int v72; // r0
  int v73; // r4
  int v74; // r0
  int v75; // r1
  int v76; // r0
  int v77; // r0
  int *v78; // r3
  int v79; // r4
  int v80; // r0
  int v81; // r0
  int v82; // r0
  const char *v83; // r0
  const char *v84; // r0
  __int16 *ptr; // [sp+8h] [bp-E6Ch]
  int v86; // [sp+Ch] [bp-E68h]
  int v87; // [sp+Ch] [bp-E68h]
  unsigned int v88; // [sp+10h] [bp-E64h]
  _BYTE *src; // [sp+14h] [bp-E60h]
  int v90; // [sp+18h] [bp-E5Ch]
  int *v91; // [sp+24h] [bp-E50h]
  _DWORD v92[2]; // [sp+2Ch] [bp-E48h] BYREF
  _DWORD v93[2]; // [sp+34h] [bp-E40h] BYREF
  _DWORD v94[2]; // [sp+3Ch] [bp-E38h] BYREF
  _DWORD v95[3]; // [sp+44h] [bp-E30h] BYREF
  int v96; // [sp+50h] [bp-E24h]
  int v97; // [sp+54h] [bp-E20h]
  int v98; // [sp+58h] [bp-E1Ch]
  int v99; // [sp+5Ch] [bp-E18h]
  _WORD v100[200]; // [sp+60h] [bp-E14h] BYREF
  _BYTE v101[3204]; // [sp+1F0h] [bp-C84h] BYREF

  v1 = &dword_475138;
  v2 = dword_47514C;
  if ( dword_47514C )
  {
    sub_1C4D40(stderr, "Starting parse\n");
    v2 = dword_47514C;
  }
  v3 = 0;
  v4 = v100;
  v5 = (int *)v101;
  dword_475154 = -2;
  dword_475150 = 0;
  v6 = (int)v100;
  v100[0] = 0;
  ptr = v100;
  src = v101;
  v88 = 200;
  if ( v2 )
    goto LABEL_36;
LABEL_4:
  if ( v3 == 69 )
  {
LABEL_37:
    v41 = v100;
    v42 = (unsigned int)v4;
    v43 = 0;
    v44 = ptr != v100;
    goto LABEL_38;
  }
  while ( 1 )
  {
    v7 = (unsigned __int8 *)word_36A0C0;
    v8 = word_36A0C0[v3];
    if ( v8 == -90 )
      goto LABEL_17;
    v9 = v1[7];
    v10 = v1[5];
    if ( v9 == -2 )
    {
      if ( v10 )
        sub_1C4D40(stderr, "Reading a token: ");
      v9 = sub_875FC();
      v10 = v1[5];
      v1[7] = v9;
    }
    if ( v9 <= 0 )
    {
      v0 = 0;
      v1[7] = 0;
      if ( v10 )
        sub_1C4D40(stderr, "Now at end of input.\n");
      else
        v0 = 0;
    }
    else
    {
      if ( v9 > 304 )
        v0 = 2;
      else
        LOWORD(v7) = -24724;
      if ( v9 <= 304 )
      {
        HIWORD(v7) = 54;
        v0 = v7[v9 + 716];
      }
      v8 += v0;
      if ( v10 )
      {
        sub_1C4D40(stderr, "%s ", "Next token is");
        sub_88240(stderr, v0);
        sub_1C4D40(stderr, (const char *)&word_356638);
      }
    }
    if ( v8 > 0x390 || (v11 = 2 * v8, *(__int16 *)((char *)&unk_36A36C + v11) != v0) )
    {
LABEL_17:
      v12 = (char *)&byte_36BF64[v3];
      v13 = (unsigned __int8)*(v12 - 3504);
      if ( !*(v12 - 3504) )
        goto LABEL_148;
LABEL_18:
      v14 = byte_36BF64[v13 - 3316];
      v15 = v1[5] == 0;
      v16 = &v5[4 * (1 - v14)];
      v17 = *v16;
      v18 = v16[1];
      v19 = v16[2];
      v20 = v16[3];
      v96 = v17;
      v97 = v18;
      v98 = v19;
      v99 = v20;
      v86 = v17;
      if ( !v15 )
      {
        v17 = sub_1C4D40(stderr, "Reducing stack by rule %d (line %lu):\n", v13 - 1, word_36B2C4[v13]);
        if ( v14 )
        {
          v49 = &v4[-v14];
          v91 = v1;
          v50 = 0;
          do
          {
            sub_1C4D40(stderr, "   $%d = ", ++v50);
            ++v49;
            sub_88240(stderr, byte_36BF64[(__int16)v49[(__int16)v14 - v14] - 3064]);
            v17 = sub_1C4D40(stderr, (const char *)&word_356638);
          }
          while ( v14 != v50 );
          v1 = v91;
        }
      }
      switch ( v13 )
      {
        case 4:
          sub_1C37BC(v1[4], 88);
          sub_1C38F4(v1[4], *v5);
          sub_1C37BC(v1[4], 88);
          goto LABEL_22;
        case 5:
          sub_1C37BC(v1[4], 61);
          goto LABEL_22;
        case 6:
          dword_46BA50 = -1;
          goto LABEL_22;
        case 7:
          v77 = v1[4];
          dword_46BA50 = 1;
          sub_1C37BC(v77, 58);
          goto LABEL_22;
        case 8:
          sub_1C37BC(v1[4], 68);
          goto LABEL_22;
        case 9:
          sub_1C37BC(v1[4], 59);
          goto LABEL_22;
        case 12:
          sub_1C37BC(v1[4], 69);
          goto LABEL_22;
        case 13:
          sub_1C37BC(v1[4], 71);
          goto LABEL_22;
        case 14:
          sub_1C37BC(v1[4], 72);
          goto LABEL_22;
        case 15:
          sub_1C37BC(v1[4], 74);
          goto LABEL_22;
        case 16:
          sub_1C37BC(v1[4], 76);
          sub_1C38F4(v1[4], *(v5 - 4));
          sub_1C37BC(v1[4], 76);
          goto LABEL_22;
        case 17:
          sub_1C37BC(v1[4], 75);
          sub_1C38F4(v1[4], *(v5 - 4));
          sub_1C37BC(v1[4], 75);
          goto LABEL_22;
        case 18:
          sub_1C37BC(v1[4], 73);
          goto LABEL_22;
        case 19:
          sub_1C37BC(v1[4], 32);
          sub_1C38F4(v1[4], *(v5 - 12));
          sub_1C37BC(v1[4], 32);
          goto LABEL_22;
        case 20:
          sub_1C37BC(v1[4], 70);
          goto LABEL_22;
        case 21:
          sub_1C37BC(v1[4], 77);
          goto LABEL_22;
        case 22:
          sub_1C37BC(v1[4], 78);
          goto LABEL_22;
        case 23:
        case 24:
          sub_1C37BC(v1[4], 67);
          goto LABEL_22;
        case 25:
          sub_1C37BC(v1[4], 63);
          goto LABEL_22;
        case 26:
          sub_1C37BC(v1[4], 31);
          v75 = 1;
          goto LABEL_122;
        case 27:
          sub_1C37BC(v1[4], 65);
          goto LABEL_22;
        case 28:
          sub_1C37BC(v1[4], 31);
          v75 = 2;
LABEL_122:
          sub_1C37BC(v1[4], v75);
          sub_1C37BC(v1[4], 31);
          goto LABEL_22;
        case 29:
          sub_1C37BC(v1[4], 81);
          sub_1C4F0C(v1[4], *v5, v5[1]);
          sub_1C37BC(v1[4], 81);
          goto LABEL_22;
        case 31:
        case 32:
        case 33:
        case 34:
        case 35:
          sub_946E0("Sets are not implemented.");
        case 36:
        case 39:
          sub_1C547C(v17);
          goto LABEL_22;
        case 37:
          v66 = sub_1C37BC(v1[4], 37);
          v67 = v1[4];
          v68 = sub_1C36FC(v66);
          sub_1C3898(v67, HIDWORD(v68), v68, (int)v68 >> 31);
          sub_1C37BC(v1[4], 37);
          goto LABEL_22;
        case 38:
          sub_1C37BC(v1[4], 23);
          goto LABEL_22;
        case 40:
          v63 = sub_1C37BC(v1[4], 46);
          v64 = v1[4];
          v65 = sub_1C36FC(v63);
          sub_1C3898(v64, HIDWORD(v65), v65, (int)v65 >> 31);
          sub_1C37BC(v1[4], 46);
          goto LABEL_22;
        case 42:
        case 44:
          dword_487CA4 = 1;
          goto LABEL_22;
        case 43:
        case 45:
          ++dword_487CA4;
          goto LABEL_22;
        case 46:
          sub_1C37BC(v1[4], 56);
          sub_1C38F4(v1[4], *(v5 - 8));
          sub_1C37BC(v1[4], 56);
          goto LABEL_22;
        case 47:
          sub_1C37BC(v1[4], 52);
          sub_1C38F4(v1[4], *(v5 - 12));
          sub_1C37BC(v1[4], 52);
          goto LABEL_22;
        case 49:
          sub_1C37BC(v1[4], 20);
          goto LABEL_22;
        case 50:
          sub_1C37BC(v1[4], 3);
          goto LABEL_22;
        case 51:
          sub_1C37BC(v1[4], 4);
          goto LABEL_22;
        case 52:
          sub_1C37BC(v1[4], 30);
          goto LABEL_22;
        case 53:
          sub_1C37BC(v1[4], 5);
          goto LABEL_22;
        case 54:
          sub_1C37BC(v1[4], 1);
          goto LABEL_22;
        case 55:
          sub_1C37BC(v1[4], 2);
          goto LABEL_22;
        case 56:
          sub_1C37BC(v1[4], 14);
          goto LABEL_22;
        case 57:
        case 58:
          sub_1C37BC(v1[4], 15);
          goto LABEL_22;
        case 59:
          sub_1C37BC(v1[4], 18);
          goto LABEL_22;
        case 60:
          sub_1C37BC(v1[4], 19);
          goto LABEL_22;
        case 61:
          sub_1C37BC(v1[4], 16);
          goto LABEL_22;
        case 62:
          sub_1C37BC(v1[4], 17);
          goto LABEL_22;
        case 63:
          sub_1C37BC(v1[4], 9);
          goto LABEL_22;
        case 64:
          sub_1C37BC(v1[4], 10);
          goto LABEL_22;
        case 65:
          sub_1C37BC(v1[4], 21);
          goto LABEL_22;
        case 66:
        case 67:
          sub_1C37BC(v1[4], 79);
          sub_1C3898(v1[4], v21, *v5, v5[1]);
          sub_1C37BC(v1[4], 79);
          goto LABEL_22;
        case 68:
          sub_1C37BC(v1[4], 38);
          v55 = v1[4];
          v56 = *(_DWORD *)(sub_19E4F0(*(_DWORD *)(*(_DWORD *)(v55 + 4) + 4)) + 4);
          goto LABEL_79;
        case 69:
          sub_1C37BC(v1[4], 38);
          v55 = v1[4];
          v56 = *(_DWORD *)(sub_19E4F0(*(_DWORD *)(*(_DWORD *)(v55 + 4) + 4)) + 8);
          goto LABEL_79;
        case 70:
          sub_1C37BC(v1[4], 38);
          v55 = v1[4];
          v56 = *(_DWORD *)sub_19E4F0(*(_DWORD *)(*(_DWORD *)(v55 + 4) + 4));
LABEL_79:
          sub_1C38F4(v55, v56);
          sub_1C3898(v1[4], v57, *v5, v5[1]);
          sub_1C37BC(v1[4], 38);
          goto LABEL_22;
        case 71:
          sub_1C37BC(v1[4], 39);
          v58 = v1[4];
          v59 = sub_19E4F0(*(_DWORD *)(*(_DWORD *)(v58 + 4) + 4));
          sub_1C38F4(v58, *(_DWORD *)(v59 + 12));
          sub_1C38C0(v1[4], v5);
          sub_1C37BC(v1[4], 39);
          goto LABEL_22;
        case 73:
          sub_1C37BC(v1[4], 38);
          v60 = v1[4];
          v61 = sub_1780B4(*(_DWORD *)(*(_DWORD *)(v60 + 4) + 4));
          sub_1C38F4(v60, *(_DWORD *)(v61 + 12));
          sub_1C3898(v1[4], v62, *(_DWORD *)(*(v5 - 4) + 20), 0);
          sub_1C37BC(v1[4], 38);
          goto LABEL_22;
        case 74:
          sub_1C37BC(v1[4], 80);
          sub_1C4F0C(v1[4], *v5, v5[1]);
          sub_1C37BC(v1[4], 80);
          goto LABEL_22;
        case 75:
          v86 = *(_DWORD *)(*v5 + 8);
          goto LABEL_22;
        case 76:
          v76 = sub_1C3E58(*v5, v5[1]);
          sub_21D6B0(v95, v76, dword_487CD0, 1, 0);
          v86 = v95[0];
          goto LABEL_22;
        case 77:
          v69 = sub_1C3E58(*v5, v5[1]);
          sub_21D6B0(v95, v69, *(v5 - 8), 1, 0);
          v86 = v95[0];
          if ( !v95[0] || *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(v95[0] + 32) >> 3)) != 10 )
          {
            v70 = (const char *)sub_1C3E58(*v5, v5[1]);
            sub_946E0("No function \"%s\" in specified context.", v70);
          }
          goto LABEL_22;
        case 78:
          sub_1C37BC(v1[4], 40);
          sub_1C3840(v1[4], 0);
          v71 = *v5;
          goto LABEL_110;
        case 80:
          v72 = sub_1C3E58(*v5, v5[1]);
          sub_21D6B0(v92, v72, *(v5 - 8), 1, 0);
          v73 = v92[0];
          v90 = v92[1];
          if ( !v92[0] )
          {
            v83 = (const char *)sub_1C3E58(*v5, v5[1]);
            sub_946E0("No symbol \"%s\" in specified context.", v83);
          }
          if ( sub_15B388(v92[0]) )
            goto LABEL_113;
          goto LABEL_116;
        case 81:
          v74 = sub_1C3E58(*v5, v5[1]);
          sub_21D6B0(v93, v74, dword_487CD0, 1, v95);
          v73 = v93[0];
          if ( v93[0] )
          {
            v90 = v93[1];
            if ( sub_15B388(v93[0]) )
            {
LABEL_113:
              if ( !dword_487CE0 || sub_C2360(v90) )
                dword_487CE0 = v90;
            }
LABEL_116:
            sub_1C37BC(v1[4], 40);
            sub_1C3840(v1[4], v90);
            v71 = v73;
LABEL_110:
            sub_1C37E8(v1[4], v71);
            sub_1C37BC(v1[4], 40);
          }
          else
          {
            v81 = sub_1C3E58(*v5, v5[1]);
            v82 = sub_1B1BE8(v94, v81);
            if ( !v94[0] )
            {
              if ( sub_1B7B9C(v82) || sub_1B7B24() )
              {
                v84 = (const char *)sub_1C3E58(*v5, v5[1]);
                sub_946E0("No symbol \"%s\" in current context.", v84);
              }
              sub_946E0("No symbol table is loaded.  Use the \"symbol-file\" command.");
            }
            sub_1C3B74(v1[4], v94[0], v94[1]);
          }
LABEL_22:
          v22 = (__int16)v14;
          v0 = (int)&v4[-(__int16)v14];
          v23 = &v5[-4 * v22];
          v24 = byte_36BF64[v13 - 2876];
          if ( v1[5] )
          {
            sub_1C4D40(stderr, "%s ", "-> $$ =");
            sub_88240(stderr, v24);
            sub_1C4D40(stderr, (const char *)&word_356638);
            if ( v1[5] )
              sub_87580(ptr, v0);
          }
          v25 = v24 - 69;
          v26 = (char *)&byte_36BF64[v24 - 69];
          v5 = v23 + 4;
          v96 = v86;
          v27 = v97;
          v28 = v98;
          v29 = v99;
          v30 = *(v26 - 2792);
          v23[4] = v86;
          v23[5] = v27;
          v23[6] = v28;
          v23[7] = v29;
          v31 = *(__int16 *)v0;
          if ( (unsigned int)(v30 + v31) <= 0x390
            && (v32 = 2 * (v30 + v31), *(__int16 *)((char *)&unk_36A36C + v32) == v31) )
          {
            v3 = *(__int16 *)((char *)&unk_36AA90 + v32);
          }
          else
          {
            v3 = word_36B48C[v25];
          }
          break;
        case 82:
          v78 = *(int **)(v1[4] + 4);
          v79 = *v78;
          v87 = v78[1];
          v80 = sub_1C3E58(*v5, v5[1]);
          v86 = sub_170CD8(v79, v87, v80, dword_487CD0, 0);
          goto LABEL_22;
        default:
          goto LABEL_22;
      }
      goto LABEL_26;
    }
    v3 = *(__int16 *)((char *)&unk_36AA90 + v11);
    if ( v3 <= 0 )
    {
      if ( v3 == -76 )
      {
LABEL_148:
        ++v1[6];
        sub_882E8("syntax error");
      }
      v13 = -v3;
      goto LABEL_18;
    }
    if ( v1[5] )
    {
      sub_1C4D40(stderr, "%s ", "Shifting");
      sub_88240(stderr, v0);
      sub_1C4D40(stderr, (const char *)&word_356638);
    }
    v51 = *v1;
    v52 = v1[1];
    v53 = v1[2];
    v54 = v1[3];
    v0 = (int)v4;
    v1[7] = -2;
    v5 += 4;
    *v5 = v51;
    v5[1] = v52;
    v5[2] = v53;
    v5[3] = v54;
LABEL_26:
    v6 = v88;
    v4 = (_WORD *)(v0 + 2);
    *(_WORD *)(v0 + 2) = v3;
    v33 = v88 + 0x7FFFFFFF;
    if ( v0 + 2 >= (unsigned int)&ptr[v33] )
      break;
LABEL_35:
    if ( !v1[5] )
      goto LABEL_4;
LABEL_36:
    sub_1C4D40(stderr, "Entering state %d\n", v3);
    if ( v3 == 69 )
      goto LABEL_37;
  }
  v34 = v4 - ptr + 1;
  if ( v88 > 0x270F )
    sub_882E8("memory exhausted");
  v35 = v33 * 2 + 2;
  v36 = 10000;
  v37 = 2 * v34;
  if ( v35 < 0x2710 )
    v36 = v35;
  v38 = 16 * v34;
  v39 = 2 * v36;
  v88 = v36;
  v0 = sub_93028(18 * v36 + 15);
  v40 = (char *)(v0 + ((v39 + 15) & 0xFFFFFFF0));
  memcpy((void *)v0, ptr, v37);
  memcpy(v40, src, v38);
  v41 = v100;
  if ( ptr != v100 )
    free(ptr);
  v4 = (_WORD *)(v0 + v37 - 2);
  v5 = (int *)&v40[v38 - 16];
  if ( !v1[5] )
  {
    if ( (unsigned int)v4 >= v0 + v39 - 2 )
      goto LABEL_70;
    goto LABEL_34;
  }
  sub_1C4D40(stderr, "Stack size increased to %lu\n", v88);
  if ( (unsigned int)v4 < v0 + v39 - 2 )
  {
LABEL_34:
    ptr = (__int16 *)v0;
    src = (_BYTE *)(v0 + ((v39 + 15) & 0xFFFFFFF0));
    goto LABEL_35;
  }
LABEL_70:
  v44 = 1;
  ptr = (__int16 *)v0;
  v42 = (unsigned int)v4;
  v43 = 1;
LABEL_38:
  v45 = v1[7];
  if ( v45 != -2 )
  {
    if ( v45 > 0x130 )
      v6 = 2;
    else
      LOWORD(v41) = -24724;
    if ( v45 <= 0x130 )
    {
      HIWORD(v41) = 54;
      v6 = *((unsigned __int8 *)v41 + v45 + 716);
    }
    sub_88290("Cleanup: discarding lookahead", v6);
  }
  if ( v1[5] )
    sub_87580(ptr, v42);
  for ( i = (__int16 *)v42; i != ptr; --i )
  {
    v47 = *i;
    sub_88290("Cleanup: popping", byte_36BF64[v47 - 3064]);
  }
  if ( v44 )
    free(ptr);
  return v43;
}
