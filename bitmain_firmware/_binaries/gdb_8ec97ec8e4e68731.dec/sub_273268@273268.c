void __fastcall sub_273268(int a1, unsigned int a2)
{
  unsigned int v2; // r5
  _DWORD *v3; // r12
  _DWORD *v4; // r2
  unsigned int v5; // r3
  _DWORD *v6; // r7
  signed int v8; // r8
  unsigned int v9; // r3
  bool v10; // cf
  unsigned int v11; // r3
  size_t v12; // r6
  char *v13; // r0
  char *v14; // r8
  unsigned int v15; // r3
  char *v16; // r2
  char *v17; // r8
  char *v18; // r6
  char *v19; // r9

  v2 = a2;
  if ( !a2 )
    return;
  v3 = *(_DWORD **)(a1 + 4);
  v4 = v3;
  if ( a2 <= (*(_DWORD *)(a1 + 8) - (int)v3) >> 2 )
  {
    v5 = a2;
    do
    {
      --v5;
      *v4++ = 0;
    }
    while ( v5 );
    *(_DWORD *)(a1 + 4) = &v3[a2];
    return;
  }
  v6 = *(_DWORD **)a1;
  v8 = (signed int)v3 - *(_DWORD *)a1;
  v9 = v8 >> 2;
  if ( 0x3FFFFFFF - (v8 >> 2) < a2 )
    sub_33D184("vector::_M_default_append");
  if ( a2 < v9 )
    a2 = v8 >> 2;
  v10 = __CFADD__(v9, a2);
  v11 = v9 + a2;
  if ( v10 || v11 > 0x3FFFFFFF )
  {
    v12 = -4;
    goto LABEL_14;
  }
  if ( v11 )
  {
    v12 = 4 * v11;
LABEL_14:
    v13 = (char *)sub_9836C(v12);
    v6 = *(_DWORD **)a1;
    v19 = v13;
    v4 = *(_DWORD **)(a1 + 4);
    v18 = &v13[v12];
    v8 = (signed int)v4 - *(_DWORD *)a1;
    goto LABEL_15;
  }
  v18 = 0;
  v19 = 0;
LABEL_15:
  if ( v6 != v4 )
    memmove(v19, v6, v8);
  v14 = &v19[v8];
  v15 = v2;
  v16 = v14;
  do
  {
    --v15;
    *(_DWORD *)v16 = 0;
    v16 += 4;
  }
  while ( v15 );
  v17 = &v14[4 * v2];
  if ( v6 )
    sub_339E64(v6);
  *(_DWORD *)a1 = v19;
  *(_DWORD *)(a1 + 4) = v17;
  *(_DWORD *)(a1 + 8) = v18;
}
