int __fastcall sub_4587C(int *a1, char *a2, int a3)
{
  int v4; // r8
  int v7; // r8
  int v8; // r5
  _DWORD *v9; // r1
  _DWORD *v10; // r3
  _DWORD *v11; // r3
  int v12; // r8
  int v13; // lr
  _DWORD *v14; // r12
  int v15; // r0
  _DWORD *v16; // r2
  _DWORD *v17; // r0
  int v18; // r2
  size_t v19; // r10
  int v20; // r9
  int *v21; // r5
  int v22; // r0
  int v23; // r8
  int v24; // r0
  unsigned int *v25; // r3
  unsigned int v26; // r2
  unsigned int v27; // r2
  int v29; // r0
  _DWORD *v30; // r8
  int v31; // r3
  _DWORD *v32; // r2
  int v33; // r1
  int v34; // r3

  v4 = a1[2];
  if ( (unsigned int)*a1 >> v4 )
  {
    v7 = v4 + 1;
    v8 = sub_4774C(8 << v7);
    if ( !v8 )
      return -1;
    sub_47764(a1[1]);
    a1[1] = v8;
    a1[2] = v7;
    v9 = a1 + 3;
    if ( 1 << v7 )
    {
      v10 = (_DWORD *)v8;
      do
      {
        v10[1] = v9;
        *v10 = v9;
        v10 += 2;
      }
      while ( (_DWORD *)((8 << v7) + v8) != v10 );
    }
    v11 = (_DWORD *)a1[4];
    a1[3] = (int)v9;
    v12 = ~(-1 << v7);
    a1[4] = (int)v9;
    if ( v11 != v9 )
    {
      do
      {
        while ( 1 )
        {
          v14 = (_DWORD *)v11[1];
          v15 = v11[4] & v12;
          v16 = *(_DWORD **)(v8 + 8 * v15);
          v17 = (_DWORD *)(v8 + 8 * v15);
          if ( v16 == v9 && v9 == (_DWORD *)v17[1] )
            break;
          v13 = *v16;
          v11[1] = v16;
          *v11 = v13;
          *(_DWORD *)(*v16 + 4) = v11;
          *v16 = v11;
          *v17 = v11;
          v11 = v14;
          if ( v14 == v9 )
            goto LABEL_12;
        }
        v18 = a1[3];
        v11[1] = v9;
        *v11 = v18;
        *(_DWORD *)(a1[3] + 4) = v11;
        a1[3] = (int)v11;
        v17[1] = v11;
        *v17 = v11;
        v11 = v14;
      }
      while ( v14 != v9 );
LABEL_12:
      v8 = a1[1];
      v12 = ~(-1 << a1[2]);
    }
  }
  else
  {
    v8 = a1[1];
    v12 = ~(-1 << v4);
  }
  v19 = strlen(a2);
  v20 = sub_451C0((unsigned __int16 *)a2, v19, dword_73108);
  v21 = (int *)(v8 + 8 * (v12 & v20));
  v22 = sub_45704((int)a1, v21, a2, v20);
  v23 = v22;
  if ( v22 )
  {
    v24 = *(_DWORD *)(v22 + 20);
    if ( v24 && *(_DWORD *)(v24 + 4) != -1 )
    {
      v25 = (unsigned int *)(v24 + 4);
      __dmb(0xBu);
      do
      {
        v26 = __ldrex(v25);
        v27 = v26 - 1;
      }
      while ( __strex(v27, v25) );
      if ( !v27 )
        sub_48A34(v24);
    }
    *(_DWORD *)(v23 + 20) = a3;
    return 0;
  }
  v29 = sub_4774C(v19 + 25);
  v30 = (_DWORD *)v29;
  if ( !v29 )
    return -1;
  *(_DWORD *)(v29 + 16) = v20;
  strncpy((char *)(v29 + 24), a2, v19 + 1);
  v31 = *v21;
  v32 = v30 + 2;
  v30[5] = a3;
  v30[1] = v30;
  *v30 = v30;
  v30[3] = v30 + 2;
  v30[2] = v30 + 2;
  if ( (int *)v31 == a1 + 3 && v31 == v21[1] )
  {
    *v30 = a1[3];
    v30[1] = v31;
    *(_DWORD *)(a1[3] + 4) = v30;
    a1[3] = (int)v30;
    v21[1] = (int)v30;
    *v21 = (int)v30;
  }
  else
  {
    *v30 = *(_DWORD *)v31;
    v30[1] = v31;
    *(_DWORD *)(*(_DWORD *)v31 + 4) = v30;
    *(_DWORD *)v31 = v30;
    *v21 = (int)v30;
  }
  v33 = a1[5];
  v34 = *a1;
  v30[3] = a1 + 5;
  v30[2] = v33;
  *(_DWORD *)(a1[5] + 4) = v32;
  a1[5] = (int)v32;
  *a1 = v34 + 1;
  return 0;
}
