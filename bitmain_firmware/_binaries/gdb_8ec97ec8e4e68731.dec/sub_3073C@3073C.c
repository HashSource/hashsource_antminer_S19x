void sub_3073C()
{
  int v0; // r3
  int v1; // r3
  int v2; // r2
  int v3; // r5
  int v4; // r0
  int v5; // r12
  int *v6; // r2
  int i; // r3
  int v8; // r3
  int v9; // r6
  char *v10; // r0
  char *v11; // r6
  int v12; // r9
  _DWORD *v13; // r10
  int v14; // r3
  int v15; // r7
  __int64 v16; // r0
  int v17; // r2
  int v18; // r8
  int v19; // r0
  int v20; // r0
  const char *v21; // r0
  int v22; // r0
  unsigned int v23; // r9
  int v24; // r1
  int v25; // r7
  int v26; // r3
  int v27; // r2
  int v28; // r3
  int v29; // r10
  unsigned int v30; // r9
  int v31; // r3
  int v32; // r2
  int v33; // r1
  int v34; // r2
  int v35; // r0
  int v36; // r10
  int v37; // r7
  char *v38; // r7
  int v39; // r9
  int v40; // r0
  bool v41; // zf
  int v42; // r8
  int *v43; // r7
  int v44; // r6
  char *v45; // r5
  int v46; // r0
  int v47; // r0
  int v48; // r0
  int v49; // r10
  int v50; // r2
  char *v51; // r9
  int v52; // r0
  int v53; // r3
  int v54; // r0
  int *v55; // lr
  int *p_s1; // r12
  int v57; // r0
  int v58; // r1
  int *v59; // r9
  int v60; // r2
  int v61; // r3
  int v62; // r0
  int *v63; // r3
  int *p_s2; // r12
  int v65; // r1
  char *v66; // lr
  int v67; // r0
  int v68; // r1
  int *v69; // r9
  int v70; // r2
  int v71; // r3
  int v72; // r1
  char *v73; // r7
  int v74; // r9
  int v75; // r0
  int *v76; // r7
  unsigned int v77; // r6
  int v78; // r8
  int *v79; // r5
  int v80; // r0
  int v81; // r0
  int v82; // r0
  int v83; // r10
  int v84; // r2
  char *v85; // r9
  int v86; // r0
  int v87; // r3
  int v88; // r0
  int v89; // r1
  int v90; // r2
  int v91; // r3
  int v92; // r1
  int v93; // r2
  int v94; // r3
  int v95; // r1
  int v96; // r2
  int v97; // r3
  int v98; // [sp+4h] [bp-D0h] BYREF
  char *v99; // [sp+8h] [bp-CCh]
  int v100; // [sp+Ch] [bp-C8h]
  int v101; // [sp+10h] [bp-C4h]
  int v102; // [sp+14h] [bp-C0h]
  int v103; // [sp+18h] [bp-BCh]
  int v104; // [sp+1Ch] [bp-B8h]
  int v105; // [sp+20h] [bp-B4h]
  char *v106; // [sp+24h] [bp-B0h]
  int v107; // [sp+28h] [bp-ACh]
  void *ptr; // [sp+2Ch] [bp-A8h]
  int v109; // [sp+34h] [bp-A0h] BYREF
  unsigned int v110; // [sp+38h] [bp-9Ch] BYREF
  int v111; // [sp+3Ch] [bp-98h] BYREF
  int s1; // [sp+40h] [bp-94h] BYREF
  int v113; // [sp+44h] [bp-90h]
  int v114; // [sp+48h] [bp-8Ch]
  int v115; // [sp+4Ch] [bp-88h]
  int v116; // [sp+50h] [bp-84h]
  int v117; // [sp+54h] [bp-80h]
  int v118; // [sp+58h] [bp-7Ch]
  int v119; // [sp+5Ch] [bp-78h]
  int v120; // [sp+60h] [bp-74h]
  int v121; // [sp+64h] [bp-70h]
  int v122; // [sp+68h] [bp-6Ch]
  int v123; // [sp+6Ch] [bp-68h]
  int v124; // [sp+70h] [bp-64h]
  int v125; // [sp+74h] [bp-60h]
  int s2; // [sp+78h] [bp-5Ch] BYREF
  int v127; // [sp+7Ch] [bp-58h]
  int v128; // [sp+80h] [bp-54h]
  int v129; // [sp+84h] [bp-50h]
  int v130; // [sp+88h] [bp-4Ch]
  int v131; // [sp+8Ch] [bp-48h]
  int v132; // [sp+90h] [bp-44h]
  int v133; // [sp+94h] [bp-40h]
  int v134; // [sp+98h] [bp-3Ch]
  int v135; // [sp+9Ch] [bp-38h]
  int v136; // [sp+A0h] [bp-34h]
  int v137; // [sp+A4h] [bp-30h]
  int v138; // [sp+A8h] [bp-2Ch]
  int v139; // [sp+ACh] [bp-28h]

  v0 = *(_DWORD *)(dword_487D2C + 8);
  if ( !v0 || (*(_DWORD *)(v0 + 40) & 0x800) == 0 || sub_BC304(&dword_4899A0, 9, &v109) <= 0 )
    return;
  v1 = *(_DWORD *)(dword_487D2C + 8);
  v2 = *(_DWORD *)(v1 + 4);
  v3 = v109 - *(_DWORD *)(v1 + 116);
  if ( *(_DWORD *)(v2 + 4) == 5 )
  {
    if ( ((*(_DWORD *)(*(_DWORD *)(v2 + 444) + 20) - 1) & v3) != 0 )
      return;
    v10 = (char *)sub_2FFC4(-1, (int *)&v110, &v111, 0);
    v11 = v10;
    v12 = *(_DWORD *)(dword_487D2C + 8);
    v13 = *(_DWORD **)(v12 + 160);
    v14 = v13[12];
    v15 = v13[11] * v14;
    if ( !v15 )
    {
      if ( v10 )
        free(v10);
      goto LABEL_6;
    }
    v16 = sub_93028(v13[11] * v14);
    v17 = v13[5];
    ptr = (void *)v16;
    v18 = sub_2A8A04(v12, HIDWORD(v16), v17, 0, 0);
    if ( v18 || v15 != sub_2A87D8(ptr, v15, v12) )
    {
      free(ptr);
      if ( v11 )
        free(v11);
      goto LABEL_6;
    }
    if ( !v11 )
    {
      v18 = 1;
      goto LABEL_27;
    }
    v19 = sub_16F654();
    v107 = ((int (__fastcall *)(int))loc_165BB8)(v19);
    if ( v110 == v15 )
    {
      v22 = sub_2A789C(*(_DWORD *)(dword_487D2C + 8));
      if ( v22 == v111 )
      {
        if ( v22 == 32 )
        {
          v30 = v110;
          if ( v110 <= 0x1F )
            goto LABEL_26;
          v31 = v110 & 0x1F;
          if ( (v110 & 0x1F) != 0 )
            goto LABEL_26;
          v32 = *(_DWORD *)(*(_DWORD *)(dword_487D2C + 8) + 160);
          v33 = *(_DWORD *)(v32 + 68);
          v34 = *(_DWORD *)(v32 + 48);
          v102 = v33;
          while ( 1 )
          {
            v37 = 32 * v31;
            if ( v34 == v31 )
              break;
            v35 = *(_DWORD *)(v33 + 32 * v31);
            v36 = v33 + v37;
            ++v31;
            if ( v35 == 1 )
            {
              v73 = &v11[v37];
              v74 = sub_15C250(v73 + 8, 4, v107) - *(_DWORD *)(v36 + 12);
              v75 = sub_15C250(v73 + 12, 4, v107);
              v41 = v74 == v75 - *(_DWORD *)(v36 + 16);
              v105 = v75 - *(_DWORD *)(v36 + 16);
              v30 = v110;
              if ( v41 )
                goto LABEL_70;
              break;
            }
          }
          v105 = 0;
LABEL_70:
          v101 = 1685382482;
          v76 = (int *)v11;
          v106 = v11;
          v103 = 0;
          v77 = 0;
          v100 = (int)".plt";
          v104 = v3;
          v78 = v107;
          while ( v77 < v30 >> 5 )
          {
            v107 = 32 * v77;
            v79 = (int *)((char *)ptr + 32 * v77);
            if ( memcmp(v76, v79, 0x20u) )
            {
              v80 = sub_15C250(v76 + 2, 4, v78);
              sub_15C34C(v76 + 2, 4, v78, v105, v80 - v105, 0);
              v81 = sub_15C250(v76 + 3, 4, v78);
              sub_15C34C(v76 + 3, 4, v78, v105, v81 - v105, 0);
              if ( memcmp(v76, v79, 0x20u) )
              {
                if ( *(_DWORD *)(v102 + 32 * v77) != v101 )
                  goto LABEL_74;
                v89 = v76[1];
                v90 = v76[2];
                v91 = v76[3];
                s1 = *v76;
                v113 = v89;
                v114 = v90;
                v115 = v91;
                v92 = v76[5];
                v93 = v76[6];
                v94 = v76[7];
                v116 = v76[4];
                v117 = v92;
                v118 = v93;
                v119 = v94;
                v95 = v79[1];
                v96 = v79[2];
                v97 = v79[3];
                s2 = *v79;
                v127 = v95;
                v128 = v96;
                v129 = v97;
                v116 = 0;
                v117 = 0;
                v118 = 0;
                v119 = 0;
                v130 = 0;
                v131 = 0;
                v132 = 0;
                v133 = 0;
                if ( memcmp(&s1, &s2, 0x20u) )
                {
LABEL_74:
                  v82 = sub_2AD7AC(*(_DWORD *)(dword_487D2C + 8), v100);
                  v83 = v82;
                  if ( !v82
                    || ((v84 = v107,
                         v107 = *(_DWORD *)(v82 + 20) & 0x100,
                         v85 = &v106[v84 + 16],
                         v86 = sub_15C250(v85, 4, v78),
                         v87 = *(_DWORD *)(v83 + 36),
                         !v107)
                      ? (v88 = v86 - v87)
                      : (v88 = v86 + v87),
                        sub_15C34C(v85, 4, v78, 0, v88, 0),
                        memcmp(v76, v79, 0x20u)) )
                  {
LABEL_60:
                    v3 = v104;
                    v11 = v106;
                    v18 = v103;
                    goto LABEL_26;
                  }
                }
              }
              v30 = v110;
            }
            ++v77;
            v76 += 8;
          }
        }
        else
        {
          if ( v22 != 64 )
            goto LABEL_26;
          v23 = v110;
          if ( v110 <= 0x37 )
            goto LABEL_26;
          sub_347674(v110, 56);
          v25 = v24;
          if ( v24 )
            goto LABEL_26;
          v26 = *(_DWORD *)(*(_DWORD *)(dword_487D2C + 8) + 160);
          v27 = *(_DWORD *)(v26 + 68);
          v28 = *(_DWORD *)(v26 + 48);
          v102 = v27;
          while ( 1 )
          {
            v29 = v27 + 32 * v25;
            if ( v25 == v28 )
              break;
            if ( *(_DWORD *)(v27 + 32 * v25) == 1 )
            {
              v38 = &v11[56 * v25];
              v39 = sub_15C250(v38 + 16, 8, v107) - *(_DWORD *)(v29 + 12);
              v40 = sub_15C250(v38 + 24, 8, v107);
              v41 = v39 == v40 - *(_DWORD *)(v29 + 16);
              v105 = v40 - *(_DWORD *)(v29 + 16);
              v23 = v110;
              if ( v41 )
                goto LABEL_50;
              break;
            }
            ++v25;
          }
          v105 = 0;
LABEL_50:
          v103 = 0;
          v42 = v107;
          v101 = 613566757;
          v43 = (int *)v11;
          v106 = v11;
          v44 = 0;
          v100 = 1685382482;
          v99 = ".plt";
          v104 = v3;
          while ( v44 < ((v23 >> 3) * (unsigned __int64)(unsigned int)v101) >> 32 )
          {
            v45 = (char *)ptr + 56 * v44;
            v107 = 56 * v44;
            if ( memcmp(v43, v45, 0x38u) )
            {
              v46 = sub_15C250(v43 + 4, 8, v42);
              sub_15C34C(v43 + 4, 8, v42, 0, v46 - v105, 0);
              v47 = sub_15C250(v43 + 6, 8, v42);
              sub_15C34C(v43 + 6, 8, v42, 0, v47 - v105, 0);
              if ( memcmp(v43, v45, 0x38u) )
              {
                if ( *(_DWORD *)(v102 + 32 * v44) != v100 )
                  goto LABEL_55;
                v55 = v43;
                p_s1 = &s1;
                do
                {
                  v57 = *v55;
                  v55 += 4;
                  v58 = *(v55 - 3);
                  v59 = p_s1;
                  v60 = *(v55 - 2);
                  p_s1 += 4;
                  v61 = *(v55 - 1);
                  *v59 = v57;
                  v59[1] = v58;
                  v59[2] = v60;
                  v59[3] = v61;
                }
                while ( v55 != v43 + 12 );
                v62 = *v55;
                v63 = p_s1;
                p_s2 = &s2;
                v65 = v55[1];
                v66 = v45;
                *v63 = v62;
                v63[1] = v65;
                do
                {
                  v67 = *(_DWORD *)v66;
                  v66 += 16;
                  v68 = *((_DWORD *)v66 - 3);
                  v69 = p_s2;
                  v70 = *((_DWORD *)v66 - 2);
                  p_s2 += 4;
                  v71 = *((_DWORD *)v66 - 1);
                  *v69 = v67;
                  v69[1] = v68;
                  v69[2] = v70;
                  v69[3] = v71;
                }
                while ( v66 != v45 + 48 );
                v72 = *((_DWORD *)v66 + 1);
                *p_s2 = *(_DWORD *)v66;
                p_s2[1] = v72;
                v121 = 0;
                v120 = 0;
                v122 = 0;
                v113 = 0;
                v124 = 0;
                v134 = 0;
                v136 = 0;
                v127 = 0;
                v138 = 0;
                v123 = 0;
                v125 = 0;
                v135 = 0;
                v137 = 0;
                v139 = 0;
                if ( memcmp(&s1, &s2, 0x38u) )
                {
LABEL_55:
                  v48 = sub_2AD7AC(*(_DWORD *)(dword_487D2C + 8), v99);
                  v49 = v48;
                  if ( !v48 )
                    goto LABEL_60;
                  v50 = v107;
                  v107 = *(_DWORD *)(v48 + 20) & 0x100;
                  v51 = &v106[v50 + 32];
                  v52 = sub_15C250(v51, 8, v42);
                  v53 = *(_DWORD *)(v49 + 36);
                  v54 = v107 ? v52 + v53 : v52 - v53;
                  sub_15C34C(v51, 8, v42, 0, v54, 0);
                  if ( memcmp(v43, v45, 0x38u) )
                    goto LABEL_60;
                }
              }
              v23 = v110;
            }
            ++v44;
            v43 += 14;
          }
        }
        v3 = v104;
        v18 = 1;
        v11 = v106;
      }
    }
LABEL_26:
    free(v11);
LABEL_27:
    free(ptr);
    if ( !v18 )
      return;
  }
LABEL_6:
  if ( dword_48A514 )
  {
    v20 = sub_16F654();
    v21 = (const char *)sub_25AC8C(v20, v3);
    sub_259858(
      "Using PIE (Position Independent Executable) displacement %s for \"%s\".\n",
      v21,
      **(const char ***)(dword_487D2C + 8));
  }
  v4 = *(_DWORD *)(dword_487D2C + 32);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 148);
    if ( v5 > 0 )
    {
      v6 = &v98;
      for ( i = 0; i != v5; ++i )
      {
        v6[1] = v3;
        ++v6;
      }
    }
    sub_1B78B0();
  }
  else
  {
    v8 = *(_DWORD *)(dword_487D2C + 8);
    if ( v8 )
    {
      v9 = *(_DWORD *)(v8 + 100);
      if ( v9 )
      {
        while ( 1 )
        {
          sub_95AF0(*(char **)v8);
          v9 = *(_DWORD *)(v9 + 12);
          if ( !v9 )
            break;
          v8 = *(_DWORD *)(dword_487D2C + 8);
        }
      }
    }
  }
}
