int __fastcall sub_4EDBC(unsigned __int8 *a1, char *dest, int a3, unsigned int a4)
{
  int v4; // r4
  unsigned __int16 *v5; // r10
  unsigned __int16 *v6; // lr
  char *v7; // r3
  char *v8; // r9
  unsigned int v9; // r12
  unsigned __int16 *v10; // r5
  size_t v11; // r2
  bool v12; // cc
  char *v13; // r7
  unsigned __int16 *v14; // lr
  unsigned int v15; // r6
  int v16; // r11
  unsigned __int16 *v17; // lr
  int v18; // r12
  char *v19; // r4
  int v20; // r2
  unsigned int v21; // r2
  unsigned int v22; // t1
  bool v23; // cc
  unsigned int v24; // r7
  int v26; // r2
  int v27; // r4
  int v28; // t1
  int v29; // r6
  int v30; // r2
  unsigned int v31; // t1
  unsigned int v32; // r6
  int v33; // r12
  int v34; // r5
  char *v35; // r2
  char *v36; // r7
  int v37; // r5
  unsigned int v38; // r4
  int *v39; // r2
  int v40; // r6
  int v41; // r5
  int v42; // r3
  int v43; // r5
  int v44; // t1
  bool v45; // zf
  int v46; // r12
  int v47; // r2
  int v48; // r5
  int v49; // r2
  _DWORD *v50; // r5
  char *v51; // r4
  char v52; // t1
  int *v53; // r6
  char *v54; // r5
  int v55; // r12
  int v56; // r4
  int v57; // r4
  unsigned int v59; // [sp+4h] [bp-28h]
  char *v60; // [sp+8h] [bp-24h]
  char *v61; // [sp+10h] [bp-1Ch]
  char *v62; // [sp+18h] [bp-14h]

  v4 = a4 >> 31;
  if ( !a1 )
    v4 = 1;
  if ( v4 )
    return -1;
  v5 = (unsigned __int16 *)&a1[a3];
  v61 = &dest[a4];
  v59 = (unsigned int)&a1[a3 - 16];
  v60 = &dest[a4 - 32];
  if ( !a4 )
  {
    if ( a3 == 1 )
      return -(*a1 != 0);
    return -1;
  }
  if ( !a3 )
    return -1;
  v6 = (unsigned __int16 *)a1;
  v7 = dest;
  v8 = v61 - 12;
  v62 = v61 - 7;
  while ( 1 )
  {
    while ( 1 )
    {
      v9 = *(unsigned __int8 *)v6;
      v10 = (unsigned __int16 *)((char *)v6 + 1);
      v11 = v9 >> 4;
      if ( v9 >> 4 == 15 )
      {
        if ( v10 >= (unsigned __int16 *)((char *)v5 - 15) )
          goto LABEL_47;
        v6 = v5 - 7;
        v26 = 0;
        while ( 1 )
        {
          v28 = *(unsigned __int8 *)v10;
          v10 = (unsigned __int16 *)((char *)v10 + 1);
          v27 = v28;
          v26 += v28;
          if ( v10 == v6 )
            return a1 - (unsigned __int8 *)v6 - 1;
          if ( v26 < 0 )
            goto LABEL_47;
          if ( v27 != 255 )
          {
            v11 = v26 + 15;
            v13 = &v7[v11];
            if ( v7 > &v7[v11] )
              goto LABEL_47;
            v14 = (unsigned __int16 *)((char *)v10 + v11);
            if ( v10 > (unsigned __int16 *)((char *)v10 + v11) )
              goto LABEL_47;
            goto LABEL_25;
          }
        }
      }
      v12 = v60 > v7;
      if ( v60 >= v7 )
        v12 = v59 > (unsigned int)v10;
      if ( !v12 )
        break;
      v15 = v9 & 0xF;
      v16 = *(_DWORD *)v10;
      v17 = (unsigned __int16 *)((char *)v10 + v11);
      v18 = *((_DWORD *)v10 + 1);
      v19 = &v7[v11];
      v20 = *((_DWORD *)v10 + 3);
      *((_DWORD *)v7 + 2) = *((_DWORD *)v10 + 2);
      *(_DWORD *)v7 = v16;
      *((_DWORD *)v7 + 1) = v18;
      *((_DWORD *)v7 + 3) = v20;
      v22 = *v17;
      v6 = v17 + 1;
      v21 = v22;
      v23 = v15 > 0xF;
      if ( v15 != 15 )
        v23 = v21 > 7;
      v24 = (unsigned int)&v19[-v21];
      if ( !v23 )
        goto LABEL_29;
      if ( (unsigned int)dest > v24 )
        return a1 - (unsigned __int8 *)v6 - 1;
      v46 = *(_DWORD *)v24;
      v7 = &v19[v15 + 4];
      *((_DWORD *)v19 + 1) = *(_DWORD *)(v24 + 4);
      *(_DWORD *)v19 = v46;
      v47 = *(_DWORD *)(v24 + 12);
      *((_DWORD *)v19 + 2) = *(_DWORD *)(v24 + 8);
      *((_DWORD *)v19 + 3) = v47;
      *((_WORD *)v19 + 8) = *(_WORD *)(v24 + 16);
    }
    v13 = &v7[v11];
    v14 = (unsigned __int16 *)((char *)v10 + v11);
LABEL_25:
    v19 = v13;
    if ( v13 > v8 || v14 > v5 - 4 )
      break;
    do
    {
      v29 = *(_DWORD *)v10;
      v7 += 8;
      v30 = *((_DWORD *)v10 + 1);
      v10 += 4;
      *((_DWORD *)v7 - 2) = v29;
      *((_DWORD *)v7 - 1) = v30;
    }
    while ( v13 > v7 );
    v31 = *v14;
    v6 = v14 + 1;
    v21 = v31;
    v15 = v9 & 0xF;
    v24 = (unsigned int)&v13[-v31];
LABEL_29:
    if ( v15 == 15 )
    {
      v42 = 0;
      while ( 1 )
      {
        v44 = *(unsigned __int8 *)v6;
        v6 = (unsigned __int16 *)((char *)v6 + 1);
        v43 = v44;
        v42 += v44;
        if ( v5 - 2 < v6 || v42 < 0 )
          return a1 - (unsigned __int8 *)v6 - 1;
        if ( v43 != 255 )
        {
          v15 = v42 + 15;
          if ( __CFADD__(v19, v42 + 15) )
            return a1 - (unsigned __int8 *)v6 - 1;
          break;
        }
      }
    }
    v32 = v15 + 4;
    if ( (unsigned int)dest > v24 )
      return a1 - (unsigned __int8 *)v6 - 1;
    v7 = &v19[v32];
    if ( v21 <= 7 )
    {
      *v19 = 0;
      v19[1] = 0;
      v19[2] = 0;
      v19[3] = 0;
      *v19 = *(_BYTE *)v24;
      v48 = dword_19FFE8[v21];
      v49 = dword_19FFE8[v21 + 8];
      v19[1] = *(_BYTE *)(v24 + 1);
      v50 = (_DWORD *)(v48 + v24);
      v35 = (char *)v50 - v49;
      v19[2] = *(_BYTE *)(v24 + 2);
      v19[3] = *(_BYTE *)(v24 + 3);
      v36 = v19 + 8;
      *((_DWORD *)v19 + 1) = *v50;
      if ( v7 <= v8 )
        goto LABEL_33;
LABEL_50:
      if ( v7 > v61 - 5 )
        return a1 - (unsigned __int8 *)v6 - 1;
      if ( v36 < v62 )
      {
        v53 = (int *)v35;
        v54 = v36;
        do
        {
          v55 = *v53;
          v54 += 8;
          v56 = v53[1];
          v53 += 2;
          *((_DWORD *)v54 - 2) = v55;
          *((_DWORD *)v54 - 1) = v56;
        }
        while ( v62 > v54 );
        v57 = v62 - v36;
        v36 = v61 - 7;
        v35 += v57;
      }
      if ( v36 < v7 )
      {
        v51 = v36 - 1;
        do
        {
          v52 = *v35++;
          *++v51 = v52;
        }
        while ( v7 - 1 != v51 );
      }
    }
    else
    {
      v33 = *(_DWORD *)v24;
      v34 = *(_DWORD *)(v24 + 4);
      v35 = (char *)(v24 + 8);
      v36 = v19 + 8;
      *(_DWORD *)v19 = v33;
      *((_DWORD *)v19 + 1) = v34;
      if ( v7 > v8 )
        goto LABEL_50;
LABEL_33:
      v37 = *((_DWORD *)v35 + 1);
      *((_DWORD *)v19 + 2) = *(_DWORD *)v35;
      *((_DWORD *)v36 + 1) = v37;
      if ( v32 > 0x10 )
      {
        v38 = (unsigned int)(v19 + 16);
        v39 = (int *)(v35 + 8);
        do
        {
          v40 = *v39;
          v38 += 8;
          v41 = v39[1];
          v39 += 2;
          *(_DWORD *)(v38 - 8) = v40;
          *(_DWORD *)(v38 - 4) = v41;
        }
        while ( (unsigned int)v7 > v38 );
      }
    }
  }
  v45 = v61 == v13;
  if ( v61 >= v13 )
    v45 = v5 == v14;
  if ( !v45 )
  {
LABEL_47:
    v6 = v10;
    return a1 - (unsigned __int8 *)v6 - 1;
  }
  memmove(v7, v10, v11);
  return v13 - dest;
}
