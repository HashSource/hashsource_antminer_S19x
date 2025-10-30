int __fastcall sub_1CF2D0(int result, char *a2, int a3, int a4)
{
  int v5; // r2
  char *v6; // r5
  char *v7; // r6
  char *v9; // r4
  char *v10; // r9
  unsigned int v11; // r12
  unsigned int v12; // r0
  signed int v13; // r3
  unsigned int v14; // lr
  int v15; // r4
  int v16; // r3
  unsigned int v17; // r2
  char *v18; // r6
  int v19; // r3
  unsigned int v20; // r2
  char *v21; // r0
  char *v22; // r3
  unsigned int v23; // t1
  int v24; // r12
  int v25; // r3
  unsigned int v26; // t1
  int v27; // r3
  int v28; // r4
  int v29; // r7
  unsigned int v31; // r0
  unsigned int v32; // r1
  int v33; // r7
  int v34; // r3
  int v35; // r0

  v5 = (int)&a2[-result];
  if ( (int)&a2[-result] <= 128 )
    return result;
  v6 = (char *)result;
  if ( !a3 )
  {
    v7 = a2;
LABEL_23:
    v28 = v5 >> 3;
    v29 = ((v5 >> 3) - 2) >> 1;
    do
      sub_1CF0C8((int)v6, v29, v28, *(_DWORD *)&v6[8 * v29], *(_DWORD *)&v6[8 * v29 + 4]);
    while ( v29-- != 0 );
    do
    {
      v31 = *((_DWORD *)v7 - 2);
      v32 = *((_DWORD *)v7 - 1);
      v33 = v7 - 8 - v6;
      v34 = *((_DWORD *)v6 + 1);
      *((_DWORD *)v7 - 2) = *(_DWORD *)v6;
      *((_DWORD *)v7 - 1) = v34;
      v7 -= 8;
      result = sub_1CF0C8((int)v6, 0, v33 >> 3, v31, v32);
    }
    while ( v33 > 8 );
    return result;
  }
  v9 = a2;
  v10 = (char *)(result + 8);
  while ( 2 )
  {
    v11 = *((_DWORD *)v6 + 2);
    --a3;
    v12 = *((_DWORD *)a2 - 2);
    v13 = ((v9 - v6) >> 3) + ((unsigned int)(v9 - v6) >> 31);
    v14 = *(_DWORD *)v6;
    v15 = *((_DWORD *)v6 + 1);
    v16 = v13 >> 1;
    v17 = *(_DWORD *)&v6[8 * v16];
    v18 = &v6[8 * v16];
    if ( v11 < v17 )
    {
      if ( v17 < v12 )
      {
        v35 = *((_DWORD *)v18 + 1);
        *(_DWORD *)v6 = v17;
        *(_DWORD *)&v6[8 * v16] = v14;
        *((_DWORD *)v6 + 1) = v35;
        v14 = *((_DWORD *)v6 + 2);
        v11 = *(_DWORD *)v6;
        *((_DWORD *)v18 + 1) = v15;
        v20 = *((_DWORD *)a2 - 2);
        goto LABEL_9;
      }
      if ( v11 >= v12 )
        goto LABEL_8;
LABEL_20:
      v27 = *((_DWORD *)a2 - 1);
      v20 = *(_DWORD *)v6;
      *(_DWORD *)v6 = v12;
      *((_DWORD *)a2 - 2) = v14;
      *((_DWORD *)v6 + 1) = v27;
      v11 = *(_DWORD *)v6;
      v14 = *((_DWORD *)v6 + 2);
      *((_DWORD *)a2 - 1) = v15;
      goto LABEL_9;
    }
    if ( v11 >= v12 )
    {
      if ( v17 >= v12 )
      {
        *(_DWORD *)v6 = v17;
        *(_DWORD *)&v6[8 * v16] = v14;
        v20 = *((_DWORD *)a2 - 2);
        v14 = *((_DWORD *)v6 + 2);
        v11 = *(_DWORD *)v6;
        *((_DWORD *)v6 + 1) = *((_DWORD *)v18 + 1);
        *((_DWORD *)v18 + 1) = v15;
        goto LABEL_9;
      }
      goto LABEL_20;
    }
LABEL_8:
    v19 = *((_DWORD *)v6 + 3);
    *(_DWORD *)v6 = v11;
    *((_DWORD *)v6 + 1) = v19;
    *((_DWORD *)v6 + 2) = v14;
    v20 = *((_DWORD *)a2 - 2);
    *((_DWORD *)v6 + 3) = v15;
LABEL_9:
    v9 = v10;
    v21 = a2;
    while ( 1 )
    {
      v7 = v9;
      if ( v14 < v11 )
        goto LABEL_17;
      if ( v11 < v20 )
      {
        v22 = v21 - 16;
        do
        {
          v21 = v22;
          v23 = *(_DWORD *)v22;
          v22 -= 8;
          v20 = v23;
        }
        while ( v11 < v23 );
      }
      else
      {
        v21 -= 8;
      }
      if ( v9 >= v21 )
        break;
      v24 = *((_DWORD *)v21 + 1);
      v25 = *((_DWORD *)v9 + 1);
      *(_DWORD *)v9 = v20;
      *(_DWORD *)v21 = v14;
      v20 = *((_DWORD *)v21 - 2);
      *((_DWORD *)v9 + 1) = v24;
      v11 = *(_DWORD *)v6;
      *((_DWORD *)v21 + 1) = v25;
LABEL_17:
      v26 = *((_DWORD *)v9 + 2);
      v9 += 8;
      v14 = v26;
    }
    result = sub_1CF2D0(v9, a2, a3, a4);
    v5 = v9 - v6;
    if ( v9 - v6 > 128 )
    {
      a2 = v9;
      if ( !a3 )
        goto LABEL_23;
      continue;
    }
    return result;
  }
}
