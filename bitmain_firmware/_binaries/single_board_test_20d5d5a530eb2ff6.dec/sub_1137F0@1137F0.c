bool __fastcall sub_1137F0(_DWORD *a1, int a2)
{
  int v2; // r3
  int v5; // r6
  int v6; // r7
  int v7; // r1
  int v8; // r0
  int v9; // r2
  int v10; // r2
  int v11; // r0
  unsigned int v12; // r2
  _DWORD *v13; // r1
  int v14; // r3
  int v15; // r0
  char *v16; // r1
  char *v17; // r1
  int v19; // r2
  int v20; // r2
  int v21; // r2
  int v22; // r2
  int v23; // r0
  int *v24; // r0
  int *v25; // r0
  int *v26; // r0
  int *v27; // r0

  if ( a2 )
  {
    v2 = *(_DWORD *)(a2 + 8) | a1[2];
    if ( (v2 & 0x10) != 0 )
      a1[2] = 0;
    if ( (v2 & 8) != 0 )
      return 1;
    v5 = v2 & 1;
    if ( (v2 & 2) != 0 )
    {
      v6 = *(_DWORD *)(a2 + 16);
      v7 = 1;
      v8 = *(_DWORD *)(a2 + 20);
      a1[6] = *(_DWORD *)(a2 + 24);
      v9 = *(_DWORD *)(a2 + 28);
      a1[4] = v6;
      a1[5] = v8;
      a1[7] = v9;
      v10 = a1[3];
      goto LABEL_7;
    }
    v19 = *(_DWORD *)(a2 + 16);
    if ( v19 )
    {
      if ( (v2 & 1) == 0 && a1[4] )
      {
        v20 = *(_DWORD *)(a2 + 20);
        if ( !v20 )
        {
LABEL_28:
          v21 = *(_DWORD *)(a2 + 24);
          if ( v21 == -1 )
            goto LABEL_31;
          if ( (v2 & 1) != 0 )
            goto LABEL_30;
          goto LABEL_65;
        }
LABEL_63:
        if ( a1[5] )
        {
          v21 = *(_DWORD *)(a2 + 24);
          if ( v21 == -1 )
          {
LABEL_31:
            v22 = *(_DWORD *)(a2 + 28);
            if ( v22 == -1 )
            {
LABEL_34:
              v10 = a1[3];
              if ( (v10 & 2) != 0 )
              {
                if ( (v2 & 4) == 0 )
                {
                  a1[3] = v10 | *(_DWORD *)(a2 + 12);
                  goto LABEL_10;
                }
                v7 = 0;
LABEL_8:
                v12 = 0;
                a1[3] = 0;
LABEL_9:
                a1[3] = v12 | *(_DWORD *)(a2 + 12);
                if ( v7 )
                {
                  if ( sub_11348C((int)a1, *(_DWORD **)(a2 + 32)) )
                  {
                    v23 = a1[9];
                    a1[10] = *(_DWORD *)(a2 + 40);
                    sub_10BFDC(v23, (void (__fastcall *)(int))sub_113300);
                    a1[9] = 0;
                    v24 = *(int **)(a2 + 36);
                    if ( !v24
                      || (v25 = sub_10BE60(
                                  v24,
                                  (int (__fastcall *)(int))sub_113370,
                                  (void (__fastcall *)(int))sub_113300),
                          (a1[9] = v25) != 0) )
                    {
                      if ( sub_113738((int)a1, *(char **)(a2 + 48), *(void **)(a2 + 52)) )
                      {
                        v17 = *(char **)(a2 + 56);
                        return sub_11378C((int)a1, v17, *(_DWORD *)(a2 + 60)) != 0;
                      }
                    }
                  }
                  return 0;
                }
LABEL_10:
                v13 = *(_DWORD **)(a2 + 32);
                if ( v13 )
                {
                  if ( (v2 & 1) == 0 && a1[8] )
                  {
                    v14 = *(_DWORD *)(a2 + 40);
                    if ( !v14 )
                      goto LABEL_14;
                    goto LABEL_69;
                  }
                  if ( !sub_11348C((int)a1, v13) )
                    return 0;
                }
                v14 = *(_DWORD *)(a2 + 40);
                if ( !v14 )
                  goto LABEL_50;
                if ( v5 )
                {
LABEL_49:
                  a1[10] = v14;
LABEL_50:
                  if ( !*(_DWORD *)(a2 + 36) )
                    goto LABEL_55;
                  if ( v5 )
                  {
                    v15 = a1[9];
LABEL_53:
                    sub_10BFDC(v15, (void (__fastcall *)(int))sub_113300);
                    a1[9] = 0;
                    v26 = *(int **)(a2 + 36);
                    if ( v26 )
                    {
                      v27 = sub_10BE60(v26, (int (__fastcall *)(int))sub_113370, (void (__fastcall *)(int))sub_113300);
                      a1[9] = v27;
                      if ( !v27 )
                        return 0;
                    }
LABEL_55:
                    v16 = *(char **)(a2 + 48);
                    if ( !v16 )
                      goto LABEL_58;
                    if ( v5 )
                      goto LABEL_57;
                    goto LABEL_17;
                  }
LABEL_15:
                  v15 = a1[9];
                  if ( v15 )
                  {
                    v16 = *(char **)(a2 + 48);
                    if ( !v16 )
                      goto LABEL_58;
LABEL_17:
                    if ( a1[12] )
                    {
                      v17 = *(char **)(a2 + 56);
                      if ( !v17 )
                        return 1;
                      goto LABEL_19;
                    }
LABEL_57:
                    if ( sub_113738((int)a1, v16, *(void **)(a2 + 52)) )
                    {
LABEL_58:
                      v17 = *(char **)(a2 + 56);
                      if ( !v17 )
                        return 1;
                      if ( !v5 )
                      {
LABEL_19:
                        if ( a1[14] )
                          return 1;
                      }
                      return sub_11378C((int)a1, v17, *(_DWORD *)(a2 + 60)) != 0;
                    }
                    return 0;
                  }
                  goto LABEL_53;
                }
LABEL_69:
                if ( a1[10] )
                {
LABEL_14:
                  if ( !*(_DWORD *)(a2 + 36) )
                    goto LABEL_55;
                  goto LABEL_15;
                }
                goto LABEL_49;
              }
              v7 = 0;
LABEL_7:
              v11 = *(_DWORD *)(a2 + 4);
              v12 = v10 & 0xFFFFFFFD;
              a1[3] = v12;
              a1[1] = v11;
              if ( (v2 & 4) == 0 )
                goto LABEL_9;
              goto LABEL_8;
            }
            if ( (v2 & 1) != 0 )
            {
LABEL_33:
              a1[7] = v22;
              goto LABEL_34;
            }
LABEL_67:
            if ( a1[7] != -1 )
              goto LABEL_34;
            goto LABEL_33;
          }
LABEL_65:
          if ( a1[6] != -1 )
          {
            v22 = *(_DWORD *)(a2 + 28);
            if ( v22 == -1 )
              goto LABEL_34;
            goto LABEL_67;
          }
LABEL_30:
          a1[6] = v21;
          goto LABEL_31;
        }
LABEL_27:
        a1[5] = v20;
        goto LABEL_28;
      }
      a1[4] = v19;
    }
    v20 = *(_DWORD *)(a2 + 20);
    if ( !v20 )
      goto LABEL_28;
    if ( (v2 & 1) != 0 )
      goto LABEL_27;
    goto LABEL_63;
  }
  return 1;
}
