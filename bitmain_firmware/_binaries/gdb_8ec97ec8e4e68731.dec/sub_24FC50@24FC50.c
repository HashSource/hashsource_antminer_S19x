void __fastcall sub_24FC50(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  char **v4; // r7
  char *v5; // lr
  char *v7; // r9
  char *v8; // r5
  int v9; // r10
  unsigned int v10; // r8
  size_t v11; // r8
  char *v12; // r6
  int v13; // r4
  unsigned int v14; // r2
  char *v15; // r3
  char *v16; // r4
  char *v17; // r12
  char *v18; // r3
  unsigned int v19; // r12
  _DWORD *v20; // [sp+4h] [bp-8h]

  v4 = (char **)a1;
  v5 = *(char **)a1;
  v7 = *(char **)(a1 + 4);
  v8 = (char *)HIDWORD(a1);
  v9 = HIDWORD(a1) - *(_DWORD *)a1;
  LODWORD(a1) = -1431655765 * ((int)&v7[-*(_DWORD *)a1] >> 2);
  if ( !(_DWORD)a1 )
  {
    v10 = 1;
    goto LABEL_27;
  }
  v10 = 2 * a1;
  if ( (unsigned int)a1 > 2 * (int)a1 || v10 > 0x15555555 )
  {
    v11 = -4;
LABEL_4:
    v20 = a3;
    LODWORD(a1) = sub_9836C(v11);
    v5 = *v4;
    v12 = (char *)a1;
    v7 = v4[1];
    v10 = a1 + v11;
    a3 = v20;
    v13 = a1 + 12;
    goto LABEL_5;
  }
  if ( v10 )
  {
LABEL_27:
    v11 = 12 * v10;
    goto LABEL_4;
  }
  v13 = 12;
  v12 = 0;
LABEL_5:
  v14 = (unsigned int)&v12[v9];
  if ( &v12[v9] )
  {
    LODWORD(a1) = *a3;
    HIDWORD(a1) = *a4;
    *(_DWORD *)&v12[v9] = *a2;
    *(_QWORD *)(v14 + 4) = a1;
  }
  if ( v8 != v5 )
  {
    v15 = v5 + 12;
    v14 = (unsigned int)(v8 - (v5 + 12)) >> 2;
    v16 = v12;
    v17 = &v12[12 * ((715827883 * v14) & 0x3FFFFFFF) + 12];
    while ( 1 )
    {
      if ( v16 )
      {
        a1 = *(_QWORD *)(v15 - 12);
        v14 = *((_DWORD *)v15 - 1);
      }
      v15 += 12;
      if ( v16 )
      {
        *(_QWORD *)v16 = a1;
        *((_DWORD *)v16 + 2) = v14;
      }
      if ( v16 + 12 == v17 )
        break;
      v16 += 12;
    }
    v13 = (int)(v16 + 24);
  }
  if ( v8 != v7 )
  {
    v18 = v8 + 12;
    v19 = v13 + 12 * (((715827883 * ((unsigned int)(v7 - (v8 + 12)) >> 2)) & 0x3FFFFFFF) + 1);
    do
    {
      if ( v13 )
      {
        a1 = *(_QWORD *)(v18 - 12);
        v14 = *((_DWORD *)v18 - 1);
      }
      v18 += 12;
      if ( v13 )
      {
        *(_QWORD *)v13 = a1;
        *(_DWORD *)(v13 + 8) = v14;
      }
      v13 += 12;
    }
    while ( v13 != v19 );
  }
  if ( v5 )
    sub_339E64(v5);
  *v4 = v12;
  v4[1] = (char *)v13;
  v4[2] = (char *)v10;
}
