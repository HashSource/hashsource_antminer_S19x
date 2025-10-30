int sub_83B04()
{
  unsigned int v0; // r4
  int v1; // r3
  int v2; // r1
  unsigned __int8 **v3; // r9
  int v4; // r8
  int v5; // r5
  unsigned int v6; // r6
  int v7; // r0
  int v8; // r3
  bool v9; // cc
  unsigned int v10; // r6
  int v11; // r7
  int v12; // r6
  int v13; // r4
  int v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r7
  __int16 *v18; // r6
  unsigned __int8 **v19; // r9
  int v20; // r7
  int v21; // r4
  int v22; // r2
  int v23; // r3
  int v24; // r4
  unsigned int v25; // r2
  int v26; // r3
  size_t v27; // r6
  int v28; // r5
  size_t v29; // r4
  char *v30; // r7
  _BYTE *v31; // r0
  _BYTE *v32; // r3
  int v33; // r6
  _BOOL4 v34; // r5
  __int16 *i; // r8
  int v36; // t1
  int v38; // r9
  __int16 *v39; // r4
  int v40; // t1
  int v41; // r1
  int v42; // r2
  unsigned __int8 *v43; // r3
  unsigned __int8 *v44; // r1
  unsigned __int8 *v45; // r0
  __int64 v46; // r2
  int v47; // r0
  int v48; // r4
  __int64 v49; // r0
  int v50; // r4
  int v51; // r0
  void *v52; // r0
  unsigned __int8 *v53; // r4
  int v54; // r6
  unsigned __int8 *v55; // r6
  int v56; // r4
  int v57; // r1
  int v58; // r4
  int v59; // r0
  __int64 v60; // r0
  int v61; // r2
  int v62; // r1
  __int64 v63; // r2
  _DWORD *v64; // r2
  int v65; // r3
  int v66; // r0
  int v67; // r0
  int v68; // r0
  int v69; // r0
  const char *v70; // r0
  __int16 *v71; // [sp+8h] [bp-14B4h]
  _BYTE *v72; // [sp+8h] [bp-14B4h]
  unsigned __int8 *ptr; // [sp+14h] [bp-14A8h]
  __int16 *ptra; // [sp+14h] [bp-14A8h]
  __int16 *v75; // [sp+18h] [bp-14A4h]
  _BYTE *v76; // [sp+18h] [bp-14A4h]
  int v77; // [sp+1Ch] [bp-14A0h]
  unsigned int v78; // [sp+20h] [bp-149Ch]
  _BYTE *src; // [sp+24h] [bp-1498h]
  unsigned __int8 **v80; // [sp+30h] [bp-148Ch]
  unsigned __int8 *v81; // [sp+3Ch] [bp-1480h]
  unsigned __int8 *v82; // [sp+40h] [bp-147Ch]
  unsigned __int8 *v83; // [sp+44h] [bp-1478h]
  int v84; // [sp+48h] [bp-1474h]
  unsigned __int8 *v85; // [sp+4Ch] [bp-1470h]
  __int64 v86; // [sp+50h] [bp-146Ch] BYREF
  int v87; // [sp+58h] [bp-1464h]
  _WORD v88[200]; // [sp+68h] [bp-1454h] BYREF
  _BYTE v89[696]; // [sp+1F8h] [bp-12C4h] BYREF

  v1 = dword_47506C;
  if ( dword_47506C )
  {
    sub_1C4D40(stderr, "Starting parse\n");
    v1 = dword_47506C;
  }
  v2 = -2;
  v3 = (unsigned __int8 **)v89;
  v88[0] = 0;
  v4 = 0;
  dword_475094 = 0;
  v71 = v88;
  v75 = v88;
  dword_475098 = -2;
  src = v89;
  v78 = 200;
  if ( v1 )
    goto LABEL_43;
LABEL_4:
  if ( v4 == 47 )
  {
LABEL_44:
    v33 = 0;
    ptra = v75;
    v34 = v75 != v88;
    goto LABEL_45;
  }
  while ( 1 )
  {
    v5 = (int)word_368740;
    v6 = word_368740[v4];
    if ( v6 == -57 )
    {
      v5 = (int)&off_368408;
LABEL_21:
      v4 = *(unsigned __int8 *)(v5 + v4 + 2448);
      if ( !v4 )
      {
        ++dword_475094;
        sub_83AC0("syntax error");
      }
      v11 = dword_47506C;
      v12 = *(unsigned __int8 *)(v5 + v4 + 2580);
      v77 = v12;
      v13 = 6 * (1 - v12);
LABEL_23:
      v81 = v3[v13 + 1];
      v82 = v3[v13 + 2];
      v83 = v3[v13 + 3];
      ptr = v3[v13];
      v14 = (int)v3[v13 + 4];
      v84 = v14;
      v85 = v3[v13 + 5];
      if ( v11 )
      {
        v14 = sub_1C4D40(stderr, "Reducing stack by rule %d (line %lu):\n", v4 - 1, word_368E74[v4]);
        if ( v12 )
        {
          v80 = v3;
          v38 = 0;
          v39 = &v71[-v12];
          do
          {
            sub_1C4D40(stderr, "   $%d = ", ++v38);
            v40 = v39[1];
            ++v39;
            sub_82F74(stderr, *(unsigned __int8 *)(v5 + v40 + 2844));
            v14 = sub_1C4D40(stderr, (const char *)&word_356638);
          }
          while ( v38 != v12 );
          v3 = v80;
        }
      }
      switch ( v4 )
      {
        case 4:
          sub_1C37BC(dword_475068, 88);
          sub_1C38F4(dword_475068, *v3);
          sub_1C37BC(dword_475068, 88);
          break;
        case 6:
          sub_1C37BC(dword_475068, 61);
          break;
        case 7:
          sub_1C37BC(dword_475068, 62);
          break;
        case 8:
          sub_1C37BC(dword_475068, 58);
          break;
        case 9:
          sub_1C37BC(dword_475068, 59);
          break;
        case 10:
          sub_1C37BC(dword_475068, 60);
          break;
        case 11:
          sub_1C37BC(dword_475068, 67);
          break;
        case 12:
          sub_1C547C(v14);
          break;
        case 13:
          v47 = sub_1C37BC(dword_475068, 48);
          v48 = dword_475068;
          v49 = sub_1C36FC(v47);
          sub_1C3898(v48, HIDWORD(v49), v49, (int)v49 >> 31);
          sub_1C37BC(dword_475068, 48);
          break;
        case 15:
        case 16:
          dword_487CA4 = 1;
          break;
        case 17:
          ++dword_487CA4;
          break;
        case 18:
          sub_1C37BC(dword_475068, 91);
          v16 = 3;
          goto LABEL_26;
        case 19:
          sub_1C37BC(dword_475068, 91);
          v16 = 2;
          goto LABEL_26;
        case 20:
          sub_1C37BC(dword_475068, 91);
          v16 = 1;
          goto LABEL_26;
        case 21:
          sub_1C37BC(dword_475068, 91);
          v16 = 0;
LABEL_26:
          sub_1C3898(dword_475068, v15, v16, 0);
          sub_1C37BC(dword_475068, 91);
          break;
        case 23:
          sub_1C37BC(dword_475068, 49);
          v50 = dword_475068;
          v51 = sub_158B60(*(_DWORD *)(*(_DWORD *)(dword_475068 + 4) + 4));
          sub_1C38F4(v50, *(_DWORD *)(v51 + 44));
          sub_1C37BC(dword_475068, 49);
          break;
        case 24:
          sub_1C37BC(dword_475068, 52);
          sub_1C38F4(dword_475068, *(v3 - 12));
          sub_1C37BC(dword_475068, 52);
          break;
        case 25:
          sub_1C37BC(dword_475068, 81);
          sub_1C4F0C(dword_475068, *v3, v3[1]);
          sub_1C37BC(dword_475068, 81);
          break;
        case 26:
          sub_1C37BC(dword_475068, 20);
          break;
        case 27:
          sub_1C37BC(dword_475068, 24);
          break;
        case 28:
          sub_1C37BC(dword_475068, 3);
          break;
        case 29:
          sub_1C37BC(dword_475068, 4);
          break;
        case 30:
          sub_1C37BC(dword_475068, 1);
          break;
        case 31:
          sub_1C37BC(dword_475068, 2);
          break;
        case 32:
          sub_1C37BC(dword_475068, 7);
          break;
        case 33:
          sub_1C37BC(dword_475068, 8);
          break;
        case 34:
          sub_1C37BC(dword_475068, 14);
          break;
        case 35:
          sub_1C37BC(dword_475068, 15);
          break;
        case 36:
          sub_1C37BC(dword_475068, 18);
          break;
        case 37:
          sub_1C37BC(dword_475068, 19);
          break;
        case 38:
          sub_1C37BC(dword_475068, 16);
          break;
        case 39:
          sub_1C37BC(dword_475068, 17);
          break;
        case 40:
          sub_1C37BC(dword_475068, 11);
          break;
        case 41:
          sub_1C37BC(dword_475068, 13);
          break;
        case 42:
          sub_1C37BC(dword_475068, 12);
          break;
        case 43:
          sub_1C37BC(dword_475068, 9);
          break;
        case 44:
          sub_1C37BC(dword_475068, 10);
          break;
        case 45:
          sub_1C37BC(dword_475068, 21);
          break;
        case 46:
          sub_1C37BC(dword_475068, 31);
          sub_1C37BC(dword_475068, *(v3 - 6));
          sub_1C37BC(dword_475068, 31);
          break;
        case 47:
          sub_1C37BC(dword_475068, 38);
          sub_1C38F4(dword_475068, v3[2]);
          v63 = *(_QWORD *)v3;
          goto LABEL_147;
        case 48:
          sub_82A98(dword_475068, *v3, (int)v3[1], 0, (int)&v86);
          sub_1C37BC(dword_475068, 38);
          sub_1C38F4(dword_475068, v87);
          v63 = v86;
LABEL_147:
          sub_1C3898(dword_475068, v62, v63, HIDWORD(v63));
          sub_1C37BC(dword_475068, 38);
          break;
        case 49:
          sub_1C37BC(dword_475068, 39);
          sub_1C38F4(dword_475068, v3[4]);
          sub_1C38C0(dword_475068, v3);
          sub_1C37BC(dword_475068, 39);
          break;
        case 52:
          sub_1C37BC(dword_475068, 38);
          v58 = dword_475068;
          v59 = sub_158B60(*(_DWORD *)(*(_DWORD *)(dword_475068 + 4) + 4));
          sub_1C38F4(v58, *(_DWORD *)(v59 + 4));
          v60 = sub_171258(*(v3 - 6));
          v61 = v60;
          LODWORD(v60) = dword_475068;
          *(v3 - 6) = (unsigned __int8 *)v61;
          sub_1C3898(v60, HIDWORD(v60), *(_DWORD *)(v61 + 20), 0);
          sub_1C37BC(dword_475068, 38);
          break;
        case 53:
          sub_1C37BC(dword_475068, 79);
          sub_1C3898(dword_475068, v57, *v3, v3[1]);
          sub_1C37BC(dword_475068, 79);
          break;
        case 54:
          sub_1C37BC(dword_475068, 50);
          sub_1C4F0C(dword_475068, *v3, v3[1]);
          sub_1C37BC(dword_475068, 50);
          break;
        case 55:
          v55 = v3[2];
          if ( v55 )
          {
            v56 = (int)v3[3];
            if ( sub_15B388(v3[2]) && (!dword_487CE0 || sub_C2360(v56)) )
              dword_487CE0 = v56;
            sub_1C37BC(dword_475068, 40);
            sub_1C3840(dword_475068, v56);
            sub_1C37E8(dword_475068, v55);
            sub_1C37BC(dword_475068, 40);
          }
          else
          {
            v68 = sub_1C3E58(*v3, v3[1]);
            v69 = sub_1B1BE8(&v86, v68);
            if ( !(_DWORD)v86 )
            {
              if ( sub_1B7B9C(v69) || sub_1B7B24() )
              {
                v70 = (const char *)sub_1C3E58(*v3, v3[1]);
                sub_946E0("No symbol \"%s\" in current context.", v70);
              }
              sub_946E0("No symbol table is loaded.  Use the \"file\" command.");
            }
            sub_1C3B74(dword_475068, v86, HIDWORD(v86));
          }
          break;
        case 58:
          v53 = *(v3 - 6);
          while ( 1 )
          {
            v14 = sub_1C46F0(v14) + 1;
            switch ( v14 )
            {
              case 0:
                ptr = v53;
                goto LABEL_27;
              case 1:
                goto LABEL_132;
              case 2:
                v14 = sub_17022C(v53);
                v53 = (unsigned __int8 *)v14;
                continue;
              case 4:
                v54 = sub_1C4718();
                if ( v54 == -1 )
                {
LABEL_132:
                  v14 = sub_1700C0(v53);
                  v53 = (unsigned __int8 *)v14;
                }
                else
                {
                  v66 = sub_158B60(*(_DWORD *)(*(_DWORD *)(dword_475068 + 4) + 4));
                  v67 = sub_171928(0, *(_DWORD *)(v66 + 4), 0, 0, v54 - 1, (v54 - 1) >> 31);
                  v14 = sub_172124(0, v53, v67);
                  v53 = (unsigned __int8 *)v14;
                }
                break;
              case 5:
                v14 = sub_170358(v53);
                v53 = (unsigned __int8 *)v14;
                continue;
              default:
                continue;
            }
          }
        case 59:
          ptr = 0;
          sub_1C4654(0);
          break;
        case 60:
          sub_1C4654(0);
          ptr = *v3;
          break;
        case 61:
          ptr = 0;
          sub_1C4654(1);
          break;
        case 62:
          sub_1C4654(1);
          ptr = *v3;
          break;
        case 64:
          ptr = *(v3 - 6);
          break;
        case 65:
        case 66:
          sub_1C4654(4);
          break;
        case 67:
          ptr = 0;
          break;
        case 68:
          v52 = *(v3 - 6);
          ptr = 0;
          if ( v52 )
            free(v52);
          break;
        case 69:
          ptr = v3[2];
          break;
        case 70:
          ptr = *(unsigned __int8 **)(sub_158B60(*(_DWORD *)(*(_DWORD *)(dword_475068 + 4) + 4)) + 4);
          break;
        case 71:
          ptr = *(unsigned __int8 **)(sub_158B60(*(_DWORD *)(*(_DWORD *)(dword_475068 + 4) + 4)) + 8);
          break;
        case 72:
          ptr = *(unsigned __int8 **)sub_158B60(*(_DWORD *)(*(_DWORD *)(dword_475068 + 4) + 4));
          break;
        case 73:
          ptr = *(unsigned __int8 **)(sub_158B60(*(_DWORD *)(*(_DWORD *)(dword_475068 + 4) + 4)) + 24);
          break;
        case 74:
          ptr = *(unsigned __int8 **)(sub_158B60(*(_DWORD *)(*(_DWORD *)(dword_475068 + 4) + 4)) + 12);
          break;
        case 75:
          ptr = *(unsigned __int8 **)(sub_158B60(*(_DWORD *)(*(_DWORD *)(dword_475068 + 4) + 4)) + 20);
          break;
        case 76:
          ptr = *(unsigned __int8 **)(sub_158B60(*(_DWORD *)(*(_DWORD *)(dword_475068 + 4) + 4)) + 16);
          break;
        case 77:
          ptr = *(unsigned __int8 **)(sub_158B60(*(_DWORD *)(*(_DWORD *)(dword_475068 + 4) + 4)) + 28);
          break;
        case 78:
          ptr = *(unsigned __int8 **)(sub_158B60(*(_DWORD *)(*(_DWORD *)(dword_475068 + 4) + 4)) + 32);
          break;
        case 79:
          ptr = *(unsigned __int8 **)(sub_158B60(*(_DWORD *)(*(_DWORD *)(dword_475068 + 4) + 4)) + 36);
          break;
        case 80:
          ptr = *(unsigned __int8 **)(sub_158B60(*(_DWORD *)(*(_DWORD *)(dword_475068 + 4) + 4)) + 40);
          break;
        case 81:
          ptr = *(unsigned __int8 **)(sub_158B60(*(_DWORD *)(*(_DWORD *)(dword_475068 + 4) + 4)) + 44);
          break;
        case 82:
          ptr = *(unsigned __int8 **)(sub_158B60(*(_DWORD *)(*(_DWORD *)(dword_475068 + 4) + 4)) + 48);
          break;
        case 83:
          v45 = (unsigned __int8 *)sub_93028(8);
          HIDWORD(v46) = *v3;
          LODWORD(v46) = 1;
          ptr = v45;
          *(_QWORD *)v45 = v46;
          break;
        case 84:
          v64 = *(v3 - 12);
          v65 = *v64 + 2;
          ++*v64;
          ptr = (unsigned __int8 *)sub_93050(*(v3 - 12), 4 * v65);
          *(_DWORD *)&ptr[4 * *(_DWORD *)ptr] = *v3;
          break;
        case 85:
          v81 = v3[1];
          ptr = *v3;
          break;
        default:
          break;
      }
LABEL_27:
      v17 = *(unsigned __int8 *)(v5 + v4 + 2976);
      v18 = &v71[-v77];
      v19 = &v3[-6 * v77];
      if ( dword_47506C )
      {
        sub_1C4D40(stderr, "%s ", "-> $$ =");
        sub_82F74(stderr, v17);
        sub_1C4D40(stderr, (const char *)&word_356638);
        if ( dword_47506C )
          sub_82A1C(v75, (unsigned int)v18);
      }
      v3 = v19 + 6;
      v20 = v17 - 57;
      v21 = *(char *)(v5 + v20 + 3064);
      *v3 = ptr;
      v3[1] = v81;
      v3[2] = v82;
      v3[3] = v83;
      v3[4] = (unsigned __int8 *)v84;
      v3[5] = v85;
      v22 = *v18;
      v0 = v21 + v22;
      if ( v0 <= 0x211 && (v0 += v5, v22 == *(char *)(v0 + 1384)) )
        v4 = *(unsigned __int8 *)(v0 + 1916);
      else
        v4 = *(char *)(v5 + v20 + 3084);
      goto LABEL_32;
    }
    v7 = dword_475098;
    v8 = dword_47506C;
    if ( dword_475098 == -2 )
    {
      if ( dword_47506C )
        sub_1C4D40(stderr, "Reading a token: ");
      v7 = sub_8301C();
      v8 = dword_47506C;
      dword_475098 = v7;
    }
    if ( v7 <= 0 )
    {
      v0 = 0;
      if ( !v8 )
        LOWORD(v5) = -31736;
      dword_475098 = 0;
      if ( v8 )
      {
        v5 = (int)&off_368408;
        sub_1C4D40(stderr, "Now at end of input.\n");
      }
      else
      {
        HIWORD(v5) = 54;
        v0 = 0;
      }
    }
    else
    {
      v9 = v7 < 296;
      v5 = 33800;
      if ( v7 >= 296 )
        v0 = 2;
      else
        HIWORD(v5) = 54;
      if ( v7 >= 296 )
        HIWORD(v5) = 54;
      else
        v7 += v5;
      if ( v9 )
        v0 = *(unsigned __int8 *)(v7 + 1088);
      v6 += v0;
      if ( v8 )
      {
        sub_1C4D40(stderr, "%s ", "Next token is");
        sub_82F74(stderr, v0);
        sub_1C4D40(stderr, (const char *)&word_356638);
      }
    }
    if ( v6 > 0x211 )
      goto LABEL_21;
    v10 = v5 + v6;
    if ( *(char *)(v10 + 1384) != v0 )
      goto LABEL_21;
    v4 = *(unsigned __int8 *)(v10 + 1916);
    v11 = dword_47506C;
    if ( !*(_BYTE *)(v10 + 1916) )
    {
      v12 = *(unsigned __int8 *)(v10 + 1916);
      v13 = 6;
      v77 = v4;
      goto LABEL_23;
    }
    if ( dword_47506C )
    {
      sub_1C4D40(stderr, "%s ", "Shifting");
      sub_82F74(stderr, v0);
      sub_1C4D40(stderr, (const char *)&word_356638);
    }
    dword_475098 = -2;
    v3 += 6;
    v18 = v71;
    v41 = dword_475074;
    v42 = dword_475078;
    v43 = *(unsigned __int8 **)algn_47507C;
    *v3 = (unsigned __int8 *)dword_475070;
    v3[1] = (unsigned __int8 *)v41;
    v3[2] = (unsigned __int8 *)v42;
    v3[3] = v43;
    v0 = (unsigned int)(v3 + 4);
    v44 = *(unsigned __int8 **)algn_475084;
    v3[4] = (unsigned __int8 *)dword_475080;
    v3[5] = v44;
LABEL_32:
    v2 = (int)v75;
    v71 = v18 + 1;
    v18[1] = v4;
    v23 = v78 + 0x7FFFFFFF;
    if ( v18 + 1 >= &v75[v23] )
      break;
LABEL_42:
    if ( !dword_47506C )
      goto LABEL_4;
LABEL_43:
    sub_1C4D40(stderr, "Entering state %d\n", v4);
    if ( v4 == 47 )
      goto LABEL_44;
  }
  v24 = v18 + 1 - v75 + 1;
  if ( v78 > 0x270F )
    sub_83AC0("memory exhausted");
  v25 = v23 * 2 + 2;
  v26 = 10000;
  if ( v25 < 0x2710 )
    v26 = v25;
  v27 = 2 * v24;
  v78 = v26;
  v28 = 2 * v26;
  v29 = 24 * v24;
  v30 = (char *)sub_93028(26 * v26 + 23);
  memcpy(v30, v75, v27);
  ptra = (__int16 *)v30;
  v31 = memcpy(&v30[24 * ((v28 + 23) / 0x18u)], src, v29);
  v32 = v31;
  if ( v75 != v88 )
  {
    v72 = v31;
    free(v75);
    v32 = v72;
  }
  v0 = v29 - 24;
  v2 = (int)&v30[v27 - 2];
  v71 = (__int16 *)v2;
  v3 = (unsigned __int8 **)&v32[v0];
  if ( dword_47506C )
  {
    v76 = v32;
    sub_1C4D40(stderr, "Stack size increased to %lu\n", v78);
    v32 = v76;
  }
  if ( v71 < (__int16 *)&v30[v28 - 2] )
  {
    v75 = (__int16 *)v30;
    src = v32;
    goto LABEL_42;
  }
  v34 = 1;
  v33 = 1;
LABEL_45:
  if ( dword_475098 != -2 )
  {
    if ( (unsigned int)dword_475098 >= 0x128 )
      v2 = 2;
    else
      LOWORD(v0) = -31736;
    if ( (unsigned int)dword_475098 < 0x128 )
    {
      HIWORD(v0) = 54;
      v2 = *(unsigned __int8 *)(v0 + dword_475098 + 1088);
    }
    sub_82FC4("Cleanup: discarding lookahead", v2);
  }
  if ( dword_47506C )
    sub_82A1C(ptra, (unsigned int)v71);
  for ( i = v71; i != ptra; --i )
  {
    v36 = *i;
    sub_82FC4("Cleanup: popping", *((unsigned __int8 *)&off_368408 + v36 + 2844));
  }
  if ( v34 )
    free(ptra);
  return v33;
}
