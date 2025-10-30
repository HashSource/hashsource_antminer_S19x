int __fastcall sub_65974(int a1, int a2, char *s1, unsigned int a4)
{
  size_t v8; // r4
  size_t v9; // r6
  int *v10; // r3
  char *v11; // r1
  int v12; // r3
  int v13; // t1
  unsigned int v14; // r0
  unsigned int v15; // r3
  bool v16; // cf
  unsigned int v17; // r1
  unsigned int v18; // r1
  char *v19; // lr
  unsigned __int8 *v20; // r12
  int v21; // r9
  int v22; // t1
  int v23; // t1
  unsigned int v24; // lr
  unsigned __int8 *v25; // r1
  char *v26; // r8
  int v27; // r10
  int v28; // t1
  int v29; // t1
  int result; // r0
  size_t v31; // r3
  size_t v32; // r2
  unsigned int v33; // r10
  unsigned int v34; // r9
  int v35; // r3
  unsigned __int8 *v36; // r1
  size_t v37; // r3
  char *v38; // r12
  int v39; // r8
  int v40; // t1
  int v41; // t1
  unsigned __int8 *v42; // r3
  char *v43; // r1
  int v44; // lr
  int v45; // t1
  int v46; // t1
  unsigned int v47; // [sp+0h] [bp-424h]
  unsigned int v48; // [sp+4h] [bp-420h]
  int v49; // [sp+4h] [bp-420h]
  unsigned int v50; // [sp+Ch] [bp-418h]
  int v51[253]; // [sp+1Ch] [bp-408h] BYREF
  int v52; // [sp+41Ch] [bp-8h] BYREF

  v8 = a4 - 1;
  if ( a4 > 2 )
  {
    v9 = sub_65864((int)s1, a4, v51);
    v48 = v51[0];
  }
  else
  {
    v9 = a4 - 1;
    v48 = 1;
    v51[0] = 1;
  }
  v10 = v51;
  do
  {
    v10[1] = a4;
    ++v10;
  }
  while ( v10 != &v52 );
  if ( a4 )
  {
    v11 = s1 - 1;
    v12 = v8;
    do
    {
      v13 = (unsigned __int8)*++v11;
      v51[v13 + 1] = v12;
      v16 = v12-- != 0;
    }
    while ( v16 );
  }
  v14 = memcmp(s1, &s1[v48], v9);
  if ( !v14 )
  {
    v47 = a2 - a4;
    v50 = a4 - v48;
    v15 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v17 = v51[*(unsigned __int8 *)(a1 + v15 + v8) + 1];
        if ( v17 )
        {
          v16 = 1;
          if ( v14 )
            v16 = v17 >= v48;
          v14 = 0;
          if ( !v16 )
            v17 = v50;
          v15 += v17;
          goto LABEL_15;
        }
        v18 = v9 < v14 ? v14 : v9;
        if ( v18 < v8 )
          break;
LABEL_25:
        v24 = v9 - 1;
        if ( v9 > v14 && (v25 = (unsigned __int8 *)(a1 + v9 - 1 + v15), (unsigned __int8)s1[v9 - 1] == *v25) )
        {
          v26 = &s1[v9 - 1];
          while ( v24 - 1 != v14 - 1 )
          {
            v28 = (unsigned __int8)*--v26;
            v27 = v28;
            v29 = *--v25;
            if ( v27 != v29 )
              break;
            --v24;
          }
        }
        else
        {
          v24 = v9;
        }
        if ( v14 + 1 > v24 )
          return a1 + v15;
        v14 = v50;
        v15 += v48;
        if ( v47 < v15 )
          return 0;
      }
      v19 = &s1[v18];
      v20 = (unsigned __int8 *)(a1 + v18 + v15);
      if ( *v20 == (unsigned __int8)s1[v18] )
      {
        while ( ++v18 < v8 )
        {
          v22 = (unsigned __int8)*++v19;
          v21 = v22;
          v23 = *++v20;
          if ( v21 != v23 )
            goto LABEL_35;
        }
        goto LABEL_25;
      }
LABEL_35:
      v14 = 0;
      v15 += v18 + 1 - v9;
LABEL_15:
      if ( v47 < v15 )
        return 0;
    }
  }
  v31 = a4 - v9;
  v32 = v9 - 1;
  v33 = a2 - a4;
  if ( a4 - v9 < v9 )
    v31 = v9;
  v34 = 0;
  v49 = v31 + 1;
  while ( 1 )
  {
    result = a1 + v34;
    v35 = v51[*(unsigned __int8 *)(a1 + v34 + v8) + 1];
    if ( !v35 )
      break;
LABEL_52:
    v34 += v35;
LABEL_53:
    if ( v34 > v33 )
      return 0;
  }
  if ( v9 < v8 )
  {
    v36 = (unsigned __int8 *)(a1 + v9 + v34);
    if ( *v36 != (unsigned __int8)s1[v9] )
    {
      v37 = v9;
LABEL_55:
      v34 += v37 + 1 - v9;
      goto LABEL_53;
    }
    v38 = &s1[v9];
    v37 = v9;
    while ( ++v37 < v8 )
    {
      v40 = (unsigned __int8)*++v38;
      v39 = v40;
      v41 = *++v36;
      if ( v39 != v41 )
        goto LABEL_55;
    }
  }
  if ( !v9 )
    return result;
  v42 = (unsigned __int8 *)(a1 + v32 + v34);
  if ( *v42 != (unsigned __int8)s1[v32] )
  {
LABEL_51:
    v35 = v49;
    goto LABEL_52;
  }
  v43 = &s1[v32];
  while ( v43 != s1 )
  {
    v45 = (unsigned __int8)*--v43;
    v44 = v45;
    v46 = *--v42;
    if ( v44 != v46 )
      goto LABEL_51;
  }
  return result;
}
