void __fastcall sub_49B58(int a1, char *a2, __int64 a3)
{
  __int64 *v3; // r10
  char *v4; // lr
  int v5; // r7
  _QWORD *v7; // r11
  char *v8; // r12
  char *v9; // r9
  unsigned int v10; // r8
  int v11; // r8
  int v12; // r6
  int v13; // r4
  char *v14; // r1
  char *v15; // r9
  int v16; // r10
  int v17; // r4
  char *v18; // r5
  unsigned int v19; // r12

  v3 = (__int64 *)HIDWORD(a3);
  v4 = *(char **)a1;
  v5 = a1;
  v7 = (_QWORD *)a3;
  v8 = *(char **)(a1 + 4);
  v9 = &a2[-*(_DWORD *)a1];
  HIDWORD(a3) = (int)&v8[-*(_DWORD *)a1] >> 4;
  if ( !HIDWORD(a3) )
  {
    v10 = 1;
    goto LABEL_26;
  }
  v10 = 2 * HIDWORD(a3);
  if ( HIDWORD(a3) > 2 * HIDWORD(a3) || v10 > 0xFFFFFFF )
  {
    v11 = -16;
LABEL_4:
    a1 = sub_9836C(v11);
    v4 = *(char **)v5;
    v12 = a1;
    v8 = *(char **)(v5 + 4);
    v10 = a1 + v11;
    v13 = a1 + 16;
    goto LABEL_5;
  }
  if ( v10 )
  {
LABEL_26:
    v11 = 16 * v10;
    goto LABEL_4;
  }
  v13 = 16;
  v12 = 0;
LABEL_5:
  v14 = &v9[v12];
  if ( &v9[v12] )
  {
    *(_QWORD *)&v9[v12] = *v7;
    a3 = *v3;
    *((_QWORD *)v14 + 1) = *v3;
  }
  if ( a2 != v4 )
  {
    v15 = v4 + 16;
    HIDWORD(a3) = a2 - (v4 + 16);
    v16 = v12;
    v17 = HIDWORD(a3) >> 4;
    do
    {
      if ( v16 )
      {
        a1 = *((_DWORD *)v15 - 4);
        v14 = (char *)*((_DWORD *)v15 - 3);
        a3 = *((_QWORD *)v15 - 1);
      }
      v15 += 16;
      if ( v16 )
      {
        *(_DWORD *)v16 = a1;
        *(_DWORD *)(v16 + 4) = v14;
        *(_QWORD *)(v16 + 8) = a3;
      }
      v16 += 16;
    }
    while ( v15 != a2 + 16 );
    v13 = v12 + 16 * v17 + 32;
  }
  if ( a2 != v8 )
  {
    v18 = a2 + 16;
    v19 = v13 + ((v8 - v18) & 0xFFFFFFF0) + 16;
    do
    {
      if ( v13 )
      {
        a1 = *((_DWORD *)v18 - 4);
        v14 = (char *)*((_DWORD *)v18 - 3);
        a3 = *((_QWORD *)v18 - 1);
      }
      v18 += 16;
      if ( v13 )
      {
        *(_DWORD *)v13 = a1;
        *(_DWORD *)(v13 + 4) = v14;
        *(_QWORD *)(v13 + 8) = a3;
      }
      v13 += 16;
    }
    while ( v13 != v19 );
  }
  if ( v4 )
    sub_339E64(v4);
  *(_DWORD *)v5 = v12;
  *(_DWORD *)(v5 + 4) = v13;
  *(_DWORD *)(v5 + 8) = v10;
}
