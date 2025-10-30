int __fastcall sub_4F048(unsigned __int8 *a1, char *dest, int a3, int a4, int a5)
{
  unsigned int v5; // r4
  int v6; // r5
  char *v7; // r11
  unsigned __int8 *v8; // r10
  char *v9; // r5
  unsigned int v10; // r8
  char *v11; // r3
  unsigned int v12; // r6
  unsigned __int8 *v13; // r9
  size_t v14; // r4
  bool v15; // cc
  char *v16; // r7
  unsigned int v17; // r2
  int v18; // r7
  char *v19; // r0
  int v20; // lr
  unsigned int v21; // r6
  int v22; // r2
  unsigned int v23; // r4
  bool v24; // cc
  char *v25; // r1
  unsigned __int8 *v27; // r10
  unsigned int v28; // t1
  size_t v29; // r6
  char *v30; // r0
  char v31; // t1
  char *v32; // r8
  char *v33; // r11
  char *v34; // r4
  int v35; // r2
  int v36; // r2
  char *v37; // r0
  int *v38; // r2
  int v39; // r4
  int v40; // r1
  int v41; // r4
  int v42; // r2
  int v43; // t1
  size_t v44; // r2
  int v45; // r1
  int v46; // r2
  int v47; // r6
  int v48; // r2
  int v49; // t1
  int v50; // r7
  int v51; // r2
  int *v52; // r12
  int v53; // r7
  int v54; // r2
  char *v55; // r7
  char *v56; // [sp+4h] [bp-20h]
  unsigned int v57; // [sp+8h] [bp-1Ch]
  char *v58; // [sp+Ch] [bp-18h]
  char *v60; // [sp+14h] [bp-10h]
  char *v61; // [sp+14h] [bp-10h]

  v5 = a5;
  if ( a5 >= a4 )
    v5 = a4;
  v6 = v5 >> 31;
  if ( !a1 )
    v6 = 1;
  if ( v6 )
    return -1;
  v57 = (unsigned int)&a1[a3 - 16];
  v58 = &dest[v5 - 32];
  if ( !v5 )
    return 0;
  if ( !a3 )
    return -1;
  v7 = &dest[v5];
  v8 = a1;
  v9 = dest;
  v10 = (unsigned int)&a1[a3];
  v11 = dest;
  v56 = &dest[v5 - 12];
LABEL_9:
  while ( 1 )
  {
    v12 = *v8;
    v13 = v8 + 1;
    v14 = v12 >> 4;
    if ( v12 >> 4 == 15 )
      break;
    while ( 1 )
    {
      v15 = v58 > v9;
      if ( v58 >= v9 )
        v15 = v57 > (unsigned int)v13;
      if ( v15 )
      {
        v18 = *(_DWORD *)v13;
        v19 = &v9[v14];
        v20 = *((_DWORD *)v13 + 1);
        v21 = v12 & 0xF;
        v22 = *((_DWORD *)v13 + 3);
        *((_DWORD *)v9 + 2) = *((_DWORD *)v13 + 2);
        *(_DWORD *)v9 = v18;
        *((_DWORD *)v9 + 1) = v20;
        *((_DWORD *)v9 + 3) = v22;
        v8 = &v13[v14 + 2];
        v23 = *(unsigned __int16 *)&v13[v14];
        v24 = v21 > 0xF;
        if ( v21 != 15 )
          v24 = v23 > 7;
        v25 = &v19[-v23];
        if ( v24 )
        {
          if ( v11 > v25 )
            return a1 - v8 - 1;
          v50 = *(_DWORD *)v25;
          v9 = &v19[v21 + 4];
          *((_DWORD *)v19 + 1) = *((_DWORD *)v25 + 1);
          *(_DWORD *)v19 = v50;
          v51 = *((_DWORD *)v25 + 3);
          *((_DWORD *)v19 + 2) = *((_DWORD *)v25 + 2);
          *((_DWORD *)v19 + 3) = v51;
          *((_WORD *)v19 + 8) = *((_WORD *)v25 + 8);
          goto LABEL_9;
        }
      }
      else
      {
        v16 = &v9[v14];
        v17 = (unsigned int)&v13[v14];
LABEL_47:
        if ( v16 <= v56 && (v27 = (unsigned __int8 *)v17, v17 <= v10 - 8) )
        {
          do
          {
            v45 = *(_DWORD *)v13;
            v9 += 8;
            v46 = *((_DWORD *)v13 + 1);
            v13 += 8;
            *((_DWORD *)v9 - 2) = v45;
            *((_DWORD *)v9 - 1) = v46;
          }
          while ( v16 > v9 );
          v19 = v16;
        }
        else
        {
          if ( v10 < v17 )
          {
            v14 = v10 - (_DWORD)v13;
            v16 = &v9[v10 - (_DWORD)v13];
          }
          if ( v7 < v16 )
          {
            v32 = v7;
            v44 = v7 - v9;
            v33 = v11;
            memmove(v9, v13, v44);
            return v32 - v33;
          }
          v60 = v11;
          memmove(v9, v13, v14);
          v27 = &v13[v14];
          v19 = v16;
          v11 = v60;
          if ( v7 == v16 )
            goto LABEL_33;
          if ( (unsigned int)v27 >= v10 - 2 )
          {
            v33 = v60;
            v32 = v16;
            return v32 - v33;
          }
        }
        v28 = *(unsigned __int16 *)v27;
        v8 = v27 + 2;
        v23 = v28;
        v21 = v12 & 0xF;
        v25 = &v16[-v28];
      }
      if ( v21 == 15 )
      {
        v47 = 0;
        while ( 1 )
        {
          v49 = *v8++;
          v48 = v49;
          v47 += v49;
          if ( v10 - 4 < (unsigned int)v8 || v47 < 0 )
            return a1 - v8 - 1;
          if ( v48 != 255 )
          {
            v21 = v47 + 15;
            if ( __CFADD__(v19, v21) )
              return a1 - v8 - 1;
            break;
          }
        }
      }
      v29 = v21 + 4;
      if ( v11 > v25 )
        return a1 - v8 - 1;
      v9 = &v19[v29];
      if ( &v19[v29] > v56 )
        break;
      if ( v23 <= 7 )
      {
        *v19 = 0;
        v19[1] = 0;
        v19[2] = 0;
        v52 = &dword_19FFE8[v23];
        v19[3] = 0;
        v53 = *v52;
        v54 = v52[8];
        *v19 = *v25;
        v55 = &v25[v53];
        v34 = &v55[-v54];
        v19[1] = v25[1];
        v19[2] = v25[2];
        v19[3] = v25[3];
        *((_DWORD *)v19 + 1) = *(_DWORD *)v55;
      }
      else
      {
        v34 = v25 + 8;
        v35 = *((_DWORD *)v25 + 1);
        *(_DWORD *)v19 = *(_DWORD *)v25;
        *((_DWORD *)v19 + 1) = v35;
      }
      v36 = *((_DWORD *)v34 + 1);
      *((_DWORD *)v19 + 2) = *(_DWORD *)v34;
      *((_DWORD *)v19 + 3) = v36;
      if ( v29 <= 0x10 )
        goto LABEL_9;
      v37 = v19 + 16;
      v38 = (int *)(v34 + 8);
      do
      {
        v39 = *v38;
        v37 += 8;
        v40 = v38[1];
        v38 += 2;
        *((_DWORD *)v37 - 2) = v39;
        *((_DWORD *)v37 - 1) = v40;
      }
      while ( v9 > v37 );
      v12 = *v8;
      v13 = v8 + 1;
      v14 = v12 >> 4;
      if ( v12 >> 4 == 15 )
        goto LABEL_40;
    }
    if ( v29 >= v7 - v19 )
      v29 = v7 - v19;
    v9 = &v19[v29];
    if ( v19 >= &v25[v29] )
    {
      v61 = v11;
      memcpy(v19, v25, v29);
      v11 = v61;
      if ( v7 == v9 )
        goto LABEL_33;
    }
    else
    {
      if ( v19 < v9 )
      {
        v30 = v19 - 1;
        do
        {
          v31 = *v25++;
          *++v30 = v31;
        }
        while ( v9 - 1 != v30 );
      }
      if ( v7 == v9 )
      {
LABEL_33:
        v32 = v7;
        v33 = v11;
        return v32 - v33;
      }
    }
  }
LABEL_40:
  if ( (unsigned int)v13 >= v10 - 15 )
  {
LABEL_65:
    v8 = v13;
  }
  else
  {
    v8 = (unsigned __int8 *)(v10 - 14);
    v41 = 0;
    while ( 1 )
    {
      v43 = *v13++;
      v42 = v43;
      v41 += v43;
      if ( v13 == v8 )
        break;
      if ( v41 < 0 )
        goto LABEL_65;
      if ( v42 != 255 )
      {
        v14 = v41 + 15;
        v16 = &v9[v14];
        if ( v9 > &v9[v14] )
          goto LABEL_65;
        v17 = (unsigned int)&v13[v14];
        if ( v13 > &v13[v14] )
          goto LABEL_65;
        goto LABEL_47;
      }
    }
  }
  return a1 - v8 - 1;
}
