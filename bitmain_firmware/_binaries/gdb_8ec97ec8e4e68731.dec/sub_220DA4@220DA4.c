int *__fastcall sub_220DA4(int *a1, int a2, int a3, _DWORD *a4)
{
  int *v4; // r12
  bool v7; // cc
  int v9; // r3
  int *v11; // r1
  int v12; // r2
  int v13; // r9
  int v14; // lr
  _BOOL4 v15; // r0
  char *v17; // r1
  char *v18; // r2
  bool v19; // zf
  int v20; // r8
  char *v21; // r1
  int v22; // r9

  v4 = *(int **)(a2 + 8);
  v7 = (int)v4 <= 0;
  if ( v4 )
    v7 = a3 <= 0;
  *a1 = 0;
  v9 = v7;
  a1[1] = 0;
  a1[2] = 0;
  if ( !v7 )
  {
    while ( *v4 > v9 )
    {
      v11 = &v4[2 * v9];
      v12 = v11[1];
      if ( a3 != v12 )
      {
        v13 = -1;
        v14 = 0;
        while ( 1 )
        {
          if ( a3 < v12 )
          {
            v15 = v14 == 0;
            if ( v12 < v14 )
              v15 = 1;
            if ( v15 )
            {
              v14 = v12;
              v13 = v9;
            }
          }
          if ( *v4 == ++v9 )
            break;
          v11 += 2;
          v12 = v11[1];
          if ( a3 == v12 )
          {
            if ( v9 < 0 )
              return a1;
            goto LABEL_20;
          }
        }
        if ( v13 >= 0 )
        {
          v22 = 2 * v13;
          if ( !*a4 || v4[v22 + 1] < *(_DWORD *)*a4 )
          {
            *a4 = &v4[v22 + 1];
            return a1;
          }
        }
        return a1;
      }
LABEL_20:
      v17 = (char *)a1[1];
      v18 = (char *)a1[2];
      if ( v17 == v18 )
      {
        v20 = v9 + 1;
        sub_19BF4(a1, v17, &v4[2 * v9 + 2]);
        v4 = *(int **)(a2 + 8);
      }
      else
      {
        v19 = v17 == 0;
        v20 = v9 + 1;
        if ( v17 )
          v18 = (char *)&v4[2 * v9];
        v21 = v17 + 4;
        if ( !v19 )
          *((_DWORD *)v21 - 1) = *((_DWORD *)v18 + 2);
        a1[1] = (int)v21;
      }
      v9 = v20;
      if ( !v4 )
        return a1;
    }
  }
  return a1;
}
