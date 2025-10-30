void __fastcall sub_DFF0C(char **a1, unsigned int a2)
{
  char *v4; // r10
  unsigned int v5; // r5
  char *v6; // r3
  char *v7; // r8
  unsigned int v8; // r6
  int v9; // r2
  bool v10; // cf
  unsigned int v11; // r6
  char *v12; // r9
  size_t v13; // r6
  char *v14; // r0
  char *v15; // r5
  char *v16; // r11
  char *v17; // r10
  int v18; // r1
  int v19; // r2
  int v20; // r3
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r1
  char *v25; // r3
  unsigned int v26; // r10
  char *v27; // r5

  if ( !a2 )
    return;
  v4 = a1[1];
  if ( -858993459 * ((a1[2] - v4) >> 3) >= a2 )
  {
    v5 = a2;
    v6 = a1[1];
    do
    {
      if ( v6 )
        v6 = (char *)memset(v6, 0, 0x28u);
      --v5;
      v6 += 40;
    }
    while ( v5 );
    a1[1] = &v4[40 * a2];
    return;
  }
  v7 = *a1;
  v8 = -858993459 * ((v4 - *a1) >> 3);
  if ( a2 > 107374182 - v8 )
    sub_33D184("vector::_M_default_append");
  if ( a2 < v8 )
    v9 = -858993459 * ((v4 - *a1) >> 3);
  else
    v9 = a2;
  v10 = __CFADD__(v8, v9);
  v11 = v8 + v9;
  if ( v10 || v11 > 0x6666666 )
  {
    v13 = -16;
    goto LABEL_17;
  }
  if ( v11 )
  {
    v13 = 40 * v11;
LABEL_17:
    v14 = (char *)sub_9836C(v13);
    v7 = *a1;
    v4 = a1[1];
    v12 = v14;
    v11 = (unsigned int)&v14[v13];
    goto LABEL_18;
  }
  v12 = 0;
LABEL_18:
  if ( v4 == v7 )
  {
    v15 = v12;
  }
  else
  {
    v16 = v7 + 40;
    v15 = v12;
    v17 = &v12[40 * ((214748365 * ((unsigned int)(v4 - (v7 + 40)) >> 3)) & 0x1FFFFFFF) + 40];
    do
    {
      if ( v15 )
      {
        v18 = *((_DWORD *)v16 - 9);
        v19 = *((_DWORD *)v16 - 8);
        v20 = *((_DWORD *)v16 - 7);
        *(_DWORD *)v15 = *((_DWORD *)v16 - 10);
        *((_DWORD *)v15 + 1) = v18;
        *((_DWORD *)v15 + 2) = v19;
        *((_DWORD *)v15 + 3) = v20;
        v21 = *((_DWORD *)v16 - 5);
        v22 = *((_DWORD *)v16 - 4);
        v23 = *((_DWORD *)v16 - 3);
        *((_DWORD *)v15 + 4) = *((_DWORD *)v16 - 6);
        *((_DWORD *)v15 + 5) = v21;
        *((_DWORD *)v15 + 6) = v22;
        *((_DWORD *)v15 + 7) = v23;
        v24 = *((_DWORD *)v16 - 1);
        *((_DWORD *)v15 + 8) = *((_DWORD *)v16 - 2);
        *((_DWORD *)v15 + 9) = v24;
      }
      v15 += 40;
      v16 += 40;
    }
    while ( v15 != v17 );
  }
  v25 = v15;
  v26 = a2;
  do
  {
    if ( v25 )
      v25 = (char *)memset(v25, 0, 0x28u);
    --v26;
    v25 += 40;
  }
  while ( v26 );
  v27 = &v15[40 * a2];
  if ( v7 )
    sub_339E64(v7);
  *a1 = v12;
  a1[1] = v27;
  a1[2] = (char *)v11;
}
