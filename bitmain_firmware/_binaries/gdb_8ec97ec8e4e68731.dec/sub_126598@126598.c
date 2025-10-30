int sub_126598()
{
  int *v0; // r10
  int v1; // r7
  int result; // r0
  int v3; // r4
  int v4; // r5
  const char *v5; // r9
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r12
  int *v10; // lr
  bool v11; // zf
  int v12; // r3
  size_t v13; // r2
  int v14; // r0
  int v15; // r1
  int v16; // r2
  int **v17; // r12
  int *v18; // r3
  int *v19; // lr
  bool v20; // zf
  _BYTE *v21; // r3
  int v22; // r2
  int v23; // r1
  int v24; // r9
  int v25; // r3
  char v26; // r2
  const char **v27; // r5
  const char **v28; // r3
  int v29; // r0
  bool v30; // zf
  int v31; // r3
  const char *v32; // r0
  int v33; // r1
  int v34; // r3
  int v35; // r2
  int v36; // r11
  size_t v37; // r2
  void *v38; // r10
  void *v39; // r3
  int v40; // r12
  bool v41; // zf
  int v42; // r3
  int *v43; // r0
  int *v44; // r3
  int v45; // r3
  const char *v46; // r0
  int v47; // r0
  int v48; // r3
  size_t v49; // r0
  _DWORD *v50; // r0
  int v51; // r0
  int *v52; // r0
  const char *v53; // r3
  int v54; // r4
  int v55; // r0
  char *v56; // r9
  int v57; // r0
  char *v58; // r0
  const char *v59; // r5
  const char *v60; // r0
  void *v61; // r0
  _DWORD *v62; // r0
  char *v63; // r5
  size_t v64; // r0
  char *v65; // r4
  char *v66; // r0
  void *v67; // [sp+10h] [bp-64h] BYREF
  int v68; // [sp+14h] [bp-60h]
  _DWORD v69[4]; // [sp+18h] [bp-5Ch] BYREF
  void *v70[2]; // [sp+28h] [bp-4Ch] BYREF
  char v71; // [sp+30h] [bp-44h] BYREF
  void *v72; // [sp+40h] [bp-34h] BYREF
  int v73; // [sp+44h] [bp-30h]
  _DWORD v74[4]; // [sp+48h] [bp-2Ch] BYREF
  void *ptr; // [sp+58h] [bp-1Ch] BYREF
  int v76; // [sp+5Ch] [bp-18h]
  _DWORD v77[4]; // [sp+60h] [bp-14h] BYREF

  v1 = dword_4872D8;
  if ( *(_BYTE *)(dword_4872D8 + 404) )
    return *(_DWORD *)(dword_4872D8 + 408);
  v3 = *(_DWORD *)(dword_4872D8 + 344);
  v68 = *(unsigned __int8 *)(dword_4872D8 + 404);
  LOBYTE(v69[0]) = 0;
  v4 = *(_DWORD *)(v3 + 180);
  v67 = v69;
  if ( !v4 )
  {
    v49 = strlen(*(const char **)(v3 + 4));
    sub_33BC54((int)&v67, 0, 0, *(void **)(v3 + 4), v49);
    goto LABEL_30;
  }
  v5 = (const char *)sub_3245A4(*(_DWORD *)(v4 + 4));
  sub_25AF84(v70, *(_DWORD *)(v3 + 4));
  if ( v70[1] == (void *)0x7FFFFFFF )
    sub_33D184("basic_string::append");
  v6 = sub_33C320(v70, &word_398974, 1);
  v72 = v74;
  v9 = v6;
  v10 = (int *)(v6 + 8);
  v11 = *(_DWORD *)v6 == v6 + 8;
  if ( *(_DWORD *)v6 == v6 + 8 )
  {
    v6 = *v10;
    v0 = v74;
    v7 = v10[1];
    v8 = v10[2];
    v12 = v10[3];
  }
  else
  {
    v72 = *(void **)v6;
    v12 = *(_DWORD *)(v6 + 8);
  }
  if ( v11 )
  {
    *v0 = v6;
    v0[1] = v7;
    v0[2] = v8;
    v0[3] = v12;
    v0 += 4;
  }
  else
  {
    v74[0] = v12;
  }
  v73 = *(_DWORD *)(v9 + 4);
  *(_DWORD *)(v9 + 4) = 0;
  *(_BYTE *)(v9 + 8) = 0;
  *(_DWORD *)v9 = v10;
  v13 = strlen(v5);
  if ( 0x7FFFFFFF - v73 < v13 )
    sub_33D184("basic_string::append");
  v14 = sub_33C320(&v72, v5, v13);
  ptr = v77;
  v17 = (int **)v14;
  v19 = (int *)(v14 + 8);
  v18 = *(int **)v14;
  v20 = *(_DWORD *)v14 == v14 + 8;
  if ( *(_DWORD *)v14 == v14 + 8 )
  {
    v0 = v77;
    v15 = *(_DWORD *)(v14 + 12);
    v16 = *(_DWORD *)(v14 + 16);
    v18 = *(int **)(v14 + 20);
    v14 = *v19;
  }
  else
  {
    ptr = *(void **)v14;
  }
  if ( v20 )
  {
    *v0 = v14;
    v0[1] = v15;
    v0[2] = v16;
    v0[3] = (int)v18;
  }
  else
  {
    v18 = v17[2];
  }
  if ( !v20 )
    v77[0] = v18;
  v76 = (int)v17[1];
  *v17 = v19;
  v17[1] = 0;
  *((_BYTE *)v17 + 8) = 0;
  v21 = v67;
  if ( ptr == v77 )
  {
    sub_33B48C(&v67, &ptr);
    v21 = ptr;
    goto LABEL_24;
  }
  if ( v67 == v69 )
  {
    v67 = ptr;
    v68 = v76;
    v69[0] = v77[0];
    goto LABEL_61;
  }
  v67 = ptr;
  v68 = v76;
  v22 = v69[0];
  v69[0] = v77[0];
  if ( !v21 )
  {
LABEL_61:
    ptr = v77;
    v21 = v77;
    goto LABEL_24;
  }
  ptr = v21;
  v77[0] = v22;
LABEL_24:
  v76 = 0;
  *v21 = 0;
  if ( ptr != v77 )
    sub_339E64(ptr);
  if ( v72 != v74 )
    sub_339E64(v72);
  if ( v70[0] != &v71 )
    sub_339E64(v70[0]);
LABEL_30:
  if ( (unsigned int)(0x7FFFFFFF - v68) <= 3 )
    sub_33D184("basic_string::append");
  sub_33C320(&v67, ".dwp", 4);
  sub_11D6AC(&v72, (int)v67);
  if ( v72 )
    goto LABEL_32;
  v59 = *(const char **)(v3 + 4);
  v60 = (const char *)sub_1B87A8(v3);
  v61 = (void *)strcmp(v59, v60);
  if ( v61 )
  {
    v63 = (char *)sub_1B87A8(v3);
    v64 = strlen(v63);
    sub_33BC54((int)&v67, 0, v68, v63, v64);
    if ( (unsigned int)(0x7FFFFFFF - v68) <= 3 )
      sub_33D184("basic_string::append");
    sub_33C320(&v67, ".dwp", 4);
    sub_11D6AC(&ptr, (int)v67);
    v61 = v72;
    v27 = (const char **)ptr;
    if ( v72 )
      v61 = (void *)((int (*)(void))loc_1625A8)();
    v72 = v27;
  }
  else
  {
    v27 = (const char **)v72;
  }
  if ( v27 )
  {
LABEL_32:
    v23 = *(_DWORD *)(v3 + 64);
    v24 = v3 + 48;
    v25 = *(_DWORD *)(v3 + 60);
    v26 = v23 - v25;
    if ( (unsigned int)(v23 - v25) <= 0xFF )
    {
      obstack_newchunk((struct obstack *)(v3 + 48), 256);
      v25 = *(_DWORD *)(v3 + 60);
      v23 = *(_DWORD *)(v3 + 64);
    }
    v27 = *(const char ***)(v3 + 56);
    v28 = (const char **)(v25 + 256);
    v29 = *(_DWORD *)(v3 + 72);
    *(_DWORD *)(v3 + 60) = v28;
    v30 = v28 == v27;
    if ( v28 == v27 )
      v26 = *(_BYTE *)(v3 + 88);
    v31 = ((unsigned int)v28 + v29) & ~v29;
    *(_DWORD *)(v3 + 60) = v31;
    if ( v30 )
      *(_BYTE *)(v3 + 88) = v26 | 2;
    if ( v31 - *(_DWORD *)(v3 + 52) > (unsigned int)(v23 - *(_DWORD *)(v3 + 52)) )
    {
      v31 = v23;
      *(_DWORD *)(v3 + 60) = v23;
    }
    *(_DWORD *)(v3 + 56) = v31;
    memset(v27, 0, 0x100u);
    v32 = (const char *)v72;
    v33 = *(_DWORD *)(v3 + 64);
    v34 = *(_DWORD *)(v3 + 60);
    v35 = *((_DWORD *)v72 + 27) + 1;
    v36 = 4 * v35;
    *v27 = *(const char **)v72;
    v72 = 0;
    v27[62] = (const char *)v35;
    v27[2] = v32;
    if ( 4 * v35 > (unsigned int)(v33 - v34) )
    {
      obstack_newchunk((struct obstack *)(v3 + 48), 4 * v35);
      v34 = *(_DWORD *)(v3 + 60);
      v33 = *(_DWORD *)(v3 + 64);
      v37 = 4 * (_DWORD)v27[62];
    }
    else
    {
      v37 = 4 * v35;
    }
    v38 = *(void **)(v3 + 56);
    v39 = (void *)(v34 + v36);
    v40 = *(_DWORD *)(v3 + 72);
    *(_DWORD *)(v3 + 60) = v39;
    v41 = v39 == v38;
    if ( v39 == v38 )
      LOBYTE(v32) = *(_BYTE *)(v3 + 88);
    v42 = ((unsigned int)v39 + v40) & ~v40;
    *(_DWORD *)(v3 + 60) = v42;
    if ( v41 )
      *(_BYTE *)(v3 + 88) = (unsigned __int8)v32 | 2;
    if ( v42 - *(_DWORD *)(v3 + 52) > (unsigned int)(v33 - *(_DWORD *)(v3 + 52)) )
    {
      v42 = v33;
      *(_DWORD *)(v3 + 60) = v33;
    }
    *(_DWORD *)(v3 + 56) = v42;
    memset(v38, 0, v37);
    v27[63] = (const char *)v38;
    sub_2ADCFC(v27[2], &loc_11EF20, v27);
    v27[58] = (const char *)sub_120378(v27, 0);
    v43 = sub_120378(v27, 1);
    v44 = (int *)v27[58];
    v27[59] = (const char *)v43;
    if ( v44 )
    {
      v45 = *v44;
      if ( v43 && *v43 != v45 )
      {
        v65 = sub_98880(v45, 0);
        v66 = sub_98880(*(_DWORD *)v27[59], 0);
        sub_946E0(
          "Dwarf Error: DWP file CU version %s doesn't match TU version %s [in DWP file %s]",
          v65,
          v66,
          (const char *)v67);
      }
      v46 = (const char *)v45;
      v27[1] = (const char *)v45;
    }
    else
    {
      if ( !v43 )
      {
        v27[1] = (const char *)2;
LABEL_64:
        sub_2ADCFC(v27[2], &loc_11ED94, v27);
LABEL_54:
        v27[60] = (const char *)sub_323980(3, sub_12462C, sub_124634, 0, v24, sub_25AEEC, nullsub_44);
        v47 = sub_323980(3, sub_12462C, sub_124634, 0, v24, sub_25AEEC, nullsub_44);
        v48 = dword_4872F4;
        v27[61] = (const char *)v47;
        if ( v48 )
        {
          v50 = (_DWORD *)sub_242FC8(v47);
          v51 = sub_2594B0(*v50, "DWP file found: %s\n", *v27);
          v52 = (int *)sub_242FC8(v51);
          v53 = v27[58];
          v54 = *v52;
          if ( v53 )
            v55 = *((_DWORD *)v53 + 2);
          else
            v55 = 0;
          v56 = sub_98880(v55, 0);
          v57 = (int)v27[59];
          if ( v57 )
            v57 = *(_DWORD *)(v57 + 8);
          v58 = sub_98880(v57, 0);
          sub_2594B0(v54, "    %s CUs, %s TUs\n", v56, v58);
        }
        goto LABEL_55;
      }
      v46 = (const char *)*v43;
      v27[1] = v46;
    }
    if ( v46 != (const char *)2 )
      goto LABEL_54;
    goto LABEL_64;
  }
  if ( dword_4872F4 )
  {
    v62 = (_DWORD *)sub_242FC8(v61);
    sub_2594B0(*v62, "DWP file not found: %s\n", (const char *)v67);
    v27 = 0;
LABEL_55:
    if ( v72 )
      ((void (*)(void))loc_1625A8)();
  }
  if ( v67 != v69 )
    sub_339E64(v67);
  *(_DWORD *)(v1 + 408) = v27;
  result = *(_DWORD *)(dword_4872D8 + 408);
  *(_BYTE *)(dword_4872D8 + 404) = 1;
  return result;
}
