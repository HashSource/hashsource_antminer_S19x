int __fastcall sub_2FFDAC(int a1, int a2, _DWORD *a3, void (__fastcall *a4)(int, _DWORD))
{
  _DWORD *v4; // r11
  int *v5; // r3
  int v6; // r10
  _DWORD *v7; // r9
  int v8; // r3
  int v9; // r6
  unsigned __int8 *v10; // r4
  unsigned int v11; // r5
  int **i; // r3
  int v14; // r8
  unsigned int v15; // r7
  unsigned int v16; // r2
  _BOOL4 v17; // r12
  _DWORD *v18; // r0
  int v19; // r12
  unsigned __int8 *v20; // r3
  unsigned __int8 *v22; // r3
  bool v23; // cc
  unsigned __int8 *v24; // r1
  unsigned __int8 *v25; // r6
  _DWORD *v26; // r3
  int v27; // r2
  _DWORD *v28; // r1
  _DWORD *v29; // r2
  _DWORD *v30; // r0
  int v31; // r4
  int v32; // lr
  int v33; // r3
  int v34; // r12
  char *v35; // r0
  char *v36; // r6
  _DWORD *v37; // r0
  _DWORD *v38; // r3
  char *v39; // r4
  unsigned int v40; // r2
  unsigned int v41; // r1
  char *v42; // r12
  int v43; // lr
  int v44; // r5
  size_t v45; // r1
  int (*v46)(const void *, const void *); // r3
  _DWORD *v47; // r5
  char *v48; // r4
  int v49; // r8
  _DWORD *v50; // r7
  _DWORD *v51; // t1
  unsigned int v52; // r1
  unsigned int v53; // r2
  size_t v54; // r3
  size_t v55; // r1
  int v56; // r12
  int v57; // r3
  _DWORD *v58; // r2
  int v59; // r4
  int v60; // r1
  int v61; // lr
  int v62; // r0
  int v63; // r1
  bool v64; // zf
  int v65; // r1
  int v66; // r3
  int v67; // r3
  int v68; // r1
  bool v69; // zf
  int v70; // r2
  _DWORD *v71; // r3
  _DWORD *v72; // r12
  int v73; // r0
  _DWORD *v74; // r1
  int v75; // r2
  int v76; // r4
  int v77; // lr
  unsigned int v78; // [sp+0h] [bp-14h]

  v4 = a3;
  if ( !a3 )
    return 1;
  while ( 1 )
  {
    v5 = (int *)v4[1];
    if ( v5 )
      break;
LABEL_63:
    v4 = (_DWORD *)*v4;
    if ( !v4 )
      return 1;
  }
  v6 = *v5;
  v64 = *v5 == 0;
  v4[1] = *v5;
  *v5 = 0;
  if ( v64 )
  {
LABEL_65:
    v29 = (_DWORD *)v4[2];
    v30 = (_DWORD *)v29[8];
    if ( v30 )
    {
      if ( v29[11] )
      {
        v35 = (char *)sub_2AB368(4 * v29[7]);
        v36 = v35;
        if ( !v35 )
          return 0;
        v37 = (_DWORD *)v4[2];
        v38 = (_DWORD *)v37[8];
        if ( v38 )
        {
          v39 = v36;
          v40 = 0;
          do
          {
            v41 = v38[4];
            v42 = v39 + 4;
            if ( v41 )
            {
              v43 = v38[3];
              v44 = v37[10];
              *(_DWORD *)v39 = v38;
              if ( v41 == v40 )
                v39 += 4;
              v38[3] = v43 - v44;
              if ( v41 != v40 )
              {
                v64 = v40 == 0;
                v39 = v42;
                v40 = v41;
                if ( !v64 )
                  v40 = -1;
              }
            }
            v38 = (_DWORD *)v38[7];
          }
          while ( v38 );
          v45 = (v39 - v36) >> 2;
          v37[7] = v45;
          if ( v45 )
          {
            if ( v40 == -1 )
            {
              v46 = (int (*)(const void *, const void *))sub_2FF798;
            }
            else
            {
              v46 = (int (*)(const void *, const void *))sub_2FF798;
              if ( v37[10] < v40 )
                v46 = (int (*)(const void *, const void *))sub_2FF81C;
            }
            qsort(v36, v45, 4u, v46);
            v47 = (_DWORD *)*((_DWORD *)v39 - 1);
            v48 = v39 - 8;
            v49 = *(_DWORD *)(v4[2] + 40);
            v47[3] += v49;
            while ( v36 <= v48 )
            {
              v51 = *(_DWORD **)v48;
              v48 -= 4;
              v50 = v51;
              v52 = v47[4];
              v53 = v51[4];
              v54 = v49 + v51[3];
              v51[3] = v54;
              if ( v52 >= v53 )
              {
                v55 = v47[3];
                if ( ((v53 - 1) & (v55 - v54)) == 0
                  && v54 < v55
                  && !memcmp((const void *)(v47[1] + v55 - v54), (const void *)v50[1], v54) )
                {
                  v50[5] = v47;
                  v50[4] = 0;
                  v50 = v47;
                }
              }
              v47 = v50;
            }
          }
        }
        else
        {
          v37[7] = 0;
        }
        free(v36);
        v56 = v4[2];
        v57 = 0;
        v58 = *(_DWORD **)(v56 + 32);
        v59 = v58[6];
        while ( 1 )
        {
          v60 = v58[4];
          v61 = v60 - 1;
          v62 = -v60;
          if ( v60 )
          {
            v63 = *(_DWORD *)(v59 + 16);
            v64 = v63 == 0;
            if ( !v63 )
              v57 = 0;
            v65 = v58[3];
            v66 = v61 + v57;
            if ( v64 )
              *(_DWORD *)(v59 + 16) = v58;
            v67 = v66 & v62;
            v58[5] = v67;
            v57 = v67 + v65;
          }
          v58 = (_DWORD *)v58[7];
          if ( !v58 )
            break;
          v68 = v58[6];
          v69 = v68 == v59;
          if ( v68 != v59 )
            v62 = *(_DWORD *)(v59 + 4);
          v59 = v58[6];
          if ( !v69 )
            *(_DWORD *)(v62 + 36) = v57;
        }
        v28 = *(_DWORD **)(v59 + 4);
        v70 = v28[16];
        v28[9] = v57;
        if ( v70 )
          v28[9] = (v57 - 1 + (1 << v70)) & -(1 << v70);
        v71 = *(_DWORD **)(v56 + 32);
        v72 = (_DWORD *)(v56 + 32);
        while ( v71 )
        {
          while ( 1 )
          {
            v28 = (_DWORD *)v71[4];
            if ( v28 )
              break;
            v73 = v71[3];
            *v72 = v71[7];
            if ( v73 )
            {
              v74 = (_DWORD *)v71[5];
              v75 = v74[5];
              v76 = v74[3];
              v77 = v74[6];
              v28 = (_DWORD *)v74[4];
              v71[6] = v77;
              v71[5] = v75 + v76 - v73;
              v71[4] = v28;
            }
            v71 = (_DWORD *)v71[7];
            if ( !v71 )
              goto LABEL_57;
          }
          v72 = v71 + 7;
          v71 = (_DWORD *)v71[7];
        }
      }
      else
      {
        v31 = 0;
        v28 = 0;
        do
        {
          v34 = v30[6];
          if ( !*(_DWORD *)(v34 + 16) )
          {
            if ( v31 )
              *(_DWORD *)(*(_DWORD *)(v31 + 4) + 36) = v28;
            v28 = 0;
            *(_DWORD *)(v34 + 16) = v30;
          }
          v31 = v34;
          v32 = v30[3];
          v33 = ((unsigned int)v28 + v30[4] - 1) & -v30[4];
          v30[5] = v33;
          v28 = (_DWORD *)(v33 + v32);
          v30 = (_DWORD *)v30[7];
        }
        while ( v30 );
        *(_DWORD *)(*(_DWORD *)(v34 + 4) + 36) = v28;
      }
LABEL_57:
      v26 = (_DWORD *)v4[1];
      while ( v26 )
      {
        v27 = v26[4];
        if ( !v27 )
          v28 = (_DWORD *)v26[1];
        v26 = (_DWORD *)*v26;
        if ( !v27 )
          v28[5] |= 0x208000u;
      }
    }
    goto LABEL_63;
  }
  while ( 1 )
  {
    v7 = *(_DWORD **)(v6 + 4);
    v8 = v7[5];
    v9 = v8 & 0x8000;
    if ( (v8 & 0x8000) != 0 )
    {
      **(_DWORD **)(v6 + 8) = 0;
      if ( a4 )
        a4(a1, *(_DWORD *)(v6 + 4));
      goto LABEL_8;
    }
    v10 = (unsigned __int8 *)(v6 + 20);
    v11 = v6 + 20 + v7[9];
    if ( (v8 & 0x1000000) != 0 )
      break;
    if ( (unsigned int)v10 < v11 )
    {
      while ( sub_2FFB00((_DWORD *)v4[2], v10, 1u, v6) )
      {
        v10 += v7[30];
        if ( v11 <= (unsigned int)v10 )
          goto LABEL_8;
      }
      goto LABEL_15;
    }
LABEL_8:
    v6 = *(_DWORD *)v6;
    if ( !v6 )
      goto LABEL_65;
  }
  if ( (unsigned int)v10 >= v11 )
    goto LABEL_8;
  v14 = v6 + 20;
  v15 = (1 << v7[16]) - 1;
  v78 = 1 << v7[16];
  while ( 1 )
  {
LABEL_20:
    v16 = (((unsigned int)&v10[-v14 - 1] ^ (unsigned int)&v10[-v14]) + 1) >> 1;
    v17 = v16 == 0;
    if ( v15 < v16 )
      v17 = 1;
    if ( v17 )
      v16 = v78;
    v18 = sub_2FFB00((_DWORD *)v4[2], v10, v16, v6);
    if ( !v18 )
      break;
    v19 = v7[30];
    v10 += v18[3];
    if ( v19 != 1 )
    {
      while ( v11 > (unsigned int)v10 )
      {
        if ( v19 )
        {
          if ( *v10 )
            goto LABEL_46;
          v20 = v10 + 1;
          while ( &v10[v19] != v20 )
          {
            if ( *v20++ )
              goto LABEL_46;
          }
          if ( v20 - v10 != v19 )
          {
LABEL_46:
            if ( v11 > (unsigned int)v10 )
              goto LABEL_20;
            goto LABEL_8;
          }
        }
        if ( !v9 && ((unsigned int)&v10[-v14] & v15) == 0 )
        {
          if ( !sub_2FFB00((_DWORD *)v4[2], v10, v78, v6) )
            goto LABEL_15;
          v19 = v7[30];
          v9 = 1;
        }
        v10 += v19;
      }
      goto LABEL_8;
    }
    if ( v11 <= (unsigned int)v10 )
      goto LABEL_8;
    if ( !*v10 )
    {
      if ( v9 )
        goto LABEL_41;
      v24 = v10;
      while ( ((unsigned int)&v10[-v14] & v15) != 0 )
      {
        v64 = v11 - 1 == (_DWORD)v24;
        v24 = ++v10;
        if ( v64 )
          goto LABEL_8;
        if ( *v10 )
          goto LABEL_20;
      }
      v25 = v24;
      if ( !sub_2FFB00((_DWORD *)v4[2], (unsigned __int8 *)"", v78, v6) )
        break;
      if ( v11 <= (unsigned int)++v10 )
        goto LABEL_8;
      if ( !v25[1] )
      {
LABEL_41:
        v22 = v10 + 1;
        while ( 1 )
        {
          v23 = v11 > (unsigned int)v22;
          v10 = v22++;
          if ( !v23 )
            goto LABEL_8;
          if ( *v10 )
          {
            v9 = 1;
            goto LABEL_20;
          }
        }
      }
      v9 = 1;
    }
  }
LABEL_15:
  for ( i = (int **)v4[1]; i; i = (int **)*i )
    *i[2] = 0;
  return 0;
}
