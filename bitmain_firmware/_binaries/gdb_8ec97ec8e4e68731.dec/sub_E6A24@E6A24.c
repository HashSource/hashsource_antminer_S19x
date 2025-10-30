unsigned int **__fastcall sub_E6A24(unsigned int **result, char *a2, int a3, int a4, int a5, char a6)
{
  bool v6; // zf
  unsigned int **v7; // r4
  unsigned int *v8; // r3
  int v9; // r6
  char *v10; // r5
  int v11; // r10
  int v12; // lr
  char *v13; // r8
  unsigned int v14; // r9
  int v15; // r11
  int v16; // r6
  int v17; // r9
  unsigned int **v18; // r8
  unsigned int **v19; // r11
  int v20; // r8
  int v21; // lr
  unsigned int **v22; // r9
  unsigned int v23; // r10
  int v24; // r12
  int v25; // r12
  int v26; // [sp+4h] [bp-10h]
  int v27; // [sp+Ch] [bp-8h]

  while ( 1 )
  {
    v6 = a5 == 0;
    if ( a5 )
      v6 = a4 == 0;
    if ( v6 )
      return result;
    v7 = result;
    if ( a4 + a5 == 2 )
    {
      v8 = *result;
      if ( **result < **(_DWORD **)a2 )
      {
        *result = *(unsigned int **)a2;
        *(_DWORD *)a2 = v8;
      }
      return result;
    }
    if ( a4 <= a5 )
    {
      v20 = (a2 - (char *)result) >> 2;
      v15 = 4 * (a5 / 2);
      v27 = a5 / 2;
      v10 = &a2[v15];
      while ( v20 > 0 )
      {
        v21 = v20 >> 1;
        v22 = &v7[v20 >> 1];
        v23 = **(_DWORD **)v10;
        if ( **v22 < v23 )
        {
          while ( 1 )
          {
            v24 = v21 >> 1;
            if ( !v21 )
              goto LABEL_26;
            v22 = &v7[v24];
            if ( **v22 >= v23 )
              goto LABEL_28;
            v21 >>= 1;
          }
        }
        v24 = v20 >> 1;
        v21 = v20;
LABEL_28:
        v7 = v22 + 1;
        v20 = v21 - v24 - 1;
      }
LABEL_26:
      v11 = v7 - result;
    }
    else
    {
      v9 = (a3 - (int)a2) >> 2;
      v10 = a2;
      v11 = a4 / 2;
      v7 = &result[a4 / 2];
      while ( v9 > 0 )
      {
        v12 = v9 >> 1;
        v13 = &v10[4 * (v9 >> 1)];
        v14 = **v7;
        if ( v14 >= **(_DWORD **)v13 )
        {
          while ( 1 )
          {
            v25 = v12 >> 1;
            if ( !v12 )
              goto LABEL_16;
            v13 = &v10[4 * v25];
            if ( **(_DWORD **)v13 > v14 )
              goto LABEL_27;
            v12 >>= 1;
          }
        }
        v25 = v9 >> 1;
        v12 = v9;
LABEL_27:
        v10 = v13 + 4;
        v9 = v12 - v25 - 1;
      }
LABEL_16:
      v15 = v10 - a2;
      v27 = (v10 - a2) >> 2;
    }
    v16 = a4;
    v17 = a3;
    v18 = result;
    sub_E75B4(v7);
    v19 = (unsigned int **)((char *)v7 + v15);
    LOBYTE(v26) = a6;
    sub_E6A24(v18, v7, v19, v11, v27, v26);
    result = v19;
    a5 -= v27;
    a4 = v16 - v11;
    a2 = v10;
    a3 = v17;
  }
}
