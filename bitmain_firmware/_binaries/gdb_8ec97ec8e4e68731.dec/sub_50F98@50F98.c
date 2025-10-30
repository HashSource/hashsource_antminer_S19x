int *__fastcall sub_50F98(int *result)
{
  int *v1; // r4
  int *v2; // r8
  int v3; // lr
  int v4; // r5
  int v5; // r2
  int v6; // r12
  int *v7; // r6
  int *v8; // r5
  int *v9; // r3
  bool v10; // zf
  int v11; // r1
  int *v12; // r1
  int *v13; // r12
  int v14; // r10
  unsigned int v15; // r9
  int *v16; // r5
  int v17; // r0
  int v18; // r1
  int v19; // r2
  int v20; // r3
  int **v21; // r7
  int **v22; // r5
  int *v23; // r0
  int *v24; // r1
  int *v25; // r2
  int *v26; // r3
  int *v27; // r1
  int *v28; // r4
  int *v29; // r5
  int *v30; // r9
  int *v31; // r5
  int *v32; // r0
  int *v33; // r7
  unsigned int v34; // r6
  int v35; // r0
  int *v36; // r12
  int v37; // r1
  int v38; // r2
  int v39; // r3
  _DWORD *v40; // r12
  int v41; // r1
  int v42; // r2
  int v43; // r3
  int v44; // r1
  int v45; // r3

  v1 = (int *)*result;
  v2 = result;
  v3 = result[1];
  v4 = -858993459 * ((v3 - *result) >> 3);
  if ( v4 >> 2 > 0 )
  {
    v5 = *v1;
    v6 = dword_487D2C;
    if ( *v1 == dword_487D2C && v1[1] )
    {
      v7 = v1 + 10;
      if ( v5 == v1[10] && v1[11] )
      {
        result = v1 + 20;
        if ( v5 == v1[20] )
        {
          v8 = &v1[40 * (v4 >> 2)];
          v9 = v1 + 40;
          do
          {
            v12 = v9;
            v7 = v9 - 10;
            if ( !*(v9 - 19) )
              break;
            result += 40;
            v10 = *(v9 - 10) == v6;
            v6 = *v1;
            if ( !v10 || !*(v9 - 9) )
              goto LABEL_19;
            v7 = v9 + 10;
            if ( v9 == v8 )
            {
              v4 = -858993459 * ((v3 - (int)v8) >> 3);
              goto LABEL_53;
            }
            if ( *v9 != v5 || !v9[1] )
              goto LABEL_51;
            if ( v9[10] != v5 )
              goto LABEL_19;
            v11 = v9[11];
            v9 += 40;
            if ( !v11 )
              goto LABEL_19;
          }
          while ( *(v9 - 20) == v5 );
        }
        v7 = result;
      }
      goto LABEL_19;
    }
    v12 = (int *)*result;
    goto LABEL_51;
  }
  v12 = (int *)*result;
LABEL_53:
  switch ( v4 )
  {
    case 2:
      v7 = v12;
      v45 = dword_487D2C;
      break;
    case 3:
      v45 = *v12;
      if ( *v12 != dword_487D2C || !v12[1] )
      {
LABEL_51:
        v7 = v12;
        goto LABEL_19;
      }
      v7 = v12 + 10;
      break;
    case 1:
      v7 = v12;
      v45 = dword_487D2C;
      goto LABEL_58;
    default:
LABEL_56:
      v7 = (int *)v3;
      goto LABEL_26;
  }
  if ( v45 != *v7 || !v7[1] )
    goto LABEL_19;
  v7 += 10;
LABEL_58:
  if ( v45 == *v7 && v7[1] )
    goto LABEL_56;
LABEL_19:
  if ( (int *)v3 != v7 && (int *)v3 != v7 + 10 )
  {
    v13 = v7 + 20;
    v14 = dword_487D2C;
    v15 = (unsigned int)v7 + ((v3 - (_DWORD)(v7 + 20)) & 0xFFFFFFF8) + 120;
    do
    {
      while ( 1 )
      {
        if ( *(v13 - 10) == v14 )
        {
          v16 = v7;
          if ( *(v13 - 9) )
            break;
        }
        v13 += 10;
        if ( v13 == (int *)v15 )
          goto LABEL_26;
      }
      v17 = *(v13 - 10);
      v18 = *(v13 - 9);
      v19 = *(v13 - 8);
      v20 = *(v13 - 7);
      v21 = (int **)(v13 - 6);
      v13 += 10;
      v7 += 10;
      *v16 = v17;
      v16[1] = v18;
      v16[2] = v19;
      v16[3] = v20;
      v22 = (int **)(v16 + 4);
      v23 = *v21;
      v24 = v21[1];
      v25 = v21[2];
      v26 = v21[3];
      v21 += 4;
      *v22 = v23;
      v22[1] = v24;
      v22[2] = v25;
      v22[3] = v26;
      v22 += 4;
      result = *v21;
      v27 = v21[1];
      *v22 = *v21;
      v22[1] = v27;
    }
    while ( v13 != (int *)v15 );
  }
LABEL_26:
  if ( v1 == v7 )
  {
LABEL_49:
    v30 = v7;
    goto LABEL_35;
  }
  sub_50ABC((int)v1, (char *)v7, 2 * (31 - __clz(-858993459 * (((char *)v7 - (char *)v1) >> 3))), 0);
  if ( (char *)v7 - (char *)v1 > 640 )
  {
    v31 = v1 + 160;
    for ( result = (int *)sub_502B8((int)v1, v1 + 160); v7 != v31; result = (int *)sub_50218(v32) )
    {
      v32 = v31;
      v31 += 10;
    }
  }
  else
  {
    result = (int *)sub_502B8((int)v1, v7);
  }
  v28 = (int *)*v2;
  if ( (int *)*v2 == v7 )
  {
    v3 = v2[1];
    goto LABEL_49;
  }
  while ( 1 )
  {
    v29 = v28 + 10;
    result = v28 + 1;
    v30 = v28 + 10;
    if ( v7 == v28 + 10 )
      goto LABEL_34;
    result = (int *)sub_4FC3C(result, v28 + 4, v28 + 11, v28 + 14);
    if ( !result )
      break;
    v28 += 10;
  }
  if ( v7 != v28 )
  {
    v33 = v28 + 21;
    v34 = (unsigned int)v28 + (((char *)v7 - (char *)(v28 + 20)) & 0xFFFFFFF8) + 84;
    while ( 1 )
    {
      result = v28 + 1;
      v30 = v29;
      if ( v33 == (int *)v34 )
        break;
      v35 = sub_4FC3C(result, v28 + 4, v33, v33 + 3);
      v36 = v29;
      if ( v35 )
      {
        v37 = *v33;
        v38 = v33[1];
        v39 = v33[2];
        v28 = v29;
        v29 += 10;
        *v36 = *(v33 - 1);
        v36[1] = v37;
        v36[2] = v38;
        v36[3] = v39;
        v40 = v36 + 4;
        v41 = v33[4];
        v42 = v33[5];
        v43 = v33[6];
        *v40 = v33[3];
        v40[1] = v41;
        v40[2] = v42;
        v40[3] = v43;
        v40 += 4;
        v44 = v33[8];
        *v40 = v33[7];
        v40[1] = v44;
      }
      v33 += 10;
    }
LABEL_34:
    v3 = v2[1];
    goto LABEL_35;
  }
  v30 = v7;
  v3 = v2[1];
LABEL_35:
  if ( (int *)v3 != v30 )
    v2[1] = (int)v30;
  return result;
}
