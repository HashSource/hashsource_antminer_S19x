int __fastcall sub_28B7B4(int a1, int a2)
{
  char v2; // r6
  int v3; // r8
  int v4; // r3
  int v6; // r7
  int (__fastcall *v7)(_DWORD); // r2
  bool v8; // zf
  int v9; // r9
  bool v10; // zf
  bool v11; // zf
  int v12; // r3
  int v13; // r5
  int v15; // r3
  const char *v16; // r1
  int v17; // r0
  __int64 v18; // r2
  unsigned __int8 *mb_cur_max; // r0
  unsigned __int8 *v20; // r3
  unsigned __int8 *v21; // r12
  int v22; // r2
  int v23; // r1
  unsigned __int8 *v24; // t1
  int v25; // r3
  signed int v26; // r6
  unsigned int v27; // r3
  int v28; // r5
  int v29; // r3
  int v30; // r2
  _BOOL4 v31; // r3
  int v32; // r1
  int v33; // r3
  int v34; // r2
  int v35; // r3
  int v36; // r1
  int v37; // r2
  const char *v38; // r0
  int v39; // r3
  int v40; // r2
  int v41; // r3
  int v42; // r1
  int v43; // r0
  int v44; // r3
  int v45; // r5
  int v46; // r12
  int v47; // r2
  int v48; // r3
  int v49; // r5
  int v50; // r0
  int v51; // r8
  int i; // r1
  int v53; // r0
  int v54; // r12
  int v55; // r2
  int v56; // r10
  unsigned int v57; // r9
  int j; // r11
  unsigned int v59; // r3
  int v60; // r8
  const char *v61; // r0
  signed int v62; // r5
  void *v63; // r0
  size_t v64; // r1
  char *v65; // r0
  const char *v66; // r1
  int v67; // r1
  const char *v68; // r0
  __int64 v69; // r2
  void *v70; // r0
  size_t v71; // r1
  int v72; // r3
  int v73; // r3
  size_t v74; // r1
  int v75; // [sp+4h] [bp-10h]
  unsigned int v76; // [sp+Ch] [bp-8h]

  v2 = a2;
  v3 = *(_DWORD *)(a1 + 4);
  if ( a2 < 0 )
  {
    v73 = *(_DWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 4) = v3 | 4;
    v13 = -1;
    *(_DWORD *)(a1 + 68) = v73;
    return v13;
  }
  v4 = *(_DWORD *)(a1 + 60);
  v6 = v4 + 8 * a2;
  if ( *(_BYTE *)v6 != 1 )
  {
    if ( *(_BYTE *)(v4 + 8 * a2) )
    {
LABEL_23:
      v9 = *(_DWORD *)(a1 + 76);
      goto LABEL_24;
    }
    v7 = *(int (__fastcall **)(_DWORD))(v6 + 4);
    if ( v7 == (int (__fastcall *)(_DWORD))sub_28C230 )
    {
      if ( (v3 & 1) == 0 )
      {
LABEL_129:
        *(_DWORD *)(a1 + 76) = -2;
        if ( (v3 & 8) == 0 )
          goto LABEL_34;
LABEL_33:
        v15 = *(_DWORD *)(a1 + 64);
        *(_DWORD *)(a1 + 4) = v3 & 0xFFFFFFF7;
        *(_DWORD *)(a1 + 60) = v15;
        goto LABEL_34;
      }
    }
    else
    {
      if ( v7 != (int (__fastcall *)(_DWORD))sub_28C238 )
      {
        if ( v7 == (int (__fastcall *)(_DWORD))sub_296014 )
        {
          *(_DWORD *)(a1 + 76) = -3;
LABEL_13:
          if ( (v3 & 8) == 0 )
            goto LABEL_34;
          v9 = *(_DWORD *)(a1 + 76);
          goto LABEL_25;
        }
        v8 = a2 == 7;
        if ( a2 != 7 )
          v8 = (char *)v7 == (char *)sub_291288;
        if ( v8 )
        {
          *(_DWORD *)(a1 + 76) = -4;
          goto LABEL_13;
        }
        v10 = v7 == sub_291FD0;
        if ( v7 != sub_291FD0 )
          v10 = a2 == 23;
        if ( v10 )
        {
          *(_DWORD *)(a1 + 76) = -5;
          goto LABEL_13;
        }
        v11 = v7 == (int (__fastcall *)(_DWORD))sub_291A64;
        if ( v7 != (int (__fastcall *)(_DWORD))sub_291A64 )
          v11 = a2 == 25;
        if ( v11 )
        {
          *(_DWORD *)(a1 + 76) = -6;
          goto LABEL_13;
        }
        goto LABEL_23;
      }
      if ( (v3 & 1) != 0 )
        goto LABEL_129;
    }
    *(_DWORD *)(a1 + 76) = -1;
    if ( (v3 & 8) == 0 )
      goto LABEL_34;
    goto LABEL_33;
  }
  v9 = *(_DWORD *)(a1 + 76);
  if ( !strchr(*(const char **)(a1 + 108), v9) )
  {
    v25 = *(_DWORD *)(v6 + 4);
    *(_DWORD *)(a1 + 4) = v3 | 8;
    *(_DWORD *)(a1 + 60) = v25;
    return 1;
  }
LABEL_24:
  if ( (v3 & 8) != 0 )
  {
LABEL_25:
    v12 = *(_DWORD *)(a1 + 64);
    *(_DWORD *)(a1 + 4) = v3 & 0xFFFFFFF7;
    *(_DWORD *)(a1 + 60) = v12;
  }
  if ( v9 > 0 && strchr(*(const char **)(a1 + 108), v9) )
  {
    if ( v9 != 27 || !sub_292E10() )
      return 0;
    v13 = 0;
    sub_2932FC(27);
    return v13;
  }
LABEL_34:
  if ( _ctype_get_mb_cur_max() <= 1 )
  {
    v17 = *(_DWORD *)(a1 + 76);
  }
  else
  {
    v17 = *(_DWORD *)(a1 + 76);
    v13 = dword_48BB60;
    if ( !dword_48BB60 )
    {
      if ( v17 >= 0 )
      {
        if ( *(_BYTE *)(a1 + 80) && !*(_BYTE *)(a1 + 81) )
        {
          if ( v17 <= 31 )
          {
            if ( v17 != 7 )
              goto LABEL_58;
          }
          else if ( (unsigned int)(v17 - 127) <= 0x80 )
          {
            goto LABEL_58;
          }
        }
        goto LABEL_46;
      }
LABEL_59:
      mb_cur_max = (unsigned __int8 *)(v17 + 6);
      switch ( (unsigned int)mb_cur_max )
      {
        case 0u:
          v44 = *(_DWORD *)(a1 + 12);
          v45 = v44 + dword_4900D8;
          if ( dword_4900DC <= v44 + dword_4900D8 )
            goto LABEL_107;
          v46 = *(_DWORD *)(a1 + 16);
          mb_cur_max = *(unsigned __int8 **)(a1 + 8);
          if ( dword_4900DC - dword_4900D8 + 2 < v46 )
            goto LABEL_89;
          v71 = dword_4900DC - v45 + 2 + v46;
          *(_DWORD *)(a1 + 16) = v71;
          mb_cur_max = (unsigned __int8 *)sub_93050(mb_cur_max, v71);
          v72 = dword_4900DC;
          *(_DWORD *)(a1 + 8) = mb_cur_max;
          if ( v45 < v72 )
          {
            v44 = *(_DWORD *)(a1 + 12);
LABEL_89:
            while ( 1 )
            {
              v47 = dword_48AAD4;
              v16 = (const char *)(v44 + 1);
              *(_DWORD *)(a1 + 12) = v44 + 1;
              LOBYTE(v47) = *(_BYTE *)(v47 + v45++);
              mb_cur_max[v44] = v47;
              mb_cur_max = *(unsigned __int8 **)(a1 + 8);
              if ( dword_4900DC <= v45 )
                break;
              v44 = *(_DWORD *)(a1 + 12);
            }
          }
          v48 = *(_DWORD *)(a1 + 12);
          goto LABEL_91;
        case 1u:
          v49 = *(_DWORD *)(a1 + 12) + dword_4900D8;
          if ( dword_4900DC <= v49 )
            goto LABEL_107;
          v50 = sub_29B44C(dword_48AAD4, *(_DWORD *)(a1 + 12) + dword_4900D8);
          mb_cur_max = (unsigned __int8 *)sub_2911D0(v50);
          if ( !mb_cur_max )
            goto LABEL_107;
          if ( _ctype_get_mb_cur_max() > 1 && !dword_48BB60 )
            goto LABEL_138;
          v51 = v49 + 1;
LABEL_97:
          for ( i = v51; dword_4900DC > v51; i = ++v51 )
          {
            v53 = sub_29B44C(dword_48AAD4, i);
            if ( !sub_2911D0(v53) )
              break;
            if ( _ctype_get_mb_cur_max() > 1 && !dword_48BB60 )
            {
LABEL_138:
              v51 = sub_29B4D0(dword_48AAD4);
              goto LABEL_97;
            }
          }
          v48 = *(_DWORD *)(a1 + 12);
          v54 = *(_DWORD *)(a1 + 16);
          mb_cur_max = *(unsigned __int8 **)(a1 + 8);
          v16 = (const char *)(v51 - v49 + v48 + 2);
          if ( (int)v16 >= v54 )
          {
            v74 = v51 - v49 + 2 + v54;
            *(_DWORD *)(a1 + 16) = v74;
            mb_cur_max = (unsigned __int8 *)sub_93050(mb_cur_max, v74);
            v48 = *(_DWORD *)(a1 + 12);
            *(_DWORD *)(a1 + 8) = mb_cur_max;
          }
          if ( v51 > v49 )
          {
            do
            {
              v55 = dword_48AAD4;
              v16 = (const char *)(v48 + 1);
              *(_DWORD *)(a1 + 12) = v48 + 1;
              LOBYTE(v55) = *(_BYTE *)(v55 + v49++);
              mb_cur_max[v48] = v55;
              mb_cur_max = *(unsigned __int8 **)(a1 + 8);
              v48 = *(_DWORD *)(a1 + 12);
            }
            while ( v51 != v49 );
          }
LABEL_91:
          mb_cur_max[v48] = 0;
          goto LABEL_108;
        case 2u:
          v13 = -1;
          sub_2950FC(*(_DWORD *)(*(_DWORD *)(a1 + 20) + 4 * *(_DWORD *)(a1 + 44)), 0);
          v42 = *(_DWORD *)(a1 + 40);
          dword_4900D8 = *(_DWORD *)(a1 + 36);
          dword_4900D4 = v42;
          v43 = sub_28D478(dword_4900D8);
          sub_28D50C(v43);
          return v13;
        case 3u:
          v39 = *(_DWORD *)(a1 + 12);
          if ( !v39 )
            goto LABEL_107;
          v40 = *(_DWORD *)(a1 + 8);
          v41 = v39 - 1;
          v16 = 0;
          *(_DWORD *)(a1 + 12) = v41;
          *(_BYTE *)(v40 + v41) = 0;
          goto LABEL_108;
        case 4u:
          v29 = *(_DWORD *)(a1 + 72);
          v30 = *(_DWORD *)(a1 + 4);
          v26 = *(_DWORD *)(a1 + 12);
          *(_DWORD *)(a1 + 72) = -v29;
          if ( v29 <= 0 )
            v6 = 0;
          v28 = *(_DWORD *)(a1 + 104);
          v75 = *(_DWORD *)(a1 + 100);
          if ( v29 <= 0 )
          {
            v27 = v30 & 0xFFFFFFFE;
          }
          else
          {
            v27 = v30 | 1;
            v6 = 1;
          }
          goto LABEL_72;
        case 5u:
          v26 = *(_DWORD *)(a1 + 12);
          if ( v26 )
          {
            v27 = *(_DWORD *)(a1 + 4);
            v28 = *(_DWORD *)(a1 + 104);
            v6 = v27 & 1;
            if ( (v27 & 1) != 0 )
              --v28;
            v75 = *(_DWORD *)(a1 + 100);
            if ( (v27 & 1) != 0 )
            {
              *(_DWORD *)(a1 + 104) = v28;
              goto LABEL_72;
            }
            if ( v28 != v75 )
            {
              *(_DWORD *)(a1 + 104) = ++v28;
              goto LABEL_72;
            }
LABEL_107:
            mb_cur_max = (unsigned __int8 *)sub_2945C8(mb_cur_max, v16);
          }
          else
          {
            if ( !dword_48ADF0 )
              return 1;
            v63 = *(void **)(a1 + 8);
            v64 = dword_48ADF4 + 64;
            *(_DWORD *)(a1 + 16) = dword_48ADF4 + 64;
            v65 = (char *)sub_93050(v63, v64);
            v66 = (const char *)dword_48ADF0;
            *(_DWORD *)(a1 + 8) = v65;
            strcpy(v65, v66);
            v67 = *(_DWORD *)(a1 + 4);
            v68 = *(const char **)(a1 + 8);
            *(_DWORD *)(a1 + 12) = dword_48ADF4;
            mb_cur_max = (unsigned __int8 *)sub_28B358(v68, v67 & 1);
          }
LABEL_108:
          v27 = *(_DWORD *)(a1 + 4);
          v26 = *(_DWORD *)(a1 + 12);
          v6 = v27 & 1;
          v28 = *(_DWORD *)(a1 + 104);
          v75 = *(_DWORD *)(a1 + 100);
          goto LABEL_72;
        default:
          goto LABEL_46;
      }
    }
  }
  if ( v17 < 0 )
    goto LABEL_59;
  if ( v17 > 31 )
  {
    if ( (unsigned int)(v17 - 127) > 0x80 )
      goto LABEL_46;
LABEL_57:
    v13 = 0;
LABEL_58:
    ((void (*)(void))sub_2932FC)();
    return v13;
  }
  if ( v17 != 7 )
    goto LABEL_57;
LABEL_46:
  v18 = *(_QWORD *)(a1 + 12);
  if ( (int)v18 + 2 >= SHIDWORD(v18) )
  {
    v70 = *(void **)(a1 + 8);
    *(_DWORD *)(a1 + 16) = HIDWORD(v18) + 128;
    *(_DWORD *)(a1 + 8) = sub_93050(v70, HIDWORD(v18) + 128);
  }
  mb_cur_max = (unsigned __int8 *)_ctype_get_mb_cur_max();
  if ( (unsigned int)mb_cur_max <= 1 || dword_48BB60 )
  {
    v69 = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 12) = HIDWORD(v69) + 1;
    *(_BYTE *)(v69 + HIDWORD(v69)) = v2;
  }
  else
  {
    mb_cur_max = (unsigned __int8 *)strlen((const char *)(a1 + 80));
    if ( mb_cur_max )
    {
      v20 = (unsigned __int8 *)(a1 + 79);
      v21 = &mb_cur_max[a1 + 79];
      do
      {
        v22 = *(_DWORD *)(a1 + 12);
        v23 = *(_DWORD *)(a1 + 8);
        *(_DWORD *)(a1 + 12) = v22 + 1;
        v24 = (unsigned __int8 *)*++v20;
        mb_cur_max = v24;
        *(_BYTE *)(v23 + v22) = (_BYTE)v24;
      }
      while ( v21 != v20 );
    }
  }
  v16 = 0;
  *(_BYTE *)(*(_DWORD *)(a1 + 8) + *(_DWORD *)(a1 + 12)) = 0;
  v27 = *(_DWORD *)(a1 + 4);
  v26 = *(_DWORD *)(a1 + 12);
  v28 = *(_DWORD *)(a1 + 104);
  v6 = v27 & 1;
  v75 = *(_DWORD *)(a1 + 100);
