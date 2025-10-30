int *__fastcall sub_705CC(int a1, int a2)
{
  int *v2; // r4
  int *v3; // r8
  int *v6; // r3
  int v7; // r5
  int *v8; // r5
  int *v9; // r6
  int **v10; // r3
  int v11; // r1
  int v12; // r3
  int v13; // r2
  int *v15; // r3
  int *v16; // r3
  int *v17; // lr
  int v18; // r1
  int v19; // r12
  int v20; // r12
  void *ptr; // [sp+4h] [bp-4h] BYREF

  v3 = (int *)(a1 + 4);
  v2 = *(int **)a1;
  if ( *(_DWORD *)a1 == a1 + 4 )
    return 0;
  while ( 1 )
  {
    sub_708F0(v2[4], &ptr);
    v7 = (*(int (__fastcall **)(int, void *))(a1 + 36))(a2, ptr);
    free(ptr);
    if ( !v7 )
      break;
    v6 = (int *)*v2;
    v2 = (int *)v2[1];
    if ( v7 < 0 )
      v2 = v6;
    if ( v2 == v3 )
      return 0;
  }
  if ( v2 == v3 )
    return 0;
  v8 = (int *)*v2;
  if ( (int *)*v2 == v3 )
  {
    v9 = v2;
LABEL_14:
    v8 = (int *)v9[1];
    goto LABEL_15;
  }
  v9 = (int *)v2[1];
  if ( v9 != v3 )
  {
    while ( (int *)*v9 != v3 )
      v9 = (int *)*v9;
    goto LABEL_14;
  }
  v9 = v2;
LABEL_15:
  v8[2] = v9[2];
  v10 = (int **)v9[2];
  if ( v10 )
  {
    if ( *v10 == v9 )
      *v10 = v8;
    else
      v10[1] = v8;
  }
  else
  {
    *(_DWORD *)a1 = v8;
  }
  if ( v2 != v9 )
  {
    v11 = v2[4];
    v12 = v2[5];
    v13 = v9[5];
    v2[4] = v9[4];
    v9[4] = v11;
    v2[5] = v13;
    v9[5] = v12;
  }
  if ( !v9[3] )
  {
    v15 = *(int **)a1;
LABEL_25:
    if ( v8 == v15 )
    {
LABEL_33:
      v15[3] = 0;
    }
    else
    {
      while ( !v8[3] )
      {
        v16 = (int *)v8[2];
        v17 = (int *)*v16;
        if ( v8 == (int *)*v16 )
        {
          v17 = (int *)v16[1];
          if ( v17[3] == 1 )
          {
            v17[3] = 0;
            v16[3] = 1;
            sub_701D4((int **)a1, v16);
            v16 = (int *)v8[2];
            v17 = (int *)v16[1];
          }
          v20 = v17[1];
          if ( *(_DWORD *)(*v17 + 12) )
          {
            if ( !*(_DWORD *)(v20 + 12) )
            {
              *(_DWORD *)(*v17 + 12) = 0;
              v17[3] = 1;
              sub_7020C((_DWORD *)a1, v17);
              v16 = (int *)v8[2];
              v17 = (int *)v16[1];
              v20 = v17[1];
            }
LABEL_41:
            v17[3] = v16[3];
            v16[3] = 0;
            *(_DWORD *)(v20 + 12) = 0;
            sub_701D4((int **)a1, v16);
            v8 = *(int **)a1;
            v15 = *(int **)a1;
            goto LABEL_25;
          }
          if ( *(_DWORD *)(v20 + 12) )
            goto LABEL_41;
        }
        else
        {
          if ( v17[3] == 1 )
          {
            v17[3] = 0;
            v16[3] = 1;
            sub_7020C((_DWORD *)a1, v16);
            v16 = (int *)v8[2];
            v17 = (int *)*v16;
          }
          v18 = v17[1];
          v19 = *v17;
          if ( *(_DWORD *)(v18 + 12) )
          {
            if ( !*(_DWORD *)(v19 + 12) )
            {
              *(_DWORD *)(v18 + 12) = 0;
              v17[3] = 1;
              sub_701D4((int **)a1, v17);
              v16 = (int *)v8[2];
              v17 = (int *)*v16;
              v19 = *(_DWORD *)*v16;
            }
LABEL_36:
            v17[3] = v16[3];
            v16[3] = 0;
            *(_DWORD *)(v19 + 12) = 0;
            sub_7020C((_DWORD *)a1, v16);
            v8 = *(int **)a1;
            v15 = *(int **)a1;
            goto LABEL_25;
          }
          if ( *(_DWORD *)(v19 + 12) )
            goto LABEL_36;
        }
        v8 = v16;
        v15 = *(int **)a1;
        v17[3] = 1;
        if ( v8 == v15 )
          goto LABEL_33;
      }
      v8[3] = 0;
    }
  }
  sub_70374((_DWORD **)a1);
  return v9;
}
