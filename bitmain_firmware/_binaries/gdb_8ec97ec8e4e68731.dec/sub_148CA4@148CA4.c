void __fastcall sub_148CA4(__int64 a1, _DWORD *a2, int *a3, _DWORD *a4, _DWORD *a5)
{
  char **v5; // r9
  char *v6; // r11
  char *v8; // r5
  _DWORD *v9; // r7
  int v10; // r10
  unsigned int v11; // r4
  size_t v12; // r4
  char *v13; // r8
  int v14; // r4
  char *v15; // r3
  int v16; // r12
  char *v17; // r6
  unsigned int v18; // r3
  char *v19; // r12
  char *v20; // r7
  char *v21; // r4
  char *v22; // r5
  unsigned int v23; // r3
  unsigned int v24; // r6
  bool v25; // zf
  int v26; // r12
  char *v27; // lr
  char *v28; // [sp+0h] [bp-Ch]
  char *v29; // [sp+4h] [bp-8h]

  v5 = (char **)a1;
  v6 = *(char **)a1;
  v8 = (char *)HIDWORD(a1);
  v9 = a2;
  v10 = HIDWORD(a1) - *(_DWORD *)a1;
  v28 = *(char **)(a1 + 4);
  LODWORD(a1) = -1431655765 * ((int)&v28[-*(_DWORD *)a1] >> 3);
  if ( !(_DWORD)a1 )
  {
    v11 = 1;
    goto LABEL_27;
  }
  v11 = 2 * a1;
  if ( (unsigned int)a1 > 2 * (int)a1 || v11 > 0xAAAAAAA )
  {
    v12 = -16;
LABEL_4:
    LODWORD(a1) = sub_9836C(v12);
    v6 = *v5;
    v29 = (char *)(a1 + v12);
    v13 = (char *)a1;
    v14 = a1 + 24;
    v28 = v5[1];
    goto LABEL_5;
  }
  if ( v11 )
  {
LABEL_27:
    v12 = 24 * v11;
    goto LABEL_4;
  }
  v13 = 0;
  v29 = 0;
  v14 = 24;
LABEL_5:
  v15 = &v13[v10];
  if ( &v13[v10] )
  {
    a2 = 0;
    v16 = *a3;
    *(_DWORD *)&v13[v10] = *v9;
    LODWORD(a1) = *a4;
    *((_DWORD *)v15 + 1) = v16;
    HIDWORD(a1) = *a5;
    v15[16] = 0;
    *((_DWORD *)v15 + 5) = 0;
    *((_QWORD *)v15 + 1) = a1;
  }
  if ( v8 != v6 )
  {
    v17 = v6 + 24;
    v18 = (unsigned int)(v8 - (v6 + 24)) >> 3;
    v19 = v13;
    v20 = &v13[24 * ((178956971 * v18) & 0x1FFFFFFF) + 24];
    while ( 1 )
    {
      v21 = v17 - 24;
      if ( v19 )
      {
        LODWORD(a1) = *(_DWORD *)v21;
        HIDWORD(a1) = *((_DWORD *)v17 - 5);
        a2 = (_DWORD *)*((_DWORD *)v17 - 4);
        v18 = *((_DWORD *)v17 - 3);
        v21 = v17 - 8;
      }
      v17 += 24;
      if ( v19 )
      {
        *(_QWORD *)v19 = a1;
        *((_DWORD *)v19 + 2) = a2;
        *((_DWORD *)v19 + 3) = v18;
        a1 = *(_QWORD *)v21;
        *((_QWORD *)v19 + 2) = *(_QWORD *)v21;
      }
      if ( v19 + 24 == v20 )
        break;
      v19 += 24;
    }
    v14 = (int)(v19 + 48);
  }
  if ( v8 != v28 )
  {
    v22 = v8 + 24;
    v23 = (unsigned int)(v28 - v22) >> 3;
    v24 = v14 + 24 * (((178956971 * v23) & 0x1FFFFFFF) + 1);
    do
    {
      v26 = v14;
      v25 = v14 == 0;
      v27 = v22 - 24;
      v14 += 24;
      if ( !v25 )
      {
        LODWORD(a1) = *(_DWORD *)v27;
        HIDWORD(a1) = *((_DWORD *)v22 - 5);
        a2 = (_DWORD *)*((_DWORD *)v22 - 4);
        v23 = *((_DWORD *)v22 - 3);
        v27 = v22 - 8;
      }
      v22 += 24;
      if ( !v25 )
      {
        *(_QWORD *)v26 = a1;
        *(_DWORD *)(v26 + 8) = a2;
        *(_DWORD *)(v26 + 12) = v23;
        a1 = *(_QWORD *)v27;
        *(_QWORD *)(v26 + 16) = *(_QWORD *)v27;
      }
    }
    while ( v14 != v24 );
  }
  if ( v6 )
    sub_339E64(v6);
  *v5 = v13;
  v5[1] = (char *)v14;
  v5[2] = v29;
}
