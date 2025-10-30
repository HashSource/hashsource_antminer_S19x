_DWORD *__fastcall sub_2FF918(_DWORD *a1, unsigned __int8 *a2, unsigned int a3, int a4)
{
  unsigned int v5; // r10
  size_t v9; // r9
  unsigned __int8 *v10; // r1
  unsigned __int8 *v11; // r2
  int v12; // t1
  _DWORD *v13; // r4
  _DWORD *v15; // r0
  int v16; // lr
  unsigned __int8 *v17; // r12
  unsigned int v18; // r10
  unsigned __int8 *v19; // r2
  int v20; // r3
  unsigned __int8 *v21; // r1
  unsigned __int8 *v22; // r0
  unsigned __int8 *v24; // r0
  int v25; // t1
  unsigned __int8 *v26; // r2
  unsigned int v27; // r3
  int v28; // r1
  int v29; // r0
  unsigned int v30; // t1

  v5 = a1[11];
  v9 = a1[10];
  if ( v5 )
  {
    if ( v9 == 1 )
    {
      v5 = *a2;
      v26 = a2 + 1;
      if ( *a2 )
      {
        v27 = 0;
        do
        {
          v28 = 131073 * v5;
          v29 = v26 - a2;
          v30 = *v26++;
          v5 = v30;
          v27 = (v28 + v27) ^ ((v28 + v27) >> 2);
        }
        while ( v30 );
        v9 = v29 + 1;
        v5 = (v27 + v29 + (v29 << 17)) ^ ((v27 + v29 + (v29 << 17)) >> 2);
      }
    }
    else
    {
      v16 = 0;
      v17 = a2 + 1;
      v18 = 0;
      v19 = a2;
      if ( v9 )
      {
        while ( 1 )
        {
          v20 = *(v17 - 1);
          v21 = &v19[v9];
          if ( !*(v17 - 1) )
          {
            v22 = v17;
            while ( v21 != v22 )
            {
              if ( *v22++ )
                goto LABEL_28;
            }
            if ( v22 - v19 == v9 )
              break;
          }
LABEL_28:
          v24 = &v19[v9 - 1];
          while ( 1 )
          {
            v18 = (131073 * v20 + v18) ^ ((131073 * v20 + v18) >> 2);
            if ( v24 == v19 )
              break;
            v25 = *++v19;
            v20 = v25;
          }
          ++v16;
          v17 += v9;
          v19 = v21;
        }
      }
      v9 += v9 * v16;
      v5 = (v18 + v16 + (v16 << 17)) ^ ((v18 + v16 + (v16 << 17)) >> 2);
    }
  }
  else if ( v9 )
  {
    v10 = &a2[v9];
    v11 = a2;
    do
    {
      v12 = *v11++;
      v5 = (131073 * v12 + v5) ^ ((131073 * v12 + v5) >> 2);
    }
    while ( v11 != v10 );
  }
  else
  {
    v5 = 0;
  }
  v13 = *(_DWORD **)(*a1 + 4 * ((unsigned __int64)sub_347674(v5, a1[3]) >> 32));
  if ( v13 )
  {
    while ( v13[2] != v5 || v13[3] != v9 || memcmp((const void *)v13[1], a2, v9) )
    {
      v13 = (_DWORD *)*v13;
      if ( !v13 )
        goto LABEL_16;
    }
    if ( v13[4] >= a3 )
      return v13;
    if ( a4 )
    {
      v13[3] = 0;
      v13[4] = 0;
      goto LABEL_17;
    }
    return (_DWORD *)a4;
  }
LABEL_16:
  if ( !a4 )
    return (_DWORD *)a4;
LABEL_17:
  v15 = sub_2AAA38((int)a1, (int)a2, v5);
  v13 = v15;
  if ( v15 )
  {
    v15[3] = v9;
    v15[4] = a3;
  }
  return v13;
}
