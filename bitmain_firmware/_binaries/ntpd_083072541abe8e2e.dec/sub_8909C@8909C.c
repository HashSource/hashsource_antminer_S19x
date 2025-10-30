unsigned int __fastcall sub_8909C(unsigned int a1, int a2, char **a3)
{
  int v6; // r3
  int v7; // r2
  int v8; // r2
  unsigned int v9; // r3
  int v10; // r7
  int v11; // r2
  void (*v12)(void); // r2
  int v13; // r3
  int v14; // r8
  unsigned int result; // r0
  int v16; // r2
  bool v17; // zf
  unsigned __int16 *v18; // lr
  int v19; // r12
  unsigned __int16 *i; // r1
  int v21; // r3
  int v22; // r0
  int v23; // r3
  int v24; // r3
  unsigned __int16 *v25; // r2
  int v26; // r2
  int v27; // t1
  int v28; // r3
  int v29; // r3
  int v30; // r2
  int v31; // t1
  unsigned __int16 *v32; // r2
  int v33; // r8
  _DWORD *v34; // r10
  unsigned int v35; // r2
  int v36; // r9
  unsigned int v37; // r8
  unsigned int v38; // r3
  int v39; // r0
  _BYTE *v40; // r7
  _DWORD *v41; // r12
  unsigned int v42; // r1
  int v43; // r0
  int v44; // r1
  int v45; // r12
  int v46; // r2
  int v47; // lr
  int v48; // r0
  int v49; // r5
  unsigned int v50; // r9
  int v51; // r3
  int v52; // r2
  _BYTE *v53; // r0
  int v54; // r12
  unsigned int v55; // r1
  _BYTE *v56; // r7
  unsigned int v57; // t1
  int v58; // r3
  _BYTE *v59; // r1
  int v60; // r12
  _DWORD *v61; // r1
  _DWORD *v62; // r0
  _DWORD *v63; // r1
  int v64; // t1
  unsigned int v65; // [sp+Ch] [bp-38h]
  _DWORD *src; // [sp+10h] [bp-34h]
  int v67; // [sp+14h] [bp-30h]
  int v68; // [sp+2Ch] [bp-18h] BYREF
  int v69; // [sp+30h] [bp-14h]
  int v70; // [sp+34h] [bp-10h]
  int v71; // [sp+38h] [bp-Ch] BYREF

  if ( sub_87480((int *)a1, *a3) )
    sub_7CEC0((int)off_B848C[0]);
  v6 = *(_DWORD *)(a1 + 12);
  if ( (v6 & 0x40) == 0 )
  {
    v7 = *(_DWORD *)a1;
    *(_DWORD *)(a1 + 12) = v6 | 0x40;
    *(_DWORD *)(a1 + 4) = a2;
    *(_DWORD *)(a1 + 8) = a3;
    if ( v7 >= 139264 )
      off_B8604 = *(char **)(a1 + 124);
    if ( sub_86AD8(a1) )
      return 0;
    v8 = *(unsigned __int16 *)(a1 + 94);
    v9 = *(_DWORD *)(a1 + 12);
    if ( (v8 & 0x7FFF) != 0 )
    {
      v10 = *(_DWORD *)(a1 + 68) + ((v8 + 1) << 6);
      if ( (*(_DWORD *)(v10 + 16) & 0x20) != 0 )
        goto LABEL_12;
      v11 = *(_DWORD *)(a1 + 52);
      *(_DWORD *)(a1 + 12) = v9 | 0x80000;
      if ( v11 )
      {
        sub_88E84(a1, 1);
        if ( (*(_DWORD *)(v10 + 16) & 0x20) == 0 )
          sub_884D4(a1);
        goto LABEL_11;
      }
    }
    else
    {
      v16 = *(_DWORD *)(a1 + 52);
      *(_DWORD *)(a1 + 12) = v9 | 0x80000;
      if ( v16 )
      {
        sub_88E84(a1, 1);
LABEL_11:
        sub_88E84(a1, 2);
        v9 = *(_DWORD *)(a1 + 12) & 0xFFF7FFFF;
        *(_DWORD *)(a1 + 12) = v9;
LABEL_12:
        if ( (v9 & 0x2000) == 0 )
          goto LABEL_16;
        goto LABEL_13;
      }
    }
    sub_88E84(a1, 0);
    v9 = *(_DWORD *)(a1 + 12) & 0xFFF7FFFF;
    v17 = (*(_DWORD *)(a1 + 12) & 0x2000) == 0;
    *(_DWORD *)(a1 + 12) = v9;
    if ( v17 )
      goto LABEL_16;
LABEL_13:
    v12 = *(void (**)(void))(a1 + 88);
    if ( v12 && (v9 & 0x30000) == 0x10000 )
    {
      *(_DWORD *)(a1 + 12) = v9 & 0xFFFEFFFF;
      v12();
      v9 = *(_DWORD *)(a1 + 12);
    }
LABEL_16:
    if ( (v9 & 0x800) != 0 )
    {
      v68 = 0;
      v69 = 0;
      v70 = 4;
      v71 = 0;
      if ( !getenv("POSIXLY_CORRECT") && (*(_DWORD *)(a1 + 12) & 3) != 0 )
      {
        v65 = *(_DWORD *)(a1 + 4);
        v33 = 4 * v65;
        src = malloc(4 * v65);
        if ( !src || (v34 = malloc(v33), v35 = v65, !v34) )
          sub_C610(v33);
        v36 = 0;
        v37 = 0;
        v38 = 1;
        *(_DWORD *)(a1 + 20) = 0;
        *(_DWORD *)(a1 + 16) = 1;
LABEL_54:
        while ( 2 )
        {
          while ( 2 )
          {
            if ( v35 <= v38 )
            {
LABEL_64:
              *_errno_location() = 0;
              goto LABEL_65;
            }
            while ( 1 )
            {
              v39 = *(_DWORD *)(a1 + 8);
              v40 = *(_BYTE **)(v39 + 4 * v38);
              v41 = (_DWORD *)(v39 + 4 * v38);
              if ( *v40 != 45 || (v42 = (unsigned __int8)v40[1], !v40[1]) )
              {
                ++v38;
                v34[v37] = v40;
                *(_DWORD *)(a1 + 16) = v38;
                ++v37;
                goto LABEL_54;
              }
              if ( v42 == 45 )
              {
                if ( !v40[2] )
                {
                  v61 = src;
                  src[v36] = v40;
                  if ( v38 + 1 < v35 )
                    v61 = (_DWORD *)(v39 + 4 * v35);
                  ++v36;
                  *(_DWORD *)(a1 + 16) = v38 + 1;
                  if ( v38 + 1 < v35 )
                  {
                    v62 = &v34[v37];
                    v63 = v61 - 1;
                    do
                    {
                      v64 = v41[1];
                      ++v41;
                      *v62++ = v64;
                    }
                    while ( v63 != v41 );
                    v37 = v37 + v35 - 1 - v38;
                    *(_DWORD *)(a1 + 16) = v35;
                  }
                  goto LABEL_65;
                }
                v43 = sub_85A98(a1, v40 + 2, &v68);
              }
              else
              {
                v43 = (*(_DWORD *)(a1 + 12) & 2) != 0 ? sub_7DFF0(a1, v42, &v68, &v71) : sub_85A98(a1, v40 + 1, &v68);
              }
              if ( v43 < 0 )
                goto LABEL_106;
              v44 = *(_DWORD *)(a1 + 16);
              v45 = *(_DWORD *)(a1 + 8);
              v67 = v36;
              v46 = *(_DWORD *)(v68 + 16);
              v47 = 4 * v44;
              v48 = v71;
              v49 = *(_DWORD *)(v45 + 4 * v44);
              v38 = v44 + 1;
              *(_DWORD *)(a1 + 16) = v44 + 1;
              src[v36] = v49;
              if ( (v46 & 0xF000) != 0 )
                break;
              if ( v48 == 1 )
              {
                v55 = (unsigned __int8)v40[2];
                v56 = v40 + 2;
                if ( v55 )
                {
                  while ( sub_7DFF0(a1, v55, &v68, &v71) >= 0 )
                  {
                    v57 = (unsigned __int8)*++v56;
                    v55 = v57;
                    v58 = *(_DWORD *)(v68 + 16);
                    if ( (v58 & 0xF000) != 0 )
                    {
                      v17 = (v58 & 0x10000) == 0;
                      v38 = *(_DWORD *)(a1 + 16);
                      v35 = *(_DWORD *)(a1 + 4);
                      if ( !v17 )
                      {
                        if ( !v55 )
                        {
                          v59 = *(_BYTE **)(*(_DWORD *)(a1 + 8) + 4 * v38);
                          if ( *v59 != 45 )
                          {
                            ++v38;
                            v36 += 2;
                            *(_DWORD *)(a1 + 16) = v38;
                            src[v67 + 1] = v59;
                            goto LABEL_54;
                          }
                        }
                        goto LABEL_91;
                      }
                      if ( v55 )
                        goto LABEL_91;
                      if ( v35 > v38 )
                      {
                        v36 += 2;
                        v60 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * v38);
                        *(_DWORD *)(a1 + 16) = ++v38;
                        src[v67 + 1] = v60;
                        goto LABEL_54;
                      }
                      break;
                    }
                    if ( !v55 )
                    {
                      ++v36;
                      v38 = *(_DWORD *)(a1 + 16);
                      v35 = *(_DWORD *)(a1 + 4);
                      goto LABEL_54;
                    }
                  }
LABEL_106:
                  *_errno_location() = 22;
                  goto LABEL_69;
                }
              }
              v35 = *(_DWORD *)(a1 + 4);
              ++v36;
              if ( v35 <= v38 )
                goto LABEL_64;
            }
            if ( (v46 & 0x10000) != 0 )
            {
              if ( v48 == 1 )
              {
                v35 = *(_DWORD *)(a1 + 4);
                if ( v40[2] )
                  goto LABEL_91;
                goto LABEL_108;
              }
              if ( v48 == 2 )
              {
                v35 = *(_DWORD *)(a1 + 4);
                if ( v69 )
                {
LABEL_91:
                  ++v36;
                  continue;
                }
LABEL_108:
                if ( v35 > v38 )
                {
                  v53 = *(_BYTE **)(v45 + v47 + 4);
                  if ( *v53 == 45 )
                    goto LABEL_91;
                  v38 = v44 + 2;
                  goto LABEL_99;
                }
                ++v36;
                *_errno_location() = 0;
LABEL_65:
                if ( v36 )
                  memcpy((void *)(*(_DWORD *)(a1 + 8) + 4), src, 4 * v36);
                if ( v37 )
                  memcpy((void *)(*(_DWORD *)(a1 + 8) + 4 * (v36 + 1)), v34, 4 * v37);
LABEL_69:
                free(src);
                free(v34);
                goto LABEL_17;
              }
LABEL_100:
              *_errno_location() = 5;
              goto LABEL_69;
            }
            break;
          }
          if ( v48 == 1 )
          {
            v35 = *(_DWORD *)(a1 + 4);
            if ( v40[2] )
              goto LABEL_91;
          }
          else
          {
            if ( v48 != 2 )
              goto LABEL_100;
            v35 = *(_DWORD *)(a1 + 4);
            if ( v69 )
              goto LABEL_91;
          }
          if ( v35 > v38 )
          {
            v38 = v44 + 2;
            v53 = *(_BYTE **)(v45 + v47 + 4);
LABEL_99:
            v54 = v36;
            *(_DWORD *)(a1 + 16) = v38;
            v36 += 2;
            src[v54 + 1] = v53;
            continue;
          }
          goto LABEL_100;
        }
      }
    }
LABEL_17:
    *(_QWORD *)(a1 + 16) = 1;
    goto LABEL_18;
  }
  if ( !*(_DWORD *)(a1 + 16) )
    goto LABEL_17;
