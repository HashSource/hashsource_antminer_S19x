int __fastcall sub_70448(int a1, int a2, int a3, int a4, int a5)
{
  int *v9; // r0
  int *v10; // r5
  int *v11; // r8
  int *v12; // r4
  int *v13; // r3
  int v14; // r7
  int v16; // r7
  int *v17; // r4
  int *v18; // r1
  _DWORD *v19; // r3
  int *v20; // r3
  int v21; // r2
  int v22; // r0
  _DWORD *v23; // r3
  int v24; // r2
  int *v25; // r2
  void *ptr; // [sp+0h] [bp-Ch] BYREF
  void *v27[2]; // [sp+4h] [bp-8h] BYREF

  v9 = (int *)malloc(0x18u);
  if ( !v9 )
    return 2;
  v10 = v9;
  v11 = (int *)(a1 + 4);
  *v9 = a1 + 4;
  v9[1] = a1 + 4;
  v9[3] = 1;
  v9[4] = sub_708B8(a2, a3);
  if ( a4 )
    v10[5] = sub_708B8(a4, a5);
  else
    v10[5] = 0;
  v12 = *(int **)a1;
  if ( v11 == *(int **)a1 )
  {
    *(_DWORD *)a1 = v10;
    v10[2] = 0;
    v25 = v10;
  }
  else
  {
    while ( 1 )
    {
      sub_708F0(v12[4], &ptr);
      sub_708F0(v10[4], v27);
      v14 = (*(int (__fastcall **)(void *, void *))(a1 + 36))(v27[0], ptr);
      free(ptr);
      free(v27[0]);
      if ( !v14 )
        return 401;
      v13 = (int *)v12[1];
      if ( v14 < 0 )
        v13 = (int *)*v12;
      if ( v13 == v11 )
        break;
      v12 = v13;
    }
    v10[2] = (int)v12;
    sub_708F0(v12[4], &ptr);
    sub_708F0(v10[4], v27);
    v16 = (*(int (__fastcall **)(void *, void *))(a1 + 36))(v27[0], ptr);
    free(ptr);
    free(v27[0]);
    v25 = *(int **)a1;
    if ( v16 >= 0 )
      v12[1] = (int)v10;
    else
      *v12 = (int)v10;
LABEL_16:
    if ( v10 != v25 )
    {
      do
      {
        v17 = (int *)v10[2];
        if ( v17[3] != 1 )
          break;
        v18 = (int *)v17[2];
        v19 = (_DWORD *)*v18;
        if ( v17 == (int *)*v18 )
        {
          v22 = v18[1];
          if ( *(_DWORD *)(v22 + 12) == 1 )
          {
            v17[3] = 0;
            v10 = v18;
            *(_DWORD *)(v22 + 12) = 0;
            v18[3] = 1;
          }
          else
          {
            if ( (int *)v17[1] == v10 )
            {
              sub_701D4((int **)a1, (int *)v10[2]);
              v24 = v17[2];
              v10 = v17;
              v23 = *(_DWORD **)(v24 + 8);
            }
            else
            {
              v23 = (_DWORD *)v17[2];
              v24 = v10[2];
            }
            *(_DWORD *)(v24 + 12) = 0;
            v23[3] = 1;
            sub_7020C((_DWORD *)a1, v23);
            v25 = *(int **)a1;
          }
          goto LABEL_16;
        }
        if ( v19[3] == 1 )
        {
          v17[3] = 0;
          v10 = v18;
          v19[3] = 0;
          v18[3] = 1;
          goto LABEL_16;
        }
        if ( v10 == (int *)*v17 )
        {
          sub_7020C((_DWORD *)a1, (_DWORD *)v10[2]);
          v21 = v17[2];
          v10 = v17;
          v20 = *(int **)(v21 + 8);
        }
        else
        {
          v20 = (int *)v17[2];
          v21 = v10[2];
        }
        *(_DWORD *)(v21 + 12) = 0;
        v20[3] = 1;
        sub_701D4((int **)a1, v20);
        v25 = *(int **)a1;
      }
      while ( v10 != *(int **)a1 );
    }
  }
  v25[3] = 0;
  sub_70374((_DWORD **)a1);
  return 0;
}
