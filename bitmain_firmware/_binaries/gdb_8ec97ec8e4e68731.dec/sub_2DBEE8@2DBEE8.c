int __fastcall sub_2DBEE8(int a1, int a2, int a3)
{
  int v3; // r4
  int v4; // r4
  int v6; // r6
  unsigned int v9; // r7
  unsigned int v10; // r8
  bool v11; // zf
  int v12; // r9
  unsigned int v13; // r11
  unsigned int v14; // r0
  _BOOL4 v15; // r3
  unsigned int v16; // r10
  _DWORD *v17; // r9
  _BOOL4 v18; // r3
  unsigned int v19; // r12
  unsigned int *v20; // r10
  unsigned int v21; // r0
  unsigned int v22; // r1
  unsigned int *v23; // r2
  unsigned int v24; // lr
  unsigned int v25; // r3
  size_t v26; // r11
  unsigned int v27; // r1
  unsigned int v28; // r12
  _DWORD *v29; // lr
  unsigned int v30; // r2
  int **v31; // r7
  unsigned int v32; // r0
  unsigned int v33; // r3
  unsigned int v34; // r0
  char *v35; // r9
  char *v36; // r0
  _BOOL4 v37; // r3
  char *v38; // r5
  char *v39; // r1
  size_t v40; // r11
  char *v41; // r3
  int v42; // r2
  char *v43; // r3
  char *v44; // r1
  int v45; // r7
  int v46; // r2
  _BOOL4 v47; // r3
  unsigned int v48; // r0
  int *v49; // r2
  _BOOL4 v50; // r3
  signed int v51; // r5
  char *v52; // r0
  bool v53; // zf
  int *v54; // r3
  unsigned int v55; // r8
  int v56; // r5
  char *v57; // r10
  char *v58; // r6
  int *v59; // r4
  int v60; // t1
  int *v61; // r4
  unsigned int v62; // r7
  char *v63; // r8
  int v64; // t1
  int v65; // r7
  int v66; // r6
  const char *v67; // r1
  const char *v68; // r0
  char *v69; // r8
  int v70; // r3
  char *v71; // r7
  char *v72; // r4
  int v73; // r3
  int v74; // r6
  size_t v75; // r4
  int v76; // r2
  int v77; // r3
  const char *v78; // r1
  const char *v79; // r0
  _DWORD *v80; // [sp+10h] [bp-1Ch]
  _DWORD *v81; // [sp+14h] [bp-18h]
  int v82; // [sp+14h] [bp-18h]
  int v83; // [sp+18h] [bp-14h]
  char *ptr; // [sp+1Ch] [bp-10h]
  char *v85; // [sp+20h] [bp-Ch]
  int v86; // [sp+24h] [bp-8h]

  v3 = *(_DWORD *)(a1 + 148);
  if ( *(_DWORD *)(*(_DWORD *)(v3 + 4) + 4) != 5 )
    return 0;
  v6 = *(_DWORD *)(a2 + 148);
  if ( *(_DWORD *)(*(_DWORD *)(v6 + 4) + 4) != 5
    || *(_DWORD *)(*(_DWORD *)(a1 + 140) + 4) != *(_DWORD *)(*(_DWORD *)(a2 + 140) + 4) )
  {
    return 0;
  }
  v9 = sub_2D4B7C(*(_DWORD *)(a1 + 148), a1);
  v10 = sub_2D4B7C(v6, a2);
  v11 = v10 == -257;
  if ( v10 != -257 )
    v11 = v9 == -257;
  if ( v11 )
    return 0;
  v12 = *(_DWORD *)(v3 + 160);
  v83 = v12;
  v13 = sub_347418(
          *(_DWORD *)(v12 + 96),
          *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v3 + 4) + 444) + 392) + 5));
  v80 = *(_DWORD **)(v6 + 160);
  v14 = sub_347418(v80[24], *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v6 + 4) + 444) + 392) + 5));
  v15 = v14 == 0;
  if ( !v13 )
    v15 = 1;
  v16 = v14;
  if ( v15 )
    return 0;
  v17 = *(_DWORD **)(v12 + 588);
  if ( v17 )
    ptr = 0;
  v81 = (_DWORD *)v80[147];
  if ( v17 )
    goto LABEL_15;
  v48 = sub_2CDA08(v3, v83 + 72, v13, 0, 0, 0, 0);
  ptr = (char *)v48;
  if ( !v48 )
    return 0;
  if ( (*(_BYTE *)(a3 + 4) & 8) == 0 )
  {
    v17 = sub_166FC(v13, v48);
    *(_DWORD *)(*(_DWORD *)(v3 + 160) + 588) = v17;
LABEL_15:
    v18 = v81 == 0;
    if ( !v17 )
      v18 = 1;
    if ( !v18 )
    {
      v85 = 0;
LABEL_20:
      v19 = v17[1];
      v20 = v17 + 3;
      v21 = 0;
      while ( 1 )
      {
        if ( v21 >= v19 )
          goto LABEL_28;
        v22 = (v21 + v19) >> 1;
        v23 = &v20[3 * v22];
        v24 = v23[2];
        if ( v9 < v24 )
          break;
        v25 = (v21 + v19) >> 1;
        v22 = v19;
LABEL_42:
        if ( v9 <= v24 )
        {
          v26 = v23[1];
          v20 = v23;
          goto LABEL_29;
        }
        v21 = v25 + 1;
        v19 = v22;
      }
      while ( 1 )
      {
        v25 = (v21 + v22) >> 1;
        if ( v21 >= v22 )
          break;
        v23 = &v20[3 * v25];
        v24 = v23[2];
        if ( v24 <= v9 )
          goto LABEL_42;
        v22 = (v21 + v22) >> 1;
      }
LABEL_28:
      v26 = 0;
LABEL_29:
      v27 = 0;
      v28 = v81[1];
      v29 = v81 + 3;
      while ( 1 )
      {
        if ( v27 >= v28 )
          goto LABEL_37;
        v30 = (v27 + v28) >> 1;
        v31 = (int **)&v29[3 * v30];
        v32 = (unsigned int)v31[2];
        if ( v10 < v32 )
          break;
        v33 = (v27 + v28) >> 1;
        v30 = v28;
LABEL_44:
        if ( v10 <= v32 )
        {
          v49 = v31[1];
          v50 = v26 != (_DWORD)v49;
          if ( !v49 )
            v50 = 1;
          if ( !v26 )
            v50 = 1;
          if ( !v50 )
          {
            v51 = 8 * (_DWORD)v49;
            v82 = 2 * (_DWORD)v49;
            v35 = (char *)sub_2AB368(8 * v26);
            v52 = (char *)sub_2AB368(v51);
            v53 = v52 == 0;
            if ( v52 )
              v53 = v35 == 0;
            v38 = v52;
            if ( !v53 )
            {
              v54 = (int *)*v20;
              v55 = *v20 + 8 * v26;
              if ( *v20 < v55 )
              {
                v86 = v6;
                v56 = v3;
                v57 = v35 + 8;
                v58 = v52;
                v59 = v54;
                do
                {
                  *((_DWORD *)v57 - 2) = v59;
                  v57 += 8;
                  v60 = *v59;
                  v59 += 2;
                  *((_DWORD *)v57 - 3) = sub_2CD844(v56, *(_DWORD *)(v83 + 100), v60);
                }
                while ( v55 > (unsigned int)v59 );
                v38 = v58;
                v6 = v86;
              }
              v61 = *v31;
              v62 = (unsigned int)&(*v31)[v82];
              if ( (unsigned int)v61 < v62 )
              {
                v63 = v38 + 8;
                do
                {
                  *((_DWORD *)v63 - 2) = v61;
                  v63 += 8;
                  v64 = *v61;
                  v61 += 2;
                  *((_DWORD *)v63 - 3) = sub_2CD844(v6, v80[25], v64);
                }
                while ( v62 > (unsigned int)v61 );
              }
              qsort(v35, v26, 8u, (__compar_fn_t)sub_2DBCE0);
              qsort(v38, v26, 8u, (__compar_fn_t)sub_2DBCE0);
              if ( *(unsigned __int16 *)(*(_DWORD *)v35 + 4) == *(unsigned __int16 *)(*(_DWORD *)v38 + 4) )
              {
                v65 = 4;
                v66 = 0;
                while ( 1 )
                {
                  v67 = *(const char **)&v38[v65];
                  ++v66;
                  v68 = *(const char **)&v35[v65];
                  v65 += 8;
                  if ( strcmp(v68, v67) )
                    break;
                  if ( v26 == v66 )
                    goto LABEL_106;
                  if ( *(unsigned __int16 *)(*(_DWORD *)&v35[8 * v66] + 4) != *(unsigned __int16 *)(*(_DWORD *)&v38[8 * v66]
                                                                                                  + 4) )
                  {
                    v4 = 0;
                    goto LABEL_74;
                  }
                }
              }
LABEL_73:
              v4 = 0;
              goto LABEL_74;
            }
LABEL_81:
            if ( v35 )
              goto LABEL_73;
            v4 = 0;
            goto LABEL_75;
          }
LABEL_37:
          v4 = 0;
          goto LABEL_38;
        }
        v27 = v33 + 1;
        v28 = v30;
      }
      while ( 1 )
      {
        v33 = (v27 + v30) >> 1;
        if ( v27 >= v30 )
          goto LABEL_37;
        v31 = (int **)&v29[3 * v33];
        v32 = (unsigned int)v31[2];
        if ( v32 <= v10 )
          goto LABEL_44;
        v30 = (v27 + v30) >> 1;
      }
    }
    v34 = sub_2CDA08(v6, (int)(v80 + 18), v16, 0, 0, 0, 0);
    v85 = (char *)v34;
    if ( v34 )
    {
      if ( v17 )
      {
        if ( (*(_BYTE *)(a3 + 4) & 8) == 0 )
        {
          v81 = sub_166FC(v16, v34);
          *(_DWORD *)(*(_DWORD *)(v6 + 160) + 588) = v81;
        }
        if ( v81 )
          goto LABEL_20;
      }
      goto LABEL_51;
    }
    if ( ptr )
    {
LABEL_80:
      v4 = 0;
      free(ptr);
      return v4;
    }
    return 0;
  }
  v85 = (char *)sub_2CDA08(v6, (int)(v80 + 18), v16, 0, 0, 0, 0);
  if ( !v85 )
    goto LABEL_80;
