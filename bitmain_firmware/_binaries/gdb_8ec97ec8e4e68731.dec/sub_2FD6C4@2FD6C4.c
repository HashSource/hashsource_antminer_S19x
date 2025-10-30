int __fastcall sub_2FD6C4(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        unsigned int a6,
        char *s2,
        int a8,
        int a9,
        char **a10)
{
  char *v13; // r11
  unsigned int v14; // r6
  char *v15; // r4
  int v16; // r10
  int v17; // r6
  int v18; // r3
  int v19; // r3
  int v20; // r6
  int v22; // r1
  _DWORD *v23; // r0
  int v24; // r6
  int v25; // r1
  int v26; // r2
  int v27; // r3
  _DWORD *v28; // r7
  int v29; // r1
  int v30; // r2
  size_t v31; // r8
  void *v32; // r0
  void *v33; // r9
  char v34; // r3
  int v35; // r3
  int v36; // r6
  int v37; // t1
  int v38; // r3
  bool v39; // zf
  unsigned int v40; // r0
  char *v41; // r1
  unsigned int *v42; // r5
  int v43; // r0
  char **v44; // r0
  int v45; // r2
  int v46; // r0
  int v47; // r0
  int v48; // r0
  unsigned int v49; // r0
  char *v50; // r1
  unsigned int *v51; // r5
  int v52; // r0
  char **v53; // r0
  int v54; // r3
  int i; // r2
  _DWORD *v56; // r0
  int v57; // r3
  const char *v58; // r3

  if ( a5 )
  {
    if ( (char **)a5 == &off_4709F8 )
    {
LABEL_25:
      v13 = sub_2FC960(a2, a1, s2, 1, a8, 0);
      if ( !v13 )
        return 0;
      v14 = 5;
LABEL_14:
      if ( !a10 )
        goto LABEL_111;
      goto LABEL_15;
    }
  }
  else
  {
    sub_2A6BBC("linker.c", 1375);
  }
  if ( (a4 & 0x2000) != 0 )
    goto LABEL_25;
  if ( (a4 & 0x1000) != 0 )
  {
    v13 = (char *)(a4 & 0x2000);
    v14 = 6;
    goto LABEL_14;
  }
  if ( (a4 & 0x800) != 0 )
  {
    v13 = (char *)(a4 & 0x1000);
    v14 = 7;
    goto LABEL_14;
  }
  if ( (char **)a5 != &off_4708A8 )
  {
    if ( (a4 & 0x80) != 0 )
    {
      v13 = (char *)(a4 & 0x800);
      v14 = 3;
    }
    else if ( (*(_DWORD *)(a5 + 20) & 0x1000) != 0 )
    {
      if ( (*(_BYTE *)a1 & 3) == 2 || *(_BYTE *)a3 != 95 || *(_BYTE *)(a3 + 1) != 95 )
        goto LABEL_13;
      v58 = (const char *)a3;
      if ( *(_BYTE *)(a3 + 2) == 95 )
        v58 = (const char *)(a3 + 1);
      if ( !strcmp(v58, "__gnu_lto_slim") )
      {
        v13 = 0;
        sub_2A6A5C("%B: plugin needed to handle lto object", a2);
        v14 = 4;
      }
      else
      {
LABEL_13:
        v13 = 0;
        v14 = 4;
      }
    }
    else
    {
      v13 = 0;
      v14 = 2;
    }
    goto LABEL_14;
  }
  v14 = (a4 & 0x80) != 0;
  if ( a10 )
  {
    v13 = (char *)(a4 & 0x800);
LABEL_15:
    v15 = *a10;
    if ( *a10 )
      goto LABEL_16;
    if ( v14 <= 1 )
      goto LABEL_118;
LABEL_111:
    v15 = sub_2FC920(*(_DWORD **)(a1 + 28), (const char *)a3, 1, a8, 0);
    goto LABEL_112;
  }
  v13 = 0;
LABEL_118:
  v15 = sub_2FC960(a2, a1, (const char *)a3, 1, a8, 0);
LABEL_112:
  if ( !v15 )
  {
    if ( !a10 )
      return 0;
    *a10 = 0;
    return 0;
  }
LABEL_16:
  if ( (*(_BYTE *)(a1 + 1) & 1) == 0
    && ((v56 = *(_DWORD **)(a1 + 36)) == 0
     || !sub_2AAC2C(v56, (const char *)a3, *(_BYTE *)(a1 + 1) & 1, *(_BYTE *)(a1 + 1) & 1))
    || (*(int (__fastcall **)(int, char *, char *, int, int, unsigned int, int))(*(_DWORD *)(a1 + 24) + 40))(
         a1,
         v15,
         v13,
         a2,
         a5,
         a6,
         a4) )
  {
    if ( a10 )
      *a10 = v15;
    v16 = (unsigned __int8)v15[12];
    v17 = 8 * v14;
    while ( 1 )
    {
      if ( (v15[13] & 8) != 0 )
        v18 = 1;
      else
        v18 = v16;
      v19 = *(_DWORD *)&aSetSymbolFromH[4 * v17 + 64 + 4 * v18];
      switch ( v19 )
      {
        case 0:
          sub_2A6BF0((int)"linker.c", 1457, (int)"_bfd_generic_link_add_one_symbol");
        case 1:
          v20 = 1;
          v46 = *(_DWORD *)(a1 + 28);
          *((_DWORD *)v15 + 5) = a2;
          v15[12] = 1;
          sub_2FCC64(v46, (int)v15);
          return v20;
        case 2:
          *((_DWORD *)v15 + 5) = a2;
          v15[12] = 2;
          return 1;
        case 3:
        case 4:
          if ( v19 != 4 )
            goto LABEL_59;
          goto LABEL_60;
        case 5:
          v47 = *(_DWORD *)(a1 + 28);
          if ( !v16 )
          {
            sub_2FCC64(v47, (int)v15);
            v47 = *(_DWORD *)(a1 + 28);
          }
          v15[12] = 5;
          v48 = sub_2AAEC8(v47, 8);
          *((_DWORD *)v15 + 5) = v48;
          if ( !v48 )
            return 0;
          *((_DWORD *)v15 + 6) = a6;
          v49 = sub_2ABAF4(a6);
          v51 = (unsigned int *)*((_DWORD *)v15 + 5);
          if ( v49 >= 4 )
            v49 = 4;
          if ( (char **)a5 == &off_470800 )
            LOWORD(v50) = 23360;
          *v51 = v49;
          if ( (char **)a5 == &off_470800 )
          {
            HIWORD(v50) = 60;
            v52 = a2;
          }
          else
          {
            if ( *(_DWORD *)(a5 + 148) == a2 )
            {
              v51[1] = a5;
              goto LABEL_103;
            }
            v50 = *(char **)a5;
            v52 = a2;
          }
          v53 = sub_2ADA2C(v52, v50);
          v54 = *((_DWORD *)v15 + 5);
          v51[1] = (unsigned int)v53;
          *(_DWORD *)(*(_DWORD *)(v54 + 4) + 20) |= 1u;
LABEL_103:
          v20 = 1;
          v15[13] &= 0xF3u;
          return v20;
        case 6:
          if ( *((_DWORD *)v15 + 4) || *(char **)(*(_DWORD *)(a1 + 28) + 32) == v15 )
            return 1;
          *((_DWORD *)v15 + 4) = v15;
          return 1;
        case 7:
          v20 = 1;
          (*(void (__fastcall **)(int, char *, int, int, unsigned int))(*(_DWORD *)(a1 + 24) + 8))(a1, v15, a2, 5, a6);
          return v20;
        case 8:
          if ( v16 != 5 )
            sub_2A6BBC("linker.c", 1479);
          (*(void (__fastcall **)(int, char *, int, int, _DWORD))(*(_DWORD *)(a1 + 24) + 8))(a1, v15, a2, 3, 0);
          v16 = (unsigned __int8)v15[12];
LABEL_59:
          LOBYTE(v19) = 3;
LABEL_60:
          v15[12] = v19;
          v34 = v15[13];
          *((_DWORD *)v15 + 5) = a5;
          *((_DWORD *)v15 + 6) = a6;
          v15[13] = v34 & 0xF3;
          if ( !a9 || *(_BYTE *)a3 != 95 )
            return 1;
          v35 = *(unsigned __int8 *)(a3 + 1);
          v36 = a3 + 1;
          if ( v35 == 95 )
          {
            do
            {
              v37 = *(unsigned __int8 *)++v36;
              v35 = v37;
            }
            while ( v37 == 95 );
          }
          if ( v35 != 71 || strncmp((const char *)v36, "GLOBAL_", 7u) )
            return 1;
          v38 = *(unsigned __int8 *)(v36 + 8);
          v39 = v38 == 73;
          if ( v38 != 73 )
            v39 = v38 == 68;
          if ( !v39 || *(unsigned __int8 *)(v36 + 7) != *(unsigned __int8 *)(v36 + 9) )
            return 1;
          if ( v16 == 4 )
            sub_2A6BF0((int)"linker.c", 1537, (int)"_bfd_generic_link_add_one_symbol");
          v20 = 1;
          (*(void (__fastcall **)(int, bool, _DWORD, int, int, unsigned int))(*(_DWORD *)(a1 + 24) + 16))(
            a1,
            v38 == 73,
            *((_DWORD *)v15 + 1),
            a2,
            a5,
            a6);
          return v20;
        case 10:
          if ( v16 != 5 )
            sub_2A6BBC("linker.c", 1610);
          (*(void (__fastcall **)(int, char *, int, int, unsigned int))(*(_DWORD *)(a1 + 24) + 8))(a1, v15, a2, 5, a6);
          if ( *((_DWORD *)v15 + 6) >= a6 )
            return 1;
          *((_DWORD *)v15 + 6) = a6;
          v40 = sub_2ABAF4(a6);
          v42 = (unsigned int *)*((_DWORD *)v15 + 5);
          if ( v40 >= 4 )
            v40 = 4;
          if ( (char **)a5 == &off_470800 )
            LOWORD(v41) = 23360;
          *v42 = v40;
          if ( (char **)a5 == &off_470800 )
          {
            HIWORD(v41) = 60;
            v43 = a2;
          }
          else
          {
            if ( *(_DWORD *)(a5 + 148) == a2 )
            {
              v42[1] = a5;
              return 1;
            }
            v41 = *(char **)a5;
            v43 = a2;
          }
          v44 = sub_2ADA2C(v43, v41);
          v45 = *((_DWORD *)v15 + 5);
          v20 = 1;
          v42[1] = (unsigned int)v44;
          *(_DWORD *)(*(_DWORD *)(v45 + 4) + 20) |= 1u;
          return v20;
        case 11:
          goto LABEL_42;
        case 12:
          if ( !strcmp(*(const char **)(*((_DWORD *)v15 + 5) + 4), s2) )
            return 1;
LABEL_42:
          (*(void (__fastcall **)(int, char *, int, int, unsigned int))(*(_DWORD *)(a1 + 24) + 4))(a1, v15, a2, a5, a6);
          return 1;
        case 13:
          goto LABEL_36;
        case 14:
          if ( v16 != 5 )
            sub_2A6BBC("linker.c", 1668);
          (*(void (__fastcall **)(int, char *, int, int, _DWORD))(*(_DWORD *)(a1 + 24) + 8))(a1, v15, a2, 6, 0);
LABEL_36:
          if ( v13[12] == 6 )
          {
            if ( *((char **)v13 + 5) == v15 )
            {
              sub_2A6A5C("%B: indirect symbol `%s' to `%s' is a loop", a2, a3, s2);
              ((void (__fastcall *)(int))loc_2A6C48)(5);
              return 0;
            }
          }
          else if ( !v13[12] )
          {
            *((_DWORD *)v13 + 5) = a2;
            v13[12] = 1;
            sub_2FCC64(*(_DWORD *)(a1 + 28), (int)v13);
          }
          if ( !v15[12] )
          {
            *((_DWORD *)v15 + 5) = v13;
            v15[12] = 6;
            return 1;
          }
          v16 = 6;
          v15[12] = 6;
          v17 = 0;
          *((_DWORD *)v15 + 5) = v13;
          break;
        case 15:
          v20 = 1;
          (*(void (__fastcall **)(int, char *, int, int, int, unsigned int))(*(_DWORD *)(a1 + 24) + 12))(
            a1,
            v15,
            556,
            a2,
            a5,
            a6);
          return v20;
        case 16:
          goto LABEL_47;
        case 17:
          if ( (*(_BYTE *)(a1 + 1) & 2) == 0 && (*((_DWORD *)v15 + 4) || *(char **)(*(_DWORD *)(a1 + 28) + 32) == v15)
            || (v15[13] & 3) != 0 )
          {
            for ( i = *((_DWORD *)v15 + 1); v16 == 7; v16 = (unsigned __int8)v15[12] )
              v15 = (char *)*((_DWORD *)v15 + 5);
            switch ( v16 )
            {
              case 1:
              case 2:
                v57 = *((_DWORD *)v15 + 5);
                break;
              case 3:
              case 4:
                v57 = *(_DWORD *)(*((_DWORD *)v15 + 5) + 148);
                break;
              case 5:
                v57 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v15 + 5) + 4) + 148);
                break;
              default:
                v57 = 0;
                break;
            }
            (*(void (__fastcall **)(int, char *, int, int, _DWORD, _DWORD))(*(_DWORD *)(a1 + 24) + 20))(
              a1,
              s2,
              i,
              v57,
              0,
              0);
            return 1;
          }
LABEL_47:
          v23 = (_DWORD *)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)(a1 + 28) + 4))(0);
          v24 = (int)v23;
          if ( !v23 )
            return 0;
          v25 = *((_DWORD *)v15 + 1);
          v26 = *((_DWORD *)v15 + 2);
          v27 = *((_DWORD *)v15 + 3);
          v28 = *(_DWORD **)(a1 + 28);
          *v23 = *(_DWORD *)v15;
          v23[1] = v25;
          v23[2] = v26;
          v23[3] = v27;
          v29 = *((_DWORD *)v15 + 5);
          v30 = *((_DWORD *)v15 + 6);
          v23[4] = *((_DWORD *)v15 + 4);
          v23[5] = v29;
          v23[6] = v30;
          v23[5] = v15;
          *((_BYTE *)v23 + 12) = 7;
          if ( a8 )
          {
            v31 = strlen(s2) + 1;
            v32 = (void *)sub_2AAEC8((int)v28, v31);
            v33 = v32;
            if ( !v32 )
              return 0;
            memcpy(v32, s2, v31);
            v28 = *(_DWORD **)(a1 + 28);
            *(_DWORD *)(v24 + 24) = v33;
          }
          else
          {
            v23[6] = s2;
          }
          sub_2AAE50(v28, v15, v24);
          if ( a10 )
            *a10 = (char *)v24;
          return 1;
        case 18:
          goto LABEL_32;
        case 19:
          if ( !*((_DWORD *)v15 + 4) && *(char **)(*(_DWORD *)(a1 + 28) + 32) != v15 )
            *((_DWORD *)v15 + 4) = v15;
          goto LABEL_32;
        case 20:
          v22 = *((_DWORD *)v15 + 6);
          if ( v22 && ((*(_DWORD *)(a2 + 40) >> 5) & 0x10000) == 0 )
          {
            (*(void (__fastcall **)(int, int, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)(a1 + 24) + 20))(
              a1,
              v22,
              *((_DWORD *)v15 + 1),
              a2,
              0,
              0);
            *((_DWORD *)v15 + 6) = 0;
          }
LABEL_32:
          v15 = (char *)*((_DWORD *)v15 + 5);
          v16 = (unsigned __int8)v15[12];
          continue;
        default:
          return 1;
      }
    }
  }
  return 0;
}
