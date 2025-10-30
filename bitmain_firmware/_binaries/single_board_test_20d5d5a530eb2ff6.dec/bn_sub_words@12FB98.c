unsigned int __fastcall bn_sub_words(_DWORD *a1, _DWORD *a2, _DWORD *a3, int a4)
{
  _DWORD *v4; // r5
  _DWORD *v5; // r8
  _DWORD *v6; // r12
  _DWORD *v7; // r7
  unsigned int v8; // lr
  unsigned int v9; // r4
  unsigned int v10; // r6
  bool v11; // cf
  bool v12; // zf
  unsigned int v13; // r0
  unsigned int v14; // r12
  unsigned int v15; // r6
  bool v16; // cf
  bool v17; // zf
  unsigned int v18; // r7
  unsigned int result; // r0
  unsigned int v20; // lr
  bool v21; // cf
  bool v22; // zf
  unsigned int v23; // r7
  unsigned int v24; // r7
  unsigned int v25; // lr
  unsigned int v26; // r6
  _BOOL4 v27; // r7
  unsigned int v28; // r6
  _BOOL4 v29; // r6
  unsigned int v30; // r4
  unsigned int v31; // r0
  bool v32; // zf
  int v33; // r4
  unsigned int v34; // r2
  unsigned int v35; // r3
  bool v36; // zf
  unsigned int v37; // r3
  int v38; // r2

  if ( a4 <= 0 )
    return 0;
  v4 = a1;
  if ( (a4 & 0xFFFFFFFC) == 0 )
  {
    v8 = 0;
LABEL_33:
    result = *a3 > *a2;
    if ( *a3 == *a2 )
      v29 = v8;
    else
      v29 = *a3 > *a2;
    if ( *a3 == *a2 )
      result = v8;
    *v4 = *a2 - *a3 - v8;
    if ( a4 != 1 )
    {
      v30 = a3[1];
      v31 = a2[1];
      v11 = v31 >= v30;
      v32 = v31 == v30;
      v33 = v31 - v30 - v29;
      result = !v11;
      if ( v32 )
        result = v29;
      v4[1] = v33;
      if ( a4 != 2 )
      {
        v34 = a3[2];
        v35 = a2[2];
        v11 = v35 >= v34;
        v36 = v35 == v34;
        v37 = v35 - v34 - result;
        v38 = !v11;
        v4[2] = v37;
        if ( !v36 )
          return v38;
      }
    }
    return result;
  }
  v5 = a2 + 4;
  v6 = a3 + 4;
  v7 = a1 + 4;
  v8 = 0;
  do
  {
    v9 = *(v6 - 4);
    a3 = v6;
    v10 = *(v5 - 4);
    v4 = v7;
    a4 -= 4;
    a2 = v5;
    v5 += 4;
    v11 = v10 >= v9;
    v12 = v10 == v9;
    v13 = v10 - v9 - v8;
    if ( v10 < v9 )
      v9 = 1;
    *(v7 - 4) = v13;
    if ( v11 )
      v9 = 0;
    v14 = *(v5 - 7);
    if ( !v12 )
      v13 = v9;
    v15 = *(a3 - 3);
    if ( v12 )
    {
      v13 = v8;
      v9 = v8;
    }
    v16 = v14 >= v15;
    v17 = v14 == v15;
    v18 = v14 - v15 - v13;
    if ( v14 == v15 )
      v15 = v13;
    *(v4 - 3) = v18;
    if ( !v16 )
      v14 = 1;
    result = *(a3 - 2);
    if ( v16 )
      v14 = 0;
    v20 = *(v5 - 6);
    if ( !v17 )
    {
      v15 = v14;
      v9 = v14;
    }
    v6 = a3 + 4;
    v21 = v20 >= result;
    v22 = v20 == result;
    v23 = v20 - result - v15;
    if ( v20 < result )
      result = 1;
    *(v4 - 2) = v23;
    if ( v21 )
      result = 0;
    v24 = *(a3 - 1);
    if ( !v22 )
      v9 = result;
    v25 = *(v5 - 5);
    if ( v22 )
      result = v15;
    v12 = v25 == v24;
    v26 = v25 - v24;
    v27 = v25 < v24;
    v28 = v26 - result;
    if ( v12 )
    {
      v8 = v9;
    }
    else
    {
      v8 = v27;
      result = v27;
    }
    *(v4 - 1) = v28;
    v7 = v4 + 4;
  }
  while ( (a4 & 0xFFFFFFFC) != 0 );
  if ( a4 )
    goto LABEL_33;
  return result;
}
