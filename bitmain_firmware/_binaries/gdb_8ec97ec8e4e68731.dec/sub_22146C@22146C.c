int *__fastcall sub_22146C(int *a1, char *a2, int a3, int a4, int a5)
{
  int v5; // r7
  unsigned int v6; // r9
  char *v10; // r3
  int v11; // r2
  int v12; // r3
  int v13; // r0
  bool v14; // zf
  int v15; // r3
  int v16; // r4
  int *v17; // r5
  int *v18; // r0
  int i; // r0
  _BOOL4 v20; // r2
  int v21; // r3
  int v22; // r3
  int v23; // r1
  int v24; // r2
  const char *v25; // r0
  char *v26; // r0
  bool v27; // zf
  int v28; // r3
  int v29; // r2
  bool v30; // zf
  int v31; // r3
  int v32; // r4
  const char *v33; // r0
  bool v34; // zf
  const char *v35; // r0
  int v36; // r1
  int v37; // r2
  bool v38; // zf
  int v39; // r1
  int v40; // r5
  int v41; // r3
  int v42; // r4
  int *v43; // r4
  _BOOL4 v44; // r3
  void *v46; // r0
  int *v47; // r3
  int v48; // r2
  int v49; // r3
  int v50; // r0
  int v51; // r3
  int v52; // r3
  unsigned int v53; // r4
  int *v54; // r0
  _BOOL4 v55; // r3
  int v56; // r3
  const char *v57; // r0
  int v58; // r1
  int v59; // r2
  int v60; // r3
  int v61; // r3
  int *v62; // r3
  int v63; // r2
  int v64; // r3
  int v65; // r0
  int v66; // r3
  int v67; // r3
  unsigned int v68; // r4
  int *v69; // r0
  const char *v70; // r0
  int *v71; // r1
  int v72; // r12
  int v73; // r2
  bool v74; // zf
  const char *v75; // r4
  unsigned int v76; // t1
  bool v77; // zf
  __int64 v78; // r0
  int v79; // r3
  int v80; // r9
  const char *v81; // r3
  const char *v82; // r10
  int v83; // r9
  int v84; // t1
  int v85; // r0
  bool v86; // zf
  int v87; // r9
  int v88; // r3
  int v89; // r2
  unsigned int v90; // r3
  int v91; // r2
  int v92; // r3
  bool (__fastcall *eflags)(int *, const char *); // [sp+0h] [bp-BCh]
  int v94; // [sp+4h] [bp-B8h]
  int v95; // [sp+8h] [bp-B4h]
  int v96; // [sp+Ch] [bp-B0h]
  char v97[4]; // [sp+10h] [bp-ACh] BYREF
  int v98; // [sp+14h] [bp-A8h]
  int v99; // [sp+18h] [bp-A4h]
  int v100; // [sp+1Ch] [bp-A0h]
  int v101; // [sp+20h] [bp-9Ch]
  int v102; // [sp+24h] [bp-98h]
  _DWORD *v103; // [sp+28h] [bp-94h]
  _BYTE **v104; // [sp+2Ch] [bp-90h]
  int v105; // [sp+30h] [bp-8Ch]
  int v106; // [sp+34h] [bp-88h] BYREF
  int v107; // [sp+3Ch] [bp-80h] BYREF
  _BYTE *v108; // [sp+40h] [bp-7Ch] BYREF
  int v109[2]; // [sp+44h] [bp-78h] BYREF
  int *v110; // [sp+4Ch] [bp-70h] BYREF
  bool (__fastcall *v111)(int **, const char *, int); // [sp+50h] [bp-6Ch]
  int v112[2]; // [sp+54h] [bp-68h] BYREF
  int v113[6]; // [sp+5Ch] [bp-60h] BYREF
  _BYTE s[36]; // [sp+74h] [bp-48h] BYREF

  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  v106 = a4;
  v107 = 0;
  memset(s, 0, sizeof(s));
  if ( a3 <= 2 )
  {
    v10 = &aVoidSymbolCach[4 * a3];
    v101 = *((_DWORD *)v10 + 385);
    v100 = *((_DWORD *)v10 + 388);
    v11 = *((_DWORD *)v10 + 391);
    v12 = *((_DWORD *)v10 + 394);
    v99 = v11;
    v98 = v12;
    if ( a2 )
    {
      v5 = strncmp(a2, "operator", 8u);
      if ( !v5 )
      {
        v6 = (unsigned __int8)a2[8];
        v13 = isalpha(v6);
        v14 = v6 == 36;
        if ( v6 != 36 )
          v14 = v6 == 95;
        v15 = v14;
        if ( !v6 )
          v15 = 1;
        if ( v13 )
          v15 = 1;
        if ( !v15 )
        {
LABEL_157:
          v74 = v6 == 9;
          if ( v6 != 9 )
            v74 = v6 == 32;
          v75 = a2 + 8;
          if ( v74 )
          {
            do
            {
              v76 = *(unsigned __int8 *)++v75;
              v6 = v76;
              v77 = v76 == 32;
              if ( v76 != 32 )
                v77 = v6 == 9;
            }
            while ( v77 );
          }
          v79 = isalpha(v6) != 0;
          if ( v6 == 95 )
            v79 |= 1u;
          if ( v6 == 36 )
            v80 = v79 | 1;
          else
            v80 = v79;
          if ( !v80 )
          {
            v81 = v75;
            goto LABEL_195;
          }
          v82 = v75;
          do
          {
            v84 = *(unsigned __int8 *)++v82;
            v83 = v84;
            v85 = isalnum(v84);
            v86 = v84 == 95;
            if ( v84 != 95 )
              v86 = v83 == 36;
            v87 = !v86;
            if ( v85 )
              v87 = 0;
          }
          while ( !v87 );
          goto LABEL_180;
        }
      }
      goto LABEL_14;
    }
    goto LABEL_18;
  }
  v78 = sub_94700(
          (int)"symtab.c",
          4297,
          "%s: Assertion `%s' failed.",
          "std::vector<symbol_search> search_symbols(const char*, search_domain, int, const char**)",
          "kind <= TYPES_DOMAIN");
  while ( 1 )
  {
LABEL_195:
    v6 = *(unsigned __int8 *)v81;
    v75 = v81++;
    if ( !v6 )
      goto LABEL_14;
    if ( v6 == 47 )
      goto LABEL_181;
    if ( v6 <= 0x2F )
    {
      if ( v6 == 40 )
      {
        if ( v75[1] != 41 )
          sub_946E0("`operator ()' must be specified without whitespace in `()'", HIDWORD(v78));
        goto LABEL_181;
      }
      if ( v6 <= 0x28 )
      {
        if ( v6 == 33 || v6 >= 0x21 && v6 - 37 <= 1 )
          goto LABEL_181;
      }
      else
      {
        if ( v6 == 44 )
          goto LABEL_180;
        if ( v6 > 0x2C )
        {
          if ( v6 == 45 )
            goto LABEL_181;
        }
        else if ( v6 >= 0x2A )
        {
          goto LABEL_181;
        }
      }
      goto LABEL_219;
    }
    if ( v6 == 91 )
    {
      if ( v75[1] != 93 )
        sub_946E0("`operator []' must be specified without whitespace in `[]'", HIDWORD(v78));
      goto LABEL_181;
    }
    if ( v6 <= 0x5B )
    {
      if ( v6 >= 0x3C )
      {
        if ( v6 <= 0x3E )
          goto LABEL_181;
        if ( v6 == 63 )
        {
          if ( v75[1] != 58 )
            sub_946E0("`operator ?:' must be specified without whitespace in `?:'", HIDWORD(v78));
LABEL_181:
          v88 = isalpha(v6);
          v89 = *((unsigned __int8 *)v75 - 1);
          v90 = v88 != 0;
          if ( v6 == 95 )
            v90 |= 1u;
          if ( v6 == 36 )
            v6 = v90 | 1;
          else
            v6 = v90;
          if ( v6 )
          {
            if ( v89 == 32 && *(v75 - 2) != 32 )
              goto LABEL_14;
            v5 = 1;
            v6 = 1;
          }
          else if ( v89 != 32 )
          {
            goto LABEL_14;
          }
          strlen(v75);
          a2 = v97;
          sprintf(v97, "operator%.*s%s", v5, (const char *)&word_3E1F84, v75);
          if ( dword_4879F4 == 1 )
            v16 = 10;
          else
            v16 = 8;
          if ( s[32] )
          {
            s[32] = 0;
            sub_16373C((regex_t *)s);
          }
          goto LABEL_17;
        }
      }
LABEL_219:
      sub_946E0("`operator %s' not supported", v75);
    }
    if ( v6 == 94 )
      goto LABEL_181;
    if ( v6 > 0x5E )
      break;
    if ( v6 != 92 )
      goto LABEL_219;
    v91 = *(unsigned __int8 *)v81;
    if ( v91 == 42 )
      goto LABEL_181;
    if ( v91 == 91 )
    {
      v92 = *((unsigned __int8 *)v75 + 2);
      if ( v92 == 93 )
        sub_946E0("mismatched quoting on brackets, try 'operator\\[\\]'", HIDWORD(v78));
      if ( v92 != 92 || v75[3] != 93 )
        sub_946E0("nothing is allowed between '[' and ']'", HIDWORD(v78));
      goto LABEL_181;
    }
  }
  if ( v6 == 124 )
    goto LABEL_181;
  if ( v6 != 126 )
    goto LABEL_219;
LABEL_180:
  v6 = *(unsigned __int8 *)v75;
  if ( *v75 )
    goto LABEL_181;
LABEL_14:
  if ( dword_4879F4 == 1 )
    v16 = 10;
  else
    v16 = 8;
LABEL_17:
  sub_1636B8((regex_t *)s, a2, v16, "Invalid regexp");
  s[32] = 1;
LABEL_18:
  v111 = sub_21A7E0;
  v109[0] = (int)&a5;
  v17 = v113;
  v109[1] = (int)&v106;
  v110 = v109;
  v18 = sub_21C7E8();
  v113[0] = 0;
  v113[1] = 0;
  v96 = a3;
  eflags = sub_219CAC;
  v94 = 0;
  v95 = 0;
  v108 = s;
  v104 = &v108;
  v112[1] = (int)sub_219CAC;
  v112[0] = (int)&v108;
  i = sub_2152F8((int)v110, (int)v111, (int)v18);
  v20 = (unsigned int)a3 <= 1;
  *(_DWORD *)v97 = &dword_487D2C;
  if ( v106 )
    v20 = 0;
  if ( !v20 )
    v102 = 0;
  v21 = *(_DWORD *)(dword_487D2C + 36);
  if ( !v20 )
  {
LABEL_23:
    v109[0] = v21;
    if ( !v21 )
      goto LABEL_74;
    v6 = (unsigned int)&dword_489700;
    while ( 1 )
    {
      v103 = *(_DWORD **)(v21 + 20);
      if ( !v103 )
        goto LABEL_73;
      do
      {
        v107 = 0;
        v105 = v103[8];
        v22 = 0;
        do
        {
          for ( i = sub_C28A8(*(_DWORD **)(v105 + 4 * (v22 + 2)), v113); ; i = sub_C28E4((int)v113) )
          {
            v108 = (_BYTE *)i;
            if ( !i )
              break;
            v31 = *(unsigned __int8 *)(i + 33);
            if ( (v31 & 1) == 0 )
            {
              ((void (__fastcall *)(int, int, int, int))loc_21A4BC)(i, v23, v24, v31);
              if ( s[32] )
                ((void (__fastcall *)(_BYTE *))loc_1CC4D8)(s);
              v46 = (void *)*a1;
              if ( *a1 )
                sub_339E64(v46);
              sub_338FFC(v46);
            }
            v32 = *(_DWORD *)(i + 28);
            sub_258BD4(i);
            v33 = *(const char **)(v32 + 12);
            v34 = v33 == 0;
            if ( v33 )
              v34 = v106 == 0;
            if ( v34 )
            {
              if ( v106 )
              {
LABEL_29:
                if ( !dword_489708 )
                {
                  v25 = (const char *)sub_3245A4(*(_DWORD *)(v32 + 12));
                  if ( v106 )
                  {
                    if ( !sub_21A76C(v25, a5, v106, 1) )
                      continue;
                  }
                }
                v26 = sub_204308(v32);
                v27 = v26 == 0;
                if ( v26 )
                  v27 = v106 == 0;
                if ( v27 )
                {
                  if ( v106 )
                    continue;
                }
                else if ( !sub_21A76C(v26, a5, v106, 0) )
                {
                  continue;
                }
              }
              if ( !s[32] )
                goto LABEL_37;
              goto LABEL_50;
            }
            if ( !sub_21A76C(v33, a5, v106, 0) )
              goto LABEL_29;
            if ( !s[32] )
            {
LABEL_37:
              if ( a3 )
                goto LABEL_52;
              goto LABEL_38;
            }
LABEL_50:
            v35 = (const char *)sub_21B3C4((int)v108);
            if ( j_regexec((const regex_t *)s, v35, 0, 0, 0) )
              continue;
            if ( a3 )
            {
LABEL_52:
              if ( a3 == 1 )
              {
                v28 = (int)v108;
                if ( *((_DWORD *)off_46DBB8 + 4 * ((unsigned __int8)v108[32] >> 3)) != 10 )
                  continue;
LABEL_54:
                v36 = a1[1];
                v37 = a1[2];
                if ( v36 == v37 )
                  goto LABEL_65;
              }
              else
              {
                if ( a3 != 2 )
                  continue;
                v28 = (int)v108;
                if ( *((_DWORD *)off_46DBB8 + 4 * ((unsigned __int8)v108[32] >> 3)) != 8 )
                  continue;
                v36 = a1[1];
                v37 = a1[2];
                if ( v36 == v37 )
                {
LABEL_65:
                  sub_222628(a1, v36, &v107, v104, eflags, v94, v95, v96);
                  continue;
                }
              }
              v38 = v36 == 0;
              if ( v36 )
              {
                v37 = v107;
                *(_DWORD *)(v36 + 4) = v28;
                *(_DWORD *)(v36 + 8) = 0;
              }
              v39 = v36 + 16;
              if ( !v38 )
              {
                *(_DWORD *)(v39 - 4) = 0;
                *(_DWORD *)(v39 - 16) = v37;
              }
              a1[1] = v39;
              continue;
            }
LABEL_38:
            v28 = (int)v108;
            v29 = *((_DWORD *)off_46DBB8 + 4 * ((unsigned __int8)v108[32] >> 3));
            v30 = (v29 & 0xFFFFFFFD) == 8;
            if ( (v29 & 0xFFFFFFFD) != 8 )
              v30 = v29 == 12;
            if ( !v30 && (v29 != 1 || **(_BYTE **)(*((_DWORD *)v108 + 6) + 24) != 5) )
              goto LABEL_54;
          }
          v22 = ++v107;
        }
        while ( v107 <= 1 );
        v103 = (_DWORD *)*v103;
      }
      while ( v103 );
LABEL_73:
      v21 = *(_DWORD *)v109[0];
      v109[0] = *(_DWORD *)v109[0];
      if ( !v109[0] )
        goto LABEL_74;
    }
  }
  v109[0] = *(_DWORD *)(dword_487D2C + 36);
  if ( !v21 )
  {
    v102 = 0;
LABEL_74:
    v40 = *a1;
    v5 = a1[1];
    if ( *a1 == v5 )
      goto LABEL_87;
    sub_2211F8(*a1, (char *)a1[1], 2 * (31 - __clz((v5 - v40) >> 4)));
    if ( v5 - v40 <= 256 )
    {
      i = sub_2228FC(v40, v5, 0, v41, eflags, v94, v95, v96);
    }
    else
    {
      v42 = v40 + 256;
      i = sub_2228FC(v40, v40 + 256, 0, v41, eflags, v94, v95, v96);
      while ( v5 != v42 )
      {
        i = sub_2228A4(v42, 0);
        v42 += 16;
      }
    }
    v17 = (int *)a1[1];
    v5 = *a1;
    v6 = (unsigned int)v17;
    if ( (int *)*a1 == v17 )
      goto LABEL_85;
    while ( 1 )
    {
      v43 = (int *)(v5 + 16);
      if ( v17 == (int *)(v5 + 16) )
        goto LABEL_84;
      i = sub_21EFDC((_DWORD *)v5, (_DWORD *)(v5 + 16));
      if ( !i )
        goto LABEL_123;
      v5 += 16;
    }
  }
  v5 = 0;
  v102 = 0;
  while ( 1 )
  {
    v47 = *(int **)(*(_DWORD *)(v21 + 40) + 80);
    v48 = *v47;
    v110 = v47;
    if ( v48 )
      break;
LABEL_120:
    v21 = *(_DWORD *)v109[0];
    v109[0] = *(_DWORD *)v109[0];
    if ( !v109[0] )
    {
      v21 = *(_DWORD *)(**(_DWORD **)v97 + 36);
      goto LABEL_23;
    }
  }
  while ( 2 )
  {
    sub_258BD4(i);
    v50 = (int)v110;
    if ( (v110[8] & 0x10) != 0
      || (v51 = v110[8] & 0xF, v51 != v101) && v51 != v100 && v51 != v99 && v51 != v98
      || s[32]
      && (v57 = (const char *)sub_21B3C4((int)v110),
          v14 = j_regexec((const regex_t *)s, v57, 0, 0, 0) == 0,
          v50 = (int)v110,
          !v14) )
    {
LABEL_106:
      v49 = *(_DWORD *)(v50 + 48);
      i = v50 + 48;
      v110 = (int *)i;
      if ( !v49 )
        goto LABEL_120;
      continue;
    }
    break;
  }
  if ( a3 != 1 )
  {
    sub_21CA9C(v113, v109[0], *(char **)v50);
    v55 = v113[0] == 0;
    goto LABEL_113;
  }
  v52 = *(__int16 *)(v50 + 22);
  v43 = *(int **)(v50 + 8);
  if ( v52 != -1 )
  {
    v53 = (unsigned int)v43 + *(_DWORD *)(*(_DWORD *)(v109[0] + 144) + 4 * v52);
    v54 = sub_214938(v53);
    v55 = sub_21DB88(v53, (int)v54) == 0;
LABEL_113:
    v14 = !v55;
    v56 = v102;
    if ( !v14 )
      v56 = 1;
    v50 = (int)v110;
    v102 = v56;
    goto LABEL_106;
  }
  i = sub_94700((int)"symtab.c", 4401, "Section index is uninitialized", -1, eflags, 0, 0, a3);
LABEL_123:
  if ( v17 == (int *)v5 )
  {
LABEL_84:
    v17 = (int *)a1[1];
    goto LABEL_85;
  }
  while ( 1 )
  {
    v43 += 4;
    if ( v17 == v43 )
      break;
    while ( 1 )
    {
      i = sub_21EFDC((_DWORD *)v5, v43);
      if ( !i )
        break;
      i = *v43;
      v58 = v43[1];
      v59 = v43[2];
      v60 = v43[3];
      v43 += 4;
      v5 += 16;
      *(_DWORD *)v5 = i;
      *(_DWORD *)(v5 + 4) = v58;
      *(_DWORD *)(v5 + 8) = v59;
      *(_DWORD *)(v5 + 12) = v60;
      if ( v17 == v43 )
        goto LABEL_127;
    }
  }
LABEL_127:
  v17 = (int *)a1[1];
  v6 = v5 + 16;
LABEL_85:
  if ( (int *)v6 != v17 )
    a1[1] = v6;
LABEL_87:
  if ( v102 )
    goto LABEL_240;
  v44 = a3 != 1;
  if ( v106 )
    v44 = 0;
  if ( v44 )
  {
LABEL_240:
    v109[0] = *(_DWORD *)(**(_DWORD **)v97 + 36);
    v61 = v109[0];
    if ( v109[0] )
    {
      while ( 1 )
      {
        v62 = *(int **)(*(_DWORD *)(v61 + 40) + 80);
        v63 = *v62;
        v110 = v62;
        if ( v63 )
          break;
LABEL_149:
        v61 = *(_DWORD *)v109[0];
        v109[0] = *(_DWORD *)v109[0];
        if ( !v109[0] )
          goto LABEL_91;
      }
      a2 = 0;
      while ( 2 )
      {
        sub_258BD4(i);
        v65 = (int)v110;
        if ( (v110[8] & 0x10) != 0 )
          goto LABEL_136;
        v66 = v110[8] & 0xF;
        if ( v66 != v101 && v66 != v100 && v66 != v99 && v66 != v98 )
          goto LABEL_136;
        if ( s[32] )
        {
          v70 = (const char *)sub_21B3C4((int)v110);
          v14 = j_regexec((const regex_t *)s, v70, 0, 0, 0) == 0;
          v65 = (int)v110;
          if ( !v14 )
            goto LABEL_136;
        }
        if ( a3 == 1 )
        {
          v67 = *(__int16 *)(v65 + 22);
          if ( v67 == -1 )
          {
            sub_94700((int)"symtab.c", 4483, "Section index is uninitialized");
            goto LABEL_157;
          }
          v68 = *(_DWORD *)(v65 + 8) + *(_DWORD *)(*(_DWORD *)(v109[0] + 144) + 4 * v67);
          v69 = sub_214938(v68);
          v14 = sub_21DB88(v68, (int)v69) == 0;
          v65 = (int)v110;
          if ( !v14 )
          {
LABEL_136:
            v64 = *(_DWORD *)(v65 + 48);
            i = v65 + 48;
            v110 = (int *)i;
            if ( !v64 )
              goto LABEL_149;
            continue;
          }
        }
        break;
      }
      sub_21CA9C(v112, v109[0], *(char **)v65);
      if ( !v112[0] )
      {
        v71 = (int *)a1[1];
        if ( v71 != (int *)a1[2] )
        {
          v65 = (int)v110;
          if ( v71 )
          {
            v72 = v109[0];
            v73 = v107;
            v71[1] = v112[0];
            v71[3] = v72;
            v71[2] = v65;
            *v71 = v73;
          }
          a1[1] = (int)(v71 + 4);
          goto LABEL_136;
        }
        sub_222760(a1, v71, &v107, &v110, v109);
      }
      v65 = (int)v110;
      goto LABEL_136;
    }
  }
LABEL_91:
  if ( s[32] )
    ((void (__fastcall *)(_BYTE *))loc_1CC4D8)(s);
  return a1;
}
