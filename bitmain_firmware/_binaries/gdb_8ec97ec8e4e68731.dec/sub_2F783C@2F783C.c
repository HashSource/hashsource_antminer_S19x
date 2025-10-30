int __fastcall sub_2F783C(int a1, _DWORD *a2)
{
  _DWORD *v2; // r9
  _DWORD *v4; // r0
  int v5; // r11
  unsigned int v6; // r1
  int v7; // r3
  int v8; // r3
  unsigned int v9; // r5
  char *v10; // r3
  int v11; // r0
  bool v12; // zf
  unsigned int v13; // r8
  char *v14; // r0
  int v15; // r6
  unsigned int v16; // r5
  unsigned __int8 *v17; // r8
  unsigned __int16 v18; // r0
  unsigned int v19; // r4
  int v20; // r1
  char *v21; // r3
  char *v22; // r0
  int v23; // r3
  char *v24; // r2
  char *v25; // r3
  int v26; // r1
  int v28; // r1
  int v29; // r1
  int v30; // r2
  int v31; // r0
  char *v32; // r2
  int v33; // r1
  _BYTE *v34; // r0
  char *v35; // r3
  char *v36; // r1
  char *v37; // r12
  char v38; // r0
  unsigned __int8 *v39; // r2
  char *v40; // r12
  int v41; // r3
  char *v42; // r12
  __int64 v43; // r0
  unsigned __int8 *v44; // r4
  int v45; // r5
  int v46; // r6
  int v47; // r0
  int v48; // r3
  char *v49; // r3
  unsigned int v50; // r5
  unsigned int v51; // r7
  int v52; // r11
  unsigned int v53; // r4
  int v54; // r6
  char *v55; // r10
  char *v56; // r12
  char *v57; // r3
  _DWORD *j; // r0
  void *v59; // r0
  void *v60; // r0
  int v61; // r2
  unsigned int v62; // r9
  int v63; // r9
  char *v64; // r1
  int v65; // r0
  int v66; // r9
  unsigned __int8 v67; // r0
  int v68; // r0
  unsigned __int8 v69; // r1
  unsigned int v70; // r10
  unsigned int v71; // r2
  int v72; // r3
  int v73; // r2
  int v74; // r12
  int v75; // r10
  int v76; // r0
  size_t v77; // r9
  int v78; // r0
  _DWORD *v79; // r7
  int v80; // r6
  int *v81; // r5
  _DWORD *v82; // r4
  int v83; // r3
  int v84; // r2
  int *v85; // r8
  unsigned int v86; // lr
  unsigned int v87; // r3
  unsigned int v88; // r2
  unsigned int v89; // r1
  int v90; // r12
  int v91; // r0
  _DWORD *v92; // r5
  unsigned int v93; // r4
  bool v94; // cf
  int v95; // [sp+10h] [bp-4Ch]
  _DWORD *v96; // [sp+10h] [bp-4Ch]
  unsigned int v97; // [sp+14h] [bp-48h]
  int v98; // [sp+18h] [bp-44h]
  int v99; // [sp+1Ch] [bp-40h]
  int v100; // [sp+20h] [bp-3Ch]
  char *ptr; // [sp+24h] [bp-38h]
  int *v102; // [sp+28h] [bp-34h]
  int v103; // [sp+2Ch] [bp-30h]
  int v104; // [sp+30h] [bp-2Ch]
  int v105; // [sp+34h] [bp-28h]
  int v106; // [sp+38h] [bp-24h]
  int v108; // [sp+40h] [bp-1Ch]
  _BYTE *v109; // [sp+44h] [bp-18h]
  int v110; // [sp+48h] [bp-14h]
  int v111; // [sp+4Ch] [bp-10h]
  char *i; // [sp+50h] [bp-Ch] BYREF
  int v113[2]; // [sp+54h] [bp-8h] BYREF

  v2 = *(_DWORD **)(a1 + 8);
  if ( !sub_2F5C18(
          v2,
          (const char **)(a2[2] + 40),
          a2[15],
          (int)(a2 + 18),
          *(unsigned int *)(a1 + 52),
          a2 + 18,
          a2 + 19) )
    return 0;
  v4 = (_DWORD *)sub_2ACBF4((int)v2, 36);
  v5 = (int)v4;
  if ( !v4 )
    return 0;
  v6 = a2[19];
  v7 = *(_DWORD *)(a1 + 40);
  *v4 = v2;
  v4[1] = 0;
  v4[4] = v7;
  v4[6] = 0;
  v4[2] = 0;
  v4[5] = 0;
  v4[3] = 0;
  v4[7] = 0;
  v4[8] = 0;
  if ( v6 <= 0xF )
  {
    v5 = 0;
    sub_2A6A5C("Dwarf Error: Line info section is too small (%Ld)");
    ((void (__fastcall *)(int))loc_2A6C48)(17);
    return v5;
  }
  v8 = a2[18];
  v9 = v8 + v6;
  v10 = (char *)(v8 + *(_DWORD *)(a1 + 52));
  i = v10;
  if ( v9 >= (unsigned int)(v10 + 4) )
  {
    v11 = (*(int (__fastcall **)(char *))(v2[1] + 40))(v10);
    v10 = i;
    v12 = v11 == -1;
    v13 = v11;
    v14 = i + 4;
    i += 4;
    if ( v12 )
    {
      if ( v9 >= (unsigned int)(v10 + 12) )
      {
        v13 = (*(int (**)(void))(v2[1] + 28))();
        v14 = i;
      }
      else
      {
        v13 = 0;
      }
      v14 += 8;
      v15 = 8;
      i = v14;
LABEL_10:
      v16 = v9 - (_DWORD)v14;
      if ( v16 < v13 )
      {
        sub_2A6A5C(
          "Dwarf Error: Line info data is bigger (%#Lx) than the space remaining in the section (%#lx)",
          v13,
          v16);
        v5 = 0;
        ((void (__fastcall *)(int))loc_2A6C48)(17);
        return v5;
      }
      v17 = (unsigned __int8 *)&v14[v13];
      if ( v17 < (unsigned __int8 *)v14 + 2 )
        goto LABEL_94;
      goto LABEL_12;
    }
    if ( v13 )
    {
      v15 = 4;
      goto LABEL_10;
    }
  }
  else
  {
    i = v10 + 4;
  }
  if ( *(_BYTE *)(a1 + 92) == 8 )
  {
    if ( v9 >= (unsigned int)(v10 + 8) )
      v13 = (*(int (**)(void))(v2[1] + 40))();
    else
      v13 = 0;
    v15 = 8;
    v14 = i + 4;
    i += 4;
    goto LABEL_10;
  }
  v15 = 4;
  v17 = (unsigned __int8 *)i;
  if ( i < i + 2 )
  {
LABEL_94:
    v20 = 0;
    goto LABEL_95;
  }
LABEL_12:
  v18 = (*(int (**)(void))(v2[1] + 52))();
  v19 = v18;
  if ( (unsigned int)v18 - 2 > 3 )
  {
    v20 = v18;
LABEL_95:
    v5 = 0;
    sub_2A6A5C("Dwarf Error: Unhandled .debug_line version %d.", v20);
    ((void (__fastcall *)(int))loc_2A6C48)(17);
    return v5;
  }
  v21 = i;
  v22 = i + 2;
  i += 2;
  if ( v19 != 5 )
  {
    if ( v19 == 4 )
      v23 = 6;
    else
      v23 = 5;
    if ( v17 > (unsigned __int8 *)&v22[v23 + v15] )
      goto LABEL_19;
LABEL_180:
    v5 = 0;
    sub_2A6A5C("Dwarf Error: Ran out of room reading prologue");
    ((void (__fastcall *)(int))loc_2A6C48)(17);
    return v5;
  }
  if ( v17 <= (unsigned __int8 *)&v22[v15 + 8] )
    goto LABEL_180;
  v22 = v21 + 4;
  i = v21 + 3;
  if ( v17 >= (unsigned __int8 *)v21 + 4 )
  {
    v28 = (unsigned __int8)v21[3];
    i = v21 + 4;
    if ( v28 )
    {
      v5 = 0;
      sub_2A6A5C("Dwarf Error: Line info unsupported segment selector size %u.", v28);
      ((void (__fastcall *)(int))loc_2A6C48)(17);
      return v5;
    }
  }
  else
  {
    i = v21 + 4;
  }
LABEL_19:
  if ( v15 == 4 )
  {
    if ( v17 >= (unsigned __int8 *)v22 + 4 )
    {
      (*(void (**)(void))(v2[1] + 40))();
      v22 = i;
    }
  }
  else if ( v17 >= (unsigned __int8 *)v22 + 8 )
  {
    (*(void (**)(void))(v2[1] + 28))();
    v22 = i;
  }
  v24 = &v22[v15];
  v25 = &v22[v15 + 1];
  i = &v22[v15];
  if ( v17 < (unsigned __int8 *)v25 )
    v26 = 0;
  else
    v26 = (unsigned __int8)v22[v15];
  i = &v22[v15 + 1];
  v104 = v26;
  if ( v19 <= 3 )
  {
    v99 = 1;
  }
  else
  {
    v25 = v24 + 2;
    if ( v17 < (unsigned __int8 *)v24 + 2 )
    {
      i = v24 + 2;
LABEL_28:
      v5 = 0;
      sub_2A6A5C("Dwarf Error: Invalid maximum operations per instruction.");
      ((void (__fastcall *)(int))loc_2A6C48)(17);
      return v5;
    }
    v61 = (unsigned __int8)v24[1];
    i = v25;
    v99 = v61;
    if ( !v61 )
      goto LABEL_28;
  }
  i = v25 + 1;
  if ( v17 < (unsigned __int8 *)v25 + 2 )
    v29 = 0;
  else
    v29 = (unsigned __int8)v25[1];
  i = v25 + 2;
  if ( v17 >= (unsigned __int8 *)v25 + 2 )
    v29 = (v29 ^ 0x80) - 128;
  v106 = v29;
  if ( v17 < (unsigned __int8 *)v25 + 3 )
  {
    v32 = v25 + 4;
    i = v25 + 3;
    if ( v17 < (unsigned __int8 *)v25 + 4 )
    {
      i = v25 + 4;
      goto LABEL_91;
    }
    v98 = 0;
    v105 = 0;
    goto LABEL_48;
  }
  v30 = (unsigned __int8)v25[2];
  i = v25 + 3;
  v31 = v30;
  v98 = v30;
  v32 = v25 + 4;
  v105 = v31;
  if ( v17 >= (unsigned __int8 *)v25 + 4 )
  {
LABEL_48:
    v33 = (unsigned __int8)v25[3];
    i = v32;
    v97 = v33;
    v100 = v33;
    if ( v17 > (unsigned __int8 *)&v32[v33 - 1] )
    {
      v34 = (_BYTE *)sub_2ACBF4((int)v2, v33);
      v109 = v34;
      *v34 = 1;
      if ( v97 > 1 )
      {
        v35 = i;
        v36 = v34 + 1;
        v37 = &v34[v97];
        do
        {
          v38 = 0;
          if ( v17 >= (unsigned __int8 *)v35 + 1 )
            v38 = *v35;
          *v36++ = v38;
          v35 = ++i;
        }
        while ( v37 != v36 );
      }
      goto LABEL_54;
    }
    goto LABEL_91;
  }
  i = v25 + 4;
  if ( v17 > (unsigned __int8 *)v25 + 3 )
  {
    v109 = (_BYTE *)sub_2ACBF4((int)v2, 0);
    v100 = 0;
    *v109 = 1;
    v97 = 0;
LABEL_54:
    if ( v19 == 5 )
    {
      if ( !sub_2F7224(a1, &i, v17, v5, (int (__fastcall *)(int, int, int, int, int))sub_2F679C)
        || !sub_2F7224(a1, &i, v17, v5, sub_2F5D98) )
      {
        goto LABEL_84;
      }
      v49 = i;
    }
    else
    {
      while ( 1 )
      {
        v40 = i;
        if ( i >= (char *)v17 )
        {
          v41 = 0;
          v113[0] = 0;
          goto LABEL_61;
        }
        if ( !*i )
        {
          v41 = 1;
          v113[0] = 1;
          goto LABEL_61;
        }
        v39 = sub_2F6144((unsigned __int8 *)i, v17, v113);
        if ( !v39 )
          break;
        i += v113[0];
        if ( !sub_2F672C((int *)(v5 + 8), (void **)(v5 + 20), (int)v39) )
          goto LABEL_84;
      }
      v40 = i;
      v41 = v113[0];
LABEL_61:
      v42 = &v40[v41];
      for ( i = v42; ; v42 = i )
      {
        HIDWORD(v43) = v17;
        if ( v17 <= (unsigned __int8 *)v42 )
        {
          v48 = 0;
          v113[0] = 0;
          goto LABEL_68;
        }
        if ( !*v42 )
        {
          v48 = 1;
          v113[0] = 1;
          goto LABEL_68;
        }
        v44 = sub_2F6144((unsigned __int8 *)v42, v17, v113);
        v42 = i;
        if ( !v44 )
          break;
        i += v113[0];
        v45 = sub_2ABC24((int)v2, i, v113, 0, (unsigned int)v17);
        i += v113[0];
        v46 = sub_2ABC24((int)v2, i, v113, 0, (unsigned int)v17);
        i += v113[0];
        v47 = sub_2ABC24((int)v2, i, v113, 0, (unsigned int)v17);
        i += v113[0];
        if ( !sub_2F5D98(v5, (int)v44, v45, v46, v47) )
          goto LABEL_84;
      }
      v48 = v113[0];
LABEL_68:
      v49 = &v42[v48];
      i = v49;
    }
    v108 = (int)v2;
    v102 = (int *)v5;
    while ( 2 )
    {
      if ( v17 > (unsigned __int8 *)v49 )
      {
        if ( v102[1] )
        {
          LODWORD(v43) = sub_2F7694((int)v102, 1);
          v49 = i;
          ptr = (char *)v43;
        }
        else
        {
          ptr = 0;
        }
        v50 = 0;
        v51 = -1;
        v52 = 0;
        v53 = 0;
        v54 = 1;
        v95 = 0;
        v103 = 0;
        while ( 1 )
        {
          while ( 1 )
          {
LABEL_75:
            if ( v17 <= (unsigned __int8 *)v49 )
              goto LABEL_112;
            while ( 1 )
            {
              v55 = v49 + 1;
              if ( v17 < (unsigned __int8 *)v49 + 1 )
                break;
              v62 = (unsigned __int8)*v49;
              i = v49 + 1;
              if ( v97 <= v62 )
                goto LABEL_135;
              switch ( v62 )
              {
                case 0u:
                  goto LABEL_78;
                case 1u:
                  if ( sub_2F5E18(v102, v53, v52, ptr, v54, v103, v95, 0) )
                    goto LABEL_128;
                  goto LABEL_139;
                case 2u:
                  v64 = v49 + 1;
                  if ( v99 == 1 )
                  {
                    v53 += v104 * sub_2ABC24(v108, v64, v113, 0, (unsigned int)v17);
                  }
                  else
                  {
                    v65 = sub_2ABC24(v108, v64, v113, 0, (unsigned int)v17);
                    v43 = sub_347674(v52 + v65, v99);
                    v52 = BYTE4(v43);
                    v53 = v104 * v43;
                  }
                  goto LABEL_119;
                case 3u:
                  v54 += sub_2ABC24(v108, v55, v113, 1, (unsigned int)v17);
                  v49 = &i[v113[0]];
                  i += v113[0];
                  goto LABEL_75;
                case 4u:
                  v63 = sub_2ABC24(v108, v55, v113, 0, (unsigned int)v17);
                  i += v113[0];
                  if ( ptr )
                    free(ptr);
                  ptr = sub_2F7694((int)v102, v63);
                  goto LABEL_123;
                case 5u:
                  v103 = sub_2ABC24(v108, v49 + 1, v113, 0, (unsigned int)v17);
LABEL_119:
                  v49 = &i[v113[0]];
                  i += v113[0];
                  goto LABEL_75;
                case 6u:
                case 7u:
                  ++v49;
                  goto LABEL_75;
                case 8u:
                  if ( !v105 )
                    goto LABEL_139;
                  LODWORD(v43) = sub_347690(255 - v100);
                  if ( v99 == 1 )
                  {
                    v53 += v43 * v104;
                    v49 = v55;
                    goto LABEL_75;
                  }
                  v43 = sub_347674(v52 + (int)v43, v99);
                  v49 = v55;
                  v52 = BYTE4(v43);
                  v53 += v104 * v43;
                  if ( v17 <= (unsigned __int8 *)v55 )
                    goto LABEL_112;
                  break;
                case 9u:
                  if ( v17 >= (unsigned __int8 *)v49 + 3 )
                  {
                    LODWORD(v43) = (*(int (__fastcall **)(char *, _DWORD))(*(_DWORD *)(v108 + 4) + 52))(
                                     v55,
                                     HIDWORD(v43));
                    v55 = i;
                    v53 += v43;
                  }
                  v49 = v55 + 2;
                  v52 = 0;
                  i = v55 + 2;
                  goto LABEL_75;
                default:
                  ++v49;
                  if ( v109[v62] )
                  {
                    v70 = 0;
                    HIDWORD(v43) = v49;
                    do
                    {
                      sub_2ABC24(v108, (char *)HIDWORD(v43), v113, 0, (unsigned int)v17);
                      ++v70;
                      HIDWORD(v43) = &i[v113[0]];
                      i += v113[0];
                    }
                    while ( (unsigned __int8)v109[v62] > v70 );
                    v49 = (char *)HIDWORD(v43);
                  }
                  goto LABEL_75;
              }
            }
            i = v49 + 1;
            if ( v100 )
              break;
            LOBYTE(v62) = 0;
LABEL_135:
            v66 = (unsigned __int8)(v62 - v97);
            if ( !v105 )
              goto LABEL_139;
            v67 = sub_347418(v66, v98);
            if ( v99 == 1 )
            {
              v53 += v104 * v67;
            }
            else
            {
              v68 = sub_347924(v52 + v67, v99);
              v52 = v69;
              v53 += v104 * v68;
            }
            v54 += (unsigned __int8)((unsigned __int64)sub_347674(v66, v98) >> 32) + v106;
            if ( !sub_2F5E18(v102, v53, v52, ptr, v54, v103, v95, 0) )
              goto LABEL_139;
LABEL_128:
            if ( v51 >= v53 )
              v51 = v53;
            v49 = i;
            if ( v50 < v53 )
              v50 = v53;
            v95 = 0;
          }
LABEL_78:
          LODWORD(v43) = sub_2ABC24(v108, v55, v113, 0, (unsigned int)v17);
          v56 = i;
          v57 = &i[v113[0]];
          HIDWORD(v43) = &i[v113[0] + 1];
          i += v113[0];
          if ( (unsigned int)v17 < HIDWORD(v43) )
          {
            v5 = (int)v102;
            i = (char *)HIDWORD(v43);
LABEL_80:
            sub_2A6A5C("Dwarf Error: mangled line number section.");
            ((void (__fastcall *)(int))loc_2A6C48)(17);
            goto LABEL_81;
          }
          v71 = (unsigned __int8)v56[v113[0]];
          i = (char *)HIDWORD(v43);
          if ( v71 == 3 )
          {
            if ( (unsigned int)v17 <= HIDWORD(v43) )
            {
              v74 = 0;
              v113[0] = 0;
              v111 = 0;
            }
            else if ( v57[1] )
            {
              LODWORD(v43) = sub_2F6144((unsigned __int8 *)HIDWORD(v43), v17, v113);
              HIDWORD(v43) = i;
              v111 = v43;
              v74 = v113[0];
            }
            else
            {
              v74 = 1;
              v111 = 0;
              v113[0] = 1;
            }
            i = (char *)(HIDWORD(v43) + v74);
            v75 = sub_2ABC24(v108, (char *)(HIDWORD(v43) + v74), v113, 0, (unsigned int)v17);
            i += v113[0];
            v110 = sub_2ABC24(v108, i, v113, 0, (unsigned int)v17);
            i += v113[0];
            v76 = sub_2ABC24(v108, i, v113, 0, (unsigned int)v17);
            i += v113[0];
            if ( sub_2F5D98((int)v102, v111, v75, v110, v76) )
            {
LABEL_123:
              v49 = i;
              goto LABEL_75;
            }
            goto LABEL_139;
          }
          if ( v71 <= 3 )
            break;
          if ( v71 == 4 )
          {
            v95 = sub_2ABC24(v108, (char *)HIDWORD(v43), v113, 0, (unsigned int)v17);
            v49 = &i[v113[0]];
            i += v113[0];
          }
          else
          {
            if ( v71 != 128 )
              goto LABEL_188;
            v49 = &v57[v43];
            i = v49;
          }
        }
        if ( v71 != 1 )
        {
          if ( v71 == 2 )
          {
            v52 = 0;
            v53 = sub_2F67B0(*(_DWORD *)(a1 + 8), *(unsigned __int8 *)(a1 + 92), SHIDWORD(v43), (unsigned int)v17);
            v49 = &i[*(unsigned __int8 *)(a1 + 92)];
            i = v49;
            goto LABEL_75;
          }
LABEL_188:
          v5 = (int)v102;
          goto LABEL_80;
        }
        if ( sub_2F5E18(v102, v53, v52, ptr, v54, v103, v95, 1) )
        {
          v72 = v53 < v50 ? v50 : v53;
          v73 = v53 >= v51 ? v51 : v53;
          if ( sub_2F667C((int *)(a1 + 8), (_DWORD *)(a1 + 12), v73, v72) )
          {
LABEL_112:
            if ( ptr )
              free(ptr);
            v49 = i;
            continue;
          }
        }
LABEL_139:
        v5 = (int)v102;
LABEL_81:
        if ( !ptr )
          goto LABEL_84;
        free(ptr);
        for ( j = *(_DWORD **)(v5 + 28); j; j = *(_DWORD **)(v5 + 28) )
        {
          *(_DWORD *)(v5 + 28) = j[1];
          free(j);
LABEL_84:
          ;
        }
        v59 = *(void **)(v5 + 24);
        if ( v59 )
          free(v59);
        v60 = *(void **)(v5 + 20);
        if ( v60 )
        {
          free(v60);
          return 0;
        }
        return 0;
      }
      break;
    }
    v5 = (int)v102;
    v77 = v102[3];
    if ( !v77 )
      return v5;
    v78 = sub_2ACBF4(*v102, 20 * v77);
    v79 = (_DWORD *)v78;
    if ( !v78 )
      goto LABEL_84;
    v96 = (_DWORD *)(v78 + 20 * v77);
    v80 = v78;
    v81 = (int *)v102[7];
    v82 = (_DWORD *)v78;
    do
    {
      if ( !v81 )
        sub_2A6BBC("./dwarf2.c", 1772);
      v83 = v81[2];
      v84 = *v81;
      v82[3] = 0;
      v82[2] = v83;
      *v82 = v84;
      v82[1] = 0;
      v82 += 5;
      *(v82 - 1) = 0;
      v85 = (int *)v81[1];
      free(v81);
      v81 = v85;
    }
    while ( v96 != v82 );
    if ( v85 )
      sub_2A6BBC("./dwarf2.c", 1781);
    qsort(v79, v77, 0x14u, (__compar_fn_t)sub_2F6198);
    v86 = v102[3];
    if ( v86 <= 1 )
    {
      v87 = 1;
LABEL_202:
      v102[7] = (int)v79;
      v102[3] = v87;
      return v5;
    }
    v87 = 1;
    v88 = 1;
    v89 = *(_DWORD *)(v79[2] + 4);
    while ( 1 )
    {
      v90 = 5 * v87;
      v91 = *(_DWORD *)(v80 + 28);
      v92 = &v79[5 * v87];
      v93 = *(_DWORD *)(v91 + 4);
      if ( *(_DWORD *)(v80 + 20) >= v89 )
        goto LABEL_197;
      if ( v89 < v93 )
        break;
LABEL_201:
      ++v88;
      v80 += 20;
      if ( v86 == v88 )
        goto LABEL_202;
    }
    *(_DWORD *)(v80 + 20) = v89;
LABEL_197:
    v94 = v87 >= v88;
    v89 = v93;
    if ( v87 < v88 )
      v93 = *(_DWORD *)(v80 + 20);
    ++v87;
    if ( !v94 )
    {
      v79[v90] = v93;
      v92[2] = v91;
    }
    goto LABEL_201;
  }
LABEL_91:
  sub_2A6A5C("Dwarf Error: Ran out of room reading opcodes");
  ((void (__fastcall *)(int))loc_2A6C48)(17);
  return 0;
}
