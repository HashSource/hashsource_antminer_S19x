int __fastcall sub_301CE4(int a1, int a2, int a3, int a4, _DWORD *a5, unsigned int *a6)
{
  unsigned int v6; // lr
  unsigned int v7; // r8
  int *v8; // r7
  int v9; // r10
  unsigned int v10; // r4
  _DWORD *v11; // r0
  _DWORD *v12; // r11
  int v13; // r2
  int result; // r0
  int v15; // r0
  int v16; // r3
  bool v17; // zf
  int v18; // r4
  int v19; // r0
  _DWORD *v20; // r1
  _DWORD *v21; // r3
  _DWORD *v22; // r2
  int v23; // r0
  int v24; // t1
  _DWORD *v25; // r0
  int v26; // r0
  _DWORD *v27; // r10
  char *v28; // r7
  int v29; // r4
  int (__fastcall *v30)(char *); // r3
  unsigned int v31; // r0
  unsigned int v32; // r2
  int v33; // r0
  char *v34; // r8
  unsigned int v36; // r2
  int v37; // r1
  char *v38; // r11
  unsigned int v39; // r9
  size_t v40; // r5
  size_t v41; // r6
  char *v42; // r7
  int v43; // r8
  unsigned __int8 *v44; // r4
  unsigned int v45; // r0
  int v46; // r1
  unsigned __int8 *v47; // r4
  char *v48; // r0
  int v49; // r1
  unsigned __int8 *v50; // r3
  int v51; // r1
  char *v52; // r1
  int v53; // t1
  char *v54; // r2
  char *v55; // r0
  char *v56; // r4
  int **v57; // r11
  _DWORD *v58; // r2
  int v59; // r12
  int v60; // r7
  int v61; // r4
  int v62; // r3
  _DWORD *v63; // r12
  unsigned int v64; // r0
  _BOOL4 v65; // r2
  int v66; // r2
  _DWORD *v67; // r3
  int v68; // r12
  int v69; // r7
  int v70; // r0
  _DWORD *v71; // r7
  void *v72; // r0
  int v73; // r3
  char *v76; // [sp+8h] [bp-54h]
  unsigned int v77; // [sp+Ch] [bp-50h]
  int v78; // [sp+10h] [bp-4Ch]
  unsigned int v79; // [sp+14h] [bp-48h]
  unsigned int v80; // [sp+18h] [bp-44h]
  unsigned int v81; // [sp+1Ch] [bp-40h]
  int *v82; // [sp+20h] [bp-3Ch]
  const char *v83; // [sp+24h] [bp-38h]
  int v84; // [sp+28h] [bp-34h]
  char *v85; // [sp+30h] [bp-2Ch]
  char *s2; // [sp+34h] [bp-28h]
  int v87; // [sp+38h] [bp-24h]
  _DWORD *v88; // [sp+3Ch] [bp-20h]
  char *v89; // [sp+44h] [bp-18h]
  char *v90; // [sp+4Ch] [bp-10h]
  void *ptr; // [sp+50h] [bp-Ch] BYREF
  void *v92; // [sp+54h] [bp-8h] BYREF

  v6 = *(_DWORD *)(a3 + 36);
  ptr = 0;
  v92 = 0;
  if ( !v6 )
    return 1;
  if ( !*(_DWORD *)(a4 + 36) )
    return 1;
  v7 = v6 % 0xC;
  if ( v6 % 0xC
    || (*(_DWORD *)(a4 + 20) & 4) != 0
    || *(char ***)(a3 + 60) == &off_470950
    || *(char ***)(a4 + 60) == &off_470950 )
  {
    return 1;
  }
  v8 = (int *)a2;
  v9 = a1;
  if ( *(_DWORD *)(a2 + 32) )
  {
    v77 = v6 % 0xC;
  }
  else
  {
    v25 = sub_2AB058(a1, a2);
    *v8 = (int)v25;
    if ( !v25 )
      goto LABEL_12;
    sub_2AB0F0(v25, "", 1, 1);
    if ( !sub_2AAA0C((int)(v8 + 1), (int)sub_301C94, 16) )
      goto LABEL_12;
    v26 = sub_2ADB48(v9, ".stabstr", (const char *)&loc_102108);
    v8[8] = v26;
    if ( !v26 )
      goto LABEL_12;
    v6 = *(_DWORD *)(a3 + 36);
    v77 = 1;
  }
  v10 = v6 / 0xC;
  v81 = v6 / 0xC;
  v11 = (_DWORD *)sub_2ACBF4(v9, 4 * (v6 / 0xC) + 8);
  v12 = v11;
  *a5 = v11;
  if ( v11 )
  {
    v13 = *(_DWORD *)(a3 + 36);
    *v11 = 0;
    v84 = 4 * v10;
    *(_DWORD *)(a3 + 40) = v13;
    v11[1] = 0;
    memset(v11 + 2, 0, 4 * v10);
    if ( sub_2ADFDC(v9, a3, (int *)&ptr) )
    {
      if ( sub_2ADFDC(v9, a4, (int *)&v92) )
      {
        if ( a6 )
          v7 = *a6;
        v76 = (char *)ptr + *(_DWORD *)(a3 + 36);
        if ( ptr < v76 )
        {
          v78 = v9;
          v82 = v8;
          v27 = v12 + 2;
          v87 = 0;
          v28 = (char *)ptr;
          v79 = 0;
          v88 = v12;
          v80 = v7;
          while ( 1 )
          {
            if ( *v27++ )
            {
              v34 = v28 + 12;
              goto LABEL_48;
            }
            v29 = (unsigned __int8)v28[4];
            v30 = *(int (__fastcall **)(char *))(*(_DWORD *)(v78 + 4) + 40);
            if ( !v28[4] )
            {
              v31 = v30(v28 + 8) + v80;
              if ( a6 )
                *a6 = v31;
              if ( !v77 )
              {
                v36 = v80;
                v34 = v28 + 12;
                v80 = v31;
                *(v27 - 1) = -1;
                v79 = v36;
                ++v87;
                goto LABEL_48;
              }
              v32 = v80;
              v80 = v31;
              v79 = v32;
              v77 = 0;
              v30 = *(int (__fastcall **)(char *))(*(_DWORD *)(v78 + 4) + 40);
            }
            v33 = v30(v28);
            if ( *(_DWORD *)(a4 + 36) <= v33 + v79 )
            {
              sub_2A6A5C("%B(%A+%#lx): Stabs entry has invalid string index.", v78, a3, v28 - (_BYTE *)ptr);
              ((void (__fastcall *)(int))loc_2A6C48)(17);
              goto LABEL_12;
            }
            v34 = v28 + 12;
            v83 = (char *)v92 + v33 + v79;
            *(v27 - 1) = sub_2AB0F0((_DWORD *)*v82, v83, 1, 1);
            v85 = v28 + 12;
            if ( v29 != 130 )
              goto LABEL_48;
            if ( v76 <= v34 )
            {
              v41 = 0;
              s2 = 0;
              v40 = 0;
            }
            else
            {
              v37 = (unsigned __int8)v28[16];
              if ( v28[16] )
              {
                v38 = v28 + 12;
                v89 = v28;
                v39 = 0;
                v90 = v28 + 12;
                v40 = 0;
                v41 = 0;
                v42 = 0;
                v43 = 0;
                s2 = 0;
                do
                {
                  if ( v37 != 194 )
                  {
                    if ( v37 == 162 )
                    {
                      if ( !v43 )
                        break;
                      --v43;
                    }
                    else if ( v37 == 130 )
                    {
                      ++v43;
                    }
                    else if ( !v43 )
                    {
                      v44 = (unsigned __int8 *)v92;
                      v45 = (*(int (__fastcall **)(char *))(*(_DWORD *)(v78 + 4) + 40))(v38) + v79;
                      v46 = v44[v45];
                      v47 = &v44[v45];
                      if ( v46 )
                      {
                        v48 = s2;
                        do
                        {
                          if ( v40 >= v39 )
                          {
                            v39 += 0x8000;
                            v48 = (char *)sub_2AB4B4(v48, v39);
                            if ( !v48 )
                              goto LABEL_12;
                            v52 = &v48[v40];
                          }
                          else
                          {
                            v52 = v42;
                          }
                          v42 = v52 + 1;
                          ++v40;
                          *v52 = *v47;
                          v50 = v47 + 1;
                          v49 = *v47;
                          v17 = v49 == 40;
                          v41 += v49;
                          v51 = v47[1];
                          if ( v17 )
                          {
                            while ( (word_438898[v51] & 4) != 0 )
                            {
                              v53 = *++v50;
                              v51 = v53;
                            }
                          }
                          v47 = v50;
                        }
                        while ( v51 );
                        s2 = v48;
                      }
                    }
                  }
                  v38 += 12;
                  if ( v76 <= v38 )
                    break;
                  v37 = (unsigned __int8)v38[4];
                }
                while ( v38[4] );
                v54 = v42;
                v28 = v89;
                v34 = v90;
                if ( v54 - s2 != v40 )
                  sub_2A6BBC("stabs.c", 360);
              }
              else
              {
                v41 = (unsigned __int8)v28[16];
                s2 = (char *)v41;
                v40 = v41;
              }
            }
            v55 = sub_2AAC2C(v82 + 1, v83, 1, 1);
            v56 = v55;
            if ( !v55 )
              goto LABEL_12;
            v57 = (int **)*((_DWORD *)v55 + 3);
            if ( !v57 )
            {
LABEL_100:
              v67 = (_DWORD *)sub_2ACBF4(v78, 16);
              if ( !v67 )
                goto LABEL_12;
              v68 = *v88;
              v69 = v28 - (_BYTE *)ptr;
              v67[3] = 130;
              v67[1] = v69;
              v67[2] = v41;
              *v67 = v68;
              *v88 = v67;
              v70 = sub_2AAEC8((int)(v82 + 1), 16);
              v71 = (_DWORD *)v70;
              if ( !v70 )
                goto LABEL_12;
              *(_DWORD *)(v70 + 4) = v41;
              *(_DWORD *)(v70 + 8) = v40;
              v72 = sub_2AB4B4(s2, v40);
              v73 = *((_DWORD *)v56 + 3);
              v71[3] = v72;
              *v71 = v73;
              *((_DWORD *)v56 + 3) = v71;
LABEL_48:
              if ( v76 <= v34 )
                goto LABEL_16;
              goto LABEL_49;
            }
            while ( v57[1] != (int *)v41 || v57[2] != (int *)v40 || memcmp(v57[3], s2, v40) )
            {
              v57 = (int **)*v57;
              if ( !v57 )
                goto LABEL_100;
            }
            v58 = (_DWORD *)sub_2ACBF4(v78, 16);
            if ( !v58 )
              goto LABEL_12;
            v59 = *v88;
            v60 = v28 - (_BYTE *)ptr;
            v58[2] = v41;
            v58[1] = v60;
            *v58 = v59;
            *v88 = v58;
            v58[3] = 194;
            free(s2);
            if ( v76 <= v34 )
            {
LABEL_16:
              v12 = v88;
              v9 = v78;
              v8 = v82;
              goto LABEL_17;
            }
            v61 = v87;
            v62 = 0;
            v63 = v27;
            v64 = (unsigned int)v85;
            do
            {
              v66 = *(unsigned __int8 *)(v64 + 4);
              if ( v66 == 162 )
              {
                v17 = v62-- == 0;
                if ( v17 )
                {
                  v87 = v61 + 1;
                  *v63 = -1;
                  goto LABEL_49;
                }
              }
              else if ( v66 == 130 )
              {
                ++v62;
              }
              else
              {
                v65 = v66 != 194;
                if ( v62 )
                  v65 = 0;
                if ( v65 )
                {
                  ++v61;
                  *v63 = -1;
                }
              }
              v64 += 12;
              ++v63;
            }
            while ( (unsigned int)v76 > v64 );
            v87 = v61;
LABEL_49:
            v28 = v34;
          }
        }
        v87 = 0;
LABEL_17:
        free(ptr);
        ptr = 0;
        free(v92);
        v92 = 0;
        v15 = *v8;
        v16 = 12 * (v81 - v87);
        v17 = v16 == 0;
        *(_DWORD *)(a3 + 36) = v16;
        if ( !v16 )
          v16 = *(_DWORD *)(a3 + 20);
        v18 = v8[8];
        if ( v17 )
          *(_DWORD *)(a3 + 20) = v16 | 0x208000;
        *(_DWORD *)(a4 + 20) |= 0x208000u;
        *(_DWORD *)(v18 + 36) = sub_2AB1E0(v15);
        if ( v87 )
        {
          v19 = sub_2ACBF4(v9, v84);
          v12[1] = v19;
          if ( !v19 )
            goto LABEL_12;
          if ( !v81 )
            goto LABEL_29;
          v20 = (_DWORD *)v19;
          v21 = v12 + 1;
          v22 = (_DWORD *)(v19 + v84);
          v23 = 0;
          do
          {
            *v20++ = v23;
            v24 = v21[1];
            ++v21;
            if ( v24 == -1 )
              v23 += 12;
          }
          while ( v22 != v20 );
          if ( !v23 )
LABEL_29:
            sub_2A6BBC("stabs.c", 491);
        }
        return 1;
      }
    }
  }
LABEL_12:
  if ( ptr )
    free(ptr);
  result = (int)v92;
  if ( v92 )
  {
    free(v92);
    return 0;
  }
  return result;
}
