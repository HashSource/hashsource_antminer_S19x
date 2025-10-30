int __fastcall sub_1B05F4(int result, char *a2, int a3)
{
  char *v3; // r12
  int v4; // r3
  char *v5; // r5
  int v6; // r7
  char *v7; // r4
  char *v8; // r6
  unsigned int v9; // r1
  unsigned int v10; // r0
  signed int v11; // r3
  unsigned int v12; // lr
  int v13; // r4
  int v14; // r3
  unsigned int v15; // r2
  char *v16; // r8
  int v17; // r0
  int v18; // r1
  unsigned int v19; // r3
  unsigned int v20; // r0
  char *v21; // r2
  char *v22; // r3
  unsigned int v23; // t1
  int v24; // r3
  int v25; // r1
  unsigned int v26; // t1
  int v27; // r1
  int v28; // r6
  int v29; // r4
  int v31; // r1
  int v32; // lr
  int v33; // r3
  int v34; // r1
  char *v35; // r8
  int v36; // [sp+4h] [bp-24h]

  v4 = (int)&a2[-result];
  if ( (int)&a2[-result] <= 128 )
    return result;
  if ( a3 )
    v3 = a2;
  v5 = (char *)result;
  v6 = a3;
  if ( !a3 )
  {
    v35 = a2;
LABEL_25:
    v28 = v4 >> 3;
    v29 = ((v4 >> 3) - 2) >> 1;
    do
    {
      LOBYTE(v36) = 0;
      sub_1B0B34(
        v5,
        v29,
        v28,
        *(_DWORD *)&v5[8 * v29],
        *(_DWORD *)&v5[8 * v29 + 4],
        v36,
        *(_DWORD *)&v5[8 * v29],
        *(_DWORD *)&v5[8 * v29 + 4]);
    }
    while ( v29-- != 0 );
    do
    {
      v35 -= 8;
      v31 = *((_DWORD *)v5 + 1);
      v32 = *((_DWORD *)v35 + 1);
      v33 = *(_DWORD *)v35;
      *(_DWORD *)v35 = *(_DWORD *)v5;
      *((_DWORD *)v35 + 1) = v31;
      LOBYTE(v36) = 0;
      result = sub_1B0B34(v5, 0, (v35 - v5) >> 3, v33, v32, v36, v33, v32);
    }
    while ( v35 - v5 > 8 );
    return result;
  }
  v7 = a2;
  v8 = (char *)(result + 8);
  while ( 2 )
  {
    v9 = *((_DWORD *)v5 + 2);
    --v6;
    v10 = *((_DWORD *)v3 - 2);
    v11 = ((v7 - v5) >> 3) + ((unsigned int)(v7 - v5) >> 31);
    v12 = *(_DWORD *)v5;
    v13 = *((_DWORD *)v5 + 1);
    v14 = v11 >> 1;
    v15 = *(_DWORD *)&v5[8 * v14];
    v16 = &v5[8 * v14];
    if ( v9 >= v15 )
    {
      if ( v9 < v10 )
        goto LABEL_10;
      if ( v15 < v10 )
      {
LABEL_22:
        v27 = *((_DWORD *)v3 - 1);
        v19 = *(_DWORD *)v5;
        *(_DWORD *)v5 = *((_DWORD *)v3 - 2);
        *((_DWORD *)v5 + 1) = v27;
        *((_DWORD *)v3 - 2) = v12;
        *((_DWORD *)v3 - 1) = v13;
        v12 = *((_DWORD *)v5 + 2);
        goto LABEL_11;
      }
LABEL_30:
      v34 = *((_DWORD *)v16 + 1);
      *(_DWORD *)v5 = *(_DWORD *)v16;
      *((_DWORD *)v5 + 1) = v34;
      *(_DWORD *)&v5[8 * v14] = v12;
      *((_DWORD *)v16 + 1) = v13;
      v19 = *((_DWORD *)v3 - 2);
      v12 = *((_DWORD *)v5 + 2);
      goto LABEL_11;
    }
    if ( v15 < v10 )
      goto LABEL_30;
    if ( v9 < v10 )
      goto LABEL_22;
LABEL_10:
    v17 = *(_DWORD *)v8;
    v18 = *((_DWORD *)v8 + 1);
    *((_DWORD *)v5 + 2) = v12;
    *((_DWORD *)v5 + 3) = v13;
    *(_DWORD *)v5 = v17;
    *((_DWORD *)v5 + 1) = v18;
    v19 = *((_DWORD *)v3 - 2);
LABEL_11:
    v20 = *(_DWORD *)v5;
    v7 = v8;
    v21 = v3;
    while ( 1 )
    {
      v35 = v7;
      if ( v20 > v12 )
        goto LABEL_19;
      if ( v20 < v19 )
      {
        v22 = v21 - 16;
        do
        {
          v21 = v22;
          v23 = *(_DWORD *)v22;
          v22 -= 8;
        }
        while ( v20 < v23 );
      }
      else
      {
        v21 -= 8;
      }
      if ( v7 >= v21 )
        break;
      v24 = *((_DWORD *)v7 + 1);
      v25 = *((_DWORD *)v21 + 1);
      *(_DWORD *)v7 = *(_DWORD *)v21;
      *((_DWORD *)v7 + 1) = v25;
      *((_DWORD *)v21 + 1) = v24;
      *(_DWORD *)v21 = v12;
      v19 = *((_DWORD *)v21 - 2);
      v20 = *(_DWORD *)v5;
LABEL_19:
      v26 = *((_DWORD *)v7 + 2);
      v7 += 8;
      v12 = v26;
    }
    result = sub_1B05F4(v7, v3, v6);
    v4 = v7 - v5;
    if ( v7 - v5 > 128 )
    {
      v3 = v7;
      if ( !v6 )
        goto LABEL_25;
      continue;
    }
    return result;
  }
}
