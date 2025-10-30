void __fastcall sub_27729C(int a1, unsigned int a2, int a3, int a4)
{
  int v4; // r6
  __int64 v5; // r6
  int v7; // r10
  size_t v8; // r4
  _DWORD *v9; // r4
  int v10; // r8
  __int64 v11; // r0
  _DWORD *v12; // r3
  _DWORD *v13; // r2
  int v14; // r3

  if ( a2 == 1 )
  {
    a4 = 0;
    v4 = a1;
  }
  HIDWORD(v5) = a2;
  if ( a2 == 1 )
  {
    *(_DWORD *)(v4 + 24) = a4;
    LODWORD(v5) = v4 + 24;
    v7 = v5;
  }
  else
  {
    if ( a2 > 0x3FFFFFFF )
      sub_33D01C(a1, a2);
    v8 = 4 * a2;
    LODWORD(v5) = sub_9836C(4 * a2);
    v7 = a1 + 24;
    memset((void *)v5, 0, v8);
  }
  v9 = *(_DWORD **)(a1 + 8);
  v10 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( v9 )
  {
    do
    {
      while ( 1 )
      {
        v11 = sub_347674(v9[8], HIDWORD(v5));
        v12 = *(_DWORD **)(v5 + 4 * HIDWORD(v11));
        v13 = (_DWORD *)*v9;
        if ( !v12 )
          break;
        *v9 = *v12;
        *v12 = v9;
LABEL_10:
        v9 = v13;
        if ( !v13 )
          goto LABEL_16;
      }
      v14 = *(_DWORD *)(a1 + 8);
      *v9 = v14;
      if ( !v14 )
        v10 = HIDWORD(v11);
      *(_DWORD *)(a1 + 8) = v9;
      *(_DWORD *)(v5 + 4 * HIDWORD(v11)) = a1 + 8;
      if ( !v14 )
        goto LABEL_10;
      *(_DWORD *)(v5 + 4 * v10) = v9;
      v9 = v13;
      v10 = HIDWORD(v11);
    }
    while ( v13 );
  }
LABEL_16:
  if ( *(_DWORD *)a1 != v7 )
    sub_339E64(*(void **)a1);
  *(_QWORD *)a1 = v5;
}