LABEL_18:
  if ( sub_869AC(a1) )
    return *(_DWORD *)(a1 + 4);
  v13 = *(unsigned __int16 *)(a1 + 94);
  if ( *(_WORD *)(a1 + 94) && v13 != 0x8000 && (*(_DWORD *)(*(_DWORD *)(a1 + 68) + (v13 << 6) + 16) & 5) != 0 )
  {
    sub_85318((int *)a1);
    sub_7CE5C(0);
  }
  v14 = *(_DWORD *)(a1 + 12);
  if ( (v14 & 4) == 0 )
    return *(_DWORD *)(a1 + 16);
  v18 = *(unsigned __int16 **)(a1 + 68);
  v19 = *(_DWORD *)(a1 + 104);
  for ( i = v18; ; i += 32 )
  {
    v22 = *((_DWORD *)i + 4);
    if ( (v22 & 5) != 0 )
    {
      v23 = *((_DWORD *)i + 8);
      if ( v23 )
      {
        v24 = v23 - 4;
        while ( 1 )
        {
          v27 = *(_DWORD *)(v24 + 4);
          v24 += 4;
          v26 = v27;
          if ( v27 == 0x8000 )
            break;
          v25 = &v18[32 * v26];
          if ( (*((_DWORD *)v25 + 4) & 0xF) == 0 )
          {
            fprintf(stderr, off_B853C[0], *(_DWORD *)(a1 + 28), *((_DWORD *)i + 13), *((_DWORD *)v25 + 13));
            goto LABEL_48;
          }
        }
      }
      v28 = *((_DWORD *)i + 9);
      if ( v28 )
      {
        v29 = v28 - 4;
        while ( 1 )
        {
          v31 = *(_DWORD *)(v29 + 4);
          v29 += 4;
          v30 = v31;
          if ( v31 == 0x8000 )
            break;
          v32 = &v18[32 * v30];
          if ( (*((_DWORD *)v32 + 4) & 5) != 0 )
          {
            fprintf(stderr, off_B84BC[0], *(_DWORD *)(a1 + 28), *((_DWORD *)i + 13), *((_DWORD *)v32 + 13));
            goto LABEL_48;
          }
        }
      }
    }
    v21 = i[4];
    if ( v21 == 0x8000 || *i == v21 )
    {
      v50 = i[5];
      if ( i[7] < v50 && ((v22 & 0x100000) == 0 || (v22 & 3) == 0) )
      {
        v51 = *((_DWORD *)i + 13);
        v52 = *(_DWORD *)(a1 + 28);
        if ( v50 <= 1 )
          fprintf(stderr, off_B84E8[0], v52, v51);
        else
          fprintf(stderr, off_B8518[0], v52, v51, v50);
        goto LABEL_48;
      }
    }
    if ( --v19 <= 0 )
      break;
  }
  result = *(_DWORD *)(a1 + 16);
  if ( (v14 & 0x200) != 0 )
  {
    if ( result < *(_DWORD *)(a1 + 4) )
    {
      fprintf(stderr, off_B84F0[0], *(_DWORD *)(a1 + 28));
      goto LABEL_48;
    }
  }
  else if ( (v14 & 0x400) != 0 && result >= *(_DWORD *)(a1 + 4) )
  {
    fprintf(stderr, off_B84A8[0], *(_DWORD *)(a1 + 28));
LABEL_48:
    (*(void (__fastcall **)(unsigned int, int))(a1 + 84))(a1, 1);
    return *(_DWORD *)(a1 + 16);
  }
  return result;
}
