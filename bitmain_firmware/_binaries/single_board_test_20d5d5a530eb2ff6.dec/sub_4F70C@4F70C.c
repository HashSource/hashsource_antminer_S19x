unsigned int __fastcall sub_4F70C(unsigned __int8 *a1, char *dest, int a3, unsigned int a4, int a5, unsigned int a6)
{
  unsigned __int16 *v6; // r10
  char *v7; // r8
  char *v8; // r11
  unsigned __int16 *v10; // r6
  char *v11; // r4
  unsigned int v12; // lr
  unsigned __int16 *v13; // r3
  size_t i; // r2
  bool v15; // cc
  unsigned int v16; // r5
  unsigned __int16 *v17; // r6
  int v18; // r12
  unsigned __int16 *v19; // r6
  int v20; // r5
  unsigned int v21; // r1
  int v22; // lr
  signed int v23; // r0
  int v24; // r3
  unsigned int v25; // r3
  unsigned int v26; // t1
  bool v27; // cc
  unsigned int v28; // r2
  char *v29; // r5
  char *v30; // r3
  int v31; // r2
  int v32; // r1
  int v33; // t1
  int v34; // r1
  int v35; // r2
  unsigned int v36; // t1
  int v37; // r1
  char *v38; // r3
  int v39; // r2
  char *v40; // r1
  int v41; // r2
  char *v42; // r0
  int *v43; // r3
  int v44; // r1
  int v45; // r2
  int v46; // r4
  int v47; // r1
  int v48; // t1
  size_t v50; // r5
  char *v51; // r5
  char *v52; // r4
  char *v53; // r3
  char v54; // t1
  int v55; // r5
  int v56; // r3
  bool v57; // zf
  char *v58; // r0
  int *v59; // r0
  char *v60; // r2
  int v61; // lr
  int v62; // r5
  int v63; // r2
  char *v64; // r2
  char v65; // t1
  int v66; // r12
  int v67; // r3
  int v68; // [sp+8h] [bp-14h]
  char *v70; // [sp+14h] [bp-8h]

  if ( (a1 == 0) | (a4 >> 31) )
    return -1;
  v6 = (unsigned __int16 *)&a1[a3];
  v7 = &dest[a4];
  if ( a5 )
    v68 = a5 + a6;
  else
    v68 = 0;
  v8 = v7 - 32;
  if ( !a4 )
  {
    if ( a3 == 1 )
      return -(*a1 != 0);
    return -1;
  }
  if ( !a3 )
    return -1;
  v10 = (unsigned __int16 *)a1;
  v11 = dest;
  v70 = v7 - 7;
LABEL_7:
  v12 = *(unsigned __int8 *)v10;
  v13 = (unsigned __int16 *)((char *)v10 + 1);
  for ( i = v12 >> 4; v12 >> 4 != 15; i = v12 >> 4 )
  {
    v15 = v8 > v11;
    if ( v8 >= v11 )
      v15 = v6 - 8 > v13;
    if ( v15 )
    {
      v18 = *(_DWORD *)v13;
      v19 = (unsigned __int16 *)((char *)v13 + i);
      v20 = *((_DWORD *)v13 + 2);
      v21 = v12 & 0xF;
      v22 = *((_DWORD *)v13 + 1);
      v23 = (signed int)&v11[i];
      v24 = *((_DWORD *)v13 + 3);
      *(_DWORD *)v11 = v18;
      *((_DWORD *)v11 + 1) = v22;
      *((_DWORD *)v11 + 2) = v20;
      *((_DWORD *)v11 + 3) = v24;
      v26 = *v19;
      v10 = v19 + 1;
      v25 = v26;
      v27 = v21 > 0xF;
      if ( v21 != 15 )
        v27 = v25 > 7;
      v28 = v23 - v25;
      if ( v27 )
      {
        if ( (unsigned int)dest <= v28 )
        {
          v55 = *(_DWORD *)(v28 + 4);
          v11 = (char *)(v21 + 4 + v23);
          *(_DWORD *)v23 = *(_DWORD *)v28;
          *(_DWORD *)(v23 + 4) = v55;
          v56 = *(_DWORD *)(v28 + 12);
          *(_DWORD *)(v23 + 8) = *(_DWORD *)(v28 + 8);
          *(_DWORD *)(v23 + 12) = v56;
          *(_WORD *)(v23 + 16) = *(_WORD *)(v28 + 16);
          goto LABEL_7;
        }
        v29 = (char *)(v21 + 4);
        if ( a6 < 0x10000 && (unsigned int)dest > v28 + a6 )
          return a1 - (unsigned __int8 *)v10 - 1;
        goto LABEL_19;
      }
    }
    else
    {
      v16 = (unsigned int)&v11[i];
      v17 = (unsigned __int16 *)((char *)v13 + i);
LABEL_29:
      v23 = v16;
      if ( v16 > (unsigned int)(v7 - 12) || v17 > v6 - 4 )
      {
        v57 = v7 == (char *)v16;
        if ( (unsigned int)v7 >= v16 )
          v57 = v6 == v17;
        if ( v57 )
        {
          memmove(v11, v13, i);
          return v16 - (_DWORD)dest;
        }
LABEL_60:
        v10 = v13;
        return a1 - (unsigned __int8 *)v10 - 1;
      }
      do
      {
        v34 = *(_DWORD *)v13;
        v11 += 8;
        v35 = *((_DWORD *)v13 + 1);
        v13 += 4;
        *((_DWORD *)v11 - 2) = v34;
        *((_DWORD *)v11 - 1) = v35;
      }
      while ( v16 > (unsigned int)v11 );
      v36 = *v17;
      v10 = v17 + 1;
      v25 = v36;
      v21 = v12 & 0xF;
      v28 = v16 - v36;
    }
    if ( v21 == 15 )
    {
      v46 = 0;
      while ( 1 )
      {
        v48 = *(unsigned __int8 *)v10;
        v10 = (unsigned __int16 *)((char *)v10 + 1);
        v47 = v48;
        v46 += v48;
        if ( v6 - 2 < v10 || v46 < 0 )
          return a1 - (unsigned __int8 *)v10 - 1;
        if ( v47 != 255 )
        {
          v21 = v46 + 15;
          if ( __CFADD__(v23, v46 + 15) )
            return a1 - (unsigned __int8 *)v10 - 1;
          break;
        }
      }
    }
    v29 = (char *)(v21 + 4);
    if ( a6 < 0x10000 && (unsigned int)dest > v28 + a6 )
      return a1 - (unsigned __int8 *)v10 - 1;
    if ( (unsigned int)dest <= v28 )
    {
      v11 = &v29[v23];
      if ( v25 <= 7 )
      {
        *(_BYTE *)v23 = 0;
        *(_BYTE *)(v23 + 1) = 0;
        *(_BYTE *)(v23 + 2) = 0;
        *(_BYTE *)(v23 + 3) = 0;
        v66 = dword_19FFE8[v25];
        *(_BYTE *)v23 = *(_BYTE *)v28;
        v67 = dword_19FFE8[v25 + 8];
        *(_BYTE *)(v23 + 1) = *(_BYTE *)(v28 + 1);
        v38 = (char *)(v66 + v28 - v67);
        *(_BYTE *)(v23 + 2) = *(_BYTE *)(v28 + 2);
        *(_BYTE *)(v23 + 3) = *(_BYTE *)(v28 + 3);
        *(_DWORD *)(v23 + 4) = *(_DWORD *)(v66 + v28);
      }
      else
      {
        v37 = *(_DWORD *)v28;
        v38 = (char *)(v28 + 8);
        v39 = *(_DWORD *)(v28 + 4);
        *(_DWORD *)v23 = v37;
        *(_DWORD *)(v23 + 4) = v39;
      }
      v40 = (char *)(v23 + 8);
      if ( v11 > v7 - 12 )
      {
        if ( v11 > v7 - 5 )
          return a1 - (unsigned __int8 *)v10 - 1;
        if ( v40 < v70 )
        {
          v59 = (int *)v38;
          v60 = v40;
          do
          {
            v61 = *v59;
            v60 += 8;
            v62 = v59[1];
            v59 += 2;
            *((_DWORD *)v60 - 2) = v61;
            *((_DWORD *)v60 - 1) = v62;
          }
          while ( v70 > v60 );
          v63 = v70 - v40;
          v40 = v7 - 7;
          v38 += v63;
        }
        if ( v11 > v40 )
        {
          v64 = v40 - 1;
          do
          {
            v65 = *v38++;
            *++v64 = v65;
          }
          while ( v11 - 1 != v64 );
        }
      }
      else
      {
        v41 = *((_DWORD *)v38 + 1);
        *(_DWORD *)(v23 + 8) = *(_DWORD *)v38;
        *(_DWORD *)(v23 + 12) = v41;
        if ( (unsigned int)v29 > 0x10 )
        {
          v42 = (char *)(v23 + 16);
          v43 = (int *)(v38 + 8);
          do
          {
            v44 = *v43;
            v42 += 8;
            v45 = v43[1];
            v43 += 2;
            *((_DWORD *)v42 - 2) = v44;
            *((_DWORD *)v42 - 1) = v45;
          }
          while ( v11 > v42 );
        }
      }
      goto LABEL_7;
    }
LABEL_19:
    v11 = &v29[v23];
    if ( &v29[v23] > v7 - 5 )
      return a1 - (unsigned __int8 *)v10 - 1;
    v30 = &dest[-v28];
    if ( v29 > &dest[-v28] )
    {
      v11 = &v30[v23];
      v50 = v29 - v30;
      memcpy((void *)v23, (const void *)(v68 - (_DWORD)v30), (size_t)&dest[-v28]);
      if ( v50 <= v11 - dest )
      {
        v58 = v11;
        v11 += v50;
        memcpy(v58, dest, v50);
      }
      else
      {
        v51 = &v11[v50];
        if ( v11 < v51 )
        {
          v52 = v11 - 1;
          v53 = dest;
          do
          {
            v54 = *v53++;
            *++v52 = v54;
          }
          while ( v51 - 1 != v52 );
          v11 = v51;
        }
      }
      goto LABEL_7;
    }
    memmove((void *)v23, (const void *)(v68 - (_DWORD)v30), (size_t)v29);
    v12 = *(unsigned __int8 *)v10;
    v13 = (unsigned __int16 *)((char *)v10 + 1);
  }
  if ( v13 >= (unsigned __int16 *)((char *)v6 - 15) )
    goto LABEL_60;
  v10 = v6 - 7;
  v31 = 0;
  while ( 1 )
  {
    v33 = *(unsigned __int8 *)v13;
    v13 = (unsigned __int16 *)((char *)v13 + 1);
    v32 = v33;
    v31 += v33;
    if ( v10 == v13 )
      return a1 - (unsigned __int8 *)v10 - 1;
    if ( v31 < 0 )
      goto LABEL_60;
    if ( v32 != 255 )
    {
      i = v31 + 15;
      v16 = (unsigned int)&v11[i];
      if ( v11 > &v11[i] )
        goto LABEL_60;
      v17 = (unsigned __int16 *)((char *)v13 + i);
      if ( v13 > (unsigned __int16 *)((char *)v13 + i) )
        goto LABEL_60;
      goto LABEL_29;
    }
  }
}
