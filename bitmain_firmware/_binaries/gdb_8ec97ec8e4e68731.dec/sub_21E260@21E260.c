int __fastcall sub_21E260(int a1, int a2, int *a3, int *a4)
{
  int *v5; // r0
  _BOOL4 v6; // r8
  int v8; // r12
  int v9; // r7
  int v10; // r9
  int v11; // r3
  void (__fastcall *v12)(int, char *); // r10
  char *v13; // r0
  _DWORD *v14; // r7
  int v15; // r4
  char *v16; // r10
  char *v17; // r0
  int v18; // r0
  int *v19; // lr
  int v20; // r3
  int v21; // r1
  int v22; // r12
  int v23; // r10
  _BOOL4 v24; // r2
  int v25; // r3
  bool v26; // cc
  int v27; // r3
  int v28; // r3
  int result; // r0
  int v30; // r1
  int *v31; // r4
  int v32; // r7
  _BOOL4 v33; // r2
  int v34; // [sp+4h] [bp-18h]
  int v35; // [sp+8h] [bp-14h]
  _DWORD *v36; // [sp+Ch] [bp-10h]

  v5 = *(int **)(a1 + 8);
  v6 = a2 <= 0;
  if ( v5 )
    v8 = a2 <= 0;
  else
    v8 = 1;
  if ( v8 || *v5 <= 0 )
    goto LABEL_5;
  v30 = v5[1];
  if ( a2 != v30 )
  {
    v31 = v5;
    v20 = 0;
    v32 = -1;
    while ( 1 )
    {
      v31 += 2;
      v33 = v8 == 0;
      if ( a2 < v30 )
      {
        if ( v30 < v8 )
          v33 = 1;
        if ( v33 )
        {
          v8 = v30;
          v32 = v20;
        }
      }
      if ( *v5 == ++v20 )
        break;
      v30 = v31[1];
      if ( a2 == v30 )
      {
        v15 = a1;
        v9 = 1;
        goto LABEL_46;
      }
    }
    v34 = v32;
    if ( v32 != -1 )
    {
      v10 = v5[2 * v32 + 1];
      v9 = *(_DWORD *)(dword_487D2C + 36);
      if ( !v9 )
      {
        v15 = a1;
        v20 = v34;
        goto LABEL_46;
      }
      goto LABEL_7;
    }
LABEL_5:
    v9 = *(_DWORD *)(dword_487D2C + 36);
    if ( !v9 )
      return 0;
    v10 = 0;
    v34 = -1;
    do
    {
LABEL_7:
      v11 = *(_DWORD *)(v9 + 132);
      if ( v11 )
      {
        v12 = *(void (__fastcall **)(int, char *))(*(_DWORD *)(v11 + 40) + 40);
        v13 = sub_204308(a1);
        v12(v9, v13);
      }
      v9 = *(_DWORD *)v9;
    }
    while ( v9 );
    v35 = a1;
    v36 = *(_DWORD **)(dword_487D2C + 36);
    if ( v36 )
    {
      while ( 1 )
      {
        v14 = (_DWORD *)v36[5];
        if ( v14 )
          break;
LABEL_41:
        v36 = (_DWORD *)*v36;
        if ( !v36 )
          goto LABEL_42;
      }
      while ( 1 )
      {
        v15 = v14[3];
        if ( v15 )
          break;
LABEL_40:
        v14 = (_DWORD *)*v14;
        if ( !v14 )
          goto LABEL_41;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          if ( !j_strcmp(*(const char **)(a1 + 12), *(const char **)(v15 + 12)) )
          {
            v16 = sub_204308(a1);
            v17 = sub_204308(v15);
            v18 = j_strcmp(v16, v17);
            if ( !v18 )
            {
              v19 = *(int **)(v15 + 8);
              v20 = !v19 || v6;
              if ( !v20 && *v19 > 0 )
              {
                v21 = v19[1];
                if ( v21 == a2 )
                {
LABEL_45:
                  v9 = 1;
                  goto LABEL_46;
                }
                v22 = *(_DWORD *)(v15 + 8);
                v20 = 0;
                v23 = -1;
                while ( 1 )
                {
                  v22 += 8;
                  v24 = v18 == 0;
                  if ( a2 < v21 )
                  {
                    if ( v18 > v21 )
                      v24 = 1;
                    if ( v24 )
                    {
                      v18 = v21;
                      v23 = v20;
                    }
                  }
                  if ( *v19 == ++v20 )
                    break;
                  v21 = *(_DWORD *)(v22 + 4);
                  if ( a2 == v21 )
                    goto LABEL_45;
                }
                if ( v23 != -1 )
                  break;
              }
            }
          }
LABEL_14:
          v15 = *(_DWORD *)v15;
          if ( !v15 )
            goto LABEL_40;
        }
        v25 = v19[2 * v23 + 1];
        if ( !v10 )
        {
          v10 = v19[2 * v23 + 1];
          v34 = v23;
          v35 = v15;
          goto LABEL_14;
        }
        v26 = v25 < v10;
        if ( v25 < v10 )
          v10 = v19[2 * v23 + 1];
        v27 = v35;
        if ( v26 )
          v27 = v15;
        v15 = *(_DWORD *)v15;
        v35 = v27;
        v28 = v34;
        if ( v26 )
          v28 = v23;
        v34 = v28;
        if ( !v15 )
          goto LABEL_40;
      }
    }
LABEL_42:
    v20 = v34;
    if ( v34 != -1 )
    {
      v15 = v35;
      v9 = 0;
      goto LABEL_46;
    }
    return 0;
  }
  v15 = a1;
  v20 = 0;
  v9 = 1;
LABEL_46:
  result = v15;
  if ( a3 )
    *a3 = v20;
  if ( a4 )
    *a4 = v9;
  return result;
}
