int __fastcall sub_149250(int a1, _DWORD *a2, int *a3)
{
  _DWORD *v6; // r8
  _DWORD *v7; // r5
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r4
  int v13; // r1
  bool v14; // cc
  unsigned int v15; // r2
  unsigned int v16; // r3
  int v17; // r2
  int v18; // r3
  int v19; // r3
  int v20; // r2
  int v21; // r2
  bool v22; // cc
  unsigned int v23; // r1
  unsigned int v24; // r3
  int v25; // r1
  int v26; // r3
  int v28; // r0
  int v29; // r1
  int v30; // r0
  _BOOL4 v31; // r0
  int v32; // r3
  int v33; // r1
  int v34; // r3
  unsigned int v35; // r1
  unsigned int v36; // r3
  int v37; // r1
  int v38; // r3

  v6 = a2 + 1;
  v7 = sub_9836C(0x20u);
  v8 = *a3;
  v9 = a3[1];
  v10 = a3[2];
  v11 = a3[3];
  v12 = a2[2];
  v7[4] = v8;
  v7[5] = v9;
  v7[6] = v10;
  v7[7] = v11;
  if ( v12 )
  {
    v13 = *(_DWORD *)(v12 + 16);
    v14 = v8 <= v13;
    if ( v8 >= v13 )
      goto LABEL_3;
LABEL_12:
    while ( 1 )
    {
      v19 = *(_DWORD *)(v12 + 8);
      v20 = 1;
      if ( !v19 )
        break;
      while ( 1 )
      {
        v12 = v19;
        v13 = *(_DWORD *)(v19 + 16);
        v14 = v8 <= v13;
        if ( v8 < v13 )
          break;
LABEL_3:
        if ( v14 )
        {
          v15 = *((unsigned __int8 *)v7 + 24);
          v16 = *(unsigned __int8 *)(v12 + 24);
          if ( v15 < v16 )
            goto LABEL_12;
          if ( v15 <= v16 )
          {
            v17 = v7[7];
            v18 = *(_DWORD *)(v12 + 28);
            if ( v17 < v18 || v17 <= v18 && v7[5] < *(_DWORD *)(v12 + 20) )
              goto LABEL_12;
          }
        }
        v19 = *(_DWORD *)(v12 + 12);
        v20 = 0;
        if ( !v19 )
          goto LABEL_13;
      }
    }
LABEL_13:
    if ( !v20 )
    {
      v21 = v12;
      v22 = v8 < v13;
      if ( v8 > v13 )
        goto LABEL_27;
      goto LABEL_17;
    }
  }
  else
  {
    v12 = (int)v6;
  }
  v21 = a2[3];
  if ( v21 == v12 )
    goto LABEL_28;
  v28 = sub_33AD54(v12);
  v21 = v12;
  v29 = *(_DWORD *)(v28 + 16);
  v12 = v28;
  v30 = v7[4];
  v22 = v30 < v29;
  if ( v30 <= v29 )
  {
LABEL_17:
    if ( v22 )
      goto LABEL_23;
    v23 = *(unsigned __int8 *)(v12 + 24);
    v24 = *((unsigned __int8 *)v7 + 24);
    if ( v23 >= v24 )
    {
      if ( v23 > v24 )
        goto LABEL_23;
      v25 = *(_DWORD *)(v12 + 28);
      v26 = v7[7];
      if ( v25 >= v26 && (v25 > v26 || *(_DWORD *)(v12 + 20) >= v7[5]) )
        goto LABEL_23;
    }
  }
LABEL_27:
  if ( !v21 )
  {
    v12 = 0;
LABEL_23:
    sub_339E64(v7);
    *(_DWORD *)a1 = v12;
    *(_BYTE *)(a1 + 4) = 0;
    return a1;
  }
LABEL_28:
  if ( v6 != (_DWORD *)v21 )
  {
    v33 = v7[4];
    v34 = *(_DWORD *)(v21 + 16);
    if ( v33 >= v34 )
    {
      if ( v33 > v34 )
        goto LABEL_38;
      v35 = *((unsigned __int8 *)v7 + 24);
      v36 = *(unsigned __int8 *)(v21 + 24);
      if ( v35 >= v36 )
      {
        if ( v35 > v36 )
          goto LABEL_38;
        v37 = v7[7];
        v38 = *(_DWORD *)(v21 + 28);
        if ( v37 >= v38 )
        {
          if ( v37 <= v38 )
          {
            v31 = v7[5] < *(_DWORD *)(v21 + 20);
            goto LABEL_30;
          }
LABEL_38:
          v31 = 0;
          goto LABEL_30;
        }
      }
    }
  }
  v31 = 1;
LABEL_30:
  sub_33ADB4(v31, v7, v21, v6);
  v32 = a2[5];
  *(_DWORD *)a1 = v7;
  *(_BYTE *)(a1 + 4) = 1;
  a2[5] = v32 + 1;
  return a1;
}
