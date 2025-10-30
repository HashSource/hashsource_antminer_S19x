int *__fastcall sub_12A180(_DWORD *a1, int a2, int a3)
{
  int *v3; // r12
  int v4; // r3
  _DWORD *v5; // r1
  int *result; // r0
  int v7; // r8
  const char *v8; // r4
  int v9; // r8
  int v10; // r9
  int *v11; // r3
  int v12; // r5
  unsigned int v13; // r4
  char *v14; // r9
  char *v15; // r2
  unsigned int v16; // r5
  int v17; // r3
  int v18; // r0
  int v19; // r5
  int v20; // r6
  int v21; // r4
  int v22; // r5
  _DWORD *v23; // r0
  int v24; // lr
  char v25; // r12
  int v26; // r7
  char *v27; // r4
  int v28; // r6
  int v29; // r12
  int v30; // r11
  int v31; // lr
  char v32; // t1
  unsigned int v33; // r8
  char v34; // r0
  int v35; // r10
  int v36; // lr
  int v37; // r0
  int v38; // r1
  char v39; // t1
  unsigned int v40; // r8
  int v41; // r11
  int v42; // r4
  char *v43; // r3
  char v44; // t1
  char *v45; // r1
  int v46; // r4
  char *v47; // r3
  char v48; // t1
  char *v49; // r0
  char *v50; // r4
  size_t v51; // r0
  int v52; // r4
  char *v53; // r3
  char v54; // t1
  char *v55; // r1
  char *v56; // r4
  int v57; // r0
  int v59; // [sp+1Ch] [bp-420h]
  _DWORD *v61; // [sp+24h] [bp-418h]
  int v62; // [sp+28h] [bp-414h]
  int v63; // [sp+34h] [bp-408h] BYREF
  _BYTE v64[1028]; // [sp+38h] [bp-404h] BYREF

  v3 = (int *)a1[43];
  v4 = a1[5];
  v5 = (_DWORD *)a1[39];
  result = *(int **)(dword_4872D8 + 344);
  v61 = v5;
  v63 = v4;
  if ( v3 )
  {
    v7 = *v3;
    if ( a3 )
      LOWORD(v8) = 10164;
    else
      LOWORD(v8) = 10112;
    HIWORD(v8) = 58;
    if ( a3 )
      v9 = v7 + 112;
    else
      v9 = v7 + 92;
  }
  else
  {
    if ( a3 )
      LOWORD(v8) = 10132;
    else
      LOWORD(v8) = 10148;
    if ( a3 )
      v9 = dword_4872D8 + 120;
    else
      v9 = dword_4872D8 + 100;
    HIWORD(v8) = 58;
  }
  if ( !*(_BYTE *)(v9 + 16) )
  {
    result = (int *)((int (__fastcall *)(int *, int))loc_11FFD0)(result, v9);
    v10 = *(_DWORD *)(v9 + 4);
    if ( v10 )
      goto LABEL_10;
LABEL_64:
    if ( dword_47AC88 > 0 )
      return sub_F43B4(&off_46D334, "missing %s section", v8);
    return result;
  }
  v10 = *(_DWORD *)(v9 + 4);
  if ( !v10 )
    goto LABEL_64;
LABEL_10:
  v11 = *(int **)v9;
  if ( *(_BYTE *)(v9 + 17) )
  {
    if ( *((_BYTE *)v11 + 17) )
    {
      v57 = ((int (__fastcall *)(int *))loc_11E090)(result);
      return (int *)sub_12A670(v57);
    }
    v11 = (int *)*v11;
  }
  v12 = *(_DWORD *)(v9 + 8);
  v59 = v11[37];
  result = (int *)sub_1239EC(v64, v59, v10 + a2, &v63, a3);
  v13 = (unsigned int)result;
  if ( result )
  {
    v14 = (char *)(v10 + v12);
    while ( (unsigned int)v14 > v13 )
    {
      while ( 1 )
      {
        v15 = (char *)(v13 + 1);
        v16 = *(unsigned __int8 *)v13;
        if ( v16 <= 6 )
        {
          if ( v16 < 5 )
          {
            if ( v16 > 2 )
            {
              if ( v16 == 3 )
              {
                v25 = *(_BYTE *)(v13 + 1);
                v26 = 0;
                v27 = (char *)(v13 + 2);
                v28 = v25 & 0x7F;
                if ( v25 < 0 )
                {
                  v29 = 1;
                  v30 = v9;
                  v31 = 0;
                  do
                  {
                    v32 = *v27++;
                    v31 += 7;
                    ++v29;
                    v33 = v32 & 0x7F;
                    v28 |= v33 << v31;
                    v26 |= (v33 << (v31 - 32)) | (v33 >> (32 - v31));
                  }
                  while ( v32 < 0 );
                  v9 = v30;
                }
                else
                {
                  v29 = 1;
                }
                v34 = v15[v29];
                v13 = (unsigned int)&v15[v29 + 1];
                v35 = v34 & 0x7F;
                if ( v34 < 0 )
                {
                  v36 = 0;
                  v37 = v34 & 0x7F;
                  v38 = 0;
                  v62 = v9;
                  do
                  {
                    v39 = *(_BYTE *)v13++;
                    v36 += 7;
                    v40 = v39 & 0x7F;
                    v41 = v37 | (v40 << v36);
                    v37 = v41;
                    v38 |= (v40 << (v36 - 32)) | (v40 >> (32 - v36));
                  }
                  while ( v39 < 0 );
                  v9 = v62;
                  v35 = v41;
                }
                v18 = sub_11DB78(v35, v28, 0, v61);
                v17 = v18;
                if ( v18 )
                  v17 = 1;
                goto LABEL_21;
              }
            }
            else if ( *(_BYTE *)v13 )
            {
              v46 = ~v13;
              v47 = v15;
              do
              {
                v48 = *v47++;
                v49 = &v47[v46];
              }
              while ( v48 < 0 );
              v50 = &v49[(_DWORD)v15];
              if ( v49[(_DWORD)v15] )
                v51 = strlen(&v49[(_DWORD)v15]) + 1;
              else
                v51 = 1;
              v17 = 0;
              v13 = (unsigned int)&v50[v51];
              v18 = 0;
              goto LABEL_21;
            }
            v17 = 0;
            ++v13;
            v18 = 0;
            goto LABEL_21;
          }
          goto LABEL_51;
        }
        if ( v16 <= 9 )
        {
          if ( v16 < 8 )
          {
LABEL_50:
            v17 = 0;
            v18 = 0;
            v13 = (unsigned int)&v15[v63];
            goto LABEL_21;
          }
LABEL_51:
          v42 = ~v13;
          v43 = v15;
          do
          {
            v44 = *v43++;
            v45 = &v43[v42];
          }
          while ( v44 < 0 );
          v17 = 0;
          v18 = 0;
          v13 = (unsigned int)&v45[v63 + (_DWORD)v15];
          goto LABEL_21;
        }
        if ( v16 == 10 )
          goto LABEL_50;
        if ( v16 != 255 )
          break;
        if ( !a3 )
        {
          v52 = ~v13;
          v53 = v15;
          do
          {
            v54 = *v53++;
            v55 = &v53[v52];
          }
          while ( v54 < 0 );
          v56 = &v55[(_DWORD)v15];
          if ( v55[(_DWORD)v15] )
            v15 = &v56[strlen(&v55[(_DWORD)v15]) + 1];
          else
            v15 = v56 + 1;
        }
        result = (int *)sub_123B50(255, (int)v64, v15, v14, v59, v63, (_BYTE *)v9);
        v13 = (unsigned int)result;
        if ( !result )
          return result;
        if ( v14 <= (char *)result )
          goto LABEL_35;
      }
      result = (int *)sub_123B50(v16, (int)v64, v15, v14, v59, v63, (_BYTE *)v9);
      v13 = (unsigned int)result;
      if ( !result )
        return result;
      v17 = 0;
      v18 = 0;
LABEL_21:
      if ( v16 )
        v19 = v17;
      else
        v19 = 1;
      if ( v19 )
      {
        v20 = v18;
        goto LABEL_26;
      }
    }
LABEL_35:
    v20 = 0;
LABEL_26:
    v21 = sub_323AE0(1, off_4714A0, off_47149C[0], 0, sub_93094, &loc_11C838);
    v22 = *(_DWORD *)(v9 + 4) + a2;
    v23 = (_DWORD *)sub_324030(v21, v22, 1);
    v24 = v63;
    *v23 = v22;
    result = (int *)((int (__fastcall *)(int, int, char *, int, _DWORD *, int, int, _DWORD, int, int))loc_1295E8)(
                      v59,
                      v22,
                      v14,
                      v20,
                      v61,
                      v9,
                      a3,
                      0,
                      v24,
                      v21);
    if ( v21 )
      return (int *)sub_323B84(v21);
  }
  return result;
}
