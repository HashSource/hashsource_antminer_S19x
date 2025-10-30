int __fastcall sub_71270(int a1, int a2, const char *a3)
{
  int v4; // r5
  int *v5; // r3
  const char *v6; // r6
  size_t v7; // r4
  void *v8; // r0
  int v9; // r2
  _BYTE *v10; // r3
  _BYTE *v11; // r6
  int v12; // r1
  bool v13; // zf
  int v14; // r3
  size_t v15; // r4
  char v16; // r11
  int v17; // r9
  int *v18; // r5
  int v19; // r0
  int v20; // r8
  int v21; // r11
  int v22; // r7
  int v23; // r0
  int v24; // r3
  char *v25; // r2
  int v26; // t1
  unsigned __int8 *v27; // r8
  int v28; // r5
  int v29; // r7
  int v30; // r4
  int v31; // r7
  int v32; // r0
  size_t v33; // r2
  int v34; // r0
  int v35; // r3
  size_t v36; // r7
  char v37; // r1
  _BYTE *v38; // r3
  bool v39; // zf
  int v40; // r3
  char *v41; // r1
  int result; // r0
  int v43; // r0
  int v44; // r0
  int v45; // r0
  int v46; // r2
  int v47; // r5
  int v48; // r0
  int v49; // r1
  bool v50; // zf
  unsigned __int8 *v51; // r2
  bool v52; // zf
  unsigned __int8 *v53; // r4
  unsigned __int8 *v54; // r1
  int v55; // r3
  int v56; // r0
  int v57; // r0
  bool v58; // zf
  int v59; // r1
  int v60; // r3
  char v61; // r2
  _BYTE *v62; // r9
  _BYTE *v63; // r3
  bool v64; // zf
  int v65; // r3
  void *v66; // r0
  int v67; // r3
  int v68; // r2
  int v69; // r3
  int v70; // r0
  int v71; // r1
  bool v72; // zf
  int v73; // r3
  char v74; // r2
  int v75; // [sp+Ch] [bp-48h]
  int v76; // [sp+10h] [bp-44h]
  unsigned __int8 *v77; // [sp+14h] [bp-40h]
  int v78; // [sp+18h] [bp-3Ch]
  size_t v79; // [sp+20h] [bp-34h]
  int v80; // [sp+24h] [bp-30h]
  int v83; // [sp+30h] [bp-24h]
  int *v84; // [sp+38h] [bp-1Ch] BYREF
  char *src; // [sp+3Ch] [bp-18h] BYREF
  size_t n; // [sp+40h] [bp-14h] BYREF
  char *v87; // [sp+44h] [bp-10h] BYREF
  _DWORD v88[3]; // [sp+48h] [bp-Ch] BYREF

  v76 = a2;
  LOWORD(v4) = (unsigned __int16)&dword_4748E8;
  v83 = sub_9253C(nullsub_39, 0);
  if ( !a2 )
    v5 = &dword_487CD0;
  HIWORD(v4) = (unsigned int)&dword_4748E8 >> 16;
  if ( !a2 )
    v76 = *v5;
  v6 = (const char *)sub_9EAC8(a3);
  v7 = strlen(v6);
  v8 = *(void **)(v4 + 0x3C);
  v75 = v7;
  if ( *(_DWORD *)(v4 + 0x40) - (int)v8 < v7 + 1 )
  {
    obstack_newchunk((struct obstack *)(v4 + 48), v7 + 1);
    v8 = *(void **)(v4 + 0x3C);
  }
  memcpy(v8, v6, v7);
  v9 = *(_DWORD *)(v4 + 0x3C);
  *(_DWORD *)(v4 + 0x3C) = v9 + v7 + 1;
  *(_BYTE *)(v9 + v7) = 0;
  v10 = *(_BYTE **)(v4 + 0x3C);
  v11 = *(_BYTE **)(v4 + 0x38);
  v12 = *(_DWORD *)(v4 + 0x40);
  v13 = v11 == v10;
  if ( v11 == v10 )
    LOBYTE(v9) = *(_BYTE *)(v4 + 0x58);
  v14 = (unsigned int)&v10[*(_DWORD *)(v4 + 0x48)] & ~*(_DWORD *)(v4 + 0x48);
  *(_DWORD *)(v4 + 0x3C) = v14;
  if ( v13 )
    *(_BYTE *)(v4 + 0x58) = v9 | 2;
  if ( v14 - *(_DWORD *)(v4 + 0x34) > (unsigned int)(v12 - *(_DWORD *)(v4 + 0x34)) )
  {
    v14 = v12;
    *(_DWORD *)(v4 + 0x3C) = v12;
  }
  v80 = 10;
  *(_DWORD *)(v4 + 0x38) = v14;
LABEL_14:
  v15 = v75;
  if ( v75 <= 0 )
  {
LABEL_41:
    if ( !sub_1B7B9C() )
    {
      v57 = sub_1B7B24();
      v58 = v76 == 0;
      if ( !v76 )
        v58 = v57 == 0;
      if ( v58 )
        sub_946E0("No symbol table is loaded.  Use the \"file\" command.");
    }
    if ( v76 != dword_487CD0 )
      sub_946E0("No definition of \"%s\" in specified context.", a3);
    sub_946E0("No definition of \"%s\" in current context.", a3);
  }
  v78 = v4;
LABEL_16:
  while ( 1 )
  {
    v16 = v11[v15];
    v11[v15] = 0;
    v79 = v15;
    v17 = sub_A5400(v11, v76, 1, &v84);
    v77 = &v11[v15];
    sub_9253C(460620, v84);
    v11[v15] = v16;
    if ( v17 == 1 )
      break;
    v18 = v84;
    if ( v17 > 0 )
      goto LABEL_18;
    v23 = 0;
LABEL_28:
    switch ( sub_9FE30(v23, &src, &n, &v87) )
    {
      case 0:
        if ( v15 != v75 )
        {
          if ( v17 != 1 )
          {
            if ( !v17 )
            {
              sub_A43A0(v88, v11);
              if ( v88[0] )
                goto LABEL_75;
              goto LABEL_33;
            }
            v27 = &v11[v15];
            v28 = v78;
            goto LABEL_108;
          }
LABEL_131:
          v27 = &v11[v15];
          goto LABEL_46;
        }
        if ( v17 )
        {
          v27 = &v11[v15];
          v28 = v78;
          if ( v17 != 1 )
          {
LABEL_108:
            v59 = *(_DWORD *)(v28 + 64);
            v60 = *(_DWORD *)(v28 + 60);
            v61 = v59 - v60;
            if ( (unsigned int)(v59 - v60) <= 0x2F )
            {
              obstack_newchunk(&stru_474918, 48);
              v60 = *(_DWORD *)(v28 + 60);
              v59 = *(_DWORD *)(v28 + 64);
            }
            v62 = *(_BYTE **)(v28 + 56);
            v63 = (_BYTE *)(v60 + 48);
            v64 = v63 == v62;
            if ( v63 == v62 )
              v61 = *(_BYTE *)(v28 + 88);
            v65 = (unsigned int)&v63[*(_DWORD *)(v28 + 72)] & ~*(_DWORD *)(v28 + 72);
            *(_DWORD *)(v28 + 60) = v65;
            if ( v64 )
              *(_BYTE *)(v28 + 88) = v61 | 2;
            if ( v65 - *(_DWORD *)(v28 + 52) > (unsigned int)(v59 - *(_DWORD *)(v28 + 52)) )
            {
              v65 = v59;
              *(_DWORD *)(v28 + 60) = v59;
            }
            *(_DWORD *)(v28 + 56) = v65;
            memset(v62, 0, 0x30u);
            v66 = *(void **)(v28 + 60);
            v67 = *(_DWORD *)(v28 + 64);
            v62[32] = 0;
            if ( v67 - (int)v66 < v15 + 1 )
            {
              obstack_newchunk(&stru_474918, v15 + 1);
              v66 = *(void **)(v28 + 60);
            }
            memcpy(v66, v11, v15);
            v68 = *(_DWORD *)(v28 + 60);
            v29 = 0;
            *(_DWORD *)(v28 + 60) = v68 + v15 + 1;
            *(_BYTE *)(v68 + v15) = 0;
            v69 = *(_DWORD *)(v28 + 60);
            v70 = *(_DWORD *)(v28 + 56);
            v71 = *(_DWORD *)(v28 + 64);
            v72 = v70 == v69;
            v30 = a1;
            if ( v70 == v69 )
              LOBYTE(v68) = *(_BYTE *)(v28 + 88);
            v73 = (v69 + *(_DWORD *)(v28 + 72)) & ~*(_DWORD *)(v28 + 72);
            *(_DWORD *)(v28 + 60) = v73;
            if ( v72 )
              *(_BYTE *)(v28 + 88) = v68 | 2;
            v74 = v62[20];
            if ( v73 - *(_DWORD *)(v28 + 52) > (unsigned int)(v71 - *(_DWORD *)(v28 + 52)) )
            {
              v73 = v71;
              *(_DWORD *)(v28 + 60) = v71;
            }
            *(_DWORD *)(v28 + 56) = v73;
            v62[20] = v74 & 0xE0 | 0xE;
            *(_DWORD *)v62 = v70;
            sub_1C37BC(a1, 40);
            sub_1C3840(a1, v76);
            sub_1C37E8(a1, v62);
            sub_1C37BC(a1, 40);
            goto LABEL_67;
          }
LABEL_46:
          v29 = 0;
          v30 = a1;
          sub_70758(a1, v84[1], *v84);
LABEL_67:
          sub_71190(v30, v27);
          goto LABEL_68;
        }
        v43 = sub_70F8C(a1, v11);
        if ( v43 )
        {
          v29 = v43;
          sub_92620(v83);
          return v29;
        }
        sub_A43A0(v88, v11);
        if ( v88[0] )
        {
LABEL_75:
          sub_1C3B74(a1, v88[0], v88[1]);
          sub_71190(a1, v77);
          sub_92620(v83);
          return 0;
        }
        if ( !strncmp(v11, "standard__", 0xAu) )
          sub_946E0("No definition of \"%s\" found.", a3);
LABEL_33:
        if ( !--v15 )
          goto LABEL_41;
        v24 = (unsigned __int8)v11[v15];
        if ( v24 != 46 )
        {
          v25 = &v11[v79 - 1];
          while ( 1 )
          {
            if ( v24 == 95 )
            {
              if ( v25[1] == 95 )
                goto LABEL_16;
              if ( !--v15 )
                goto LABEL_41;
            }
            else if ( !--v15 )
            {
              goto LABEL_41;
            }
            v26 = (unsigned __int8)*--v25;
            v24 = v26;
            if ( v26 == 46 )
              goto LABEL_16;
          }
        }
        break;
      case 1:
        v27 = &v11[v15];
        goto LABEL_66;
      case 2:
      case 3:
      case 4:
        v27 = &v11[v15];
        v4 = v78;
        goto LABEL_54;
      default:
        goto LABEL_130;
    }
  }
  v19 = sub_A0728(*v84, v84[1]);
  v18 = v84;
  if ( !v19 )
  {
LABEL_18:
    v19 = *v18;
    goto LABEL_19;
  }
  *v84 = v19;
LABEL_19:
  v20 = 0;
  v21 = -1;
  v22 = 0;
  while ( 2 )
  {
    switch ( *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(v19 + 32) >> 3)) )
    {
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 0xE:
        goto LABEL_25;
      case 8:
        if ( sub_A10F0(*(_DWORD *)(v19 + 24), v20) )
        {
          v21 = v22;
          v20 = *(_DWORD *)(v18[2 * v22] + 24);
        }
        goto LABEL_23;
      default:
LABEL_23:
        if ( v17 > ++v22 )
        {
          v19 = v18[2 * v22];
          continue;
        }
        if ( !v20 || (v31 = v18[2 * v21]) == 0 )
        {
LABEL_25:
          if ( v17 == 1 )
            v23 = *v84;
          else
            v23 = 0;
          goto LABEL_28;
        }
        v32 = v18[2 * v21];
        v27 = &v11[v15];
        v4 = v78;
        switch ( sub_9FE30(v32, &src, &n, &v87) )
        {
          case 0:
            if ( v15 == v75 )
            {
              sub_92620(v83);
              return *(_DWORD *)(v31 + 24);
            }
            v44 = *(_DWORD *)(v31 + 24);
            if ( !v44 )
              goto LABEL_98;
            v45 = sub_171258(v44);
            v46 = *v77;
            v47 = v45;
            if ( !*v77 )
              goto LABEL_98;
            while ( 1 )
            {
              if ( v46 == 46 )
              {
                ++v27;
              }
              else if ( v46 == 95 && v27[1] == 95 )
              {
                v27 += 2;
              }
              v48 = sub_9E570(v47, v27, 1);
              if ( v48 >= 0 )
                break;
              v49 = *v27;
              v50 = v49 == 0;
              if ( *v27 )
                v50 = v49 == 46;
              if ( v50 )
              {
                v55 = *v27;
                v53 = v27;
LABEL_100:
                if ( !v55 )
                  goto LABEL_98;
              }
              else
              {
                v51 = v27;
                while ( 1 )
                {
                  v13 = v49 == 95;
                  v53 = v51 + 1;
                  v54 = v51;
                  v55 = *++v51;
                  if ( v13 && v55 == 95 )
                    break;
                  v52 = v55 == 46;
                  if ( v55 != 46 )
                    v52 = v55 == 0;
                  v49 = v55;
                  if ( v52 )
                    goto LABEL_100;
                }
                v53 = v54;
              }
              v56 = sub_71140(v47, (const char *)v27, v53 - v27);
              if ( v56 >= 0 )
              {
                v46 = *v53;
                v27 = v53;
                v47 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v47 + 24) + 24) + 24 * v56 + 12);
                if ( *v53 )
                  continue;
              }
              goto LABEL_98;
            }
            v29 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v47 + 24) + 24) + 24 * v48 + 12);
            if ( !v29 )
