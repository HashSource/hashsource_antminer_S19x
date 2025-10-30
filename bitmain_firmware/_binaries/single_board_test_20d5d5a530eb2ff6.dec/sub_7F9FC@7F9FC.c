int __fastcall sub_7F9FC(int a1, _DWORD *a2, unsigned int a3, int a4)
{
  int v7; // r0
  int v8; // r9
  _DWORD *v9; // r5
  int v10; // r6
  size_t v11; // r2
  const void *v12; // r1
  int v14; // r0
  int v15; // r0
  _DWORD *v16; // r6
  int v17; // r8
  int v18; // r0
  int v19; // r3
  int v20; // r0
  int v21; // r0
  _BYTE *v22; // r7
  _BOOL4 v23; // r3
  unsigned int *v24; // r8
  _DWORD *v25; // r6
  int v26; // r10
  int v27; // r3
  int v28; // r3
  unsigned int v29; // r1
  unsigned int v30; // r2
  int v31; // t1
  __int16 v32; // r1
  unsigned int v33; // r0
  int v34; // r12
  unsigned int v35; // lr
  int v36; // r0
  int v37; // r3
  int v38; // r0
  int v39; // r1
  unsigned int v40; // r1
  unsigned int v41; // r3
  unsigned int v42; // r2
  int v43; // r3
  int v44; // r1
  int v45; // r2
  int v46; // r3
  int v47; // r3
  int v48; // r3
  int v49; // r3
  int v50; // r3
  int v51; // r3
  int v52; // r3
  _DWORD *v53; // r3
  char *v54; // r6
  char *v55; // r7
  char *v56; // r2
  int v57; // r1
  _DWORD *v58; // r3
  int v59; // r2
  unsigned int v60; // r6
  int v61; // r0
  int v62; // r0
  unsigned int v63; // r6
  _BOOL4 v64; // r3
  _DWORD *v65; // r7
  int v66; // r8
  int v67; // r6
  _DWORD *v68; // r1
  int v69; // r0
  int v70; // r0
  int v71; // r0
  _DWORD *v72; // r3
  int v73; // r0
  int v74; // r2
  int v75; // r1
  _DWORD *v76; // r3
  int v77; // r1
  _DWORD *v78; // r3
  int v79; // r0
  int v80; // r2
  int v81; // r1
  int v82; // r3
  int v83; // [sp+8h] [bp-2E4h]
  int v84; // [sp+Ch] [bp-2E0h]
  int v85; // [sp+10h] [bp-2DCh]
  _BOOL4 v87; // [sp+18h] [bp-2D4h]
  unsigned int v88; // [sp+1Ch] [bp-2D0h]
  int v89; // [sp+20h] [bp-2CCh]
  _DWORD v90[31]; // [sp+48h] [bp-2A4h] BYREF
  char v91; // [sp+C4h] [bp-228h] BYREF
  _QWORD v92[16]; // [sp+C8h] [bp-224h] BYREF
  _BYTE v93[420]; // [sp+148h] [bp-1A4h] BYREF

  if ( !a3 )
  {
    sub_95494(a1, 80, 401, 68, "ssl/record/ssl3_record.c", 950);
    return 0;
  }
  if ( a4 )
  {
    if ( sub_D8D8C(*(_DWORD *)(a1 + 1024)) && (v14 = sub_D8D8C(*(_DWORD *)(a1 + 1024)), sub_D8C78(v14) < 0) )
    {
      v19 = 959;
    }
    else
    {
      v8 = *(_DWORD *)(a1 + 1004);
      if ( !v8 )
      {
LABEL_9:
        v9 = a2;
        v10 = 0;
        do
        {
          v11 = v9[2];
          ++v10;
          v12 = (const void *)v9[6];
          v9 += 12;
          memmove((void *)*(v9 - 7), v12, v11);
          *(v9 - 6) = *(v9 - 7);
        }
        while ( a3 != v10 );
        return 1;
      }
      v15 = sub_D8920(*(_DWORD *)(a1 + 1004));
      v89 = v15;
      if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 100) + 48) & 1) == 0
        || (sub_D8928(v15) & 0xF0007) != 2
        || sub_D8940(v89) <= 1 )
      {
        goto LABEL_7;
      }
      if ( a2[6] == a2[5] )
      {
        v16 = a2;
        v17 = 0;
        while ( 1 )
        {
          ++v17;
          if ( sub_F497C() <= 0 )
            break;
          if ( a3 == v17 )
            goto LABEL_7;
          v18 = v16[17];
          v16 += 12;
          if ( v18 != v16[6] )
            goto LABEL_24;
        }
        v19 = 987;
      }
      else
      {
LABEL_24:
        v19 = 983;
      }
    }
