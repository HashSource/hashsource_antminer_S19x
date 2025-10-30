_DWORD *__fastcall sub_21B850(_DWORD *result, int a2, int a3, int a4, char *s2, int a6, _DWORD *a7, _DWORD *a8)
{
  _DWORD *v9; // r5
  _DWORD *v10; // r4
  int v12; // r3
  int v13; // r0
  _DWORD *v14; // r7
  __int64 v15; // r0
  int v16; // r3
  int v17; // r8
  _DWORD *v18; // r9
  int v19; // r3
  int v20; // r3
  int v21; // r11
  _BOOL4 v22; // r2
  int v23; // r2
  _DWORD *v24; // r9
  int v25; // r1
  int v26; // r7
  const char *v27; // r10
  const char *v28; // r0
  int v29; // r11
  const char *v30; // r10
  const char *v31; // r6
  const char *v32; // r0
  bool v33; // zf
  bool v34; // zf
  int *v35; // r0
  int **v36; // r12
  size_t v37; // r3
  int **v38; // r1
  int v39; // r1
  int **v40; // r3
  bool v41; // zf
  int *v42; // r2
  unsigned int v43; // r3
  bool v44; // cc
  bool v45; // zf
  int **v46; // r0
  int v47; // [sp+Ch] [bp-108h]
  size_t n; // [sp+14h] [bp-100h]
  int **v49; // [sp+18h] [bp-FCh] BYREF
  size_t v50; // [sp+1Ch] [bp-F8h]
  _DWORD v51[4]; // [sp+20h] [bp-F4h] BYREF
  int v52; // [sp+30h] [bp-E4h] BYREF
  char v53; // [sp+34h] [bp-E0h]
  char v54; // [sp+35h] [bp-DFh]
  void *ptr; // [sp+38h] [bp-DCh]
  size_t v56; // [sp+3Ch] [bp-D8h]
  _DWORD v57[4]; // [sp+40h] [bp-D4h] BYREF
  void *v58; // [sp+50h] [bp-C4h]
  _BYTE v59[20]; // [sp+58h] [bp-BCh] BYREF
  char v60; // [sp+6Ch] [bp-A8h]
  void *v61; // [sp+70h] [bp-A4h]
  _BYTE v62[16]; // [sp+78h] [bp-9Ch] BYREF
  char v63; // [sp+88h] [bp-8Ch]
  void *v64; // [sp+8Ch] [bp-88h]
  _BYTE v65[16]; // [sp+94h] [bp-80h] BYREF
  char v66; // [sp+A4h] [bp-70h]
  void *v67; // [sp+A8h] [bp-6Ch]
  _BYTE v68[16]; // [sp+B0h] [bp-64h] BYREF
  char v69; // [sp+C0h] [bp-54h]
  int v70; // [sp+100h] [bp-14h]
  int v71; // [sp+104h] [bp-10h]
  _DWORD v72[3]; // [sp+108h] [bp-Ch]

  v9 = result;
  v10 = *(_DWORD **)a2;
  if ( a4 )
    v10 = *(_DWORD **)(a2 + 4);
  if ( !v10 )
  {
    *result = 0;
    result[1] = 0;
    *a7 = 0;
    *a8 = 0;
    return result;
  }
  v12 = (int)s2;
  v13 = a3;
  if ( s2 )
    v13 = a3 + sub_324230(s2, a2);
  v14 = v10 + 4;
  if ( a6 == 2 )
    v13 += 7;
  else
    v12 = 7 * a6;
  if ( a6 != 2 )
    v13 += v12;
  v15 = sub_347674(v13, v10[3]);
  v16 = v14[4 * HIDWORD(v15)];
  v17 = HIDWORD(v15);
  v18 = &v14[4 * HIDWORD(v15)];
  if ( !v16 || a3 != v18[1] )
    goto LABEL_13;
  v21 = v18[2];
  LODWORD(v15) = v21;
  if ( v16 == 1 )
  {
    v47 = v18[3];
  }
  else
  {
    if ( (*(_BYTE *)(v21 + 20) & 0x1F) == 0xE )
    {
      LODWORD(v15) = *(_DWORD *)v21;
    }
    else
    {
      LODWORD(v15) = sub_21B3C4(v21);
      v21 = v18[2];
    }
    v47 = *(_BYTE *)(v21 + 32) & 7;
  }
  v22 = s2 == 0;
  if ( (_DWORD)v15 )
    v22 = 0;
  if ( !v22 )
  {
    v33 = (_DWORD)v15 == 0;
    if ( (_DWORD)v15 )
      v33 = s2 == 0;
    if ( v33 )
      goto LABEL_13;
    if ( v14[4 * v17] == 1 )
    {
      LODWORD(v15) = strcmp((const char *)v15, s2);
      v34 = a6 == v47;
      if ( a6 == v47 )
        v34 = (_DWORD)v15 == 0;
      if ( v34 )
        goto LABEL_24;
LABEL_13:
      v19 = dword_48970C;
      *a7 = v10;
      *a8 = v18;
      if ( v19 )
      {
        v26 = *(_DWORD *)sub_242FC8(v15);
        if ( a4 )
          v27 = "Static";
        else
          v27 = "Global";
        v28 = (const char *)((int (__fastcall *)(int))loc_21A5A4)(a6);
        sub_2594B0(v26, "%s block symbol cache miss for %s, %s\n", v27, s2, v28);
      }
      v20 = v10[1];
      *v9 = 0;
      v9[1] = 0;
      v10[1] = v20 + 1;
      return v9;
    }
    v49 = (int **)v51;
    v35 = (int *)strlen(s2);
    v37 = (size_t)v35;
    v52 = (int)v35;
    if ( (unsigned int)v35 > 0xF )
    {
      n = (size_t)v35;
      v46 = (int **)sub_33B2BC(&v49, &v52, 0);
      v37 = n;
      v49 = v46;
      v51[0] = v52;
    }
    else
    {
      if ( v35 == (int *)1 )
      {
        v38 = (int **)v51;
        v35 = &v52;
        LOBYTE(v51[0]) = *s2;
LABEL_53:
        v50 = v37;
        *((_BYTE *)v38 + v37) = 0;
        v39 = 1;
        v40 = v49;
        v53 = 0;
        v54 = 0;
        v41 = v49 == v51;
        if ( v49 == v51 )
          v40 = (int **)v51;
        ptr = v57;
        v52 = 1;
        if ( v49 == v51 )
        {
          v36 = (int **)v57;
          v35 = *v40;
          v39 = (int)v40[1];
          v42 = v40[2];
          v40 = (int **)v40[3];
        }
        else
        {
          v42 = (int *)v51[0];
          ptr = v40;
        }
        if ( v49 == v51 )
        {
          *v36 = v35;
          v36[1] = (int *)v39;
          v36[2] = v42;
          v36[3] = (int *)v40;
        }
        if ( !v41 )
          v57[0] = v42;
        v72[0] = 0;
        v60 = 0;
        v63 = 0;
        v66 = 0;
        v69 = 0;
        v70 = 0;
        v71 = 0;
        *(_DWORD *)((char *)v72 + 3) = 0;
        v56 = v50;
        if ( sub_21B7F8(v21, (int)&v52) )
        {
          v43 = *(_BYTE *)(v21 + 20) & 0x1D;
          v44 = v43 > 0xC;
          if ( v43 != 12 )
            v44 = (*(_BYTE *)(v21 + 20) & 0x1Fu) - 4 > 1;
          if ( !v44 )
          {
            v45 = a6 == 2;
            if ( (unsigned int)(a6 - 1) <= 1 )
              v45 = v47 == 2;
            if ( v45 )
              goto LABEL_105;
          }
          if ( a6 == v47 )
          {
LABEL_105:
            if ( v69 )
            {
              v69 = 0;
              if ( v67 != v68 )
                sub_339E64(v67);
            }
            if ( v66 )
            {
              v66 = 0;
              if ( v64 != v65 )
                sub_339E64(v64);
            }
            if ( v63 )
            {
              v63 = 0;
              if ( v61 != v62 )
                sub_339E64(v61);
            }
            if ( v60 )
            {
              v60 = 0;
              if ( v58 != v59 )
                sub_339E64(v58);
            }
            LODWORD(v15) = ptr;
            if ( ptr != v57 )
              sub_339E64(ptr);
            goto LABEL_24;
          }
        }
        if ( v69 )
        {
          v69 = 0;
          if ( v67 != v68 )
            sub_339E64(v67);
        }
        if ( v66 )
        {
          v66 = 0;
          if ( v64 != v65 )
            sub_339E64(v64);
        }
        if ( v63 )
        {
          v63 = 0;
          if ( v61 != v62 )
            sub_339E64(v61);
        }
        if ( v60 )
        {
          v60 = 0;
          if ( v58 != v59 )
            sub_339E64(v58);
        }
        LODWORD(v15) = ptr;
        if ( ptr != v57 )
          sub_339E64(ptr);
        goto LABEL_13;
      }
      if ( !v35 )
      {
        v38 = (int **)v51;
        goto LABEL_53;
      }
      v46 = (int **)v51;
    }
    v35 = (int *)memcpy(v46, s2, v37);
    v37 = v52;
    v38 = v49;
    goto LABEL_53;
  }
  if ( a6 != v47 )
    goto LABEL_13;
LABEL_24:
  if ( dword_48970C )
  {
    v29 = *(_DWORD *)sub_242FC8(v15);
    if ( a4 )
      v30 = "Static";
    else
      v30 = "Global";
    v31 = " (not found)";
    if ( v14[4 * v17] != 1 )
      v31 = "";
    v32 = (const char *)((int (__fastcall *)(int))loc_21A5A4)(a6);
    sub_2594B0(v29, "%s block symbol cache hit%s for %s, %s\n", v30, v31, s2, v32);
  }
  v23 = v14[4 * v17];
  ++*v10;
  if ( v23 == 1 )
  {
    *(_QWORD *)v9 = 1;
  }
  else
  {
    v24 = v18 + 2;
    v25 = v24[1];
    *v9 = *v24;
    v9[1] = v25;
  }
  return v9;
}
