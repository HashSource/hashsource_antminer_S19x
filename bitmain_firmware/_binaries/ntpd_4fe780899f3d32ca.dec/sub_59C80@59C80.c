__int16 *__fastcall sub_59C80(int a1, int a2)
{
  int v3; // r0
  int v4; // r0
  int *v5; // r9
  const char *v6; // r5
  int v7; // r0
  const char *v8; // r4
  const char *v9; // r3
  char *v10; // r2
  char v11; // t1
  const char *v12; // r6
  int v13; // r4
  int v14; // r6
  const char *v15; // r4
  double v16; // r0
  int v17; // r2
  double v18; // d0
  double v19; // d8
  __int64 v20; // r4
  int v21; // r12
  int v22; // r3
  int v23; // r2
  int v24; // r0
  size_t v25; // r0
  int v26; // r12
  int v27; // r1
  int v28; // r2
  unsigned __int16 v29; // r3
  int v30; // r0
  int v31; // r12
  double v32; // r0
  double v33; // d7
  int v34; // r4
  int v35; // r2
  double v36; // d0
  int v37; // r4
  __int64 v38; // r2
  int v39; // r12
  __int16 *result; // r0
  unsigned int v41; // r5
  __int64 v42; // r2
  __int64 v43; // r4
  __int64 v44; // r2
  int v45; // r4
  __int64 v46; // r2
  int v47; // r2
  char v48; // r3
  bool v49; // zf
  int v50; // r0
  int v51; // r5
  const char *v52; // r4
  int v53; // r0
  bool v54; // zf
  int v55; // r0
  int v56; // r2
  char v57; // r3
  int v58; // r5
  int v59; // r12
  char *v60; // r0
  int v61; // [sp+0h] [bp-1D4h]
  int v62; // [sp+0h] [bp-1D4h]
  int v63; // [sp+0h] [bp-1D4h]
  int v64; // [sp+0h] [bp-1D4h]
  int v65; // [sp+0h] [bp-1D4h]
  int v66; // [sp+0h] [bp-1D4h]
  int v67; // [sp+0h] [bp-1D4h]
  int v68; // [sp+0h] [bp-1D4h]
  _DWORD v69[5]; // [sp+18h] [bp-1BCh] BYREF
  int v70; // [sp+2Ch] [bp-1A8h]
  int v71; // [sp+30h] [bp-1A4h]
  _BYTE s[44]; // [sp+34h] [bp-1A0h] BYREF
  _DWORD v73[5]; // [sp+60h] [bp-174h] BYREF
  int v74; // [sp+74h] [bp-160h]
  int v75; // [sp+78h] [bp-15Ch]
  unsigned int v76; // [sp+7Ch] [bp-158h]
  int v77; // [sp+80h] [bp-154h]
  int v78; // [sp+84h] [bp-150h]
  _DWORD v79[5]; // [sp+90h] [bp-144h] BYREF
  int v80; // [sp+A4h] [bp-130h]
  int v81; // [sp+A8h] [bp-12Ch]
  int v82; // [sp+ACh] [bp-128h]
  int v83; // [sp+B0h] [bp-124h]
  int v84; // [sp+B4h] [bp-120h]
  int v85; // [sp+B8h] [bp-11Ch]
  unsigned int v86; // [sp+CCh] [bp-108h]
  __int64 v87; // [sp+D0h] [bp-104h]
  __int64 v88; // [sp+D8h] [bp-FCh]
  int v89; // [sp+E0h] [bp-F4h]
  const char *v90; // [sp+E4h] [bp-F0h]
  int v91; // [sp+E8h] [bp-ECh]
  int v92; // [sp+ECh] [bp-E8h]
  const char *v93; // [sp+F0h] [bp-E4h]
  _DWORD v94[5]; // [sp+F4h] [bp-E0h]
  _WORD v95[4]; // [sp+108h] [bp-CCh] BYREF
  char v96; // [sp+110h] [bp-C4h]
  int v97; // [sp+114h] [bp-C0h] BYREF
  int v98; // [sp+118h] [bp-BCh]
  int v99; // [sp+11Ch] [bp-B8h]
  int v100; // [sp+120h] [bp-B4h]
  int v101; // [sp+124h] [bp-B0h]
  int v102; // [sp+128h] [bp-ACh]
  char v103[4]; // [sp+130h] [bp-A4h] BYREF
  unsigned int v104; // [sp+134h] [bp-A0h]
  unsigned __int8 v105; // [sp+139h] [bp-9Bh]
  unsigned __int8 v106; // [sp+13Ah] [bp-9Ah]
  unsigned __int16 v107; // [sp+13Ch] [bp-98h]
  unsigned __int16 v108; // [sp+13Eh] [bp-96h]
  unsigned __int16 v109; // [sp+140h] [bp-94h]
  int v110; // [sp+144h] [bp-90h]
  int v111; // [sp+148h] [bp-8Ch]
  int fd[7]; // [sp+150h] [bp-84h] BYREF
  char haystack[4]; // [sp+16Ch] [bp-68h] BYREF
  char v114; // [sp+170h] [bp-64h]
  char v115[4]; // [sp+174h] [bp-60h] BYREF
  char v116; // [sp+178h] [bp-5Ch]
  _BYTE v117[32]; // [sp+17Ch] [bp-58h] BYREF

  _sprintf_chk(v117, 1, 32, "%s%d", "/dev/tsyncpci", *(unsigned __int8 *)(a2 + 89));
  _printf_chk(1, "Polling device number %d...\n", *(unsigned __int8 *)(a2 + 89));
  v3 = open64(v117, 2048);
  fd[0] = v3;
  if ( v3 < 0 )
    return (__int16 *)sub_64E00(3, "Couldn't open device");
  if ( ioctl(v3, 0xC01C7400, fd) < 0 )
  {
    sub_64E00(3, "Couldn't initialize device");
    return (__int16 *)close(fd[0]);
  }
  v79[0] = 620756993;
  v79[4] = 16;
  memset(&v79[1], 0, 12);
  v80 = 0;
  v81 = 0;
  v82 = 0;
  v83 = 0;
  v84 = 0;
  v85 = 0;
  v94[0] = ioctl(fd[0], 0xC020741A, v79);
  memset(&v73[1], 0, 12);
  v74 = 0;
  v75 = 0;
  v76 = 0;
  v73[0] = 587268097;
  v73[4] = 12;
  v77 = 0;
  v78 = 0;
  v94[1] = ioctl(fd[0], 0xC020741A, v73);
  v69[0] = 587661313;
  v69[4] = 36;
  v90 = s;
  memset(&v69[1], 0, 12);
  v70 = 0;
  v71 = 0;
  memset(s, 0, 0x24u);
  v4 = ioctl(fd[0], 0xC020741A, v69);
  v5 = *(int **)(a2 + 84);
  v93 = (const char *)v4;
  v91 = *v5;
  v92 = ioctl(fd[0], 0xC0207419, v103);
  close(fd[0]);
  if ( (v94[0] | v94[1]) < 0
    || (((unsigned int)v93 | v92) & 0x80000000) != 0
    || v81
    || v75
    || v71
    || v80 != 8
    || v74 != 4
    || v70 != 28 )
  {
    return sub_394A0((__int16 *)a2, 3);
  }
  v6 = v90;
  v7 = 0;
  v8 = v90 + 4;
  v86 = bswap32(v76);
  v114 = 0;
  v116 = 0;
  *(_DWORD *)haystack = v82;
  *(_DWORD *)v115 = v83;
  do
  {
    v9 = &v8[v7];
    v10 = (char *)&v97 + v7;
    do
    {
      v11 = *--v9;
      *v10++ = v11;
    }
    while ( &v6[v7] != v9 );
    v7 += 4;
  }
  while ( v7 != 28 );
  v12 = "gps";
  v13 = 0;
  do
  {
    if ( strstr(haystack, v12) )
      break;
    ++v13;
    v12 = (&off_B4B04)[2 * v13];
  }
  while ( v12 );
  v89 = v13;
  v93 = v12;
  v14 = 0;
  v15 = "gps";
  do
  {
    if ( strstr(v115, v15) )
      break;
    ++v14;
    v15 = (&off_B4B04)[2 * v14];
  }
  while ( v15 );
  v92 = (int)v15;
  v94[1] = v109;
  v18 = (double)v111 / 1000000.0;
  v19 = (double)v104 / 1000000.0;
  LODWORD(v16) = 32;
  ldexp(v16, v17);
  if ( v18 < 0.0 )
    v20 = -sub_8C010(COERCE_UNSIGNED_INT64(-v18), HIDWORD(COERCE_UNSIGNED_INT64(-v18)));
  else
    v20 = sub_8C010(LODWORD(v18), HIDWORD(v18));
  v21 = v106;
  v22 = v107;
  v23 = v110 - 2085978496 + HIDWORD(v20);
  v24 = v5[194] + 1;
  v5[59] = v20;
  v5[58] = v23;
  v5[194] = v24;
  v90 = (const char *)(v5 + 14);
  _sprintf_chk(v5 + 14, 1, 128, "%03d %02d:%02d:%02.6f", v22, v21, v105, v19);
  v25 = strlen((const char *)v5 + 56);
  v26 = v107;
  v95[1] = 1;
  v95[2] = 257;
  v5[51] = (int)v19;
  v27 = v106;
  v28 = v105;
  v95[3] = 0;
  v96 = 0;
  v29 = v108;
  v5[46] = v25;
  v5[48] = v26;
  v5[49] = v27;
  v5[50] = v28;
  v95[0] = v29;
  v5[52] = (int)((v19 - (double)(int)v19) * 1000000000.0);
  v30 = sub_631F0(v95);
  v31 = v5[49];
  HIDWORD(v32) = v5[50];
  v33 = (double)v5[52];
  v34 = v5[48] - 1;
  v5[53] = v30;
  v35 = v5[51];
  v36 = v33 / 1000000000.0;
  v37 = v35 + 60 * (HIDWORD(v32) + 60 * (v31 + 24 * v34)) + v30;
  LODWORD(v32) = 32;
  ldexp(v32, v35);
  if ( v33 / 1000000000.0 < 0.0 )
    v38 = -sub_8C010(COERCE_UNSIGNED_INT64(-v36), HIDWORD(COERCE_UNSIGNED_INT64(-v36)));
  else
    v38 = sub_8C010(LODWORD(v36), HIDWORD(v36));
  v39 = v5[59];
  v94[3] = v37 + HIDWORD(v38);
  v94[4] = v38;
  v61 = v39;
  sub_39A70(v5, v37 + HIDWORD(v38), v38);
  if ( v94[1] == 4 )
  {
    v41 = v102
        - 86401
        + (_DWORD)&off_15180 * v99
        + 3600 * v100
        + 60 * v101
        + 31622400 * ((unsigned int)(v98 - 1969) >> 2)
        + 31536000 * (v98 - 1970 - ((unsigned int)(v98 - 1969) >> 2));
    v94[1] = 4 * sub_8BF30(v41, 0, 126230400, 0, v61);
    sub_8BF30(v41, 0, 126230400, 0, v62);
    v43 = v42;
    if ( v42 > 31535999 )
    {
      v88 = v42 - 31536000;
      if ( v42 - 31536000 > 31535999 )
      {
        v87 = v42 - 63072000;
        if ( v42 - 63072000 <= 31622399 )
        {
          v94[1] += 2;
          v43 = v87;
        }
        else
        {
          v43 = v42 - 94694400;
          v94[1] += 3;
        }
      }
      else
      {
        v43 = v88;
        ++v94[1];
      }
    }
    v94[0] = sub_8BF30(v43, HIDWORD(v43), &off_15180, 0, v63) + 1;
    sub_8BF30(v43, HIDWORD(v43), &off_15180, 0, v64);
    v88 = v44;
    v45 = v94[1] + 1970;
    sub_8BF30(v44, HIDWORD(v44), 3600, 0, v65);
    *(_QWORD *)&v94[1] = v46;
    v99 = v94[0];
    v98 = v45;
    v100 = sub_8BF30(v88, HIDWORD(v88), 3600, 0, v66);
    v101 = sub_8BF30(v94[1], v94[2], 60, 0, v67);
    sub_8BF30(v94[1], v94[2], 60, 0, v68);
    v102 = v47;
    if ( v86 - 1 > 1 && v108 == v45 && v107 == v94[0] )
    {
      v48 = v97;
      if ( v97 == 1 )
        goto LABEL_41;
      if ( v97 == -1 )
      {
        *((_BYTE *)v5 + 40) = 2;
        goto LABEL_42;
      }
    }
    v48 = 0;
LABEL_41:
    *((_BYTE *)v5 + 40) = v48;
LABEL_42:
    *(_BYTE *)(a2 + 91) = *((_BYTE *)v5 + 40);
    sub_394A0((__int16 *)a2, 0);
    v49 = v92 == 0;
    if ( v92 )
      v49 = v93 == 0;
    if ( v49 )
    {
      v55 = v91;
      v56 = *(_DWORD *)(v91 + 4);
      *(_DWORD *)(a2 + 68) |= *(_DWORD *)v91;
      v5[191] = v56;
      *(_DWORD *)(a2 + 112) = v56;
      v57 = *(_BYTE *)(v55 + 8);
      *((_BYTE *)v5 + 760) = v57;
      *(_BYTE *)(a2 + 93) = v57;
    }
    else
    {
      v50 = strcmp((&off_B4B04)[2 * v89 + 1], "LOCL");
      v51 = *(_DWORD *)(a2 + 68);
      v52 = (&off_B4B04)[2 * v14 + 1];
      if ( v50 && strcmp((&off_B4B04)[2 * v14 + 1], "LOCL") )
      {
        v59 = v91;
        v60 = (char *)(v91 + 4);
        *(_DWORD *)(a2 + 68) = *(_DWORD *)v91 | v51;
        *(_BYTE *)(v59 + 8) = 0;
        strncpy(v60, v52, 4u);
        *((_BYTE *)v5 + 760) = 0;
        *(_BYTE *)(a2 + 93) = 0;
      }
      else
      {
        *(_DWORD *)(a2 + 68) = v51 & 0xFFFFFFDF;
        *((_BYTE *)v5 + 760) = 16;
        *(_BYTE *)(a2 + 93) = 16;
        v53 = sys_peer;
        v54 = sys_peer == a2;
        if ( sys_peer != a2 )
          v54 = sys_peer == 0;
        if ( !v54 )
        {
          v58 = v91;
          *(_BYTE *)(v91 + 8) = *(_BYTE *)(sys_peer + 93);
          *(_DWORD *)(v58 + 4) = sub_6083C(v53 + 16);
        }
      }
      strncpy((char *)v5 + 764, v52, 4u);
      *(_DWORD *)(a2 + 112) = v5[191];
    }
    goto LABEL_27;
  }
  v5[191] = *(_DWORD *)"LOCL";
  *(_DWORD *)(a2 + 112) = v5[191];
  *((_BYTE *)v5 + 40) = 3;
  *(_BYTE *)(a2 + 91) = 3;
LABEL_27:
  if ( v5[54] == v5[55] )
    return sub_394A0((__int16 *)a2, 1);
  sub_41F44(a2 + 16, v90);
  result = (__int16 *)sub_39D44(a2);
  ++v5[194];
  return result;
}