LABEL_51:
  v35 = (char *)sub_2AB368(8 * v13);
  v36 = (char *)sub_2AB368(8 * v16);
  v37 = v36 == 0;
  if ( !v35 )
    v37 = 1;
  v38 = v36;
  if ( v37 )
    goto LABEL_81;
  v39 = &ptr[20 * v13];
  v40 = 0;
  if ( v39 > ptr )
  {
    v41 = ptr;
    do
    {
      v42 = *((_DWORD *)v41 + 4);
      if ( v42 == v9 )
        *(_DWORD *)&v35[8 * v40] = v41;
      v41 += 20;
      if ( v42 == v9 )
        ++v40;
    }
    while ( v39 > v41 );
  }
  v43 = v85;
  v44 = &v85[20 * v16];
  if ( v44 <= v85 )
    goto LABEL_73;
  v45 = 0;
  do
  {
    v46 = *((_DWORD *)v43 + 4);
    if ( v46 == v10 )
      *(_DWORD *)&v36[8 * v45] = v43;
    v43 += 20;
    if ( v46 == v10 )
      ++v45;
  }
  while ( v44 > v43 );
  v47 = v45 != v40;
  if ( !v45 )
    v47 = 1;
  if ( !v40 )
    v47 = 1;
  if ( v47 )
    goto LABEL_73;
  v69 = v35;
  do
  {
    v70 = *(_DWORD *)v69;
    v69 += 8;
    *((_DWORD *)v69 - 1) = sub_2CD844(v3, *(_DWORD *)(v83 + 100), *(_DWORD *)(v70 + 8));
  }
  while ( &v35[8 * v40] != v69 );
  v71 = &v38[8 * v45];
  v72 = v38;
  do
  {
    v73 = *(_DWORD *)v72;
    v72 += 8;
    *((_DWORD *)v72 - 1) = sub_2CD844(v6, v80[25], *(_DWORD *)(v73 + 8));
  }
  while ( v71 != v72 );
  v74 = 4;
  qsort(v35, v40, 8u, (__compar_fn_t)sub_2DBCE0);
  v75 = 0;
  qsort(v38, v40, 8u, (__compar_fn_t)sub_2DBCE0);
  do
  {
    v76 = *(_DWORD *)&v35[8 * v75];
    v77 = *(_DWORD *)&v38[8 * v75++];
    if ( *(unsigned __int16 *)(v76 + 12) == *(unsigned __int16 *)(v77 + 12) )
    {
      v78 = *(const char **)&v38[v74];
      v79 = *(const char **)&v35[v74];
      v74 += 8;
      if ( !strcmp(v79, v78) )
        continue;
    }
    goto LABEL_73;
  }
  while ( v75 < v40 );
LABEL_106:
  v4 = 1;
LABEL_74:
  free(v35);
LABEL_75:
  if ( v38 )
    free(v38);
LABEL_38:
  if ( ptr )
    free(ptr);
  if ( v85 )
    free(v85);
  return v4;
}
