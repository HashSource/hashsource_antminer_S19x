void __fastcall sub_6E178(char **a1, char *a2, _DWORD *a3, int *a4, int *a5)
{
  char *v6; // r6
  char *v8; // r0
  int v10; // r5
  unsigned int v11; // r8
  int v12; // r8
  int v13; // r0
  _DWORD *v14; // r9
  int v15; // r10
  char *v16; // r1
  int v17; // lr
  int v18; // r11
  int v19; // r2
  char *v20; // r5
  _DWORD *v21; // r1
  _DWORD *v22; // r2
  unsigned int v23; // r3
  int v24; // lr
  int v25; // r12
  char *v26; // r4
  unsigned int v27; // r3
  int v28; // lr
  int v29; // r12
  void *v30; // r0
  bool v31; // zf
  _DWORD *v32; // [sp+4h] [bp-8h]

  v6 = a1[1];
  v8 = *a1;
  v10 = a2 - v8;
  if ( !(-1431655765 * ((v6 - v8) >> 2)) )
  {
    v11 = 1;
    goto LABEL_28;
  }
  v11 = 1431655766 * ((v6 - v8) >> 2);
  if ( -1431655765 * ((v6 - v8) >> 2) > v11 || v11 > 0x15555555 )
  {
    v12 = -4;
LABEL_4:
    v32 = a3;
    v13 = sub_9836C(v12);
    a3 = v32;
    v14 = (_DWORD *)v13;
    v11 = v13 + v12;
    v15 = v13 + 12;
    v8 = *a1;
    v6 = a1[1];
    goto LABEL_5;
  }
  if ( v11 )
  {
LABEL_28:
    v12 = 12 * v11;
    goto LABEL_4;
  }
  v15 = 12;
  v14 = 0;
LABEL_5:
  v16 = (char *)v14 + v10;
  if ( (_DWORD *)((char *)v14 + v10) )
  {
    v17 = *a3;
    v18 = *a4;
    v19 = *a5;
    *(_DWORD *)((char *)v14 + v10) = v17;
    *a5 = 0;
    *((_DWORD *)v16 + 1) = v18;
    *((_DWORD *)v16 + 2) = v19;
  }
  if ( a2 != v8 )
  {
    v20 = v8 + 12;
    v21 = v8 + 12;
    v22 = v14;
    v23 = (715827883 * ((unsigned int)(a2 - (v8 + 12)) >> 2)) & 0x3FFFFFFF;
    do
    {
      if ( v22 )
      {
        v24 = *(v21 - 3);
        v22[1] = *(v21 - 2);
        v25 = *(v21 - 1);
        *v22 = v24;
        *(v21 - 1) = 0;
        v22[2] = v25;
      }
      v22 += 3;
      v21 += 3;
    }
    while ( v22 != &v14[3 * v23 + 3] );
    v15 = (int)&v14[3 * v23 + 6];
    if ( a2 == v6 )
      goto LABEL_19;
    goto LABEL_13;
  }
  if ( a2 != v6 )
  {
LABEL_13:
    v26 = a2 + 12;
    v27 = v15 + 12 * (((715827883 * ((unsigned int)(v6 - v26) >> 2)) & 0x3FFFFFFF) + 1);
    do
    {
      if ( v15 )
      {
        v28 = *((_DWORD *)v26 - 3);
        v29 = *((_DWORD *)v26 - 2);
        *(_DWORD *)(v15 + 8) = *((_DWORD *)v26 - 1);
        *(_DWORD *)v15 = v28;
        *(_DWORD *)(v15 + 4) = v29;
        *((_DWORD *)v26 - 1) = 0;
      }
      v15 += 12;
      v26 += 12;
    }
    while ( v15 != v27 );
    if ( v8 == v6 )
      goto LABEL_23;
    v20 = v8 + 12;
    do
    {
LABEL_19:
      v30 = (void *)*((_DWORD *)v8 + 2);
      if ( v30 )
        free(v30);
      v31 = v20 == v6;
      v8 = v20;
      v20 += 12;
    }
    while ( !v31 );
LABEL_23:
    v6 = *a1;
  }
  if ( v6 )
    sub_339E64(v6);
  *a1 = (char *)v14;
  a1[1] = (char *)v15;
  a1[2] = (char *)v11;
}
