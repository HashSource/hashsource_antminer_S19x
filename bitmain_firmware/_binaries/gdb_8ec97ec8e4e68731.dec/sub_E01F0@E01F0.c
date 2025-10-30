void __fastcall sub_E01F0(_DWORD *a1, char *a2, int *a3)
{
  char *v4; // r12
  char *v7; // r10
  char *v8; // r11
  unsigned int v9; // r3
  unsigned int v10; // r7
  size_t v11; // r7
  _DWORD *v12; // r0
  _DWORD *v13; // r6
  int v14; // r9
  char *v15; // r3
  int v16; // r1
  int v17; // lr
  __int64 v18; // r0
  char *v19; // r4
  char *v20; // r2
  _DWORD *v21; // r3
  int v22; // r11
  int v23; // lr
  int v24; // lr
  int v25; // lr
  char *v26; // r3
  _DWORD *v27; // r2
  int v28; // r0
  int v29; // r4
  int v30; // lr
  int v31; // r0
  void *v32; // r0
  bool v33; // zf

  v4 = (char *)*a1;
  v7 = (char *)a1[1];
  v8 = &a2[-*a1];
  v9 = (int)&v7[-*a1] >> 4;
  if ( !v9 )
  {
    v10 = 1;
    goto LABEL_28;
  }
  v10 = 2 * v9;
  if ( v9 > 2 * v9 || v10 > 0xFFFFFFF )
  {
    v11 = -4;
LABEL_4:
    v12 = sub_9836C(v11 * 4);
    v4 = (char *)*a1;
    v13 = v12;
    v7 = (char *)a1[1];
    v10 = (unsigned int)&v12[v11];
    v14 = (int)(v12 + 4);
    goto LABEL_5;
  }
  if ( v10 )
  {
LABEL_28:
    v11 = 4 * v10;
    goto LABEL_4;
  }
  v14 = 16;
  v13 = 0;
LABEL_5:
  v15 = &v8[(_DWORD)v13];
  if ( &v8[(_DWORD)v13] )
  {
    v16 = *a3;
    v17 = a3[1];
    a3[1] = 0;
    *(_DWORD *)&v8[(_DWORD)v13] = v16;
    v18 = *((_QWORD *)a3 + 1);
    *((_DWORD *)v15 + 1) = v17;
    a3[2] = 0;
    *((_QWORD *)v15 + 1) = v18;
    a3[3] = 0;
  }
  if ( a2 != v4 )
  {
    v19 = v4 + 16;
    v20 = v4 + 16;
    v21 = v13;
    do
    {
      if ( v21 )
      {
        v22 = *((_DWORD *)v20 - 4);
        v21[2] = 0;
        v21[3] = 0;
        v21[1] = 0;
        v23 = *((_DWORD *)v20 - 3);
        *v21 = v22;
        v21[1] = v23;
        *((_DWORD *)v20 - 3) = 0;
        v24 = v21[2];
        v21[2] = *((_DWORD *)v20 - 2);
        *((_DWORD *)v20 - 2) = v24;
        v25 = v21[3];
        v21[3] = *((_DWORD *)v20 - 1);
        *((_DWORD *)v20 - 1) = v25;
      }
      v20 += 16;
      v21 += 4;
    }
    while ( v20 != a2 + 16 );
    v14 = (int)v13 + a2 - (v4 + 16) + 32;
    if ( a2 == v7 )
      goto LABEL_19;
    goto LABEL_13;
  }
  if ( a2 != v7 )
  {
LABEL_13:
    v26 = a2 + 16;
    v27 = (_DWORD *)v14;
    do
    {
      if ( v27 )
      {
        v28 = *((_DWORD *)v26 - 4);
        v29 = *((_DWORD *)v26 - 3);
        v30 = *((_DWORD *)v26 - 2);
        *((_DWORD *)v26 - 3) = 0;
        *((_DWORD *)v26 - 2) = 0;
        *v27 = v28;
        v31 = *((_DWORD *)v26 - 1);
        v27[1] = v29;
        v27[2] = v30;
        v27[3] = v31;
        *((_DWORD *)v26 - 1) = 0;
      }
      v26 += 16;
      v27 += 4;
    }
    while ( v26 != v7 + 16 );
    v14 += 16 * (((unsigned int)(v7 - (a2 + 16)) >> 4) + 1);
    if ( v4 == v7 )
      goto LABEL_23;
    v19 = v4 + 16;
    do
    {
LABEL_19:
      v32 = (void *)*((_DWORD *)v4 + 1);
      if ( v32 )
        sub_339E64(v32);
      v33 = v19 == v7;
      v4 = v19;
      v19 += 16;
    }
    while ( !v33 );
LABEL_23:
    v7 = (char *)*a1;
  }
  if ( v7 )
    sub_339E64(v7);
  *a1 = v13;
  a1[1] = v14;
  a1[2] = v10;
}
