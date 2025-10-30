int __fastcall sub_4FA24(unsigned __int8 *a1, char *dest, int a3, int a4, int a5, int a6, unsigned int a7)
{
  unsigned int v7; // r5
  unsigned int v8; // r3
  char *v9; // r7
  unsigned __int8 *v11; // r9
  char *v12; // r6
  unsigned int v13; // r7
  unsigned __int8 *v14; // r8
  size_t v15; // r10
  bool v16; // cc
  char *v17; // r5
  unsigned int v18; // r2
  int v19; // r2
  unsigned int v20; // r7
  int v21; // r5
  unsigned int v22; // r4
  int v23; // r0
  unsigned int v24; // r2
  bool v25; // cc
  unsigned int v26; // r1
  char *v27; // r7
  char *v28; // r5
  int v29; // r1
  int v30; // r2
  unsigned int v31; // t1
  char *v32; // r4
  char v33; // t1
  char *v34; // r2
  int v36; // r10
  int v37; // r2
  int v38; // t1
  unsigned __int8 *v39; // r9
  int v40; // r7
  int v41; // r0
  int v42; // t1
  int v43; // r0
  _DWORD *v44; // r2
  int v45; // r1
  int v46; // r1
  unsigned int v47; // r4
  int *v48; // r2
  int v49; // r0
  int v50; // r1
  size_t v51; // r7
  char *v52; // r7
  char *v53; // r6
  char *v54; // r1
  char v55; // t1
  int v56; // r5
  int v57; // r2
  int v58; // r0
  int v59; // r2
  _DWORD *v60; // r0
  char *v61; // [sp+4h] [bp-28h]
  unsigned int v62; // [sp+8h] [bp-24h]
  char *v63; // [sp+Ch] [bp-20h]
  unsigned int v64; // [sp+10h] [bp-1Ch]
  int v65; // [sp+14h] [bp-18h]
  unsigned int v66; // [sp+18h] [bp-14h]
  unsigned int v67; // [sp+1Ch] [bp-10h]
  unsigned int v68; // [sp+1Ch] [bp-10h]
  unsigned int v69; // [sp+1Ch] [bp-10h]

  v7 = a5;
  if ( a5 >= a4 )
    v7 = a4;
  if ( (a1 == 0) | (v7 >> 31) )
    return -1;
  v8 = (unsigned int)&a1[a3];
  v61 = &dest[v7];
  if ( a6 )
    v65 = a6 + a7;
  else
    v65 = 0;
  v9 = &dest[v7];
  v62 = v8 - 16;
  v63 = &dest[v7 - 32];
  if ( !v7 )
    return 0;
  if ( !a3 )
    return -1;
  v11 = a1;
  v12 = dest;
  v66 = (unsigned int)(v9 - 5);
  v64 = (unsigned int)(v9 - 12);
  while ( 1 )
  {
    v13 = *v11;
    v14 = v11 + 1;
    v15 = v13 >> 4;
    if ( v13 >> 4 == 15 )
      break;
    v16 = v63 > v12;
    if ( v63 >= v12 )
      v16 = v62 > (unsigned int)v14;
    if ( !v16 )
    {
      v17 = &v12[v15];
      v18 = (unsigned int)&v14[v15];
LABEL_47:
      if ( (unsigned int)v17 <= v64 && (v39 = (unsigned __int8 *)v18, v18 <= v8 - 8) )
      {
        do
        {
          v29 = *(_DWORD *)v14;
          v12 += 8;
          v30 = *((_DWORD *)v14 + 1);
          v14 += 8;
          *((_DWORD *)v12 - 2) = v29;
          *((_DWORD *)v12 - 1) = v30;
        }
        while ( v17 > v12 );
        v22 = (unsigned int)v17;
      }
      else
      {
        if ( v8 < v18 )
        {
          v15 = v8 - (_DWORD)v14;
          v17 = &v12[v8 - (_DWORD)v14];
        }
        if ( v61 < v17 )
        {
          v17 = v61;
          memmove(v12, v14, v61 - v12);
          return v17 - dest;
        }
        v68 = v8;
        memmove(v12, v14, v15);
        v22 = (unsigned int)v17;
        v39 = &v14[v15];
        if ( v61 == v17 )
        {
          v17 = v61;
          return v17 - dest;
        }
        v8 = v68;
        if ( (unsigned int)v39 >= v68 - 2 )
          return v17 - dest;
      }
      v31 = *(unsigned __int16 *)v39;
      v11 = v39 + 2;
      v24 = v31;
      v20 = v13 & 0xF;
      v26 = (unsigned int)&v17[-v31];
      goto LABEL_27;
    }
    v19 = *(_DWORD *)(v11 + 13);
    v20 = v13 & 0xF;
    v21 = *(_DWORD *)v14;
    v22 = (unsigned int)&v12[v15];
    v23 = *(_DWORD *)(v11 + 5);
    *((_DWORD *)v12 + 2) = *(_DWORD *)(v11 + 9);
    *(_DWORD *)v12 = v21;
    *((_DWORD *)v12 + 1) = v23;
    *((_DWORD *)v12 + 3) = v19;
    v11 = &v14[v15 + 2];
    v24 = *(unsigned __int16 *)&v14[v15];
    v25 = v20 > 0xF;
    if ( v20 != 15 )
      v25 = v24 > 7;
    v26 = v22 - v24;
    if ( v25 )
    {
      if ( (unsigned int)dest > v26 )
      {
        v27 = (char *)(v20 + 4);
        if ( a7 < 0x10000 && (unsigned int)dest > v26 + a7 )
          return a1 - v11 - 1;
        goto LABEL_21;
      }
      v56 = *(_DWORD *)v26;
      v12 = (char *)(v22 + v20 + 4);
      *(_DWORD *)(v22 + 4) = *(_DWORD *)(v26 + 4);
      *(_DWORD *)v22 = v56;
      v57 = *(_DWORD *)(v26 + 12);
      *(_DWORD *)(v22 + 8) = *(_DWORD *)(v26 + 8);
      *(_DWORD *)(v22 + 12) = v57;
      *(_WORD *)(v22 + 16) = *(_WORD *)(v26 + 16);
    }
    else
    {
LABEL_27:
      if ( v20 == 15 )
      {
        v40 = 0;
        while ( 1 )
        {
          v42 = *v11++;
          v41 = v42;
          v40 += v42;
          if ( v8 - 4 < (unsigned int)v11 || v40 < 0 )
            return a1 - v11 - 1;
          if ( v41 != 255 )
          {
            v20 = v40 + 15;
            if ( __CFADD__(v22, v20) )
              return a1 - v11 - 1;
            break;
          }
        }
      }
      v27 = (char *)(v20 + 4);
      if ( a7 < 0x10000 && (unsigned int)dest > v26 + a7 )
        return a1 - v11 - 1;
      if ( (unsigned int)dest > v26 )
      {
LABEL_21:
        if ( (unsigned int)&v27[v22] > v66 && v27 >= &v61[-v22] )
          v27 = &v61[-v22];
        v28 = &dest[-v26];
        v67 = v8;
        if ( &dest[-v26] < v27 )
        {
          v12 = &v28[v22];
          v51 = v27 - v28;
          memcpy((void *)v22, (const void *)(v65 - (_DWORD)v28), (size_t)&dest[-v26]);
          v8 = v67;
          if ( v51 <= &v28[v22] - dest )
          {
            v12 += v51;
            memcpy(&v28[v22], dest, v51);
            v8 = v67;
          }
          else
          {
            v52 = &v12[v51];
            if ( v12 < v52 )
            {
              v53 = v12 - 1;
              v54 = dest;
              do
              {
                v55 = *v54++;
                *++v53 = v55;
              }
              while ( v52 - 1 != v53 );
              v12 = v52;
            }
          }
        }
        else
        {
          v12 = &v27[v22];
          memmove((void *)v22, (const void *)(v65 - (_DWORD)v28), (size_t)v27);
          v8 = v67;
        }
      }
      else
      {
        v12 = &v27[v22];
        if ( (unsigned int)&v27[v22] <= v64 )
        {
          if ( v24 <= 7 )
          {
            *(_BYTE *)v22 = 0;
            *(_BYTE *)(v22 + 1) = 0;
            *(_BYTE *)(v22 + 2) = 0;
            *(_BYTE *)(v22 + 3) = 0;
            v58 = dword_19FFE8[v24];
            v59 = dword_19FFE8[v24 + 8];
            v60 = (_DWORD *)(v58 + v26);
            *(_BYTE *)v22 = *(_BYTE *)v26;
            v44 = (_DWORD *)((char *)v60 - v59);
            *(_BYTE *)(v22 + 1) = *(_BYTE *)(v26 + 1);
            *(_BYTE *)(v22 + 2) = *(_BYTE *)(v26 + 2);
            *(_BYTE *)(v22 + 3) = *(_BYTE *)(v26 + 3);
            *(_DWORD *)(v22 + 4) = *v60;
          }
          else
          {
            v43 = *(_DWORD *)v26;
            v44 = (_DWORD *)(v26 + 8);
            v45 = *(_DWORD *)(v26 + 4);
            *(_DWORD *)v22 = v43;
            *(_DWORD *)(v22 + 4) = v45;
          }
          v46 = v44[1];
          *(_DWORD *)(v22 + 8) = *v44;
          *(_DWORD *)(v22 + 12) = v46;
          if ( (unsigned int)v27 > 0x10 )
          {
            v47 = v22 + 16;
            v48 = v44 + 2;
            do
            {
              v49 = *v48;
              v47 += 8;
              v50 = v48[1];
              v48 += 2;
              *(_DWORD *)(v47 - 8) = v49;
              *(_DWORD *)(v47 - 4) = v50;
            }
            while ( (unsigned int)v12 > v47 );
          }
        }
        else
        {
          if ( v27 >= &v61[-v22] )
            v27 = &v61[-v22];
          v12 = &v27[v22];
          if ( v22 >= (unsigned int)&v27[v26] )
          {
            v69 = v8;
            memcpy((void *)v22, (const void *)v26, (size_t)v27);
            v34 = v61;
            v8 = v69;
            if ( v61 == v12 )
              return v34 - dest;
          }
          else
          {
            if ( v22 < (unsigned int)v12 )
            {
              v32 = (char *)(v22 - 1);
              do
              {
                v33 = *(_BYTE *)v26++;
                *++v32 = v33;
              }
              while ( v32 != v12 - 1 );
            }
            v34 = v61;
            if ( v61 == v12 )
              return v34 - dest;
          }
        }
      }
    }
  }
  if ( (unsigned int)v14 < v8 - 15 )
  {
    v11 = (unsigned __int8 *)(v8 - 14);
    v36 = 0;
    while ( 1 )
    {
      v38 = *v14++;
      v37 = v38;
      v36 += v38;
      if ( v14 == v11 )
        return a1 - v11 - 1;
      if ( v36 < 0 )
        return a1 - v14 - 1;
      if ( v37 != 255 )
      {
        v15 = v36 + 15;
        v17 = &v12[v15];
        if ( v12 > &v12[v15] )
          return a1 - v14 - 1;
        v18 = (unsigned int)&v14[v15];
        if ( v14 > &v14[v15] )
          return a1 - v14 - 1;
        goto LABEL_47;
      }
    }
  }
  return a1 - v14 - 1;
}
