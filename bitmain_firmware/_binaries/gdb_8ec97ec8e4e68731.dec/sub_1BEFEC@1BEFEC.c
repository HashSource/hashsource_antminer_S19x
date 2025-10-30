void __fastcall sub_1BEFEC(char **a1, char *a2)
{
  char *v3; // r8
  char *v4; // r0
  int v6; // r6
  int v7; // r2
  unsigned int v8; // r11
  size_t v9; // r11
  char *v10; // r0
  char *v11; // r2
  int v12; // r5
  char *v13; // r2
  char *v14; // r6
  _DWORD *v15; // r2
  _DWORD *v16; // r3
  unsigned int v17; // r12
  int v18; // r5
  int v19; // r5
  char *v20; // r1
  unsigned int v21; // r3
  int v22; // lr
  int v23; // r12
  char *v24; // r7
  _DWORD *v25; // r4
  _DWORD *v26; // r9
  _DWORD *v27; // r11
  _DWORD *v28; // r0
  void *v29; // r0
  void *v30; // r1
  _DWORD *v31; // [sp+0h] [bp-Ch]
  char *v32; // [sp+4h] [bp-8h]

  v3 = a1[1];
  v4 = *a1;
  v6 = a2 - v4;
  v7 = (v3 - v4) >> 2;
  if ( !(-1431655765 * v7) )
  {
    v8 = 1;
    goto LABEL_37;
  }
  v8 = 1431655766 * v7;
  if ( -1431655765 * v7 > (unsigned int)(1431655766 * v7) || v8 > 0x15555555 )
  {
    v9 = -4;
LABEL_4:
    v10 = (char *)sub_9836C(v9);
    v11 = &v10[v9];
    v31 = v10;
    v12 = (int)(v10 + 12);
    v4 = *a1;
    v3 = a1[1];
    v32 = v11;
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_37:
    v9 = 12 * v8;
    goto LABEL_4;
  }
  v32 = 0;
  v12 = 12;
  v31 = 0;
LABEL_5:
  v13 = (char *)v31 + v6;
  if ( (_DWORD *)((char *)v31 + v6) )
  {
    *(_DWORD *)((char *)v31 + v6) = 0;
    *((_DWORD *)v13 + 1) = 0;
    *((_DWORD *)v13 + 2) = 0;
  }
  if ( a2 != v4 )
  {
    v14 = v4 + 12;
    v15 = v4 + 12;
    v16 = v31;
    v17 = (715827883 * ((unsigned int)(a2 - (v4 + 12)) >> 2)) & 0x3FFFFFFF;
    do
    {
      if ( v16 )
      {
        v16[1] = 0;
        v16[2] = 0;
        *v16 = 0;
        *v16 = *(v15 - 3);
        *(v15 - 3) = 0;
        v18 = v16[1];
        v16[1] = *(v15 - 2);
        *(v15 - 2) = v18;
        v19 = v16[2];
        v16[2] = *(v15 - 1);
        *(v15 - 1) = v19;
      }
      v16 += 3;
      v15 += 3;
    }
    while ( v16 != &v31[3 * v17 + 3] );
    v12 = (int)&v31[3 * v17 + 6];
    if ( a2 == v3 )
      goto LABEL_19;
    goto LABEL_13;
  }
  if ( a2 != v3 )
  {
LABEL_13:
    v20 = a2 + 12;
    v21 = v12 + 12 * (((715827883 * ((unsigned int)(v3 - (a2 + 12)) >> 2)) & 0x3FFFFFFF) + 1);
    do
    {
      if ( v12 )
      {
        v22 = *((_DWORD *)v20 - 2);
        v23 = *((_DWORD *)v20 - 1);
        *(_DWORD *)v12 = *((_DWORD *)v20 - 3);
        *((_DWORD *)v20 - 3) = 0;
        *(_DWORD *)(v12 + 4) = v22;
        *((_DWORD *)v20 - 2) = 0;
        *(_DWORD *)(v12 + 8) = v23;
        *((_DWORD *)v20 - 1) = 0;
      }
      v12 += 12;
      v20 += 12;
    }
    while ( v12 != v21 );
    if ( v4 == v3 )
      goto LABEL_32;
    v14 = v4 + 12;
LABEL_19:
    v24 = v14;
    while ( 1 )
    {
      v25 = (_DWORD *)*((_DWORD *)v4 + 1);
      v26 = (_DWORD *)*((_DWORD *)v24 - 3);
      if ( v26 != v25 )
      {
        v27 = v26 + 8;
        do
        {
          v28 = (_DWORD *)v26[6];
          if ( v28 != v27 )
            sub_339E64(v28);
          v29 = (void *)*(v27 - 8);
          v30 = v26 + 2;
          v27 += 12;
          v26 += 12;
          if ( v29 != v30 )
            sub_339E64(v29);
        }
        while ( v25 != v26 );
        v25 = (_DWORD *)*((_DWORD *)v24 - 3);
      }
      if ( v25 )
        sub_339E64(v25);
      v24 += 12;
      v4 = v14;
      if ( v14 == v3 )
        break;
      v14 += 12;
    }
LABEL_32:
    v3 = *a1;
  }
  if ( v3 )
    sub_339E64(v3);
  *a1 = (char *)v31;
  a1[1] = (char *)v12;
  a1[2] = v32;
}
