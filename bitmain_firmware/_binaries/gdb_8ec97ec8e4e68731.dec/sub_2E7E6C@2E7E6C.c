int __fastcall sub_2E7E6C(int a1, int a2)
{
  int v2; // r5
  int v3; // r4
  int v4; // r6
  int v6; // r0
  int v7; // r3
  int v8; // r7
  int v9; // r9
  const char **v10; // r10
  int v11; // r8
  int v12; // r1
  void *v13; // r0
  int v14; // r2
  char v15; // r3
  char *v16; // r0
  char *v17; // r3
  int v18; // r0
  int v19; // r11
  unsigned int v20; // r1
  size_t v21; // r1
  char *v22; // r0
  char *v23; // r7
  int v24; // r3
  int v25; // r3
  int v26; // r3
  int v27; // r6
  int v28; // r10
  int v29; // r11
  const char **v30; // r9
  unsigned int v31; // r7
  int v32; // r1
  int v33; // r3
  void *v34; // r10
  int v35; // r0
  const char *v36; // r0
  int v37; // r3
  _DWORD *i; // r7
  int v39; // r3
  const char *v40; // r7
  unsigned int v41; // r9
  int v42; // r4
  const char *v43; // r7
  int v44; // r1
  unsigned int v45; // r9
  unsigned int v46; // r8
  int v47; // r11
  int v48; // r3
  const char **v49; // r8
  int v50; // r10
  size_t v51; // r1
  char *v52; // r0
  int v53; // r3
  unsigned int v54; // r3
  int v55; // r0
  int j; // r2
  int v57; // lr
  int v58; // r1
  int v59; // r10
  int v60; // r2
  int v61; // r3
  char *v62; // r0
  size_t v63; // r2
  int v64; // r10
  int v65; // r6
  int v66; // r5
  int v67; // r10
  unsigned int v68; // r4
  int v69; // t1
  __int64 v70; // r0
  int v71; // r3
  _DWORD *v72; // r10
  int v73; // r1
  size_t v74; // r0
  int v75; // t1
  size_t v76; // r1
  char *v77; // r0
  char *v78; // r7
  int v79; // r3
  int v80; // r10
  int v81; // r1
  int v82; // r7
  int v83; // r2
  int v84; // r0
  int v85; // r0
  _BYTE *v86; // r8
  int v87; // r7
  unsigned int v88; // r3
  char v89; // r2
  int v90; // r3
  const char **v91; // [sp+4h] [bp-A4h]
  int v92; // [sp+4h] [bp-A4h]
  int v93; // [sp+8h] [bp-A0h]
  int v94; // [sp+8h] [bp-A0h]
  const char **n; // [sp+Ch] [bp-9Ch]
  size_t na; // [sp+Ch] [bp-9Ch]
  size_t nb; // [sp+Ch] [bp-9Ch]
  int v98; // [sp+10h] [bp-98h]
  int v99; // [sp+10h] [bp-98h]
  int v100; // [sp+14h] [bp-94h]
  int v101; // [sp+1Ch] [bp-8Ch] BYREF
  int v102[6]; // [sp+20h] [bp-88h] BYREF
  _DWORD s[28]; // [sp+38h] [bp-70h] BYREF

  if ( *(_DWORD *)(*(_DWORD *)(a2 + 28) + 40) == 1 )
  {
    v2 = a2;
    v3 = a1;
    v4 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 444);
    (*(void (**)(void))(v4 + 144))();
    if ( !*(_DWORD *)(*(_DWORD *)(v2 + 28) + 48) && (*(_BYTE *)(v4 + 467) & 8) == 0 )
      return 1;
    v6 = sub_2DBCEC(v3, (char *)v2, &v101);
    v7 = *(_DWORD *)(v2 + 28);
    v8 = v6;
    if ( !*(_DWORD *)(v7 + 48) )
      return 1;
    v9 = *(_DWORD *)(v7 + 56);
    v10 = sub_2AD864(v9, ".gnu.version");
    if ( !v10 )
      sub_2A6BBC("elflink.c", 6981);
    if ( ((unsigned int)v10[5] & 0x8000) == 0 )
    {
      v10[9] = (const char *)(2 * v8);
      v36 = (const char *)sub_2AD09C(v3, 2 * v8);
      v10[27] = v36;
      if ( !v36 || !sub_2E3078(v2, 1879048176, 0) )
        return 0;
    }
    v11 = *(_DWORD *)(*(_DWORD *)(v2 + 28) + 268);
    if ( !v11 )
      sub_2A6BBC("elflink.c", 7000);
    v12 = v8 * *(unsigned __int8 *)(*(_DWORD *)(v4 + 392) + 5);
    *(_DWORD *)(v11 + 36) = v12;
    v13 = (void *)sub_2ACBF4(v3, v12);
    *(_DWORD *)(v11 + 108) = v13;
    if ( !v13 )
      return 0;
    v14 = *(unsigned __int8 *)(*(_DWORD *)(v4 + 392) + 5);
    memset(v13, 0, ++v101 * v14);
    v15 = *(_BYTE *)(v2 + 4);
    *(_DWORD *)(*(_DWORD *)(v2 + 28) + 100) = 0;
    if ( (v15 & 2) != 0 )
    {
      v34 = sub_2AB368(4 * v8);
      if ( !v34 )
        return 0;
      v35 = *(_DWORD *)(v2 + 28);
      s[0] = v34;
      s[1] = 0;
      sub_2FCBD4(v35, sub_2DD56C, s, v33);
      if ( s[1] )
      {
        free(v34);
        return 0;
      }
      v46 = (s[0] - (int)v34) >> 2;
      v47 = sub_2DCFE4(v2, (int *)v34, v46, 0);
      free(v34);
      v48 = v46;
      if ( v46 )
        v48 = 1;
      if ( v47 )
        v48 = 0;
      if ( v48 )
        return 0;
      *(_DWORD *)(*(_DWORD *)(v2 + 28) + 100) = v47;
      v49 = sub_2AD864(v9, ".hash");
      if ( !v49 )
        sub_2A6BBC("elflink.c", 7055);
      v50 = *((_DWORD *)v49[35] + 10);
      v51 = v50 * (v8 + 2 + v47);
      v49[9] = (const char *)v51;
      v52 = (char *)sub_2AD09C(v3, v51);
      v49[27] = v52;
      if ( !v52 )
        return 0;
      v53 = 8 * v50;
      if ( 8 * v50 == 8 )
      {
        *v52 = v47;
        v49[27][v50] = v8;
      }
      else
      {
        switch ( v53 )
        {
          case 16:
            (*(void (__fastcall **)(int, char *))(*(_DWORD *)(v3 + 4) + 60))(v47, v52);
            (*(void (__fastcall **)(int, const char *))(*(_DWORD *)(v3 + 4) + 60))(v8, &v49[27][v50]);
            break;
          case 32:
            (*(void (__fastcall **)(int, char *))(*(_DWORD *)(v3 + 4) + 48))(v47, v52);
            (*(void (__fastcall **)(int, const char *))(*(_DWORD *)(v3 + 4) + 48))(v8, &v49[27][v50]);
            break;
          case 64:
            (*(void (__fastcall **)(int, _DWORD, char *))(*(_DWORD *)(v3 + 4) + 36))(v47, 0, v52);
            (*(void (__fastcall **)(int, _DWORD, const char *))(*(_DWORD *)(v3 + 4) + 36))(v8, 0, &v49[27][v50]);
            break;
          default:
            sub_2A6BF0((int)"elflink.c", 7062, (int)"bfd_elf_size_dynsym_hash_dynstr");
        }
      }
      v15 = *(_BYTE *)(v2 + 4);
    }
    if ( (v15 & 4) == 0 )
    {
LABEL_28:
      n = sub_2AD864(v9, ".dynstr");
      if ( !n )
        sub_2A6BBC("elflink.c", 7237);
      v26 = *(_DWORD *)(v2 + 28);
      v27 = *(_DWORD *)(v26 + 84);
      v28 = *(_DWORD *)(v26 + 56);
      v92 = v26;
      sub_2F0664(v27);
      v93 = sub_2F04CC(v27);
      v29 = *(_DWORD *)(*(_DWORD *)(v28 + 4) + 444);
      v30 = sub_2AD864(v28, ".dynamic");
      if ( !v30 )
        sub_2A6BBC("elflink.c", 3529);
      v31 = (unsigned int)v30[27];
      if ( v31 < (unsigned int)&v30[9][v31] )
      {
        v32 = *(_DWORD *)(v29 + 392);
        while ( 1 )
        {
          (*(void (__fastcall **)(int, unsigned int, _DWORD *))(v32 + 48))(v28, v31, s);
          if ( s[0] == 29 )
            goto LABEL_43;
          if ( s[0] > 0x1Du )
            break;
          if ( s[0] != 10 )
          {
            if ( s[0] > 0xAu )
            {
              if ( (unsigned int)(s[0] - 14) > 1 )
                goto LABEL_37;
            }
            else if ( s[0] != 1 )
            {
              goto LABEL_37;
            }
LABEL_43:
            s[1] = sub_2F04E0(v27);
            goto LABEL_36;
          }
          s[1] = v93;
LABEL_36:
          (*(void (__fastcall **)(int, _DWORD *, unsigned int))(*(_DWORD *)(v29 + 392) + 52))(v28, s, v31);
LABEL_37:
          v32 = *(_DWORD *)(v29 + 392);
          v31 += *(unsigned __int8 *)(v32 + 6);
          if ( (const char *)v31 >= &v30[9][(int)v30[27]] )
            goto LABEL_55;
        }
        if ( s[0] != 2147483645 )
        {
          if ( s[0] > 0x7FFFFFFDu )
          {
            if ( s[0] != 0x7FFFFFFF )
              goto LABEL_37;
          }
          else if ( (unsigned int)(s[0] - 1879047931) > 1 )
          {
            goto LABEL_37;
          }
        }
        goto LABEL_43;
      }
LABEL_55:
      v37 = v92;
      for ( i = *(_DWORD **)(v92 + 196); i; i = (_DWORD *)*i )
        i[6] = sub_2F04E0(v27);
      sub_2FCBD4(v92, sub_2DD744, v27, v37);
      v39 = *(_DWORD *)(v3 + 160);
      if ( *(_DWORD *)(v39 + 568) )
      {
        v43 = sub_2AD864(v28, ".gnu.version_d")[27];
        do
        {
          v44 = (int)v43;
          v43 += 20;
          sub_2CD328(v3, v44, (int)s);
          if ( s[3] == 20 && HIWORD(s[1]) )
          {
            v45 = 0;
            do
            {
              ++v45;
              sub_2CD468(v3, (int)v43, v102);
              v102[0] = sub_2F04E0(v27);
              sub_2CD4A4(v3, v102, (int)v43);
              v43 += 8;
            }
            while ( v45 < HIWORD(s[1]) );
          }
        }
        while ( s[4] );
        v39 = *(_DWORD *)(v3 + 160);
      }
      if ( *(_DWORD *)(v39 + 580) )
      {
        v40 = sub_2AD864(v28, ".gnu.version_r")[27];
        do
        {
          sub_2CD4E0(v3, (int)v40, (int)s);
          s[1] = sub_2F04E0(v27);
          sub_2CD558(v3, (unsigned __int16 *)s, (int)v40);
          v40 += 16;
          if ( HIWORD(s[0]) )
          {
            v41 = 0;
            do
            {
              ++v41;
              sub_2CD5D0(v3, (int)v40, (int)v102);
              v102[2] = sub_2F04E0(v27);
              sub_2CD648(v3, (int)v102, (int)v40);
              v40 += 16;
            }
            while ( v41 < HIWORD(s[0]) );
          }
        }
        while ( s[3] );
      }
      v42 = 0;
      n[9] = (const char *)sub_2F04CC(*(_DWORD *)(*(_DWORD *)(v2 + 28) + 84));
      while ( sub_2E3078(v2, 0, 0) )
      {
        if ( *(_DWORD *)(v2 + 108) < (unsigned int)++v42 )
          return 1;
      }
      return 0;
    }
    memset(s, 0, 0x48u);
    v16 = (char *)sub_2AB368(8 * v8);
    s[4] = v16;
    if ( !v16 )
      return 0;
    v17 = &v16[4 * v8];
    v18 = *(_DWORD *)(v2 + 28);
    s[5] = v17;
    s[0] = v3;
    s[1] = v4;
    s[10] = -1;
    sub_2FCBD4(v18, sub_2DD644, s, v17);
    if ( s[17] || (v19 = sub_2DCFE4(v2, (int *)s[4], s[2], 1)) == 0 )
    {
LABEL_73:
      free((void *)s[4]);
      return 0;
    }
    v91 = sub_2AD864(v9, ".gnu.hash");
    if ( !v91 )
      sub_2A6BBC("elflink.c", 7109);
    v20 = s[2];
    if ( !s[2] )
    {
      if ( s[10] != -1 )
        sub_2A6BBC("elflink.c", 7114);
      free((void *)s[4]);
      v21 = (*(unsigned __int8 *)(*(_DWORD *)(v4 + 392) + 10) >> 3) + 20;
      v91[9] = (const char *)v21;
      v22 = (char *)sub_2AD09C(v3, v21);
      v23 = v22;
      if ( v22 )
      {
        v24 = *(_DWORD *)(v3 + 4);
        v91[27] = v22;
        (*(void (__fastcall **)(int, char *))(v24 + 48))(1, v22);
        (*(void (__fastcall **)(int, char *))(*(_DWORD *)(v3 + 4) + 48))(1, v23 + 4);
        (*(void (__fastcall **)(int, char *))(*(_DWORD *)(v3 + 4) + 48))(1, v23 + 8);
        (*(void (__fastcall **)(_DWORD, char *))(*(_DWORD *)(v3 + 4) + 48))(0, v23 + 12);
        v25 = *(unsigned __int8 *)(*(_DWORD *)(v4 + 392) + 10);
        switch ( v25 )
        {
          case 8:
            v23[16] = 0;
            break;
          case 16:
            (*(void (__fastcall **)(_DWORD, char *))(*(_DWORD *)(v3 + 4) + 60))(0, v23 + 16);
            break;
          case 32:
            (*(void (__fastcall **)(_DWORD, char *))(*(_DWORD *)(v3 + 4) + 48))(0, v23 + 16);
            break;
          case 64:
            (*(void (__fastcall **)(_DWORD, _DWORD, char *))(*(_DWORD *)(v3 + 4) + 36))(0, 0, v23 + 16);
            break;
          default:
            sub_2A6BF0((int)"elflink.c", 7130, (int)"bfd_elf_size_dynsym_hash_dynstr");
        }
        (*(void (__fastcall **)(_DWORD, char *))(*(_DWORD *)(v3 + 4) + 48))(
          0,
          &v23[(*(unsigned __int8 *)(*(_DWORD *)(v4 + 392) + 10) >> 3) + 16]);
        goto LABEL_28;
      }
      return 0;
    }
    if ( s[10] == -1 )
    {
      sub_2A6BBC("elflink.c", 7138);
      v20 = s[2];
    }
    v54 = v20 >> 1;
    v55 = *(unsigned __int8 *)(*(_DWORD *)(v4 + 392) + 10);
    if ( !(v20 >> 1) )
      goto LABEL_138;
    for ( j = 1; ; ++j )
    {
      v54 >>= 1;
      if ( !v54 )
        break;
    }
    if ( (unsigned int)(j + 1) > 2 )
    {
      v57 = 1 << (j - 1);
      if ( (v57 & v20) != 0 )
      {
        v58 = j + 4;
        if ( v55 != 64 )
        {
          v59 = 1 << v58;
          v60 = 4 << (j - 1);
          v94 = v57;
LABEL_105:
          v61 = 31;
          s[14] = 5;
          goto LABEL_106;
        }
      }
      else
      {
        v58 = j + 3;
        if ( v55 != 64 )
        {
          v89 = j - 2;
          v59 = 1 << v58;
          v90 = 1 << v89;
          v60 = 4 << v89;
          v94 = v90;
          goto LABEL_105;
        }
        if ( j == 2 )
          v58 = 6;
      }
    }
    else
    {
LABEL_138:
      if ( v55 != 64 )
      {
        v60 = 4;
        v94 = 1;
        v59 = 32;
        v58 = 5;
        goto LABEL_105;
      }
      v58 = 6;
    }
    v60 = 4 << (v58 - 6);
    s[14] = 6;
    v59 = 1 << v58;
    v94 = 1 << (v58 - 6);
    v61 = 63;
LABEL_106:
    na = v60;
    s[16] = v61;
    s[15] = v58;
    s[3] = v59;
    v62 = (char *)sub_2AB368(v60 + 8 * v19);
    s[8] = v62;
    v63 = na;
    if ( v62 )
    {
      s[7] = &v62[na];
      s[6] = &v62[4 * v19 + na];
      nb = 4 * v19;
      s[12] = v8 - s[2];
      memset(v62, 0, v63);
      memset((void *)s[7], 0, 4 * v19);
      if ( s[2] )
      {
        v98 = v4;
        v100 = v2;
        v65 = s[4] - 4;
        v66 = s[7];
        v67 = v3;
        v68 = 0;
        do
        {
          v69 = *(_DWORD *)(v65 + 4);
          v65 += 4;
          v70 = sub_347674(v69, v19);
          ++v68;
          ++*(_DWORD *)(v66 + 4 * HIDWORD(v70));
        }
        while ( s[2] > v68 );
        v3 = v67;
        v4 = v98;
        v64 = v66;
        v2 = v100;
      }
      else
      {
        v64 = s[7];
      }
      v71 = s[6];
      v72 = (_DWORD *)(v64 - 4);
      v73 = s[12];
      v74 = nb + s[6];
      do
      {
        v75 = v72[1];
        ++v72;
        v71 += 4;
        if ( v75 )
        {
          *(_DWORD *)(v71 - 4) = v73;
          v73 += *v72;
        }
      }
      while ( v74 != v71 );
      if ( v73 != v8 )
        sub_2A6BBC("elflink.c", 7187);
      s[11] = v19;
      s[13] = s[10];
      v76 = (s[3] >> 3) + 4 * (s[2] + 4 + v19);
      v91[9] = (const char *)v76;
      v77 = (char *)sub_2AD09C(v3, v76);
      v78 = v77;
      if ( v77 )
      {
        v79 = *(_DWORD *)(v3 + 4);
        v80 = 0;
        v91[27] = v77;
        (*(void (__fastcall **)(int, char *))(v79 + 48))(v19, v77);
        (*(void (__fastcall **)(_DWORD, char *))(*(_DWORD *)(v3 + 4) + 48))(s[12], v78 + 4);
        (*(void (__fastcall **)(int, char *))(*(_DWORD *)(v3 + 4) + 48))(v94, v78 + 8);
        (*(void (__fastcall **)(_DWORD, char *))(*(_DWORD *)(v3 + 4) + 48))(s[15], v78 + 12);
        v82 = (int)&v78[(s[3] >> 3) + 16];
        v99 = v82;
        do
        {
          v83 = s[7];
          v84 = *(_DWORD *)(s[7] + 4 * v80);
          if ( v84 )
            v83 = s[6];
          else
            v81 = v82;
          if ( v84 )
            v81 = v82;
          v82 += 4;
          if ( v84 )
            v84 = *(_DWORD *)(v83 + 4 * v80);
          ++v80;
          (*(void (__fastcall **)(int, int, int))(*(_DWORD *)(v3 + 4) + 48))(v84, v81, v83);
        }
        while ( v19 != v80 );
        v85 = *(_DWORD *)(v2 + 28);
        s[9] = v99 + nb;
        sub_2FCBD4(v85, sub_2DC674, s, v99 + nb);
        v86 = v91[27] + 16;
        if ( v94 )
        {
          v87 = 0;
          v88 = *(unsigned __int8 *)(*(_DWORD *)(v4 + 392) + 10);
          do
          {
            switch ( v88 )
            {
              case 8u:
                *v86 = *(_DWORD *)(s[8] + 4 * v87);
                break;
              case 0x10u:
                (*(void (__fastcall **)(_DWORD, _BYTE *))(*(_DWORD *)(v3 + 4) + 60))(*(_DWORD *)(s[8] + 4 * v87), v86);
                break;
              case 0x20u:
                (*(void (__fastcall **)(_DWORD, _BYTE *))(*(_DWORD *)(v3 + 4) + 48))(*(_DWORD *)(s[8] + 4 * v87), v86);
                break;
              case 0x40u:
                (*(void (__fastcall **)(_DWORD, _DWORD, _BYTE *))(*(_DWORD *)(v3 + 4) + 36))(
                  *(_DWORD *)(s[8] + 4 * v87),
                  0,
                  v86);
                break;
              default:
                sub_2A6BF0((int)"elflink.c", 7227, (int)"bfd_elf_size_dynsym_hash_dynstr");
            }
            ++v87;
            v88 = *(unsigned __int8 *)(*(_DWORD *)(v4 + 392) + 10);
            v86 += v88 >> 3;
          }
          while ( v87 != v94 );
        }
        free((void *)s[8]);
        free((void *)s[4]);
        goto LABEL_28;
      }
      free((void *)s[8]);
    }
    goto LABEL_73;
  }
  return 1;
}
