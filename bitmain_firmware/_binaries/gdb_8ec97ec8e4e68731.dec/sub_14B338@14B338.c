void __fastcall sub_14B338(int a1, unsigned int a2, int a3, int a4)
{
  int v4; // r6
  __int64 v5; // r6
  int v7; // r10
  _DWORD *v8; // r4
  int v9; // r8
  __int64 v10; // r0
  _DWORD *v11; // r3
  _DWORD *v12; // r2
  int v13; // r3

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
    LODWORD(v5) = sub_1243D8(a2, a2);
    v7 = a1 + 24;
  }
  v8 = *(_DWORD **)(a1 + 8);
  v9 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( v8 )
  {
    do
    {
      while ( 1 )
      {
        v10 = sub_347674(v8[1], HIDWORD(v5));
        v11 = *(_DWORD **)(v5 + 4 * HIDWORD(v10));
        v12 = (_DWORD *)*v8;
        if ( !v11 )
          break;
        *v8 = *v11;
        *v11 = v8;
LABEL_9:
        v8 = v12;
        if ( !v12 )
          goto LABEL_15;
      }
      v13 = *(_DWORD *)(a1 + 8);
      *v8 = v13;
      if ( !v13 )
        v9 = HIDWORD(v10);
      *(_DWORD *)(a1 + 8) = v8;
      *(_DWORD *)(v5 + 4 * HIDWORD(v10)) = a1 + 8;
      if ( !v13 )
        goto LABEL_9;
      *(_DWORD *)(v5 + 4 * v9) = v8;
      v8 = v12;
      v9 = HIDWORD(v10);
    }
    while ( v12 );
  }
LABEL_15:
  if ( *(_DWORD *)a1 != v7 )
    sub_339E64(*(void **)a1);
  *(_QWORD *)a1 = v5;
}