LABEL_72:
  v76 = v27 & 0xFFFFFFF9;
  *(_DWORD *)(a1 + 4) = v27 & 0xFFFFFFF9;
  while ( 1 )
  {
LABEL_74:
    if ( v6 )
      v31 = v28 >= 0;
    else
      v31 = v75 - v26 >= v28;
    if ( !v31 )
    {
      v56 = *(_DWORD *)(a1 + 72);
      v57 = v56 + *(_DWORD *)(a1 + 68);
      for ( j = 4 * v57; ; j += 4 * v56 )
      {
        v59 = v57 >> 31;
        if ( !v6 )
          v59 = *(_DWORD *)(a1 + 28);
        *(_DWORD *)(a1 + 68) = v57;
        if ( !v6 )
          v59 -= v57;
        v57 += v56;
        if ( !v6 )
          v59 = v59 == 0;
        if ( v59 )
        {
          v13 = 1;
          *(_DWORD *)(a1 + 4) = v76 | 4;
          sub_2945C8(mb_cur_max, v16);
          *(_DWORD *)(a1 + 68) = *(_DWORD *)(a1 + 48);
          return v13;
        }
        v60 = *(_DWORD *)(a1 + 20);
        v61 = *(const char **)(v60 + j);
        *(_DWORD *)(a1 + 96) = v61;
        v62 = strlen(v61);
        mb_cur_max = *(unsigned __int8 **)(a1 + 52);
        v75 = v62;
        *(_DWORD *)(a1 + 100) = v62;
        if ( mb_cur_max && (v16 = *(const char **)(v60 + j), *mb_cur_max == *(unsigned __int8 *)v16) )
        {
          mb_cur_max = (unsigned __int8 *)strcmp((const char *)mb_cur_max, v16);
          if ( mb_cur_max && v62 >= v26 )
          {
LABEL_123:
            if ( v6 )
              v28 = v62 - v26;
            else
              v28 = 0;
            *(_DWORD *)(a1 + 104) = v28;
            goto LABEL_74;
          }
        }
        else if ( v62 >= v26 )
        {
          goto LABEL_123;
        }
      }
    }
    if ( !v26 )
      break;
    v32 = *(_DWORD *)(a1 + 96);
    mb_cur_max = *(unsigned __int8 **)(a1 + 8);
    v33 = *(unsigned __int8 *)(v32 + v28);
    v16 = (const char *)(v32 + v28);
    if ( *mb_cur_max == v33 )
    {
      mb_cur_max = (unsigned __int8 *)strncmp((const char *)mb_cur_max, v16, v26);
      if ( !mb_cur_max )
        break;
    }
    v28 += *(_DWORD *)(a1 + 72);
    *(_DWORD *)(a1 + 104) = v28;
  }
  v34 = *(_DWORD *)(a1 + 68);
  v35 = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 4) = v76 | 2;
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(v35 + 4 * v34);
  sub_2950FC(*(_DWORD *)(v35 + 4 * v34), v76 & 4);
  v36 = *(_DWORD *)(a1 + 4);
  v37 = *(_DWORD *)(a1 + 104);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a1 + 68);
  v38 = *(const char **)(a1 + 8);
  dword_4900D8 = v37;
  sub_28B358(v38, v36 & 1);
  return 1;
}