LABEL_88:
    sub_95494(a1, 80, 401, 68, "ssl/record/ssl3_record.c", v19);
    return -1;
  }
  if ( sub_D8D8C(*(_DWORD *)(a1 + 992)) )
  {
    v7 = sub_D8D8C(*(_DWORD *)(a1 + 992));
    if ( sub_D8C78(v7) < 0 )
    {
      v19 = 998;
      goto LABEL_88;
    }
  }
  v8 = *(_DWORD *)(a1 + 972);
  if ( !v8 )
    goto LABEL_9;
  v89 = sub_D8920(*(_DWORD *)(a1 + 972));
LABEL_7:
  if ( !*(_DWORD *)(a1 + 1140) || !v89 )
    goto LABEL_9;
  v20 = sub_D8920(v8);
  v83 = sub_D8900(v20);
  if ( a3 > 1 )
  {
    v21 = sub_D8920(v8);
    if ( (sub_D8928(v21) & 0x800000) == 0 )
    {
      sub_95494(a1, 80, 401, 406, "ssl/record/ssl3_record.c", 1026);
      return -1;
    }
  }
  v22 = v93;
  v23 = v83 != 1;
  if ( !a4 )
    v23 = 0;
  v87 = v23;
  v24 = v90;
  v25 = a2;
  v85 = 0;
  if ( a4 )
    v26 = a1 + 3880;
  else
    v26 = a1 + 3872;
  do
  {
    *v24 = v25[2];
    v38 = sub_D8920(v8);
    if ( (sub_D8928(v38) & 0x200000) != 0 )
    {
      v27 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 100) + 48);
      if ( a4 )
      {
        if ( (v27 & 8) != 0 )
        {
          v28 = a1 + 3880;
          v29 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 3896) + 2);
          v30 = v29 >> 8;
LABEL_36:
          v31 = *(_DWORD *)(v28 + 2);
          BYTE1(v92[0]) = v29;
          LOBYTE(v92[0]) = v30;
          v32 = *(_WORD *)(v28 + 6);
          *(_DWORD *)((char *)v92 + 2) = v31;
          HIWORD(v92[0]) = v32;
          *(_QWORD *)v22 = v92[0];
          goto LABEL_37;
        }
      }
      else if ( (v27 & 8) != 0 )
      {
        v28 = a1 + 3872;
        v29 = **(unsigned __int16 **)(a1 + 3896);
        v30 = v29 >> 8;
        goto LABEL_36;
      }
      v45 = *(_DWORD *)v26;
      v46 = (unsigned __int8)(*(_BYTE *)(v26 + 7) + 1);
      *((_DWORD *)v22 + 1) = *(_DWORD *)(v26 + 4);
      *(_DWORD *)v22 = v45;
      *(_BYTE *)(v26 + 7) = v46;
      if ( !v46 )
      {
        v47 = (unsigned __int8)(*(_BYTE *)(v26 + 6) + 1);
        *(_BYTE *)(v26 + 6) = v47;
        if ( !v47 )
        {
          v48 = (unsigned __int8)(*(_BYTE *)(v26 + 5) + 1);
          *(_BYTE *)(v26 + 5) = v48;
          if ( !v48 )
          {
            v49 = (unsigned __int8)(*(_BYTE *)(v26 + 4) + 1);
            *(_BYTE *)(v26 + 4) = v49;
            if ( !v49 )
            {
              v50 = (unsigned __int8)(*(_BYTE *)(v26 + 3) + 1);
              *(_BYTE *)(v26 + 3) = v50;
              if ( !v50 )
              {
                v51 = (unsigned __int8)(*(_BYTE *)(v26 + 2) + 1);
                *(_BYTE *)(v26 + 2) = v51;
                if ( !v51 )
                {
                  v52 = (unsigned __int8)(*(_BYTE *)(v26 + 1) + 1);
                  *(_BYTE *)(v26 + 1) = v52;
                  if ( !v52 )
                    ++*(_BYTE *)v26;
                }
              }
            }
          }
        }
      }
LABEL_37:
      v33 = v25[2];
      v34 = *(_DWORD *)a1;
      v22[12] = v33;
      v35 = v33 >> 8;
      LOBYTE(v33) = *((_BYTE *)v25 + 4);
      v22[10] = v34;
      v22[11] = v35;
      v22[8] = v33;
      v22[9] = BYTE1(v34);
      v36 = sub_D83D4(v8, 22, 13, v22);
      v85 = v36;
      if ( v36 <= 0 )
      {
        v19 = 1066;
        goto LABEL_88;
      }
      if ( a4 )
      {
        v37 = v25[2] + v36;
        *v24 += v36;
        v25[2] = v37;
        goto LABEL_40;
      }
