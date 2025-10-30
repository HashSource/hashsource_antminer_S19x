void __fastcall sub_148E7C(_DWORD *a1, unsigned int a2)
{
  char *v2; // r6
  unsigned int v3; // r12
  int v4; // r3
  bool v5; // zf
  char *v6; // r9
  __int64 v8; // r4
  int v9; // r2
  bool v10; // cf
  _DWORD *v11; // r8
  size_t v12; // r5
  char *v13; // r0
  _DWORD *v14; // r3
  _DWORD *v15; // r2
  int v16; // lr
  int v17; // r10
  int v18; // r12
  int v19; // r12
  int v20; // r12
  _DWORD *v21; // r2
  int v22; // r1
  void *v23; // r0

  if ( !a2 )
    return;
  v2 = (char *)a1[1];
  if ( -858993459 * ((a1[2] - (int)v2) >> 2) >= a2 )
  {
    v3 = a2;
    v4 = a1[1];
    do
    {
      v5 = v4 == 0;
      v4 += 20;
      if ( !v5 )
      {
        *(_DWORD *)(v4 - 20) = 0;
        *(_DWORD *)(v4 - 16) = 0;
        *(_DWORD *)(v4 - 12) = 0;
        *(_DWORD *)(v4 - 8) = 0;
        *(_DWORD *)(v4 - 4) = 0;
      }
      --v3;
    }
    while ( v3 );
    a1[1] = &v2[20 * a2];
    return;
  }
  v6 = (char *)*a1;
  LODWORD(v8) = a2;
  HIDWORD(v8) = -858993459 * ((int)&v2[-*a1] >> 2);
  if ( a2 > 214748364 - HIDWORD(v8) )
    sub_33D184("vector::_M_default_append");
  if ( a2 < HIDWORD(v8) )
    v9 = -858993459 * ((int)&v2[-*a1] >> 2);
  else
    v9 = a2;
  v10 = __CFADD__(HIDWORD(v8), v9);
  HIDWORD(v8) += v9;
  if ( v10 || HIDWORD(v8) > 0xCCCCCCC )
  {
    v12 = -16;
    goto LABEL_17;
  }
  if ( HIDWORD(v8) )
  {
    v12 = 20 * HIDWORD(v8);
LABEL_17:
    v13 = (char *)sub_9836C(v12);
    v6 = (char *)*a1;
    v11 = v13;
    v2 = (char *)a1[1];
    HIDWORD(v8) = &v13[v12];
    goto LABEL_18;
  }
  v11 = 0;
LABEL_18:
  if ( v6 == v2 )
  {
    v14 = v11;
  }
  else
  {
    v15 = v6 + 20;
    v14 = v11;
    do
    {
      if ( v14 )
      {
        v16 = *(v15 - 4);
        v17 = *(v15 - 5);
        v14[3] = 0;
        v14[4] = 0;
        v14[2] = 0;
        v18 = *(v15 - 3);
        *v14 = v17;
        v14[1] = v16;
        v14[2] = v18;
        *(v15 - 3) = 0;
        v19 = v14[3];
        v14[3] = *(v15 - 2);
        *(v15 - 2) = v19;
        v20 = v14[4];
        v14[4] = *(v15 - 1);
        *(v15 - 1) = v20;
      }
      v14 += 5;
      v15 += 5;
    }
    while ( v14 != &v11[5 * ((214748365 * ((unsigned int)(v2 - (v6 + 20)) >> 2)) & 0x3FFFFFFF) + 5] );
  }
  v21 = v14;
  v22 = v8;
  do
  {
    v5 = v21 == 0;
    v21 += 5;
    if ( !v5 )
    {
      *(v21 - 5) = 0;
      *(v21 - 4) = 0;
      *(v21 - 3) = 0;
      *(v21 - 2) = 0;
      *(v21 - 1) = 0;
    }
    --v22;
  }
  while ( v22 );
  LODWORD(v8) = &v14[5 * v8];
  if ( v6 != v2 )
  {
    do
    {
      v23 = (void *)*((_DWORD *)v6 + 2);
      if ( v23 )
        sub_339E64(v23);
      v6 += 20;
    }
    while ( v6 != v2 );
    v2 = (char *)*a1;
  }
  if ( v2 )
    sub_339E64(v2);
  *a1 = v11;
  *(_QWORD *)(a1 + 1) = v8;
}
