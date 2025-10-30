int *__fastcall sub_6A6EC(int a1, int a2)
{
  int *v2; // r4
  int *v3; // r7
  int v6; // r5
  int *v7; // r3
  int *v8; // r5
  int *v9; // r7
  int **v10; // r3
  int v11; // r1
  int v12; // r3
  int v13; // r2
  int *v15; // r3
  int *v16; // r2
  int *v17; // r3
  int v18; // r1
  int v19; // r12
  int v20; // r0
  int v21; // r12
  int v22; // r0
  void *ptr; // [sp+4h] [bp-4h] BYREF

  v3 = (int *)(a1 + 4);
  v2 = *(int **)a1;
  if ( a1 + 4 == *(_DWORD *)a1 )
    return 0;
  while ( 1 )
  {
    sub_6AC04(v2[4], &ptr);
    v6 = (*(int (__fastcall **)(int, void *))(a1 + 36))(a2, ptr);
    free(ptr);
    v7 = (int *)*v2;
    if ( !v6 )
      break;
    v2 = (int *)v2[1];
    if ( v6 < 0 )
      v2 = v7;
    if ( v2 == v3 )
      return 0;
  }
  v8 = (int *)v2[1];
  if ( v3 != v7 )
  {
    if ( v3 != v8 )
    {
      while ( v3 != (int *)*v8 )
        v8 = (int *)*v8;
      v9 = v8;
      v8 = (int *)v8[1];
      goto LABEL_14;
    }
    v8 = (int *)*v2;
  }
  v9 = v2;
LABEL_14:
  v8[2] = v9[2];
  v10 = (int **)v9[2];
  if ( v10 )
  {
    if ( v9 == *v10 )
      *v10 = v8;
    else
      v10[1] = v8;
  }
  else
  {
    *(_DWORD *)a1 = v8;
  }
  if ( v9 != v2 )
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
    if ( v8 != v15 )
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
            sub_6A090((int **)a1, v16);
            v16 = (int *)v8[2];
            v17 = (int *)v16[1];
          }
          v21 = v17[1];
          v22 = *(_DWORD *)(v21 + 12);
          if ( *(_DWORD *)(*v17 + 12) )
          {
            if ( v22 )
            {
              v8 = v16;
            }
            else
            {
              *(_DWORD *)(*v17 + 12) = 0;
              v17[3] = 1;
              sub_6A0E4((_DWORD *)a1, v17);
              v8 = (int *)v8[2];
              v17 = (int *)v8[1];
              v21 = v17[1];
            }
LABEL_42:
            v17[3] = v8[3];
            v8[3] = 0;
            *(_DWORD *)(v21 + 12) = 0;
            sub_6A090((int **)a1, v8);
            v8 = *(int **)a1;
            v15 = *(int **)a1;
            goto LABEL_25;
          }
          v8 = v16;
          if ( v22 )
            goto LABEL_42;
        }
        else
        {
          if ( v17[3] == 1 )
          {
            v17[3] = 0;
            v16[3] = 1;
            sub_6A0E4((_DWORD *)a1, v16);
            v16 = (int *)v8[2];
            v17 = (int *)*v16;
          }
          v18 = v17[1];
          v19 = *v17;
          v20 = *(_DWORD *)(*v17 + 12);
          if ( *(_DWORD *)(v18 + 12) )
          {
            if ( v20 )
            {
              v8 = v16;
            }
            else
            {
              *(_DWORD *)(v18 + 12) = 0;
              v17[3] = 1;
              sub_6A090((int **)a1, v17);
              v8 = (int *)v8[2];
              v17 = (int *)*v8;
              v19 = *(_DWORD *)*v8;
            }
LABEL_37:
            v17[3] = v8[3];
            v8[3] = 0;
            *(_DWORD *)(v19 + 12) = 0;
            sub_6A0E4((_DWORD *)a1, v8);
            v8 = *(int **)a1;
            v15 = *(int **)a1;
            goto LABEL_25;
          }
          v8 = v16;
          if ( v20 )
            goto LABEL_37;
        }
        v17[3] = 1;
        if ( v8 == *(int **)a1 )
          break;
      }
    }
    v8[3] = 0;
  }
  sub_6A330((_DWORD **)a1);
  return v9;
}