LABEL_48:
      if ( !*v24 )
        return 0;
      sub_1892EC(*v24, v83);
      if ( v44 )
        return 0;
      goto LABEL_40;
    }
    if ( !v87 )
    {
      if ( a4 )
        goto LABEL_40;
      goto LABEL_48;
    }
    v88 = *v24;
    sub_1892EC(*v24, v83);
    v40 = v83 - v39;
    v41 = v88;
    if ( v40 > 0x100 )
    {
      v19 = 1082;
      goto LABEL_88;
    }
    v42 = v88 + v40;
    if ( v88 + v40 > v88 )
    {
      do
      {
        *(_BYTE *)(v25[6] + v41++) = v40 - 1;
        v42 = *v24 + v40;
      }
      while ( v42 > v41 );
    }
    v43 = v25[2];
    *v24 = v42;
    v25[2] = v40 + v43;
LABEL_40:
    v22 += 13;
    v25 += 12;
    ++v24;
  }
  while ( &v93[13 * a3] != v22 );
  if ( a3 <= 1 )
  {
LABEL_70:
    v60 = sub_D8910(v8, a2[5], a2[6], v90[0]);
    v61 = sub_D8920(v8);
    v62 = sub_D8928(v61);
    if ( (v62 & 0x100000) != 0 )
      v63 = v60 >> 31;
    else
      v63 = __clz(v60);
    if ( (v62 & 0x100000) == 0 )
      v63 >>= 5;
    if ( v63 )
      return -1;
    if ( !a4 )
    {
      if ( (sub_D8928(v89) & ((unsigned int)&loc_F0004 + 3)) == 6 )
      {
        v72 = a2;
        do
        {
          v73 = v72[5];
          v72 += 12;
          v74 = *(v72 - 10);
          v75 = *(v72 - 6) + 8;
          *(v72 - 7) = v73 + 8;
          *(v72 - 6) = v75;
          *(v72 - 10) = v74 - 8;
        }
        while ( v72 != &a2[12 * a3] );
      }
      else if ( (sub_D8928(v89) & ((unsigned int)&loc_F0004 + 3)) == 7 )
      {
        v78 = a2;
        do
        {
          v79 = v78[5];
          v78 += 12;
          v80 = *(v78 - 10);
          v81 = *(v78 - 6) + 8;
          *(v78 - 7) = v79 + 8;
          *(v78 - 6) = v81;
          *(v78 - 10) = v80 - 8;
        }
        while ( v78 != &a2[12 * a3] );
      }
    }
    if ( (**(_DWORD **)(a1 + 124) & 0x100) != 0 || !sub_D8D8C(*(_DWORD *)(a1 + 992)) )
    {
      v84 = 0;
    }
    else
    {
      v70 = sub_D8D8C(*(_DWORD *)(a1 + 992));
      v71 = sub_D8C78(v70);
      if ( v71 < 0 )
      {
        v19 = 1155;
        goto LABEL_88;
      }
      v84 = v71;
    }
    v64 = a4 == 0;
    if ( v83 != 1 && v64 )
    {
      v65 = a2;
      v66 = 0;
      v67 = 1;
      while ( 1 )
      {
        v68 = v65;
        ++v66;
        v65 += 12;
        v69 = sub_7F90C(a1, v68, v83, v84);
        if ( !v69 )
          return 0;
        LODWORD(v92[0]) = ~((((v69 ^ 1) - 1) & ~(v69 ^ 1)) >> 31);
        v67 = v67 & ((((v69 ^ 1) - 1) & ~(v69 ^ 1)) >> 31) | LODWORD(v92[0]);
        if ( a3 == v66 )
        {
          if ( v85 )
            goto LABEL_100;
          return v67;
        }
      }
    }
    if ( !v85 )
      v64 = 0;
    if ( v64 )
    {
      v67 = 1;
LABEL_100:
      v76 = a2;
      do
      {
        v77 = v76[2];
        v76 += 12;
        *(v76 - 10) = v77 - v85;
      }
      while ( v76 != &a2[12 * a3] );
      return v67;
    }
    return 1;
  }
  v53 = a2;
  v54 = &v91;
  v55 = (char *)v92 + 4 * a3 + -4;
  v56 = &v91;
  do
  {
    v57 = v53[5];
    v53 += 12;
    *((_DWORD *)v56 + 1) = v57;
    v56 += 4;
  }
  while ( v55 != v56 );
  if ( sub_D83D4(v8, 34, a3, v92) <= 0 )
  {
    v82 = 1108;
  }
  else
  {
    v58 = a2;
    do
    {
      v59 = v58[6];
      v58 += 12;
      *((_DWORD *)v54 + 1) = v59;
      v54 += 4;
    }
    while ( v55 != v54 );
    if ( sub_D83D4(v8, 35, a3, v92) > 0 && sub_D83D4(v8, 36, a3, v90) > 0 )
      goto LABEL_70;
    v82 = 1120;
  }
  sub_95494(a1, 80, 401, 406, "ssl/record/ssl3_record.c", v82);
  return -1;
}
