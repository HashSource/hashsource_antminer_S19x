int __fastcall sub_501CC(int *a1, unsigned __int8 *a2, char *dest, size_t a4)
{
  int v4; // r7
  char *v8; // r3
  int v9; // r3
  int result; // r0
  char *v11; // r9
  int v12; // r3
  int v13; // r2
  char *v14; // r7
  unsigned int v15; // r1
  char *v16; // r0
  unsigned __int8 *v17; // r4
  int v18; // r11
  int v19; // r10
  const void *v20; // r1
  int v21; // r8
  char *v22; // r0
  size_t v23; // r2
  char *v24; // r6
  unsigned int v25; // r5
  unsigned int v26; // r8
  unsigned __int8 *v27; // r4
  size_t v28; // r5
  const void *v29; // r1
  unsigned __int8 *v30; // r4
  int v31; // r5
  unsigned int v32; // r2
  unsigned int v33; // t1
  unsigned int v34; // r1
  char *v35; // r2
  char *v36; // r1
  char *v37; // lr
  char v38; // t1
  int v39; // lr
  int v40; // t1
  int v41; // r5
  int v42; // t1
  char *v43; // r0
  size_t v44; // r3
  size_t v47; // [sp+14h] [bp-8h]

  v4 = a1[3];
  if ( !v4 )
  {
    result = sub_4F30C(a2, dest, a4);
    if ( result <= 0 )
      return result;
LABEL_4:
    a1[3] = a4;
    a1[1] = (int)&dest[a4];
    return result;
  }
  v8 = (char *)a1[1];
  if ( dest != v8 )
  {
    v9 = (int)&v8[-v4];
    a1[2] = v4;
    *a1 = v9;
    result = sub_4ECC4((char *)a2, dest, a4, v9, v4);
    if ( result <= 0 )
      return result;
    goto LABEL_4;
  }
  v11 = &dest[a4];
  v12 = *a1;
  v13 = a1[2];
  v14 = &dest[-v4];
  v15 = v11 - dest;
  v47 = a4;
  v16 = dest;
  v17 = a2;
  v18 = v13;
  v19 = v12 + v13;
  while ( 1 )
  {
    v26 = *v17;
    v27 = v17 + 1;
    v28 = v26 >> 4;
    if ( v26 >> 4 == 15 )
    {
      v39 = 0;
      do
      {
        v40 = *v27++;
        v39 += v40;
      }
      while ( v40 == 255 );
      v28 = v39 + 15;
    }
    if ( v15 < v28 )
      return -1;
    v29 = v27;
    v24 = &v16[v28];
    v30 = &v27[v28];
    memmove(v16, v29, v28);
    if ( (unsigned int)(v11 - v24) <= 0xB )
      break;
    v31 = v26 & 0xF;
    v33 = *(unsigned __int16 *)v30;
    v17 = v30 + 2;
    v32 = v33;
    if ( v31 == 15 )
    {
      v41 = 0;
      do
      {
        v42 = *v17++;
        v41 += v42;
      }
      while ( v42 == 255 );
      v31 = v41 + 15;
    }
    v25 = v31 + 4;
    if ( v11 - v24 < v25 )
      return -1;
    v34 = v24 - v14;
    if ( v32 > v18 + v24 - v14 )
      return -1;
    if ( v32 <= v34 )
    {
      v35 = &v24[-v32];
      goto LABEL_19;
    }
    v20 = (const void *)(v34 - v32 + v19);
    v21 = v19 - (_DWORD)v20;
    if ( v25 >= v19 - (int)v20 )
    {
      v43 = v24;
      v25 -= v21;
      v24 += v21;
      memmove(v43, v20, v19 - (_DWORD)v20);
      v35 = v14;
LABEL_19:
      if ( v25 )
      {
        v36 = v24 - 1;
        v37 = &v35[v25];
        do
        {
          v38 = *v35++;
          *++v36 = v38;
        }
        while ( v37 != v35 );
      }
      goto LABEL_9;
    }
    v22 = v24;
    v23 = v25;
    v24 += v25;
    v25 = 0;
    memmove(v22, v20, v23);
LABEL_9:
    v16 = &v24[v25];
    v15 = v11 - &v24[v25];
    if ( v15 <= 4 )
      return -1;
  }
  if ( v11 != v24 )
    return -1;
  result = v30 - a2;
  if ( v30 - a2 > 0 )
  {
    v44 = a1[1] + v47;
    a1[3] += v47;
    a1[1] = v44;
  }
  return result;
}
