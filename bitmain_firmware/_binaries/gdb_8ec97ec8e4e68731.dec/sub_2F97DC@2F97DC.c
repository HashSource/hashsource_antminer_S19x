int __fastcall sub_2F97DC(
        _DWORD *a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7)
{
  size_t v7; // r11
  int v8; // r7
  size_t v13; // r8
  int *v14; // r6
  int v15; // r1
  int v16; // r12
  int v17; // r0
  _DWORD *v18; // r5
  int v19; // r3
  unsigned int v20; // lr
  _DWORD *v21; // r2
  int v22; // r0
  _DWORD *v23; // r9
  unsigned int v24; // r10
  unsigned int v25; // r1
  unsigned int v26; // r0
  unsigned int v27; // r3
  _DWORD *v28; // r2
  unsigned int v29; // r2
  _DWORD *v30; // lr
  int v31; // r9
  unsigned int v32; // r11
  unsigned int v33; // r3
  unsigned int v34; // r12
  _DWORD *v35; // r0
  unsigned int v37; // r1
  unsigned int v38; // r2
  bool v39; // cf
  unsigned int v40; // r2
  int v41; // r2
  int v42; // r8
  int v43; // r1
  int v44; // r5
  int v45; // r3
  int v46; // r12
  unsigned int v47; // lr
  _DWORD *v48; // lr
  _DWORD *v49; // r10
  _DWORD *v50; // r3
  unsigned int v51; // r1
  unsigned int v52; // r2
  unsigned int v53; // r12
  unsigned int v54; // r0
  unsigned int v55; // r0
  _DWORD *v56; // r3
  unsigned int v57; // r1
  int v58; // r0
  int v59; // r6
  _DWORD *v60; // r3
  int v61; // r1
  int v62; // r0
  int v63; // r3
  int v64; // r1
  signed int v66; // [sp+8h] [bp-Ch]
  _DWORD *v67; // [sp+8h] [bp-Ch]
  _DWORD *v68; // [sp+Ch] [bp-8h]

  v8 = a1[9];
  if ( v8 )
    return 0;
  if ( !a1[16] )
  {
    if ( !a1[11] || (v22 = sub_2F783C((int)a1, a7), (a1[16] = v22) == 0) || a1[14] < a1[15] && !sub_2F8C04((int)a1) )
    {
      a1[9] = 1;
      return 0;
    }
  }
  v13 = a1[19];
  *a4 = 0;
  if ( v13 )
  {
    v23 = (_DWORD *)a1[18];
    v66 = 3 * v13;
    if ( v23 )
    {
      v68 = &v23[3 * v13];
    }
    else
    {
      v23 = sub_2AB368(v66 * 4);
      if ( !v23 )
        goto LABEL_5;
      v48 = (_DWORD *)a1[17];
      if ( v48 )
        v7 = v13;
      v68 = &v23[v66];
      if ( !v48 )
        goto LABEL_100;
      v49 = &v23[v66];
      do
      {
        v50 = (_DWORD *)v48[9];
        --v7;
        *(v49 - 3) = v48;
        v51 = v48[10];
        v52 = v48[11];
        while ( v50 )
        {
          v53 = v50[1];
          v54 = v50[2];
          v50 = (_DWORD *)*v50;
          if ( v51 >= v53 )
            v51 = v53;
          if ( v52 < v54 )
            v52 = v54;
        }
        v48 = (_DWORD *)*v48;
        *(v49 - 2) = v51;
        *(v49 - 1) = v52;
        v49 -= 3;
      }
      while ( v48 );
      if ( v7 )
LABEL_100:
        sub_2A6BBC("./dwarf2.c", 2598);
      qsort(v23, v13, 0xCu, (__compar_fn_t)sub_2F61F4);
      v55 = v23[2];
      if ( v13 > 1 )
      {
        v56 = v23;
        do
        {
          v57 = v56[5];
          v56 += 3;
          if ( v57 > v55 )
            v55 = v57;
          else
            v56[2] = v55;
        }
        while ( &v23[v66 - 3] != v56 );
      }
      a1[18] = v23;
    }
    if ( a2 <= *(v68 - 1) )
    {
      v24 = v13;
      v25 = v13;
      v26 = 0;
      do
      {
        v27 = (v25 + v26) >> 1;
        v28 = &v23[3 * v27];
        if ( a2 >= v28[1] )
        {
          v29 = v28[2];
          if ( a2 >= v29 )
            v26 = v27 + 1;
          else
            v24 = (v25 + v26) >> 1;
          if ( a2 < v29 )
            v25 = v24;
        }
        else
        {
          v25 = (v25 + v26) >> 1;
        }
      }
      while ( v25 > v26 );
      if ( v13 > v24 )
      {
        v30 = &v23[3 * v24];
        if ( a2 >= v30[1] )
        {
          v31 = 0;
          v32 = 0;
          v33 = 0;
          while ( 1 )
          {
            v34 = v30[v31];
            v35 = (_DWORD *)(v34 + 36);
            if ( v34 != -36 )
              break;
LABEL_47:
            if ( v13 != ++v24 )
            {
              v31 += 3;
              if ( a2 >= v30[v31 + 1] )
                continue;
            }
            if ( v33 )
            {
              v41 = *(_DWORD *)(v33 + 24);
              *a4 = v33;
              if ( v41 == 29 )
                a7[26] = v33;
            }
            goto LABEL_5;
          }
          while ( 1 )
          {
            while ( 1 )
            {
              v37 = v35[1];
              if ( a2 >= v37 )
              {
                v38 = v35[2];
                v39 = a2 >= v38;
                v40 = v38 - v37;
                if ( !v39 )
                  break;
              }
LABEL_41:
              v35 = (_DWORD *)*v35;
              if ( !v35 )
                goto LABEL_47;
            }
            if ( v33 && v40 >= v32 )
            {
              if ( v34 > v33 && v40 == v32 )
                v33 = v30[v31];
              goto LABEL_41;
            }
            v35 = (_DWORD *)*v35;
            v32 = v40;
            v33 = v30[v31];
            if ( !v35 )
              goto LABEL_47;
          }
        }
      }
    }
  }
LABEL_5:
  v14 = (int *)a1[16];
  v15 = v14[3];
  if ( v15 <= 0 )
  {
LABEL_12:
    *a3 = 0;
    return 0;
  }
  else
  {
    v16 = v14[7];
    v17 = 0;
    do
    {
      while ( 1 )
      {
        v19 = (v17 + v15) / 2;
        v20 = *(_DWORD *)(v16 + 20 * v19);
        v21 = (_DWORD *)(v16 + 20 * v19);
        if ( a2 >= v20 )
          break;
        v15 = (v17 + v15) / 2;
        if ( v17 >= v19 )
          goto LABEL_11;
      }
      v18 = (_DWORD *)v21[2];
      v17 = v19 + 1;
      if ( a2 < v18[1] )
        goto LABEL_54;
    }
    while ( v17 < v15 );
LABEL_11:
    if ( a2 < v20 )
      goto LABEL_12;
    v18 = (_DWORD *)v21[2];
    if ( a2 >= v18[1] )
      goto LABEL_12;
LABEL_54:
    if ( v21[3] )
      goto LABEL_55;
    v42 = 0;
    do
    {
      v18 = (_DWORD *)*v18;
      ++v42;
    }
    while ( v18 );
    if ( !v42 )
    {
LABEL_55:
      v42 = v21[4];
    }
    else
    {
      v67 = (_DWORD *)(v16 + 20 * v19);
      v58 = sub_2ACBF4(*v14, 4 * v42);
      v59 = v58;
      if ( !v58 )
        goto LABEL_12;
      v21 = v67;
      v60 = (_DWORD *)v67[2];
      if ( !v60 )
        goto LABEL_101;
      v61 = v58 + 4 * v42;
      v62 = v42;
      do
      {
        *(_DWORD *)(v61 - 4) = v60;
        v61 -= 4;
        --v62;
        v60 = (_DWORD *)*v60;
      }
      while ( v60 );
      if ( v62 )
      {
LABEL_101:
        sub_2A6BBC("./dwarf2.c", 1737);
        v21 = v67;
      }
      v21[4] = v42;
      v21[3] = v59;
    }
    v43 = v42;
    if ( v42 <= 0 )
      goto LABEL_12;
    v44 = v21[3];
    do
    {
      v45 = (v43 + v8) / 2;
      v46 = *(_DWORD *)(v44 + 4 * v45);
      v47 = *(_DWORD *)(v46 + 4);
      if ( a2 >= v47 )
      {
        v8 = v45 + 1;
        if ( a2 < *(_DWORD *)(*(_DWORD *)(v44 + 4 * v45 + 4) + 4) )
          goto LABEL_95;
      }
      else
      {
        v43 = (v43 + v8) / 2;
      }
    }
    while ( v8 < v43 );
    if ( a2 < v47 || a2 >= *(_DWORD *)(*(_DWORD *)(v44 + 4 * (v45 + 1)) + 4) )
      goto LABEL_12;
LABEL_95:
    if ( *(_BYTE *)(v46 + 25) )
      goto LABEL_12;
    v63 = v21[2];
    if ( v46 == v63 )
      goto LABEL_12;
    v64 = *(_DWORD *)(v46 + 12);
    *a3 = *(_DWORD *)(v46 + 8);
    *a5 = v64;
    if ( a6 )
      *a6 = *(_DWORD *)(v46 + 20);
    return *(_DWORD *)(v63 + 4) - *v21;
  }
}
