unsigned int __fastcall sub_28D71C(char *a1, const char *a2, const char *a3, signed int a4, int a5, int a6)
{
  int v8; // r7
  int v9; // r3
  int v10; // r2
  unsigned int result; // r0
  int v12; // r8
  size_t v13; // r9
  char *v14; // r6
  const char *v15; // r9
  char *v16; // r3
  char *v17; // r4
  const char *v18; // r3
  const char *v19; // r5
  _BOOL4 v20; // r3
  char *v21; // r2
  const char *v22; // r3
  int v23; // r1
  int v24; // r1
  int v25; // r6
  int v26; // r0
  size_t mb_cur_max; // r0
  size_t v28; // r0
  int v29; // r4
  int v30; // r3
  size_t v31; // r0
  size_t v32; // r0
  int v33; // r6
  size_t v34; // r0
  size_t v35; // r2
  int v36; // r4
  int v37; // r3
  _DWORD *v38; // r2
  _DWORD *v39; // r3
  int v40; // t1
  bool v41; // cf
  int v42; // r1
  char *v43; // r2
  const char *v44; // r3
  int v45; // r7
  int v46; // t1
  const char *v47; // r0
  bool v48; // cf
  char *v49; // lr
  const char *v50; // r6
  char *v51; // r7
  int v52; // r6
  int v53; // r8
  signed int v54; // r6
  unsigned int v55; // r7
  bool v56; // cc
  int v57; // r2
  int v58; // r2
  _BOOL4 v59; // r3
  char *v60; // r0
  int v61; // r4
  bool v62; // cc
  int v63; // r3
  const char *v64; // r0
  bool v65; // cc
  char *v66; // r6
  const char *v67; // r10
  int v68; // r3
  int v69; // r0
  bool v70; // cc
  int v71; // r2
  int v72; // r6
  signed int v73; // r5
  int v74; // r6
  int v75; // r6
  bool v76; // cc
  unsigned int v77; // r4
  bool v78; // zf
  bool v79; // cc
  signed int v80; // r2
  const char *v81; // r0
  int v82; // r5
  const char *i; // r0
  int v84; // r0
  _IO_FILE *v85; // r1
  const char *v86; // r0
  int v87; // r6
  int v88; // r4
  const char *v89; // r9
  int v90; // t1
  char *v91; // r0
  int v92; // r0
  int pwc; // [sp+Ch] [bp-48h]
  const char *v96; // [sp+14h] [bp-40h]
  size_t n; // [sp+18h] [bp-3Ch]
  signed int na; // [sp+18h] [bp-3Ch]
  int nb; // [sp+18h] [bp-3Ch]
  char *v100; // [sp+20h] [bp-34h]
  char *v101; // [sp+20h] [bp-34h]
  const char *v102; // [sp+24h] [bp-30h]
  int v103; // [sp+24h] [bp-30h]
  int v104; // [sp+24h] [bp-30h]
  int v105; // [sp+28h] [bp-2Ch]
  int v106; // [sp+28h] [bp-2Ch]
  int v107; // [sp+2Ch] [bp-28h]
  char *v108; // [sp+2Ch] [bp-28h]
  int v109; // [sp+30h] [bp-24h]
  wchar_t v110; // [sp+40h] [bp-14h] BYREF
  int v111; // [sp+44h] [bp-10h]
  mbstate_t v112; // [sp+48h] [bp-Ch] BYREF

  v8 = a5;
  if ( _ctype_get_mb_cur_max() <= 1 )
  {
    v10 = dword_490144;
    v9 = dword_48AE04;
  }
  else
  {
    v9 = dword_48AE04;
    v10 = dword_490144;
    if ( !dword_48BB60 )
      goto LABEL_3;
  }
  if ( dword_48AE2C )
  {
    if ( dword_48AE2C == dword_48AE44 )
      v9 -= dword_48AE14 - dword_48AE1C;
LABEL_3:
    if ( v9 != v10 )
      goto LABEL_4;
    goto LABEL_43;
  }
  if ( !dword_48AE38 )
    goto LABEL_3;
  if ( dword_48AE10 <= v10 )
    v24 = dword_48AE14;
  else
    v24 = dword_48AE1C;
  if ( v9 - v24 != v10 )
    goto LABEL_4;
LABEL_43:
  if ( !dword_4707A0 || dword_48AAF8 || a3 - 1 != (const char *)dword_48AE2C )
    goto LABEL_4;
  if ( _ctype_get_mb_cur_max() <= 1 || (v25 = dword_48BB60) != 0 )
  {
    v84 = *(unsigned __int8 *)a2;
    v85 = (_IO_FILE *)dword_48AAB0;
    if ( !*a2 )
      v84 = 32;
  }
  else
  {
    if ( *(_DWORD *)(off_470780 + 0x10) > (int)a3 )
    {
      v26 = *(_DWORD *)(*(_DWORD *)(off_470780 + 0xC) + 4 * (_DWORD)a3);
      if ( v26 > 0 )
        sub_28D6E8(v26);
    }
    v112.__count = 0;
    v112.__wch = 0;
    mb_cur_max = _ctype_get_mb_cur_max();
    v28 = mbrtowc(&v110, a2, mb_cur_max, &v112);
    v29 = v28;
    if ( v28 + 2 <= 1 )
    {
      v29 = 1;
      v30 = 1;
      na = 1;
LABEL_313:
      v104 = v29;
      v88 = v30;
      v89 = a2 - 1;
      do
      {
        ++v25;
        v90 = *(unsigned __int8 *)++v89;
        IO_putc(v90, (_IO_FILE *)dword_48AAB0);
      }
      while ( v25 < v88 );
      v29 = v104;
      v8 = a5;
LABEL_55:
      v112.__count = 0;
      v112.__wch = 0;
      dword_48AE04 = na;
      ++dword_48AE2C;
      v31 = _ctype_get_mb_cur_max();
      v32 = mbrtowc(&v110, a1, v31, &v112);
      v33 = v32;
      if ( v32 )
      {
        if ( v32 >= 0xFFFFFFFE )
          v33 = 1;
        v34 = strlen(&a1[v33]);
        memmove(&a1[v29], &a1[v33], v34);
        v35 = v29;
        v36 = v29 - v33;
        memcpy(a1, a2, v35);
        a4 += v36;
        if ( (int)a3 < a6 )
        {
          v37 = *(_DWORD *)(off_470780 + 4);
          v38 = (_DWORD *)(v37 + 4 * (_DWORD)a3);
          v39 = (_DWORD *)(v37 + 4 * a6);
          do
          {
            v40 = v38[1];
            *++v38 = v40 + v36;
          }
          while ( v39 != v38 );
        }
      }
      goto LABEL_4;
    }
    if ( v28 )
    {
      na = wcwidth(v110);
      if ( na > 0 )
      {
        v30 = v29;
        if ( v29 <= 0 )
          goto LABEL_55;
        goto LABEL_313;
      }
    }
    v84 = 32;
    v85 = (_IO_FILE *)dword_48AAB0;
  }
  IO_putc(v84, v85);
  dword_48AE04 = 1;
  ++dword_48AE2C;
  if ( *a1 && *a2 )
    *a1 = *a2;
LABEL_4:
  result = _ctype_get_mb_cur_max();
  if ( result <= 1 || (v12 = dword_48BB60) != 0 )
  {
    if ( a4 > 0 )
    {
      if ( *a1 )
      {
        if ( *(unsigned __int8 *)a2 == (unsigned __int8)*a1 )
        {
          v21 = a1 + 1;
          v22 = a2 + 1;
          do
          {
            v12 = v21 - a1;
            v15 = v22;
            v14 = v21;
            ++v22;
            if ( v21 - a1 >= a4 )
            {
              n = (size_t)v21;
              v96 = v15;
              pwc = v15 - a2;
              goto LABEL_35;
            }
            v23 = (unsigned __int8)*v21++;
            if ( !v23 )
            {
              n = (size_t)v14;
              v96 = v15;
              pwc = v15 - a2;
              goto LABEL_196;
            }
            result = *(unsigned __int8 *)v15;
          }
          while ( result == v23 );
          n = (size_t)v14;
          v96 = v15;
          pwc = v15 - a2;
        }
        else
        {
          v15 = a2;
          v12 = 0;
          pwc = 0;
          v14 = a1;
          n = (size_t)a1;
          v96 = a2;
        }
        goto LABEL_13;
      }
      v15 = a2;
      v12 = (unsigned __int8)*a1;
      pwc = v12;
      v14 = a1;
      n = (size_t)a1;
      v96 = a2;
LABEL_196:
      if ( v8 <= pwc )
        return result;
      v17 = v14;
      result = 1;
      goto LABEL_19;
    }
    v15 = a2;
    v12 = 0;
    pwc = 0;
    v14 = a1;
    n = (size_t)a1;
    v96 = a2;
LABEL_35:
    v17 = v14;
    result = 1;
    goto LABEL_18;
  }
  if ( a4 >= v8 )
    v13 = v8;
  else
    v13 = a4;
  result = memcmp(a1, a2, v13);
  if ( !result )
  {
    v14 = &a1[v13];
    v15 = &a2[v13];
    goto LABEL_11;
  }
  v110 = 0;
  v112.__count = 0;
  v111 = 0;
  v112.__wch = 0;
  if ( a4 == v8 && (!a4 || *(unsigned __int8 *)a2 == (unsigned __int8)*a1 && (result = strncmp(a2, a1, a4)) == 0) )
  {
    v14 = &a1[a4];
    v15 = &a2[v8];
    goto LABEL_11;
  }
  if ( a4 <= 0 )
  {
    v15 = a2;
    pwc = 0;
    v14 = a1;
    n = (size_t)a1;
    v96 = a2;
    goto LABEL_35;
  }
  if ( !*a1 )
  {
    v15 = a2;
    v14 = a1;
    pwc = (unsigned __int8)*a1;
    n = (size_t)a1;
    v96 = a2;
    goto LABEL_196;
  }
  v77 = 0;
  v14 = a1;
  v15 = a2;
  while ( 1 )
  {
    v78 = sub_29B254(a1, v12, &v112, a2, v77, &v110) == 0;
    result = (unsigned int)a1;
    if ( v78 )
      break;
    v12 = sub_29B4D0(a1);
    v14 = &a1[v12];
    result = sub_29B4D0(a2);
    v77 = result;
    v15 = &a2[result];
    if ( a4 <= v12 )
    {
      n = (size_t)&a1[v12];
      pwc = result;
      v96 = &a2[result];
      goto LABEL_35;
    }
    if ( !a1[v12] )
    {
      n = (size_t)&a1[v12];
      pwc = result;
      v96 = &a2[result];
      goto LABEL_196;
    }
  }
LABEL_11:
  v12 = v14 - a1;
  n = (size_t)v14;
  v96 = v15;
  pwc = v15 - a2;
  if ( a4 <= v14 - a1 || !*v14 )
    goto LABEL_196;
LABEL_13:
  v16 = v14 + 1;
  do
  {
    v17 = v16;
    v56 = a4 <= (int)&(v16++)[v12 - (_DWORD)v14];
  }
  while ( !v56 && *v17 );
  result = v17 == v14;
LABEL_18:
  if ( v8 <= pwc )
  {
LABEL_204:
    v19 = v15;
    v20 = 1;
    goto LABEL_25;
  }
LABEL_19:
  if ( !*v15 )
    goto LABEL_204;
  v18 = v15 + 1;
  do
  {
    v19 = v18;
    v56 = v8 <= (int)&(v18++)[pwc - (_DWORD)v15];
  }
  while ( !v56 && *v19 );
  v20 = v19 == v15;
LABEL_25:
  if ( (v20 & result) != 0 )
    return result;
  if ( _ctype_get_mb_cur_max() <= 1 || dword_48BB60 )
  {
    v41 = v15 >= v19 - 1;
    if ( v15 < v19 - 1 )
      v41 = v14 >= v17 - 1;
    if ( v41 )
      goto LABEL_82;
    v42 = *((unsigned __int8 *)v19 - 1);
    if ( (unsigned __int8)*(v17 - 1) != v42 )
      goto LABEL_82;
    v43 = v17 - 2;
    v44 = v19 - 2;
    v45 = 1;
    do
    {
      v47 = v44;
      if ( v42 != 32 )
        v45 = 0;
      v48 = v14 >= v43;
      if ( v14 < v43 )
        v48 = v15 >= v44;
      v49 = v43;
      --v44;
      if ( v48 )
        break;
      v46 = (unsigned __int8)*v43--;
      v42 = v46;
    }
    while ( *(unsigned __int8 *)v47 == v46 );
    v50 = v47;
    v100 = v49;
  }
  else
  {
    v101 = &a1[sub_29B610(a1, v17 - a1, 0)];
    v51 = v17;
    v64 = &a2[sub_29B610(a2, v19 - a2, 0)];
    v65 = v101 > v14;
    if ( v101 > v14 )
      v65 = v64 > v15;
    if ( !v65 )
    {
      v100 = v17;
      v102 = v19;
      goto LABEL_83;
    }
    v103 = 1;
    v108 = v14;
    v66 = v101;
    v67 = v64;
    while ( 1 )
    {
      v112.__count = 0;
      v112.__wch = 0;
      v110 = 0;
      v111 = 0;
      if ( !sub_29B254(a1, v66 - a1, &v112, a2, v67 - a2, &v110) )
        break;
      v68 = v103;
      if ( *v66 == 32 )
        v68 = 0;
      v103 = v68;
      v66 = &a1[sub_29B610(a1, v66 - a1, 0)];
      v69 = sub_29B610(a2, v67 - a2, 0);
      v67 = &a2[v69];
      v70 = v66 > v108;
      if ( v66 > v108 )
        v70 = v67 > v15;
      if ( !v70 )
      {
        v100 = v66;
        v50 = &a2[v69];
        v45 = v103;
        goto LABEL_81;
      }
    }
    v100 = v66;
    v50 = v67;
    v45 = v103;
  }
LABEL_81:
  if ( v45 )
  {
LABEL_82:
    v51 = v17;
    v100 = v17;
    v102 = v19;
    goto LABEL_83;
  }
  if ( sub_29B254(v100, 0, 0, v50, 0, 0) )
  {
    v102 = v50;
    v51 = v100;
  }
  else
  {
    if ( *v100 )
    {
      if ( _ctype_get_mb_cur_max() <= 1 || dword_48BB60 )
        ++v100;
      else
        v100 = &a1[sub_29B4D0(a1)];
    }
    v51 = v100;
    if ( *v50 )
    {
      if ( _ctype_get_mb_cur_max() <= 1 || dword_48BB60 )
        v102 = v50 + 1;
      else
        v102 = &a2[sub_29B4D0(a2)];
    }
    else
    {
      v102 = v50;
    }
  }
LABEL_83:
  if ( a3 )
  {
    if ( a3 == (const char *)dword_48AE2C || (sub_28D00C(a3), _ctype_get_mb_cur_max() == 1) )
    {
      v107 = 0;
      goto LABEL_86;
    }
    v107 = 0;
  }
  else
  {
    v107 = dword_48AE14;
    if ( !dword_48AE2C )
    {
      v106 = dword_48AE08;
      v109 = dword_48AE04;
      goto LABEL_141;
    }
    sub_28D00C(0);
    if ( _ctype_get_mb_cur_max() == 1 )
      goto LABEL_138;
  }
  if ( !dword_48BB60 )
  {
    v106 = dword_48AE08;
    if ( !a3 )
    {
      v109 = dword_48AE04;
      goto LABEL_141;
    }
LABEL_86:
    sub_28CCC8(v12, a1);
    v105 = v102 - v96;
    nb = v102 - v96 - (_DWORD)&v51[-n];
    if ( _ctype_get_mb_cur_max() <= 1 || dword_48BB60 )
      goto LABEL_203;
    goto LABEL_88;
  }
  if ( a3 )
    goto LABEL_86;
LABEL_138:
  v109 = dword_48AE04;
  if ( dword_48AE38 )
  {
    v109 = dword_48AE04 + dword_48AE38;
    dword_48AE04 += dword_48AE38;
  }
  v106 = dword_48AE08;
LABEL_141:
  if ( !dword_48AAF8 && dword_490140 && dword_48AE24 < v106 )
  {
    v62 = v12 <= v106;
    if ( v12 >= v106 )
      v62 = v109 <= 0;
    if ( !v62 )
    {
      v63 = _ctype_get_mb_cur_max() <= 1 || dword_48BB60 ? dword_48AE20 + 1 : dword_48AE10;
      v109 = dword_48AE04;
      if ( dword_48AE04 < v63 )
      {
        tputs((const char *)dword_490140, 1, (int (*)(int))sub_293B80);
        if ( dword_48AEF4 )
          sub_294504((int)"*", 1u);
        sub_294504(dword_48AE0C, v106);
        if ( _ctype_get_mb_cur_max() <= 1 || dword_48BB60 )
        {
          v109 = v106 + dword_48AEF4;
          dword_48AE04 = v106 + dword_48AEF4;
        }
        else
        {
          v92 = sub_28C428((const void *)dword_48AE0C, 0, v106, 1);
          dword_48AE48 = 1;
          v109 = v92 - dword_48AE14 + dword_48AEF4;
          dword_48AE04 = v109;
        }
      }
    }
  }
  sub_28CCC8(v12, a1);
  v105 = v102 - v96;
  nb = v102 - v96 - (_DWORD)&v51[-n];
  if ( _ctype_get_mb_cur_max() <= 1 || dword_48BB60 )
  {
LABEL_158:
    if ( _ctype_get_mb_cur_max() <= 1 )
    {
LABEL_160:
      v53 = nb;
      goto LABEL_89;
    }
    goto LABEL_159;
  }
  v79 = dword_48AE04 <= 0;
  if ( dword_48AE04 <= 0 )
    v79 = v109 <= 0;
  if ( !v79 )
  {
    if ( dword_48AE04 == dword_48AE10 )
      dword_48AE48 = 1;
    goto LABEL_158;
  }
  if ( _ctype_get_mb_cur_max() <= 1 )
    goto LABEL_160;
LABEL_159:
  if ( dword_48BB60 )
    goto LABEL_160;
LABEL_88:
  v52 = sub_28C428(a2, pwc, v102 - a2, 1);
  v53 = v52 - sub_28C428(a1, v12, v51 - a1, 1);
  if ( a3 )
    goto LABEL_91;
LABEL_89:
  if ( !dword_48AAF8 && dword_48AE38 != v107 )
  {
    v72 = dword_48AE38 - v107;
    nb += dword_48AE38 - v107;
    if ( _ctype_get_mb_cur_max() > 1 && !dword_48BB60 )
    {
      v53 += v72;
      goto LABEL_91;
    }
LABEL_203:
    v53 = nb;
  }
LABEL_91:
  result = _ctype_get_mb_cur_max();
  v54 = v19 - v96;
  if ( result <= 1 || dword_48BB60 )
  {
    v55 = v19 - v96;
  }
  else
  {
    result = sub_28C428(a2, pwc, v19 - a2, 1);
    v55 = result;
  }
  if ( v53 <= 0 )
  {
    if ( !dword_490128 || -v53 > (int)(2 * v55) )
    {
      if ( v54 > 0 )
      {
        sub_294504((int)v15, v54);
        dword_48AE04 += v55;
        if ( _ctype_get_mb_cur_max() > 1 && !((unsigned int)a3 | dword_48BB60) && dword_48AE14 && dword_48AE20 >= pwc )
        {
          dword_48AE48 = 1;
          dword_48AE04 -= dword_48AE14;
        }
      }
      result = _ctype_get_mb_cur_max();
      v73 = v19 - a2;
      v74 = v17 - a1 - v73;
      if ( result > 1 && !dword_48BB60 )
      {
        v75 = sub_28C428(a1, 0, v17 - a1, 1);
        result = sub_28C428(a2, 0, v73, 1);
        v74 = v75 - result;
      }
      if ( v74 )
      {
        result = _ctype_get_mb_cur_max();
        if ( result == 1 || dword_48BB60 || dword_48AE04 < dword_490144 )
        {
          v76 = dword_4707A0 < 0;
          if ( dword_4707A0 )
            v76 = (int)a3 < a6;
          if ( v76 )
            return sub_28C3E0(v74);
          else
            return sub_28D6E8(v74);
        }
      }
      return result;
    }
    if ( !dword_48AAF8 || dword_48AE04 || (result = nb, dword_48AE38 + nb) )
    {
      if ( v53 && -v53 <= dword_490144 )
      {
        result = dword_490148;
        if ( dword_490148 && *(_BYTE *)dword_490148 )
        {
          v91 = tgoto((const char *)dword_490148, -v53, -v53);
          result = tputs(v91, -v53, (int (*)(int))sub_293B80);
        }
        else if ( *(_BYTE *)dword_490128 )
        {
          v82 = ~v53;
          for ( i = (const char *)dword_490128; ; i = (const char *)dword_490128 )
          {
            --v82;
            result = tputs(i, 1, (int (*)(int))sub_293B80);
            if ( v82 == -1 )
              break;
          }
        }
      }
    }
    if ( v105 <= 0 )
      return result;
    sub_294504((int)v15, v105);
    result = _ctype_get_mb_cur_max();
    if ( result <= 1 || dword_48BB60 )
    {
      dword_48AE04 += v105;
      return result;
    }
    v80 = v105;
    v81 = v15;
LABEL_261:
    result = sub_28C428(v81, 0, v80, 1) + dword_48AE04;
    dword_48AE04 = result;
    if ( !a3 && dword_48AE14 && dword_48AE20 >= pwc )
    {
      result -= dword_48AE14;
      dword_48AE04 = result;
      dword_48AE48 = 1;
    }
    return result;
  }
  v56 = dword_48AE34 < (int)a3;
  if ( dword_48AE34 <= (int)a3 )
    v56 = dword_48AE34 < a6;
  v57 = v56;
  if ( nb < 0 )
  {
    sub_294504((int)v15, v54);
    v80 = v19 - v96;
    v81 = v15;
    goto LABEL_261;
  }
  if ( !dword_48BAF8 || v53 > (int)(2 * v55) && !dword_490108 )
    goto LABEL_188;
  v58 = v57 ^ 1;
  if ( !dword_4707A0 )
    v58 = 1;
  if ( v58 )
  {
    if ( *v100 )
    {
      if ( !dword_48AAF8 || dword_48AE04 )
        goto LABEL_118;
      v59 = dword_48AE24 < nb;
      if ( v107 <= 0 )
        v59 = 0;
      if ( !v59 )
      {
LABEL_118:
        if ( (_ctype_get_mb_cur_max() <= 1
           || (unsigned int)a3 | dword_48BB60
           || !dword_48AE14
           || dword_48AE20 < pwc
           || dword_48AE24 <= v53)
          && dword_48AE38 >= v107 )
        {
          if ( (_ctype_get_mb_cur_max() == 1 || dword_48BB60) && nb != v53 )
            sub_2914C8("debug: insert_some_chars: count (%d) != col (%d)", nb, v53);
          if ( dword_490108 )
          {
            v60 = tgoto((const char *)dword_490108, 0, v53);
            tputs(v60, 1, (int (*)(int))sub_293B80);
            result = sub_294504((int)v15, nb);
          }
          else
          {
            if ( dword_49010C && *(_BYTE *)dword_49010C )
              tputs((const char *)dword_49010C, 1, (int (*)(int))sub_293B80);
            v86 = (const char *)dword_49013C;
            if ( dword_49013C && *(_BYTE *)dword_49013C )
            {
              v87 = v53 - 1;
              while ( 1 )
              {
                --v87;
                tputs(v86, 1, (int (*)(int))sub_293B80);
                if ( v87 == -1 )
                  break;
                v86 = (const char *)dword_49013C;
              }
            }
            sub_294504((int)v15, nb);
            result = dword_490114;
            if ( dword_490114 && *(_BYTE *)dword_490114 )
              result = tputs((const char *)dword_490114, 1, (int (*)(int))sub_293B80);
          }
          goto LABEL_125;
        }
      }
    }
    if ( _ctype_get_mb_cur_max() == 1 || dword_48BB60 )
    {
      v71 = nb;
      if ( nb )
        v71 = 1;
      if ( *v100 )
        v71 = 0;
      if ( v71 )
      {
        result = sub_294504((int)v15, nb);
LABEL_125:
        dword_48AE04 += v53;
        v61 = v105 - nb;
        if ( v105 - nb > 0 )
        {
          sub_294504((int)&v15[nb], v105 - nb);
          if ( _ctype_get_mb_cur_max() > 1 && !dword_48BB60 )
            v61 = sub_28C428(&v15[nb], 0, v105 - v53, 1);
          dword_48AE04 += v61;
          result = _ctype_get_mb_cur_max();
          if ( result > 1 && !((unsigned int)a3 | dword_48BB60) && dword_48AE14 && dword_48AE20 >= pwc )
          {
            dword_48AE48 = 1;
            dword_48AE04 -= dword_48AE14;
          }
        }
        return result;
      }
    }
    sub_294504((int)v15, v54);
    dword_48AE04 += v55;
    result = _ctype_get_mb_cur_max();
    if ( result > 1 && !((unsigned int)a3 | dword_48BB60) && dword_48AE14 && dword_48AE20 >= pwc )
    {
      dword_48AE48 = 1;
      dword_48AE04 -= dword_48AE14;
    }
  }
  else
  {
LABEL_188:
    sub_294504((int)v15, v54);
    dword_48AE04 += v55;
    result = _ctype_get_mb_cur_max();
    if ( result > 1 && !dword_48BB60 && (const char *)dword_48AE44 == a3 )
    {
      if ( dword_48AE14 )
      {
        if ( dword_48AE14 != dword_48AE1C )
        {
          result = pwc;
          if ( dword_48AE20 - dword_490144 * (int)a3 > pwc )
          {
            dword_48AE48 = 1;
            dword_48AE04 -= dword_48AE14 - dword_48AE1C;
          }
        }
      }
    }
  }
  return result;
}
