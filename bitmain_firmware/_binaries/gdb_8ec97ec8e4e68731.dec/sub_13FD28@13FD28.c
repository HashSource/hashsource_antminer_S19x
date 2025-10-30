int __fastcall sub_13FD28(int result, char *a2, int a3)
{
  int v3; // r3
  char *v4; // r5
  char *v5; // r6
  int v6; // r8
  char *v7; // r4
  char *v8; // r7
  unsigned int v9; // r0
  unsigned int v10; // r2
  unsigned int v11; // r12
  int v12; // r4
  unsigned int v13; // r3
  unsigned int v14; // r2
  char *v15; // r3
  unsigned int v16; // t1
  unsigned int v17; // t1
  int v18; // r4
  int v19; // r7
  char *v20; // r8
  int v21; // t1
  int v23; // t1
  int v24; // [sp+0h] [bp-20h]

  v3 = (int)&a2[-result];
  if ( (int)&a2[-result] <= 64 )
    return result;
  v4 = a2;
  v5 = (char *)result;
  v6 = a3;
  if ( !a3 )
  {
LABEL_20:
    v18 = v3 >> 2;
    v19 = ((v3 >> 2) - 2) >> 1;
    v20 = &v5[4 * v19];
    do
    {
      v21 = *(_DWORD *)v20;
      v20 -= 4;
      LOBYTE(v24) = 0;
      sub_14C4C4(v5, v19, v18, v21, v24);
    }
    while ( v19-- != 0 );
    do
    {
      v23 = *((_DWORD *)v4 - 1);
      v4 -= 4;
      *(_DWORD *)v4 = *(_DWORD *)v5;
      LOBYTE(v24) = 0;
      result = sub_14C4C4(v5, 0, (v4 - v5) >> 2, v23, v24);
    }
    while ( v4 - v5 > 4 );
    return result;
  }
  v7 = a2;
  v8 = (char *)(result + 4);
  while ( 2 )
  {
    v9 = *((_DWORD *)v5 + 1);
    --v6;
    v10 = *((_DWORD *)a2 - 1);
    v11 = *(_DWORD *)v5;
    v12 = (int)(((v7 - v5) >> 2) + ((unsigned int)(v7 - v5) >> 31)) >> 1;
    v13 = *(_DWORD *)&v5[4 * v12];
    if ( v9 >= v13 )
    {
      if ( v9 < v10 )
        goto LABEL_7;
      if ( v13 < v10 )
      {
LABEL_17:
        *(_DWORD *)v5 = v10;
        v14 = v11;
        *((_DWORD *)a2 - 1) = v11;
        v9 = *(_DWORD *)v5;
        v11 = *((_DWORD *)v5 + 1);
        goto LABEL_8;
      }
LABEL_25:
      *(_DWORD *)v5 = v13;
      *(_DWORD *)&v5[4 * v12] = v11;
      v9 = *(_DWORD *)v5;
      v11 = *((_DWORD *)v5 + 1);
      v14 = *((_DWORD *)a2 - 1);
      goto LABEL_8;
    }
    if ( v13 < v10 )
      goto LABEL_25;
    if ( v9 < v10 )
      goto LABEL_17;
LABEL_7:
    *(_DWORD *)v5 = v9;
    *((_DWORD *)v5 + 1) = v11;
    v14 = *((_DWORD *)a2 - 1);
LABEL_8:
    v7 = v8;
    v15 = a2;
    while ( 1 )
    {
      v4 = v7;
      if ( v9 > v11 )
        goto LABEL_14;
      v15 -= 4;
      if ( v9 < v14 )
      {
        do
        {
          v16 = *((_DWORD *)v15 - 1);
          v15 -= 4;
          v14 = v16;
        }
        while ( v9 < v16 );
      }
      if ( v15 <= v7 )
        break;
      *(_DWORD *)v7 = v14;
      *(_DWORD *)v15 = v11;
      v14 = *((_DWORD *)v15 - 1);
      v9 = *(_DWORD *)v5;
LABEL_14:
      v17 = *((_DWORD *)v7 + 1);
      v7 += 4;
      v11 = v17;
    }
    result = sub_13FD28(v7);
    v3 = v7 - v5;
    if ( v7 - v5 > 64 )
    {
      a2 = v7;
      if ( !v6 )
        goto LABEL_20;
      continue;
    }
    return result;
  }
}
