int __fastcall sub_4F3C0(unsigned __int8 *a1, char *a2, int a3, unsigned int a4)
{
  int v5; // r1
  char *v6; // r12
  unsigned int v7; // r8
  unsigned int v8; // r9
  unsigned __int8 *v9; // r6
  unsigned int v10; // lr
  char *v11; // r0
  unsigned int v12; // r3
  unsigned __int8 *v13; // r1
  size_t i; // r4
  bool v15; // cc
  char *v16; // r5
  unsigned int v17; // r10
  int v18; // r5
  unsigned __int8 *v19; // r6
  int v20; // r10
  unsigned int v21; // r3
  int v22; // r11
  char *v23; // r2
  int v24; // r1
  unsigned int v25; // r1
  unsigned int v26; // t1
  bool v27; // cc
  char *v28; // r5
  unsigned int v29; // r4
  char *v30; // r3
  int v31; // r1
  unsigned int v32; // r1
  int v33; // r5
  unsigned int v34; // r2
  int *v35; // r3
  int v36; // r4
  int v37; // r1
  int v38; // r4
  int v39; // r2
  int v40; // t1
  unsigned __int16 *v41; // r6
  int v42; // r10
  int v43; // r4
  unsigned int v44; // t1
  int v45; // r3
  int v46; // r0
  int v47; // t1
  int v49; // r10
  int v50; // r3
  bool v51; // zf
  char *v52; // r2
  char v53; // t1
  int *v54; // r11
  int v55; // r1
  int v56; // r3
  char *v57; // r1
  int *v58; // r4
  char *v59; // r2
  int v60; // r10
  int v61; // r5
  unsigned int v62; // r2
  int v63; // r0
  unsigned __int8 *v65; // [sp+8h] [bp-24h]
  char *v66; // [sp+Ch] [bp-20h]
  unsigned int v68; // [sp+18h] [bp-14h]

  v5 = a4 >> 31;
  if ( !a1 )
    v5 = 1;
  if ( v5 )
    return -1;
  v6 = a2 - 0x10000;
  v65 = &a1[a3];
  v7 = (unsigned int)&a1[a3 - 16];
  v66 = &a2[a4];
  v8 = (unsigned int)&a2[a4 - 32];
  if ( !a4 )
  {
    if ( a3 == 1 )
    {
      v63 = *a1;
      if ( *a1 )
        v63 = 1;
      return -v63;
    }
    return -1;
  }
  if ( !a3 )
    return -1;
  v9 = a1;
  v10 = (unsigned int)(v66 - 12);
  v11 = a2;
  v68 = (unsigned int)(v66 - 7);
LABEL_7:
  v12 = *v9;
  v13 = v9 + 1;
  for ( i = v12 >> 4; v12 >> 4 != 15; i = v12 >> 4 )
  {
    v15 = v8 > (unsigned int)v11;
    if ( v8 >= (unsigned int)v11 )
      v15 = v7 > (unsigned int)v13;
    if ( v15 )
    {
      v18 = *((_DWORD *)v13 + 2);
      v19 = &v13[i];
      v20 = *(_DWORD *)v13;
      v21 = v12 & 0xF;
      v22 = *((_DWORD *)v13 + 1);
      v23 = &v11[i];
      v24 = *((_DWORD *)v13 + 3);
      *((_DWORD *)v11 + 2) = v18;
      *(_DWORD *)v11 = v20;
      *((_DWORD *)v11 + 1) = v22;
      *((_DWORD *)v11 + 3) = v24;
      v26 = *(unsigned __int16 *)v19;
      v9 = v19 + 2;
      v25 = v26;
      v27 = v21 > 0xF;
      if ( v21 != 15 )
        v27 = v25 > 7;
      v28 = &v23[-v25];
      if ( v27 )
      {
        v49 = *((_DWORD *)v28 + 1);
        *(_DWORD *)&v11[i] = *(_DWORD *)v28;
        v11 = &v23[v21 + 4];
        *((_DWORD *)v23 + 1) = v49;
        v50 = *((_DWORD *)v28 + 3);
        *((_DWORD *)v23 + 2) = *((_DWORD *)v28 + 2);
        *((_DWORD *)v23 + 3) = v50;
        *((_WORD *)v23 + 8) = *((_WORD *)v28 + 8);
        goto LABEL_7;
      }
      if ( v21 == 15 )
      {
LABEL_36:
        v45 = 0;
        while ( 1 )
        {
          v47 = *v9++;
          v46 = v47;
          v45 += v47;
          if ( v65 - 4 < v9 || v45 < 0 )
            return a1 - v9 - 1;
          if ( v46 != 255 )
          {
            v21 = v45 + 15;
            if ( __CFADD__(v23, v21) )
              return a1 - v9 - 1;
            break;
          }
        }
      }
    }
    else
    {
      v16 = &v11[i];
      v17 = (unsigned int)&v13[i];
LABEL_31:
      v23 = v16;
      if ( (unsigned int)v16 > v10 || v17 > (unsigned int)(v65 - 8) )
      {
        v51 = v66 == v16;
        if ( v66 >= v16 )
          v51 = v65 == (unsigned __int8 *)v17;
        if ( v51 )
        {
          memmove(v11, v13, i);
          return v16 - a2;
        }
LABEL_47:
        v9 = v13;
        return a1 - v9 - 1;
      }
      v41 = (unsigned __int16 *)v17;
      do
      {
        v42 = *(_DWORD *)v13;
        v11 += 8;
        v43 = *((_DWORD *)v13 + 1);
        v13 += 8;
        *((_DWORD *)v11 - 2) = v42;
        *((_DWORD *)v11 - 1) = v43;
      }
      while ( v16 > v11 );
      v21 = v12 & 0xF;
      v44 = *v41;
      v9 = (unsigned __int8 *)(v41 + 1);
      v25 = v44;
      v28 = &v16[-v44];
      if ( v21 == 15 )
        goto LABEL_36;
    }
    v29 = v21 + 4;
    if ( v6 > v28 )
      return a1 - v9 - 1;
    v11 = &v23[v29];
    if ( v25 <= 7 )
    {
      *v23 = 0;
      v23[1] = 0;
      v23[2] = 0;
      v54 = &dword_19FFE8[v25];
      v23[3] = 0;
      *v23 = *v28;
      v55 = *v54;
      v56 = v54[8];
      v23[1] = v28[1];
      v57 = &v28[v55];
      v30 = &v57[-v56];
      v23[2] = v28[2];
      v23[3] = v28[3];
      *((_DWORD *)v23 + 1) = *(_DWORD *)v57;
    }
    else
    {
      v30 = v28 + 8;
      v31 = *((_DWORD *)v28 + 1);
      *(_DWORD *)v23 = *(_DWORD *)v28;
      *((_DWORD *)v23 + 1) = v31;
    }
    v32 = (unsigned int)(v23 + 8);
    if ( (unsigned int)v11 > v10 )
    {
      if ( v11 > v66 - 5 )
        return a1 - v9 - 1;
      if ( v32 < v68 )
      {
        v58 = (int *)v30;
        v59 = v23 + 8;
        do
        {
          v60 = *v58;
          v59 += 8;
          v61 = v58[1];
          v58 += 2;
          *((_DWORD *)v59 - 2) = v60;
          *((_DWORD *)v59 - 1) = v61;
        }
        while ( v68 > (unsigned int)v59 );
        v62 = v68 - v32;
        v32 = (unsigned int)(v66 - 7);
        v30 += v62;
      }
      if ( v32 < (unsigned int)v11 )
      {
        v52 = (char *)(v32 - 1);
        do
        {
          v53 = *v30++;
          *++v52 = v53;
        }
        while ( v11 - 1 != v52 );
      }
      goto LABEL_7;
    }
    v33 = *((_DWORD *)v30 + 1);
    *((_DWORD *)v23 + 2) = *(_DWORD *)v30;
    *((_DWORD *)v23 + 3) = v33;
    if ( v29 <= 0x10 )
      goto LABEL_7;
    v34 = (unsigned int)(v23 + 16);
    v35 = (int *)(v30 + 8);
    do
    {
      v36 = *v35;
      v34 += 8;
      v37 = v35[1];
      v35 += 2;
      *(_DWORD *)(v34 - 8) = v36;
      *(_DWORD *)(v34 - 4) = v37;
    }
    while ( (unsigned int)v11 > v34 );
    v12 = *v9;
    v13 = v9 + 1;
  }
  if ( v13 >= v65 - 15 )
    goto LABEL_47;
  v38 = 0;
  v9 = v65 - 14;
  while ( 1 )
  {
    v40 = *v13++;
    v39 = v40;
    v38 += v40;
    if ( v13 == v9 )
      return a1 - v9 - 1;
    if ( v38 < 0 )
      goto LABEL_47;
    if ( v39 != 255 )
    {
      i = v38 + 15;
      v16 = &v11[i];
      if ( v11 > &v11[i] )
        goto LABEL_47;
      v17 = (unsigned int)&v13[i];
      if ( v13 > &v13[i] )
        goto LABEL_47;
      goto LABEL_31;
    }
  }
}
