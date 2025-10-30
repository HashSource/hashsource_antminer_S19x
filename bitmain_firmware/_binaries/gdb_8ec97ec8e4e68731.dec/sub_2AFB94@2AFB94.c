int __fastcall sub_2AFB94(int a1, int *a2)
{
  int v3; // r4
  int v4; // r1
  int v5; // r3
  int v6; // r3
  int *v7; // r0
  int v8; // r2
  int v11; // r3
  _DWORD *v12; // r0
  int v13; // r2
  __int64 v14; // r8
  int v15; // lr
  int v16; // r12

  v3 = *(_DWORD *)(a1 + 124);
  v4 = *(_DWORD *)(*(_DWORD *)(a1 + 160) + 20);
  v5 = v3;
  if ( v3 )
    v5 = 1;
  if ( v4 )
    v5 = 0;
  if ( !v5 )
  {
    if ( !v3 )
    {
LABEL_11:
      *a2 = 0;
      return v3;
    }
    goto LABEL_7;
  }
  v4 = sub_2ACBF4(a1, 24 * v3);
  if ( v4 )
  {
    v11 = *(_DWORD *)(a1 + 160);
    v12 = *(_DWORD **)(v11 + 12);
    *(_DWORD *)(v11 + 20) = v4;
    if ( v12 )
    {
      HIDWORD(v14) = &off_470950;
      v6 = v4 + 24;
      v13 = v4 + 24;
      LODWORD(v14) = 2;
      do
      {
        v15 = v12[1];
        v13 += 24;
        v16 = v12[2];
        v12 = (_DWORD *)*v12;
        *(_DWORD *)(v13 - 48) = a1;
        *(_DWORD *)(v13 - 44) = v15;
        *(_DWORD *)(v13 - 40) = v16;
        *(_QWORD *)(v13 - 36) = v14;
        *(_DWORD *)(v13 - 28) = 0;
      }
      while ( v12 );
      goto LABEL_8;
    }
LABEL_7:
    v6 = v4 + 24;
LABEL_8:
    v7 = a2;
    v8 = 0;
    do
    {
      ++v8;
      *v7++ = v4;
      v4 = v6;
      v6 += 24;
    }
    while ( v3 != v8 );
    a2 += v3;
    goto LABEL_11;
  }
  return -1;
}