LABEL_98:
              sub_946E0("Invalid attempt to select from type: \"%s\".", a3);
            return result;
          case 1:
LABEL_66:
            v30 = a1;
            v29 = 0;
            sub_70984(a1, v76, src, n, v87, 10);
            goto LABEL_67;
          case 2:
          case 3:
          case 4:
LABEL_54:
            v33 = n;
            v34 = *(_DWORD *)(v4 + 64);
            v35 = *(_DWORD *)(v4 + 60);
            v36 = n + v75 - v15 + 1;
            v37 = v34 - v35;
            if ( v36 > v34 - v35 )
            {
              obstack_newchunk(&stru_474918, n + v75 - v15 + 1);
              v35 = *(_DWORD *)(v4 + 60);
              v34 = *(_DWORD *)(v4 + 64);
              v33 = n;
            }
            v11 = *(_BYTE **)(v4 + 56);
            v38 = (_BYTE *)(v35 + v36);
            v39 = v38 == v11;
            if ( v38 == v11 )
              v37 = *(_BYTE *)(v4 + 88);
            v40 = (unsigned int)&v38[*(_DWORD *)(v4 + 72)] & ~*(_DWORD *)(v4 + 72);
            *(_DWORD *)(v4 + 60) = v40;
            if ( v39 )
              *(_BYTE *)(v4 + 88) = v37 | 2;
            v41 = src;
            if ( v40 - *(_DWORD *)(v4 + 52) > (unsigned int)(v34 - *(_DWORD *)(v4 + 52)) )
            {
              v40 = v34;
              *(_DWORD *)(v4 + 60) = v34;
            }
            *(_DWORD *)(v4 + 56) = v40;
            strncpy(v11, v41, v33);
            strcpy(&v11[n], (const char *)v27);
            v13 = v80-- == 1;
            v75 = v75 + n - v15;
            if ( v13 )
              sub_946E0("Could not find renamed symbol \"%s\"", a3);
            goto LABEL_14;
          default:
LABEL_130:
            sub_94700("ada-exp.y", 1289, "impossible value from ada_parse_renaming");
            goto LABEL_131;
        }
LABEL_68:
        sub_92620(v83);
        return v29;
    }
  }
}
