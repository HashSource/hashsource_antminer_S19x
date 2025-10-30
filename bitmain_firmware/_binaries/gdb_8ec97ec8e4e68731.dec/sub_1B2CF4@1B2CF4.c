int __fastcall sub_1B2CF4(int result)
{
  int v1; // r4
  int v2; // r3
  _DWORD *v3; // r8
  signed int v4; // r7
  int v5; // r2
  int v6; // r6
  int v7; // r3
  int v8; // r5
  char *v9; // r9
  int v10; // r6
  _DWORD *v11; // r10
  int v12; // r11
  char *v13; // r5
  int v14; // r4
  char *v15; // lr
  int v16; // r0
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int *v20; // r12
  int v21; // r0
  int v22; // r1
  int v23; // r2
  int v24; // r3
  int v25; // r1
  int v26; // r2
  int v27; // r3
  char *v28; // r4
  char *v29; // r7
  char *v30; // r5
  char *v31; // r6
  char *v32; // r12
  int v33; // r1
  int v34; // r2
  int v35; // r3
  int v36; // r1
  int v37; // r2
  int v38; // r3
  int v39; // r1
  int v40; // r2
  int v41; // r3
  int v42; // r0
  int v43; // r1
  int v44; // r2
  int v45; // r3
  int *v46; // r4
  int *v47; // r5
  int v48; // r0
  int v49; // r1
  int v50; // r2
  int v51; // r3
  int v52; // r1
  int v53; // r2
  int v54; // r3
  int v55; // r2
  char v56; // r1
  int v57; // r4
  int v58; // r12
  int v59; // r0
  int v60; // r3
  bool v61; // zf
  int v62; // r3
  int v63; // r8
  _DWORD *v64; // r12
  _DWORD *v65; // r3
  _DWORD *v66; // r2
  int v67; // r11
  _BYTE *v68; // r0
  _DWORD *v69; // r12
  int v70; // r1
  unsigned int v71; // r3
  int v72; // r2
  int v73; // t1
  char v74; // r6
  int v75; // r0
  int v76; // r0
  int v77; // r3
  int v78; // lr
  int *v79; // r6
  int v80; // r10
  _DWORD *v81; // r3
  int i; // r0
  int v83; // r1
  int *v84; // r12
  _DWORD *v85; // r2
  int v86; // r2
  int *v87; // r0
  int v88; // r5
  int v89; // r4
  const char *v90; // r0
  int *v91; // r2
  _DWORD *v92; // r6
  int v93; // [sp+0h] [bp-14h]
  int v94; // [sp+0h] [bp-14h]
  unsigned int v95; // [sp+4h] [bp-10h]
  int v96; // [sp+Ch] [bp-8h] BYREF

  v1 = *(_DWORD *)(*(_DWORD *)result + 40);
  if ( (*(_BYTE *)(v1 + 92) & 1) != 0 )
    return result;
  v2 = *(_DWORD *)(result + 12);
  if ( v2 <= 0 )
    return result;
  v3 = (_DWORD *)result;
  if ( dword_48999C )
  {
    v87 = (int *)sub_242FC8(result);
    v88 = v3[3];
    v89 = *v87;
    v90 = (const char *)sub_1B87A8(*v3);
    sub_2594B0(v89, "Installing %d minimal symbols of objfile %s.\n", v88, v90);
    v2 = v3[3];
    v1 = *(_DWORD *)(*v3 + 40);
  }
  v4 = *(_DWORD *)(v1 + 84);
  v5 = *(_DWORD *)(v1 + 12);
  v93 = v4 + v2 + 1;
  v6 = 48 * v93;
  if ( 48 * v93 > (unsigned int)(*(_DWORD *)(v1 + 16) - v5) )
  {
    obstack_newchunk((struct obstack *)v1, v6);
    v5 = *(_DWORD *)(v1 + 12);
    v7 = *(_DWORD *)(*v3 + 40);
    v4 = *(_DWORD *)(v7 + 84);
  }
  else
  {
    v7 = v1;
  }
  v8 = 2 * v4;
  v9 = *(char **)(v7 + 8);
  *(_DWORD *)(v1 + 12) = v5 + v6;
  v10 = 48 * v4;
  if ( !v4 )
  {
    v11 = (_DWORD *)v3[1];
    if ( !v11 )
    {
      qsort(v9, 0, 0x30u, (__compar_fn_t)sub_1B0D14);
      goto LABEL_30;
    }
    goto LABEL_10;
  }
  memcpy(v9, *(const void **)(v7 + 80), 48 * v4);
  v11 = (_DWORD *)v3[1];
  v4 = *(_DWORD *)(*(_DWORD *)(*v3 + 40) + 84);
  if ( v11 )
  {
    v8 = 2 * v4;
LABEL_10:
    v12 = v3[2];
    if ( v12 > 0 )
      goto LABEL_13;
    while ( 1 )
    {
      v11 = (_DWORD *)*v11;
      v12 = 127;
      v3[2] = 127;
      if ( !v11 )
        break;
LABEL_13:
      v13 = &v9[16 * v8 + 16 * v4];
      v14 = 0;
      do
      {
        v15 = &v13[v14 * 4];
        v16 = v11[v14 + 2];
        v17 = v11[v14 + 3];
        v18 = v11[v14 + 4];
        v19 = v11[v14 + 5];
        v20 = &v11[v14 + 6];
        v14 += 12;
        *(_DWORD *)v15 = v16;
        *((_DWORD *)v15 + 1) = v17;
        *((_DWORD *)v15 + 2) = v18;
        *((_DWORD *)v15 + 3) = v19;
        v15 += 16;
        v21 = *v20;
        v22 = v20[1];
        v23 = v20[2];
        v24 = v20[3];
        v20 += 4;
        *(_DWORD *)v15 = v21;
        *((_DWORD *)v15 + 1) = v22;
        *((_DWORD *)v15 + 2) = v23;
        *((_DWORD *)v15 + 3) = v24;
        v15 += 16;
        v25 = v20[1];
        v26 = v20[2];
        v27 = v20[3];
        *(_DWORD *)v15 = *v20;
        *((_DWORD *)v15 + 1) = v25;
        *((_DWORD *)v15 + 2) = v26;
        *((_DWORD *)v15 + 3) = v27;
      }
      while ( 12 * v12 != v14 );
      v4 += v12;
      v8 = 2 * v4;
    }
    v10 = 16 * (v8 + v4);
    goto LABEL_18;
  }
  v10 = 48 * v4;
LABEL_18:
  qsort(v9, v4, 0x30u, (__compar_fn_t)sub_1B0D14);
  if ( v4 > 0 )
  {
    v28 = v9;
    v29 = &v9[v10 - 48];
    v30 = v9;
    v31 = v9 + 48;
    while ( v29 > v28 )
    {
      if ( *((_DWORD *)v31 - 10) == *((_DWORD *)v31 + 2)
        && *((__int16 *)v31 - 13) == *((__int16 *)v31 + 11)
        && !strcmp(*((const char **)v31 - 12), *(const char **)v31) )
      {
        if ( (v28[80] & 0xF) == 0 )
          v28[80] = v28[80] & 0xF0 | v28[32] & 0xF;
      }
      else
      {
        v32 = v30;
        v33 = *((_DWORD *)v31 - 11);
        v34 = *((_DWORD *)v31 - 10);
        v35 = *((_DWORD *)v31 - 9);
        v30 += 48;
        *(_DWORD *)v32 = *((_DWORD *)v31 - 12);
        *((_DWORD *)v32 + 1) = v33;
        *((_DWORD *)v32 + 2) = v34;
        *((_DWORD *)v32 + 3) = v35;
        v32 += 16;
        v36 = *((_DWORD *)v31 - 7);
        v37 = *((_DWORD *)v31 - 6);
        v38 = *((_DWORD *)v31 - 5);
        *(_DWORD *)v32 = *((_DWORD *)v31 - 8);
        *((_DWORD *)v32 + 1) = v36;
        *((_DWORD *)v32 + 2) = v37;
        *((_DWORD *)v32 + 3) = v38;
        v32 += 16;
        v39 = *((_DWORD *)v31 - 3);
        v40 = *((_DWORD *)v31 - 2);
        v41 = *((_DWORD *)v31 - 1);
        *(_DWORD *)v32 = *((_DWORD *)v31 - 4);
        *((_DWORD *)v32 + 1) = v39;
        *((_DWORD *)v32 + 2) = v40;
        *((_DWORD *)v32 + 3) = v41;
      }
      v28 += 48;
      v31 += 48;
    }
    v42 = *(_DWORD *)v28;
    v43 = *((_DWORD *)v28 + 1);
    v44 = *((_DWORD *)v28 + 2);
    v45 = *((_DWORD *)v28 + 3);
    v46 = (int *)(v28 + 16);
    v10 = v30 + 48 - v9;
    *(_DWORD *)v30 = v42;
    *((_DWORD *)v30 + 1) = v43;
    *((_DWORD *)v30 + 2) = v44;
    *((_DWORD *)v30 + 3) = v45;
    v47 = (int *)(v30 + 16);
    v4 = -1431655765 * (v10 >> 4);
    v48 = *v46;
    v49 = v46[1];
    v50 = v46[2];
    v51 = v46[3];
    v46 += 4;
    *v47 = v48;
    v47[1] = v49;
    v47[2] = v50;
    v47[3] = v51;
    v47 += 4;
    v52 = v46[1];
    v53 = v46[2];
    v54 = v46[3];
    *v47 = *v46;
    v47[1] = v52;
    v47[2] = v53;
    v47[3] = v54;
  }
LABEL_30:
  v55 = *(_DWORD *)(*v3 + 40);
  v56 = 3 * (v4 + 1 - v93);
  v57 = *(_DWORD *)(v55 + 8);
  v58 = *(_DWORD *)(v55 + 24);
  v59 = *(_DWORD *)(v55 + 16);
  v60 = *(_DWORD *)(v55 + 12) + 48 * (v4 + 1 - v93);
  v61 = v60 == v57;
  *(_DWORD *)(v55 + 12) = v60;
  if ( v60 == v57 )
    v56 = *(_BYTE *)(v55 + 40);
  v62 = (v60 + v58) & ~v58;
  *(_DWORD *)(v55 + 12) = v62;
  if ( v61 )
    *(_BYTE *)(v55 + 40) = v56 | 2;
  if ( v62 - *(_DWORD *)(v55 + 4) > (unsigned int)(v59 - *(_DWORD *)(v55 + 4)) )
  {
    v62 = v59;
    *(_DWORD *)(v55 + 12) = v59;
  }
  *(_DWORD *)(v55 + 8) = v62;
  memset((void *)(v57 + v10), 0, 0x30u);
  v63 = *v3;
  v64 = *(_DWORD **)(v63 + 40);
  v65 = v64 + 23;
  v66 = v64 + 2062;
  v64[21] = v4;
  result = (int)(v64 + 2062);
  v64[20] = v57;
  do
  {
    v65[1] = 0;
    ++v65;
    v66[1] = 0;
    ++v66;
  }
  while ( (_DWORD *)result != v65 );
  if ( v4 > 0 )
  {
    v67 = v57 + 48 * v4;
    while ( 1 )
    {
      v68 = *(_BYTE **)v57;
      v69 = v64 + 24;
      *(_DWORD *)(v57 + 36) = 0;
      v70 = (unsigned __int8)*v68;
      if ( *v68 )
      {
        v71 = 0;
        do
        {
          v72 = byte_438798[v70];
          v73 = (unsigned __int8)*++v68;
          v70 = v73;
          v71 = 67 * v71 - 113 + v72;
        }
        while ( v73 );
        v69 += v71 % 0x7F7;
      }
      *(_DWORD *)(v57 + 36) = *v69;
      *v69 = v57;
      *(_DWORD *)(v57 + 40) = 0;
      result = sub_21B7DC(v57);
      if ( *(_DWORD *)v57 != result && !*(_DWORD *)(v57 + 40) )
        break;
LABEL_46:
      v57 += 48;
      if ( v57 == v67 )
        return result;
      v64 = *(_DWORD **)(v63 + 40);
    }
    v74 = *(_BYTE *)(v57 + 20);
    v75 = sub_21B7DC(v57);
    v76 = sub_21CBA8(v74 & 0x1F, v75);
    v77 = *(_DWORD *)(v63 + 40);
    v95 = v76;
    v78 = v77 + 0x4000;
    v94 = v77;
    v79 = *(int **)(v77 + 16408);
    v80 = *(_BYTE *)(v57 + 20) & 0x1F;
    v81 = *(_DWORD **)(v77 + 16412);
    for ( i = v81 - v79; i > 0; i = v83 - v86 - 1 )
    {
      v83 = i >> 1;
      v84 = &v79[i >> 1];
      if ( *v84 >= v80 )
      {
        while ( 1 )
        {
          v86 = v83 >> 1;
          if ( !v83 )
            goto LABEL_55;
          v84 = &v79[v86];
          if ( *v84 < v80 )
            goto LABEL_62;
          v83 >>= 1;
        }
      }
      v86 = i >> 1;
      v83 = i;
LABEL_62:
      v79 = v84 + 1;
    }
LABEL_55:
    if ( v81 == v79 )
    {
      v91 = *(int **)(v78 + 32);
      v96 = *(_BYTE *)(v57 + 20) & 0x1F;
      if ( v79 != v91 )
      {
        v61 = v79 == 0;
        v92 = v79 + 1;
        if ( !v61 )
          *(v92 - 1) = v80;
        *(_DWORD *)(v78 + 28) = v92;
        goto LABEL_61;
      }
    }
    else
    {
      if ( *v79 == v80 )
      {
LABEL_61:
        result = 18957679 * v95;
        *(_DWORD *)(v57 + 40) = *(_DWORD *)(v94 + 8252 + 4 * (v95 % 0x7F7));
        *(_DWORD *)(v94 + 8252 + 4 * (v95 % 0x7F7)) = v57;
        goto LABEL_46;
      }
      v85 = *(_DWORD **)(v78 + 32);
      v96 = *(_BYTE *)(v57 + 20) & 0x1F;
      if ( v81 != v85 )
      {
        *v81 = *(v81 - 1);
        *(_DWORD *)(v78 + 28) = v81 + 1;
        if ( v81 - 1 != v79 )
        {
          memmove(v79 + 1, v79, (char *)(v81 - 1) - (char *)v79);
          v94 = *(_DWORD *)(v63 + 40);
        }
        *v79 = v80;
        goto LABEL_61;
      }
    }
    sub_1B3294(v94 + 16408, v79, &v96);
    v94 = *(_DWORD *)(v63 + 40);
    goto LABEL_61;
  }
  return result;
}
