int __fastcall sub_48AF4(unsigned __int8 *a1, char *a2, int a3, unsigned int a4, int a5)
{
  int v6; // r1
  char *v7; // r7
  unsigned __int16 *v8; // r9
  unsigned int v9; // r10
  unsigned __int16 *v10; // r6
  char *v11; // r0
  unsigned int v12; // r8
  unsigned int v13; // lr
  unsigned __int16 *v14; // r1
  size_t v15; // r3
  bool v16; // cc
  char *v17; // r5
  unsigned __int16 *v18; // r6
  unsigned int v19; // r4
  int v20; // r11
  unsigned __int16 *v21; // r6
  int v22; // lr
  char *v23; // r2
  int v24; // r3
  unsigned int v25; // r1
  unsigned int v26; // t1
  bool v27; // cc
  char *v28; // r5
  int v30; // r3
  int v31; // r2
  int v32; // t1
  int v33; // r4
  int v34; // r3
  unsigned int v35; // t1
  unsigned int v36; // r4
  int v37; // lr
  int v38; // r1
  char *v39; // r3
  unsigned int v40; // r5
  int v41; // r1
  unsigned int v42; // r2
  int *v43; // r3
  int v44; // r4
  int v45; // r1
  int v46; // r3
  int v47; // r0
  int v48; // t1
  bool v49; // zf
  int v50; // lr
  int v51; // r3
  int *v52; // r11
  int v53; // r1
  int v54; // r3
  char *v55; // r1
  char *v56; // r2
  char v57; // t1
  int *v58; // r4
  unsigned int v59; // r1
  int v60; // lr
  int v61; // r2
  unsigned int v62; // r2
  int v63; // r0
  unsigned int v64; // [sp+0h] [bp-2Ch]
  char *v66; // [sp+Ch] [bp-20h]
  unsigned int v68; // [sp+18h] [bp-14h]

  if ( a1 )
    v6 = a4 >> 31;
  else
    v6 = 1;
  v7 = &a2[-a5];
  if ( v6 )
    return -1;
  v8 = (unsigned __int16 *)&a1[a3];
  v66 = &a2[a4];
  v64 = (unsigned int)&a1[a3 - 16];
  v9 = (unsigned int)&a2[a4 - 32];
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
  v10 = (unsigned __int16 *)a1;
  v11 = a2;
  v12 = (unsigned int)(v66 - 12);
  v68 = (unsigned int)(v66 - 7);
  while ( 1 )
  {
    while ( 1 )
    {
      v13 = *(unsigned __int8 *)v10;
      v14 = (unsigned __int16 *)((char *)v10 + 1);
      v15 = v13 >> 4;
      if ( v13 >> 4 == 15 )
      {
        if ( v14 >= (unsigned __int16 *)((char *)v8 - 15) )
          goto LABEL_48;
        v10 = v8 - 7;
        v30 = 0;
        while ( 1 )
        {
          v32 = *(unsigned __int8 *)v14;
          v14 = (unsigned __int16 *)((char *)v14 + 1);
          v31 = v32;
          v30 += v32;
          if ( v14 == v10 )
            return a1 - (unsigned __int8 *)v10 - 1;
          if ( v30 < 0 )
            goto LABEL_48;
          if ( v31 != 255 )
          {
            v15 = v30 + 15;
            v17 = &v11[v15];
            if ( v11 > &v11[v15] )
              goto LABEL_48;
            v18 = (unsigned __int16 *)((char *)v14 + v15);
            if ( v14 > (unsigned __int16 *)((char *)v14 + v15) )
              goto LABEL_48;
            goto LABEL_26;
          }
        }
      }
      v16 = v9 > (unsigned int)v11;
      if ( v9 >= (unsigned int)v11 )
        v16 = v64 > (unsigned int)v14;
      if ( !v16 )
        break;
      v19 = v13 & 0xF;
      v20 = *(_DWORD *)v14;
      v21 = (unsigned __int16 *)((char *)v14 + v15);
      v22 = *((_DWORD *)v14 + 1);
      v23 = &v11[v15];
      v24 = *((_DWORD *)v14 + 3);
      *((_DWORD *)v11 + 2) = *((_DWORD *)v14 + 2);
      *(_DWORD *)v11 = v20;
      *((_DWORD *)v11 + 1) = v22;
      *((_DWORD *)v11 + 3) = v24;
      v26 = *v21;
      v10 = v21 + 1;
      v25 = v26;
      v27 = v19 > 0xF;
      if ( v19 != 15 )
        v27 = v25 > 7;
      v28 = &v23[-v25];
      if ( !v27 )
        goto LABEL_30;
      if ( v7 > v28 )
        return a1 - (unsigned __int8 *)v10 - 1;
      v50 = *((_DWORD *)v28 + 1);
      v11 = &v23[v19 + 4];
      *(_DWORD *)v23 = *(_DWORD *)v28;
      *((_DWORD *)v23 + 1) = v50;
      v51 = *((_DWORD *)v28 + 3);
      *((_DWORD *)v23 + 2) = *((_DWORD *)v28 + 2);
      *((_DWORD *)v23 + 3) = v51;
      *((_WORD *)v23 + 8) = *((_WORD *)v28 + 8);
    }
    v17 = &v11[v15];
    v18 = (unsigned __int16 *)((char *)v14 + v15);
LABEL_26:
    v23 = v17;
    if ( (unsigned int)v17 > v12 || v18 > v8 - 4 )
      break;
    do
    {
      v33 = *(_DWORD *)v14;
      v11 += 8;
      v34 = *((_DWORD *)v14 + 1);
      v14 += 4;
      *((_DWORD *)v11 - 2) = v33;
      *((_DWORD *)v11 - 1) = v34;
    }
    while ( v17 > v11 );
    v35 = *v18;
    v10 = v18 + 1;
    v25 = v35;
    v19 = v13 & 0xF;
    v28 = &v17[-v35];
LABEL_30:
    if ( v19 == 15 )
    {
      v46 = 0;
      while ( 1 )
      {
        v48 = *(unsigned __int8 *)v10;
        v10 = (unsigned __int16 *)((char *)v10 + 1);
        v47 = v48;
        v46 += v48;
        if ( v8 - 2 < v10 || v46 < 0 )
          return a1 - (unsigned __int8 *)v10 - 1;
        if ( v47 != 255 )
        {
          v19 = v46 + 15;
          if ( __CFADD__(v23, v46 + 15) )
            return a1 - (unsigned __int8 *)v10 - 1;
          break;
        }
      }
    }
    v36 = v19 + 4;
    if ( v7 > v28 )
      return a1 - (unsigned __int8 *)v10 - 1;
    v11 = &v23[v36];
    if ( v25 <= 7 )
    {
      *v23 = 0;
      v23[1] = 0;
      v23[2] = 0;
      v52 = (int *)((char *)&unk_19FFE8 + 4 * v25);
      v23[3] = 0;
      *v23 = *v28;
      v53 = *v52;
      v54 = v52[8];
      v23[1] = v28[1];
      v55 = &v28[v53];
      v39 = &v55[-v54];
      v23[2] = v28[2];
      v23[3] = v28[3];
      v40 = (unsigned int)(v23 + 8);
      *((_DWORD *)v23 + 1) = *(_DWORD *)v55;
      if ( (unsigned int)v11 <= v12 )
        goto LABEL_34;
LABEL_51:
      if ( v11 > v66 - 5 )
        return a1 - (unsigned __int8 *)v10 - 1;
      if ( v40 < v68 )
      {
        v58 = (int *)v39;
        v59 = v40;
        do
        {
          v60 = *v58;
          v59 += 8;
          v61 = v58[1];
          v58 += 2;
          *(_DWORD *)(v59 - 8) = v60;
          *(_DWORD *)(v59 - 4) = v61;
        }
        while ( v68 > v59 );
        v62 = v68 - v40;
        v40 = (unsigned int)(v66 - 7);
        v39 += v62;
      }
      if ( v40 < (unsigned int)v11 )
      {
        v56 = (char *)(v40 - 1);
        do
        {
          v57 = *v39++;
          *++v56 = v57;
        }
        while ( v11 - 1 != v56 );
      }
    }
    else
    {
      v37 = *(_DWORD *)v28;
      v38 = *((_DWORD *)v28 + 1);
      v39 = v28 + 8;
      v40 = (unsigned int)(v23 + 8);
      *(_DWORD *)v23 = v37;
      *((_DWORD *)v23 + 1) = v38;
      if ( (unsigned int)v11 > v12 )
        goto LABEL_51;
LABEL_34:
      v41 = *((_DWORD *)v39 + 1);
      *((_DWORD *)v23 + 2) = *(_DWORD *)v39;
      *(_DWORD *)(v40 + 4) = v41;
      if ( v36 > 0x10 )
      {
        v42 = (unsigned int)(v23 + 16);
        v43 = (int *)(v39 + 8);
        do
        {
          v44 = *v43;
          v42 += 8;
          v45 = v43[1];
          v43 += 2;
          *(_DWORD *)(v42 - 8) = v44;
          *(_DWORD *)(v42 - 4) = v45;
        }
        while ( (unsigned int)v11 > v42 );
      }
    }
  }
  v49 = v66 == v17;
  if ( v66 >= v17 )
    v49 = v8 == v18;
  if ( !v49 )
  {
LABEL_48:
    v10 = v14;
    return a1 - (unsigned __int8 *)v10 - 1;
  }
  memmove(v11, v14, v15);
  return v17 - a2;
}
