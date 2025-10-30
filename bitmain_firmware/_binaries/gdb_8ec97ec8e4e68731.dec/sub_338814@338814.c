int __fastcall sub_338814(int a1, int a2, char *a3, unsigned int a4)
{
  size_t v7; // r8
  int *v8; // r3
  char *v9; // r1
  unsigned int v10; // r9
  char *v11; // r0
  int v12; // r3
  int v13; // t1
  unsigned int v14; // r10
  size_t v15; // r3
  int v16; // r7
  size_t v17; // r10
  int j; // r2
  int v19; // r6
  _BOOL4 v20; // r0
  int v21; // r2
  unsigned __int8 *v22; // r1
  char *v23; // r0
  int v24; // r12
  int v25; // t1
  int v26; // t1
  unsigned __int8 *v27; // r1
  char *v28; // r2
  int v29; // r0
  int v30; // t1
  int v31; // t1
  int i; // r2
  bool v34; // cf
  unsigned int v35; // r3
  int v36; // r6
  char *v37; // r0
  int v38; // r3
  int v39; // r0
  size_t v40; // r3
  unsigned __int8 *v41; // r2
  char *v42; // r12
  int v43; // r0
  int v44; // t1
  int v45; // t1
  unsigned int v46; // r1
  unsigned __int8 *v47; // r3
  char *v48; // r0
  int v49; // lr
  int v50; // t1
  int v51; // t1
  unsigned int v53; // [sp+4h] [bp-420h]
  size_t v54; // [sp+4h] [bp-420h]
  int v55[253]; // [sp+1Ch] [bp-408h] BYREF
  int v56; // [sp+41Ch] [bp-8h] BYREF

  if ( a4 > 2 )
  {
    v7 = sub_338704((int)a3, a4, v55);
    v53 = v55[0];
  }
  else
  {
    v7 = a4 - 1;
    v53 = 1;
    v55[0] = 1;
  }
  v8 = v55;
  do
  {
    v8[1] = a4;
    ++v8;
  }
  while ( &v56 != v8 );
  v9 = &a3[v53];
  if ( a4 )
  {
    v10 = a4 - 1;
    v11 = a3 - 1;
    v12 = a4 - 1;
    do
    {
      v13 = (unsigned __int8)*++v11;
      v55[v13 + 1] = v12;
      v34 = v12-- != 0;
    }
    while ( v34 );
    v14 = memcmp(a3, v9, v7);
    if ( v14 )
      goto LABEL_9;
    v16 = 0;
    for ( i = a2; ; i = v36 )
    {
      v36 = v16 + a4;
      v37 = sub_3385F0((char *)(a1 + i), 0, v16 + a4 - i);
      v38 = v16 + a4;
      if ( v16 + a4 )
        v38 = 1;
      if ( v37 )
        v39 = 0;
      else
        v39 = v38;
      if ( !v39 )
        return 0;
      v35 = v55[*(unsigned __int8 *)(a1 + v36 - 1) + 1];
      if ( v35 )
      {
        v34 = 1;
        if ( v14 )
          v34 = v35 >= v53;
        v14 = 0;
        if ( !v34 )
          v35 = a4 - v53;
        v16 += v35;
      }
      else
      {
        if ( v14 < v7 )
          v40 = v7;
        else
          v40 = v14;
        if ( v40 < v10 )
        {
          v41 = (unsigned __int8 *)(a1 + v16 + v40);
          v42 = &a3[v40];
          if ( *v41 != (unsigned __int8)a3[v40] )
          {
LABEL_64:
            v14 = 0;
            v16 += 1 - v7 + v40;
            continue;
          }
          while ( ++v40 != v10 )
          {
            v44 = (unsigned __int8)*++v42;
            v43 = v44;
            v45 = *++v41;
            if ( v43 != v45 )
              goto LABEL_64;
          }
        }
        v46 = v7 - 1;
        if ( v14 < v7 && (v47 = (unsigned __int8 *)(a1 + v16 + v7 - 1), *v47 == (unsigned __int8)a3[v7 - 1]) )
        {
          v48 = &a3[v7 - 1];
          while ( v46 - 1 != v14 - 1 )
          {
            v50 = (unsigned __int8)*--v48;
            v49 = v50;
            v51 = *--v47;
            if ( v49 != v51 )
              break;
            --v46;
          }
        }
        else
        {
          v46 = v7;
        }
        if ( v14 + 1 > v46 )
          return a1 + v16;
        v14 = a4 - v53;
        v16 += v53;
      }
    }
  }
  if ( memcmp(a3, v9, v7) )
  {
LABEL_9:
    v15 = a4 - v7;
    if ( a4 - v7 < v7 )
      v15 = v7;
    v54 = v15 + 1;
    v55[0] = v15 + 1;
    v16 = 0;
    v17 = a4 - 1;
    for ( j = a2; ; j = v19 )
    {
      v19 = v16 + a4;
      v20 = sub_3385F0((char *)(a1 + j), 0, v16 + a4 - j) == 0;
      if ( !(v16 + a4) )
        v20 = 0;
      if ( !v20 )
        return 0;
      v21 = v55[*(unsigned __int8 *)(a1 + v19 - 1) + 1];
      if ( v21 )
        goto LABEL_29;
      if ( v7 < v17 )
      {
        v22 = (unsigned __int8 *)(a1 + v16 + v7);
        if ( *v22 != (unsigned __int8)a3[v7] )
        {
          v21 = v7;
LABEL_28:
          v16 += 1 - v7;
LABEL_29:
          v16 += v21;
          continue;
        }
        v23 = &a3[v7];
        v21 = v7;
        while ( ++v21 < v17 )
        {
          v25 = (unsigned __int8)*++v23;
          v24 = v25;
          v26 = *++v22;
          if ( v24 != v26 )
            goto LABEL_28;
        }
      }
      if ( !v7 )
        return a1 + v16;
      v27 = (unsigned __int8 *)(a1 + v16 + v7 - 1);
      if ( *v27 == (unsigned __int8)a3[v7 - 1] )
      {
        v28 = &a3[v7 - 1];
        while ( a3 != v28 )
        {
          v30 = (unsigned __int8)*--v28;
          v29 = v30;
          v31 = *--v27;
          if ( v29 != v31 )
            goto LABEL_33;
        }
        return a1 + v16;
      }
LABEL_33:
      v16 += v54;
    }
  }
  return 0;
}
