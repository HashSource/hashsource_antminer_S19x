int __fastcall sub_5A9A0(int a1, int a2)
{
  int v3; // r12
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r8
  char *v8; // r0
  int *v9; // r10
  int v10; // r9
  int result; // r0
  _BYTE *v12; // r4
  int v13; // r0
  char *v14; // r2
  _BYTE *v15; // r3
  char v16; // t1
  const char *v17; // r6
  const char *v18; // r6
  int v19; // r9
  double v20; // r0
  int v21; // r2
  double v22; // d0
  unsigned int v23; // r4
  double v24; // d8
  unsigned __int64 v25; // d16
  __int64 v26; // r0
  int v27; // lr
  int v28; // r12
  int v29; // r6
  unsigned __int64 v30; // r4
  int v31; // r12
  size_t v32; // r0
  int v33; // r1
  int v34; // r12
  int v35; // r0
  int v36; // r2
  double v37; // d0
  int v38; // r3
  int v39; // r6
  double v40; // r0
  unsigned int v41; // r4
  unsigned __int64 v42; // d16
  __int64 v43; // r0
  __int64 v44; // r4
  unsigned int v45; // r4
  int v46; // r5
  __int64 v47; // r2
  __int64 v48; // r8
  int v49; // r6
  __int64 v50; // r8
  int v51; // r5
  int v52; // r2
  int v53; // r3
  int v54; // s16
  int v55; // s17
  int v56; // r2
  int v57; // r3
  int v58; // s18
  int v59; // s19
  int v60; // r2
  char v61; // r3
  int v62; // r0
  int v63; // r6
  const char *v64; // r4
  int v65; // r0
  bool v66; // zf
  int v67; // r4
  int v68; // r0
  int v69; // r2
  char v70; // r3
  int v71; // r0
  int v72; // [sp+0h] [bp-1CCh]
  int v73; // [sp+0h] [bp-1CCh]
  int v74; // [sp+0h] [bp-1CCh]
  int v75; // [sp+0h] [bp-1CCh]
  int v76; // [sp+0h] [bp-1CCh]
  int v77; // [sp+0h] [bp-1CCh]
  int v78; // [sp+0h] [bp-1CCh]
  int v79; // [sp+0h] [bp-1CCh]
  _WORD v80[2]; // [sp+18h] [bp-1B4h] BYREF
  int v81; // [sp+1Ch] [bp-1B0h]
  int v82; // [sp+20h] [bp-1ACh]
  int v83; // [sp+24h] [bp-1A8h]
  int v84; // [sp+28h] [bp-1A4h]
  int v85; // [sp+2Ch] [bp-1A0h]
  int v86; // [sp+30h] [bp-19Ch]
  int v87; // [sp+34h] [bp-198h]
  _BYTE v88[40]; // [sp+38h] [bp-194h] BYREF
  _WORD v89[2]; // [sp+60h] [bp-16Ch] BYREF
  int v90; // [sp+64h] [bp-168h]
  int v91; // [sp+68h] [bp-164h]
  int v92; // [sp+6Ch] [bp-160h]
  int v93; // [sp+70h] [bp-15Ch]
  int v94; // [sp+74h] [bp-158h]
  int v95; // [sp+78h] [bp-154h]
  unsigned int v96; // [sp+7Ch] [bp-150h]
  int v97; // [sp+80h] [bp-14Ch]
  int v98; // [sp+84h] [bp-148h]
  _WORD v99[2]; // [sp+90h] [bp-13Ch] BYREF
  int v100; // [sp+94h] [bp-138h]
  int v101; // [sp+98h] [bp-134h]
  int v102; // [sp+9Ch] [bp-130h]
  int v103; // [sp+A0h] [bp-12Ch]
  int v104; // [sp+A4h] [bp-128h]
  int v105; // [sp+A8h] [bp-124h]
  int v106; // [sp+ACh] [bp-120h]
  int v107; // [sp+B0h] [bp-11Ch]
  int v108; // [sp+B4h] [bp-118h]
  int v109; // [sp+B8h] [bp-114h]
  int v110; // [sp+C8h] [bp-104h]
  const char *v111; // [sp+CCh] [bp-100h]
  unsigned int v112; // [sp+D0h] [bp-FCh]
  int v113; // [sp+D4h] [bp-F8h]
  __int64 v114; // [sp+D8h] [bp-F4h]
  const char *v115; // [sp+E0h] [bp-ECh]
  int v116; // [sp+E4h] [bp-E8h]
  char *s; // [sp+E8h] [bp-E4h]
  int v118; // [sp+ECh] [bp-E0h]
  void *v119; // [sp+F0h] [bp-DCh]
  int v120; // [sp+F8h] [bp-D4h]
  int v121; // [sp+FCh] [bp-D0h]
  _WORD v122[2]; // [sp+100h] [bp-CCh] BYREF
  char v123; // [sp+104h] [bp-C8h]
  char v124; // [sp+105h] [bp-C7h]
  char v125; // [sp+106h] [bp-C6h]
  char v126; // [sp+107h] [bp-C5h]
  char v127; // [sp+108h] [bp-C4h]
  int v128; // [sp+10Ch] [bp-C0h] BYREF
  int v129; // [sp+110h] [bp-BCh]
  int v130; // [sp+114h] [bp-B8h]
  int v131; // [sp+118h] [bp-B4h]
  int v132; // [sp+11Ch] [bp-B0h]
  int v133; // [sp+120h] [bp-ACh]
  char v134[4]; // [sp+128h] [bp-A4h] BYREF
  unsigned int v135; // [sp+12Ch] [bp-A0h]
  unsigned __int8 v136; // [sp+131h] [bp-9Bh]
  unsigned __int8 v137; // [sp+132h] [bp-9Ah]
  unsigned __int16 v138; // [sp+134h] [bp-98h]
  unsigned __int16 v139; // [sp+136h] [bp-96h]
  unsigned __int16 v140; // [sp+138h] [bp-94h]
  int v141; // [sp+13Ch] [bp-90h]
  int v142; // [sp+140h] [bp-8Ch]
  int fd[7]; // [sp+148h] [bp-84h] BYREF
  char haystack[4]; // [sp+164h] [bp-68h] BYREF
  char v145; // [sp+168h] [bp-64h]
  int v146; // [sp+16Ch] [bp-60h] BYREF
  char v147; // [sp+170h] [bp-5Ch]
  _BYTE v148[32]; // [sp+174h] [bp-58h] BYREF

  v3 = *(unsigned __int8 *)(a2 + 89);
  v119 = &_stack_chk_guard;
  _sprintf_chk(v148, 1, 32, "%s%d", "/dev/tsyncpci", v3);
  _printf_chk(1, "Polling device number %d...\n", *(unsigned __int8 *)(a2 + 89));
  v4 = open64(v148, 2048);
  fd[0] = v4;
  if ( v4 < 0 )
    return sub_65D40(3, "Couldn't open device");
  if ( ioctl(v4, 0xC01C7400, fd) < 0 )
  {
    sub_65D40(3, "Couldn't initialize device");
    return close(fd[0]);
  }
  v99[1] = 9472;
  v99[0] = 1;
  v103 = 16;
  v100 = 0;
  v101 = 0;
  v102 = 0;
  v104 = 0;
  v105 = 0;
  v106 = 0;
  v107 = 0;
  v108 = 0;
  v109 = 0;
  v5 = ioctl(fd[0], 0xC020741A, v99);
  v89[0] = 1;
  v90 = 0;
  v91 = 0;
  v92 = 0;
  v94 = 0;
  v95 = 0;
  v96 = 0;
  v97 = 0;
  v98 = 0;
  v89[1] = 8961;
  v93 = 12;
  v118 = v5;
  v6 = ioctl(fd[0], 0xC020741A, v89);
  v80[1] = 8967;
  v84 = 36;
  v80[0] = 1;
  v81 = 0;
  v82 = 0;
  v83 = 0;
  v85 = 0;
  v86 = 0;
  v87 = 0;
  memset(v88, 0, 32);
  v7 = v6;
  v8 = (char *)ioctl(fd[0], 0xC020741A, v80);
  v9 = *(int **)(a2 + 84);
  v116 = *v9;
  s = v8;
  v10 = ioctl(fd[0], 0xC0207419, v134);
  close(fd[0]);
  if ( (v118 | v7) < 0
    || (((unsigned int)s | v10) & 0x80000000) != 0
    || v105
    || v95
    || v86
    || v104 != 8
    || v94 != 4
    || v85 != 28 )
  {
    return sub_39C88(a2, 3);
  }
  v12 = v88;
  *(_DWORD *)haystack = v106;
  v13 = 0;
  v112 = bswap32(v96);
  v146 = v107;
  v145 = 0;
  v147 = 0;
  do
  {
    v14 = (char *)&v128 + v13 - 1;
    v15 = v12;
    do
    {
      v16 = *--v15;
      *++v14 = v16;
    }
    while ( v12 - 4 != v15 );
    v13 += 4;
    v12 += 4;
  }
  while ( v13 != 28 );
  v118 = 0;
  v17 = "gps";
  do
  {
    if ( strstr(haystack, v17) )
      break;
    ++v118;
    v17 = (&off_B5B04)[2 * v118];
  }
  while ( v17 );
  v115 = v17;
  v18 = "gps";
  v19 = 0;
  do
  {
    if ( strstr((const char *)&v146, v18) )
      break;
    ++v19;
    v18 = (&off_B5B04)[2 * v19];
  }
  while ( v18 );
  LODWORD(v20) = 32;
  v111 = v18;
  v113 = v19;
  LODWORD(v114) = v140;
  v22 = (double)v142 / 1000000.0;
  if ( v22 >= 0.0 )
  {
    v23 = 0;
  }
  else
  {
    v22 = -v22;
    v23 = 1;
  }
  v24 = (double)v135 / 1000000.0;
  ldexp(v20, v21);
  s = (char *)(v9 + 14);
  v25 = vshrd_n_u64(vdup_n_s32(v23).n64_u64[0], 0x20u);
  v26 = sub_8D558(LODWORD(v22), HIDWORD(v22));
  v27 = v136;
  v28 = v141 - 2085978496;
  v29 = v137;
  v110 = v138;
  ++v9[194];
  v30 = v25 + (-(__int64)v25 ^ v26);
  v9[58] = v28 + HIDWORD(v30);
  v31 = v110;
  v9[59] = v30;
  _sprintf_chk(s, 1, 128, "%03d %02d:%02d:%02.6f", v31, v29, v27, v24);
  v32 = strlen(s);
  v33 = v137;
  v9[48] = v138;
  v34 = v136;
  v9[49] = v33;
  LOWORD(v33) = v139;
  v9[50] = v34;
  v122[1] = 1;
  v9[51] = (int)v24;
  v122[0] = v33;
  v124 = 1;
  v123 = 1;
  v125 = 0;
  v126 = 0;
  v127 = 0;
  v9[46] = v32;
  v9[52] = (int)((v24 - (double)(int)v24) * 1000000000.0);
  v35 = sub_64130(v122);
  HIDWORD(v40) = v9[48] - 1;
  v36 = v9[50] + 60 * (v9[49] + 24 * HIDWORD(v40));
  v37 = (double)v9[52] / 1000000000.0;
  v38 = v9[51] + 60 * v36;
  v9[53] = v35;
  v39 = v38 + v35;
  LODWORD(v40) = 32;
  if ( v37 >= 0.0 )
  {
    v41 = 0;
  }
  else
  {
    v37 = -v37;
    v41 = 1;
  }
  ldexp(v40, v36);
  v42 = vshrd_n_u64(vdup_n_s32(v41).n64_u64[0], 0x20u);
  v43 = sub_8D558(LODWORD(v37), HIDWORD(v37));
  v72 = v9[59];
  v44 = -(__int64)v42 ^ v43;
  LODWORD(v43) = v9;
  v121 = v42 + v44;
  v120 = v39 + ((v42 + v44) >> 32);
  HIDWORD(v43) = v120;
  sub_3A258(v43, v42 + v44);
  if ( (_DWORD)v114 == 4 )
  {
    v45 = v133
        - 86401
        + (_DWORD)&loc_15180 * v130
        + 3600 * v131
        + 60 * v132
        + 31622400 * ((unsigned int)(v129 - 1969) >> 2)
        + 31536000 * (v129 - 1970 - ((unsigned int)(v129 - 1969) >> 2));
    v46 = 4 * sub_8D478(v45, 0, 126230400, 0, v72);
    sub_8D478(v45, 0, 126230400, 0, v73);
    if ( v47 > 31535999 )
    {
      v48 = v47 - 31536000;
      if ( v48 > 31535999 )
      {
        v114 = v47 - 63072000;
        v49 = v46 + 2;
        if ( v47 - 63072000 > 31622399 )
        {
          v49 = v46 + 3;
          v114 = v47 - 94694400;
        }
LABEL_39:
        v50 = v114;
        v51 = sub_8D478(v114, HIDWORD(v114), 86400, 0, v74) + 1;
        sub_8D478(v50, HIDWORD(v50), 86400, 0, v75);
        v54 = v52;
        v55 = v53;
        sub_8D478(v52, v53, 3600, 0, v76);
        v130 = v51;
        v129 = v49 + 1970;
        v58 = v56;
        v59 = v57;
        v131 = sub_8D478(v54, v55, 3600, 0, v77);
        v132 = sub_8D478(v58, v59, 60, 0, v78);
        sub_8D478(v58, v59, 60, 0, v79);
        v133 = v60;
        if ( v112 - 1 > 1 && v139 == v49 + 1970 && v138 == v51 )
        {
          v61 = v128;
          if ( v128 == 1 )
            goto LABEL_42;
          if ( v128 == -1 )
          {
            *((_BYTE *)v9 + 40) = 2;
            goto LABEL_43;
          }
        }
        v61 = 0;
LABEL_42:
        *((_BYTE *)v9 + 40) = v61;
LABEL_43:
        *(_BYTE *)(a2 + 91) = *((_BYTE *)v9 + 40);
        sub_39C88(a2, 0);
        if ( v115 && v111 )
        {
          v62 = strcmp((&off_B5B04)[2 * v118 + 1], "LOCL");
          v63 = 2 * v113;
          if ( v62 && (v64 = (&off_B5B04)[v63 + 1], strcmp(v64, "LOCL")) )
          {
            v71 = v116;
            *(_DWORD *)(a2 + 68) |= *(_DWORD *)v116;
            *(_BYTE *)(v71 + 8) = 0;
            strncpy((char *)(v71 + 4), v64, 4u);
            *((_BYTE *)v9 + 760) = 0;
            *(_BYTE *)(a2 + 93) = 0;
          }
          else
          {
            *(_DWORD *)(a2 + 68) &= ~0x20u;
            *((_BYTE *)v9 + 760) = 16;
            *(_BYTE *)(a2 + 93) = 16;
            v65 = sys_peer;
            v66 = a2 == sys_peer;
            if ( a2 != sys_peer )
              v66 = sys_peer == 0;
            if ( !v66 )
            {
              v67 = v116;
              *(_BYTE *)(v116 + 8) = *(_BYTE *)(sys_peer + 93);
              *(_DWORD *)(v67 + 4) = sub_61720(v65 + 16);
            }
          }
          strncpy((char *)v9 + 764, (&off_B5B04)[v63 + 1], 4u);
          *(_DWORD *)(a2 + 112) = v9[191];
        }
        else
        {
          v68 = v116;
          v69 = *(_DWORD *)(v116 + 4);
          *(_DWORD *)(a2 + 68) |= *(_DWORD *)v116;
          v9[191] = v69;
          *(_DWORD *)(a2 + 112) = v69;
          v70 = *(_BYTE *)(v68 + 8);
          *((_BYTE *)v9 + 760) = v70;
          *(_BYTE *)(a2 + 93) = v70;
        }
        goto LABEL_31;
      }
      v47 = v48;
      ++v46;
    }
    v49 = v46;
    v114 = v47;
    goto LABEL_39;
  }
  v9[191] = *(_DWORD *)"LOCL";
  *(_DWORD *)(a2 + 112) = v9[191];
  *((_BYTE *)v9 + 40) = 3;
  *(_BYTE *)(a2 + 91) = 3;
LABEL_31:
  if ( v9[54] == v9[55] )
    return sub_39C88(a2, 1);
  sub_42D0C(a2 + 16, s);
  result = sub_3A534(a2);
  ++v9[194];
  return result;
}
