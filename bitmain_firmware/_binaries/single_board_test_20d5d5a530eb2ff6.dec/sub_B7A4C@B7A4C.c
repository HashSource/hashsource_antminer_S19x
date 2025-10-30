int __fastcall sub_B7A4C(_DWORD *a1, int a2, int a3, int **a4)
{
  int **v4; // r6
  int v5; // lr
  int *v6; // r7
  size_t *v7; // r12
  int *v8; // r10
  int v11; // r4
  const void *v14; // r1
  void *v15; // r0
  int *v16; // r3
  int v17; // r2
  void *v18; // r0
  int *v19; // r5
  int v20; // r1
  int v21; // r2
  int v22; // r3
  int *v23; // r7
  int *v24; // r0
  int *v25; // r1
  int *v26; // r2
  int *v27; // r3
  size_t v28; // r1
  size_t v29; // r2
  size_t v30; // r3

  v4 = (int **)a1[9];
  v5 = a1[6];
  v6 = *v4;
  v7 = (size_t *)v4[1];
  if ( (v5 & 0x200) != 0 )
    v8 = *v4;
  else
    v8 = v4[1];
  if ( a2 == 10 )
    return *v8;
  v11 = a2;
  if ( a2 <= 10 )
  {
    if ( a2 == 3 )
    {
      v11 = *v8;
      if ( a4 )
        *a4 = (int *)v8[1];
      return v11;
    }
    if ( a2 > 3 )
    {
      if ( a2 == 8 )
        return a1[5];
      if ( a2 == 9 )
      {
        a1[5] = a3;
        return 1;
      }
    }
    else
    {
      if ( a2 == 1 )
      {
        v18 = (void *)v6[1];
        if ( v18 )
        {
          if ( (v5 & 0x200) != 0 )
          {
            v28 = v7[1];
            v29 = v7[2];
            v30 = v7[3];
            *v6 = *v7;
            v6[1] = v28;
            v6[2] = v29;
            v6[3] = v30;
          }
          else
          {
            if ( (v5 & 0x400) != 0 )
            {
              v19 = v4[1];
            }
            else
            {
              memset(v18, 0, v6[2]);
              *v6 = 0;
              v19 = v4[1];
              v6 = *v4;
            }
            v20 = v6[1];
            v21 = v6[2];
            v22 = v6[3];
            v11 = 1;
            *v19 = *v6;
            v19[1] = v20;
            v19[2] = v21;
            v19[3] = v22;
          }
        }
        return v11;
      }
      if ( a2 == 2 )
        return *v8 == 0;
    }
    return 0;
  }
  if ( a2 == 114 )
  {
    if ( a1[5] && a1[4] )
    {
      if ( (v5 & 0x200) != 0 )
        v6[1] = 0;
      sub_BAE3C(v6);
      v23 = v4[1];
    }
    else
    {
      v23 = v4[1];
    }
    v24 = *a4;
    v25 = a4[1];
    v26 = a4[2];
    v27 = a4[3];
    v11 = 1;
    a1[5] = a3;
    *v4 = (int *)a4;
    *v23 = (int)v24;
    v23[1] = (int)v25;
    v23[2] = (int)v26;
    v23[3] = (int)v27;
    return v11;
  }
  if ( a2 <= 114 )
  {
    if ( a2 > 12 )
      return 0;
  }
  else
  {
    if ( a2 != 115 )
    {
      if ( a2 == 130 )
      {
        a1[8] = a3;
        return 1;
      }
      return 0;
    }
    if ( a4 )
    {
      if ( (v5 & 0x200) == 0 )
      {
        if ( a1[4] )
        {
          v14 = (const void *)v7[1];
          v15 = (void *)v6[1];
          if ( v14 != v15 )
          {
            memmove(v15, v14, *v7);
            v16 = v4[1];
            v6 = *v4;
            v17 = (*v4)[1];
            **v4 = *v16;
            v16[1] = v17;
          }
        }
      }
      *a4 = v6;
      return 1;
    }
  }
  return 1;
}
