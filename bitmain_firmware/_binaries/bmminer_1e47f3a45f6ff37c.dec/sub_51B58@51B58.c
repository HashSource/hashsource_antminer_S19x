int __fastcall sub_51B58(int a1, int a2, char *s1, unsigned int a4)
{
  size_t v8; // r7
  size_t v9; // r4
  int *v10; // r3
  char *v11; // r1
  int v12; // r2
  int v13; // t1
  unsigned int v14; // r0
  unsigned int v15; // r12
  bool v16; // cc
  unsigned int v17; // r3
  size_t v18; // r3
  unsigned __int8 *v19; // r2
  char *v20; // r1
  int v21; // r8
  int v22; // t1
  int v23; // t1
  unsigned int v24; // r2
  unsigned __int8 *v25; // r1
  char *v26; // r3
  int v27; // r8
  int v28; // t1
  int v29; // t1
  int result; // r0
  size_t v31; // r3
  bool v32; // cf
  unsigned int v33; // r9
  unsigned int v34; // r8
  int v35; // r3
  unsigned __int8 *v36; // r2
  size_t v37; // r3
  char *v38; // r1
  int v39; // lr
  int v40; // t1
  int v41; // t1
  unsigned __int8 *v42; // r2
  char *v43; // r3
  int v44; // r12
  int v45; // t1
  int v46; // t1
  unsigned int v47; // r0
  unsigned int v48; // [sp+0h] [bp-424h]
  unsigned int v49; // [sp+4h] [bp-420h]
  int v50; // [sp+8h] [bp-41Ch]
  unsigned int v51; // [sp+Ch] [bp-418h]
  int v52[253]; // [sp+1Ch] [bp-408h] BYREF
  int v53; // [sp+41Ch] [bp-8h] BYREF

  if ( a4 > 2 )
  {
    v47 = sub_51A40((int)s1, a4, v52);
    v9 = a4 - 1;
    v49 = v52[0];
    v8 = v47;
  }
  else
  {
    v8 = a4 - 1;
    v49 = 1;
    v9 = a4 - 1;
    v52[0] = 1;
  }
  v10 = v52;
  do
  {
    v10[1] = a4;
    ++v10;
  }
  while ( v10 != &v53 );
  if ( a4 )
  {
    v11 = s1;
    v12 = v9;
    do
    {
      v13 = (unsigned __int8)*v11++;
      v52[v13 + 1] = v12--;
    }
    while ( v11 != &s1[a4] );
  }
  v14 = memcmp(s1, &s1[v49], v8);
  if ( !v14 )
  {
    v48 = a2 - a4;
    v15 = 0;
    v51 = a4 - v49;
    while ( 1 )
    {
      while ( 1 )
      {
        v17 = v52[*(unsigned __int8 *)(a1 + v15 + v9) + 1];
        if ( v17 )
        {
          v16 = v14 != 0;
          if ( v14 )
            v16 = v49 > v17;
          v14 = 0;
          if ( v16 )
            v17 = v51;
          v15 += v17;
          goto LABEL_16;
        }
        v18 = v14 < v8 ? v8 : v14;
        if ( v18 < v9 )
          break;
LABEL_26:
        v24 = v8 - 1;
        if ( v8 > v14 && (v25 = (unsigned __int8 *)(a1 + v15 + v8 - 1), (unsigned __int8)s1[v8 - 1] == *v25) )
        {
          v26 = &s1[v8 - 1];
          while ( v26 != &s1[v14] )
          {
            v28 = (unsigned __int8)*--v26;
            v27 = v28;
            v29 = *--v25;
            if ( v27 != v29 )
              break;
            --v24;
          }
          if ( v14 + 1 > v24 )
            return a1 + v15;
        }
        else if ( v14 + 1 > v8 )
        {
          return a1 + v15;
        }
        v14 = v51;
        v15 += v49;
        if ( v48 < v15 )
          return 0;
      }
      v19 = (unsigned __int8 *)(a1 + v18 + v15);
      v20 = &s1[v18];
      if ( (unsigned __int8)s1[v18] == *v19 )
      {
        while ( ++v18 < v9 )
        {
          v22 = (unsigned __int8)*++v20;
          v21 = v22;
          v23 = *++v19;
          if ( v21 != v23 )
            goto LABEL_36;
        }
        goto LABEL_26;
      }
LABEL_36:
      v14 = 0;
      v15 += 1 - v8 + v18;
LABEL_16:
      if ( v48 < v15 )
        return 0;
    }
  }
  v31 = a4 - v8;
  v32 = a4 - v8 >= v8;
  v33 = a2 - a4;
  v34 = 0;
  if ( !v32 )
    v31 = v8;
  v50 = v31 + 1;
  while ( 1 )
  {
    result = a1 + v34;
    v35 = v52[*(unsigned __int8 *)(a1 + v34 + v9) + 1];
    if ( !v35 )
      break;
LABEL_53:
    v34 += v35;
LABEL_54:
    if ( v33 < v34 )
      return 0;
  }
  if ( v8 < v9 )
  {
    v36 = (unsigned __int8 *)(a1 + v34 + v8);
    if ( (unsigned __int8)s1[v8] != *v36 )
    {
      v37 = v8;
LABEL_56:
      v34 += 1 - v8 + v37;
      goto LABEL_54;
    }
    v38 = &s1[v8];
    v37 = v8;
    while ( ++v37 < v9 )
    {
      v40 = (unsigned __int8)*++v38;
      v39 = v40;
      v41 = *++v36;
      if ( v39 != v41 )
        goto LABEL_56;
    }
  }
  if ( !v8 )
    return result;
  v42 = (unsigned __int8 *)(a1 + v34 + v8 - 1);
  if ( (unsigned __int8)s1[v8 - 1] != *v42 )
  {
LABEL_52:
    v35 = v50;
    goto LABEL_53;
  }
  v43 = &s1[v8 - 1];
  while ( v43 != s1 )
  {
    v45 = (unsigned __int8)*--v43;
    v44 = v45;
    v46 = *--v42;
    if ( v44 != v46 )
      goto LABEL_52;
  }
  return result;
}
