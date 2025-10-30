int __fastcall sub_12468(int *a1, char *a2, int a3)
{
  int v3; // r3
  int v6; // r7
  int v7; // r8
  int v8; // r4
  int v9; // r3
  _DWORD *v10; // r7
  _DWORD *v11; // r5
  _DWORD *v12; // r11
  _DWORD *v13; // r2
  int v14; // r1
  size_t v15; // r10
  int v16; // r11
  int *v17; // r4
  int v18; // r0
  int v19; // r7
  int v20; // r0
  unsigned int *v21; // r3
  unsigned int v22; // r2
  unsigned int v23; // r2
  int v25; // r0
  _DWORD *v26; // r5
  int v27; // r2
  int v28; // r3
  int v29; // r2

  v3 = a1[2];
  if ( !((unsigned int)*a1 >> v3) )
  {
LABEL_10:
    v8 = a1[1];
    v7 = 1 << v3;
    goto LABEL_11;
  }
  v6 = v3 + 1;
  v7 = 1 << (v3 + 1);
  v8 = sub_13828(8 * v7);
  if ( !v8 )
    return -1;
  sub_1383C(a1[1]);
  a1[2] = v6;
  v9 = 0;
  a1[1] = v8;
  v10 = a1 + 3;
  if ( v7 )
  {
    do
    {
      *(_DWORD *)(v8 + v9 + 4) = v10;
      *(_DWORD *)(v8 + v9) = v10;
      v9 += 8;
    }
    while ( v9 != 8 * v7 );
  }
  else
  {
    v10 = a1 + 3;
  }
  v11 = (_DWORD *)a1[4];
  a1[3] = (int)v10;
  a1[4] = (int)v10;
  if ( v11 != v10 )
  {
    while ( 1 )
    {
      v12 = (_DWORD *)v11[1];
      sub_1504C(v11[4], v7);
      v13 = v11;
      v11 = v12;
      sub_12354((int)a1, v8 + 8 * v14, v13);
      if ( v10 == v12 )
        break;
      v8 = a1[1];
    }
    v3 = a1[2];
    goto LABEL_10;
  }
LABEL_11:
  v15 = strlen(a2);
  v16 = sub_11FBC((unsigned __int16 *)a2, v15, dword_27DF4);
  v17 = (int *)(v8 + 8 * ((v7 - 1) & v16));
  v18 = sub_1238C((int)a1, v17, a2, v16);
  v19 = v18;
  if ( !v18 )
  {
    if ( v15 <= 0xFFFFFFE6 )
    {
      v25 = sub_13828(v15 + 25);
      v26 = (_DWORD *)v25;
      if ( v25 )
      {
        *(_DWORD *)(v25 + 16) = v16;
        strncpy((char *)(v25 + 24), a2, v15 + 1);
        v26[1] = v26;
        v26[5] = a3;
        *v26 = v26;
        v26[3] = v26 + 2;
        v26[2] = v26 + 2;
        sub_12354((int)a1, (int)v17, v26);
        v27 = a1[5];
        v28 = *a1;
        v26[3] = a1 + 5;
        v26[2] = v27;
        v29 = a1[5];
        a1[5] = (int)(v26 + 2);
        *(_DWORD *)(v29 + 4) = v26 + 2;
        *a1 = v28 + 1;
        return 0;
      }
    }
    return -1;
  }
  v20 = *(_DWORD *)(v18 + 20);
  if ( v20 && *(_DWORD *)(v20 + 4) != -1 )
  {
    v21 = (unsigned int *)(v20 + 4);
    __dmb(0xFu);
    do
    {
      v22 = __ldrex(v21);
      v23 = v22 - 1;
    }
    while ( __strex(v23, v21) );
    if ( !v23 )
      sub_1427C();
  }
  *(_DWORD *)(v19 + 20) = a3;
  return 0;
}
