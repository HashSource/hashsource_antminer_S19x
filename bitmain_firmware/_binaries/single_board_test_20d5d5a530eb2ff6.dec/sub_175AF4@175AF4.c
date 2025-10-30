bool __fastcall sub_175AF4(int **a1, int **a2, _DWORD *a3, int a4)
{
  int ***v4; // r9
  int **v7; // r1
  int **v8; // r0
  int **v9; // r4
  int v10; // r0
  _BOOL4 v11; // r4
  int **v13; // r1
  int **v14; // r1
  int **v15; // r1
  int **v16; // r1
  int v17; // r11
  int v18; // r7
  int v19; // r0
  int *v20; // r6
  int v21; // r7
  int *v22; // r10
  int v23; // r9
  bool v24; // cc
  int v25; // r3
  int v26; // r8
  int v27; // r3
  int v28; // r1
  int **v29; // r5
  int **v30; // r4
  int *v31; // r2
  int *v32; // r1
  int *v33; // r4
  int *v34; // r0
  int v35; // t1
  int v36; // t1
  int v37; // r4
  int v38; // r4
  int v39; // r0
  int *v40; // r3
  int v41; // t1
  int v42; // r4
  unsigned int v43; // r11
  int v44; // r0
  int v45; // r4
  unsigned int v46; // r5
  _DWORD *v47; // r2
  _DWORD *v48; // r3
  char *v49; // r1
  unsigned int v50; // r7
  int v51; // r6
  unsigned int v52; // r12
  int v53; // r7
  int v54; // r5
  unsigned int v55; // lr
  unsigned int v56; // r5
  int v57; // r7
  int v58; // r12
  unsigned int v59; // r7
  int v60; // lr
  int v61; // r5
  int v62; // r12
  unsigned int v63; // r7
  unsigned int v64; // r12
  int v65; // lr
  int v66; // r5
  unsigned int v67; // lr
  unsigned int v68; // r5
  int v69; // r12
  unsigned int v70; // lr
  int v71; // r5
  unsigned int v72; // r5
  unsigned int v73; // r12
  int v74; // lr
  unsigned int v75; // r7
  int v76; // r11
  unsigned int v77; // r12
  int v78; // r5
  int v79; // lr
  int v80; // r5
  unsigned int v81; // r12
  int v82; // lr
  _DWORD *v83; // r3
  unsigned int *v84; // r6
  _DWORD *v85; // r12
  unsigned int *v86; // r1
  unsigned int v87; // r2
  int v88; // t1
  unsigned int v89; // r3
  unsigned int v90; // r3
  unsigned int v91; // lr
  int *v93; // [sp+10h] [bp-4Ch]
  int v94; // [sp+14h] [bp-48h]
  int *s; // [sp+18h] [bp-44h]
  int *v96; // [sp+1Ch] [bp-40h]
  int **v97; // [sp+20h] [bp-3Ch]
  int **v98; // [sp+24h] [bp-38h]
  int **v99; // [sp+28h] [bp-34h]
  int **v100; // [sp+2Ch] [bp-30h]
  int v101; // [sp+30h] [bp-2Ch]
  _DWORD *v102; // [sp+38h] [bp-24h]
  int v103; // [sp+3Ch] [bp-20h]
  _DWORD *v104; // [sp+40h] [bp-1Ch]
  int v105; // [sp+44h] [bp-18h]
  int ***v106; // [sp+50h] [bp-Ch]
  int **v107; // [sp+54h] [bp-8h]

  v4 = (int ***)a4;
  sub_130BC0(a4);
  v8 = sub_130CCC(v4, v7);
  if ( v8 )
  {
    v9 = v8;
    do
    {
      v10 = sub_B85BC(a3);
      if ( !sub_136480(v9, v10 - 1, -1, 0) )
        goto LABEL_5;
    }
    while ( sub_B85B0((int)v9) );
    if ( !sub_175A64((int)a1, a2, v9, a3, v4) )
      goto LABEL_5;
    sub_130BC0((int)v4);
    v98 = sub_130CCC(v4, v13);
    v99 = sub_130CCC(v4, v14);
    v97 = sub_130CCC(v4, v15);
    v100 = sub_130CCC(v4, v16);
    if ( v100 )
    {
      if ( sub_175A10((int)v97, (int *)a1, (int)a3) )
      {
        if ( !sub_B85B0((int)v97) )
        {
          if ( sub_B89E4((int)v100, (int)a3) )
          {
            v94 = sub_B85BC(v97);
            v17 = sub_B85BC(v100);
            v18 = a3[1];
            v101 = v18;
            if ( sub_B89D8((int)v97, v18) )
            {
              v19 = (int)v97[1];
              v20 = *v97;
              if ( v18 > v19 )
                memset(&v20[v19], 0, 4 * (v18 - v19));
              v97[1] = (int *)v18;
              if ( sub_B89D8((int)v98, v18) )
              {
                v93 = *v98;
                **v98 = 1;
                if ( v18 > 1 )
                  memset(v93 + 1, 0, 4 * (v18 + 0x3FFFFFFF));
                v98[1] = (int *)v18;
                if ( sub_B89D8((int)v99, v18) )
                {
                  s = *v99;
                  if ( v18 > 0 )
                    memset(s, 0, 4 * v18);
                  v21 = v94;
                  v104 = a3;
                  v22 = v20;
                  v106 = v4;
                  v23 = v17;
                  v107 = v9;
                  v99[1] = (int *)v101;
                  v24 = v101 - 1 <= -2147483641;
                  if ( v101 - 1 >= -2147483641 )
                    v24 = v101 - 8 <= 1;
                  v25 = !v24;
                  v105 = v25;
                  v26 = v101 - 1;
                  v96 = *v100;
LABEL_28:
                  while ( v21 )
                  {
                    while ( 1 )
                    {
                      v43 = *v22;
                      v44 = *v22 & 1;
                      if ( !v44 )
                        break;
                      if ( v21 <= 64 )
                      {
                        v27 = *v22;
                        goto LABEL_30;
                      }
LABEL_31:
                      if ( v21 < v23 )
                      {
                        v28 = v21;
                        v29 = v97;
                        v30 = v98;
                        v21 = v23;
                        v23 = v28;
                        v93 = s;
                        v97 = v100;
                        v22 = v96;
                        v100 = v29;
                        v96 = *v29;
                        s = *v98;
                        v98 = v99;
                        v99 = v30;
                      }
                      if ( v101 > 0 )
                      {
                        v31 = v22;
                        v32 = v93;
                        v33 = v96 - 1;
                        v34 = s - 1;
                        do
                        {
                          v35 = v33[1];
                          ++v33;
                          *v31++ ^= v35;
                          v36 = v34[1];
                          ++v34;
                          *v32++ ^= v36;
                        }
                        while ( &v22[v101] != v31 );
                      }
                      if ( v21 != v23 )
                        goto LABEL_28;
                      v37 = v21 + 62;
                      if ( v21 - 1 >= 0 )
                        v37 = v21 - 1;
                      v38 = v37 >> 6;
                      v39 = v22[v38];
                      v40 = &v22[v38];
                      if ( v39 )
                      {
LABEL_42:
                        v42 = v38 << 6;
                      }
                      else
                      {
                        while ( v38 )
                        {
                          v41 = *--v40;
                          v39 = v41;
                          --v38;
                          if ( v41 )
                            goto LABEL_42;
                        }
                        v42 = v39;
                      }
                      v23 = v21;
                      v21 = sub_B8208(v39) + v42;
                      if ( !v21 )
                        goto LABEL_29;
                    }
                    v102 = (_DWORD *)*v104;
                    v45 = *v93 << 31 >> 31;
                    v46 = *v93 ^ *(_DWORD *)*v104 & v45;
                    if ( v26 <= 0 )
                    {
                      v90 = *v93 ^ *(_DWORD *)*v104 & v45;
                      v91 = *v22;
                    }
                    else
                    {
                      if ( v105 )
                      {
                        v47 = v22 + 11;
                        v48 = v93 + 11;
                        v49 = (char *)(*v104 + 44);
                        v103 = v21;
                        do
                        {
                          v50 = *(v47 - 10);
                          __pld(v49);
                          *(v47 - 11) = v43 >> 1;
                          __pld(v47);
                          v51 = v44 + 9;
                          v52 = v50 >> 1;
                          v53 = *((_DWORD *)v49 - 10);
                          *(v48 - 11) = v46 >> 1;
                          v44 += 8;
                          v54 = *(v48 - 10);
                          v49 += 32;
                          v55 = *(v47 - 9);
                          __pld(v48);
                          v47 += 8;
                          *(v47 - 18) = v52;
                          v56 = v45 & v53 ^ v54;
                          v57 = *((_DWORD *)v49 - 17);
                          v48 += 8;
                          *(v48 - 18) = v56 >> 1;
                          v58 = v45 & v57;
                          v59 = *(v48 - 17);
                          *(v47 - 17) = v55 >> 1;
                          v60 = *((_DWORD *)v49 - 16);
                          v61 = *(v47 - 16) >> 1;
                          *(v48 - 17) = (v58 ^ v59) >> 1;
                          v62 = *(v48 - 16);
                          *(v47 - 16) = v61;
                          v63 = *(v47 - 15);
                          v64 = v45 & v60 ^ v62;
                          v65 = *(v48 - 15);
                          v66 = *((_DWORD *)v49 - 15) & v45;
                          *(v48 - 16) = v64 >> 1;
                          v67 = v66 ^ v65;
                          v68 = *(v47 - 14);
                          *(v47 - 15) = v63 >> 1;
                          v69 = *((_DWORD *)v49 - 14);
                          *(v48 - 15) = v67 >> 1;
                          v70 = v68 >> 1;
                          v71 = *(v48 - 14);
                          *(v47 - 14) = v70;
                          v72 = v45 & v69 ^ v71;
                          v73 = *(v47 - 13);
                          v74 = v45 & *((_DWORD *)v49 - 13);
                          *(v48 - 14) = v72 >> 1;
                          v75 = *(v48 - 13);
                          *(v47 - 13) = v73 >> 1;
                          v76 = *((_DWORD *)v49 - 12);
                          v77 = *(v48 - 12);
                          v78 = *(v47 - 12) >> 1;
                          *(v48 - 13) = (v74 ^ v75) >> 1;
                          v79 = v45 & v76;
                          v43 = *(v47 - 11);
                          *(v47 - 12) = v78;
                          v80 = *((_DWORD *)v49 - 11);
                          v81 = (v79 ^ v77) >> 1;
                          v82 = *(v48 - 11);
                          *(v48 - 12) = v81;
                          v46 = v80 & v45 ^ v82;
                        }
                        while ( v101 - 8 > v51 );
                        v21 = v103;
                        v83 = v102;
                      }
                      else
                      {
                        v44 = 0;
                        v83 = (_DWORD *)*v104;
                      }
                      v84 = (unsigned int *)&v22[v44];
                      v85 = &v83[v44];
                      v86 = (unsigned int *)&v93[v44];
                      do
                      {
                        v87 = v84[1];
                        ++v44;
                        *v84++ = v43 >> 1;
                        v88 = v85[1];
                        ++v85;
                        v43 = v87;
                        v89 = v86[1];
                        *v86++ = v46 >> 1;
                        v90 = v89 ^ v45 & v88;
                        v46 = v90;
                      }
                      while ( v26 > v44 );
                      v44 = 4 * (v101 - 1);
                      v91 = v87;
                    }
                    *(int *)((char *)v22 + v44) = v91 >> 1;
                    --v21;
                    *(int *)((char *)v93 + v44) = v90 >> 1;
                  }
LABEL_29:
                  v27 = *v22;
                  if ( *v22 )
                  {
LABEL_30:
                    if ( v27 != 1 )
                      goto LABEL_31;
                    v4 = v106;
                    sub_B8ACC(v98);
                    if ( sub_B89E4((int)a1, (int)v98) )
                    {
                      sub_130C74(v106);
                      v11 = sub_175A64((int)a1, a1, v107, v104, v106) != 0;
                      goto LABEL_6;
                    }
                  }
                  else
                  {
                    v4 = v106;
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_130C74(v4);
    sub_130C74(v4);
    return 0;
  }
LABEL_5:
  v11 = 0;
LABEL_6:
  sub_130C74(v4);
  return v11;
}
