int __fastcall sub_6BC1C(_DWORD *a1, char *a2)
{
  char *v2; // r6
  int v3; // r3
  int v5; // r4
  int v6; // r0
  int v7; // t1
  int v8; // r7
  char *v9; // r2
  int v10; // r1
  int v11; // r8
  int *v12; // r6
  int v13; // r0
  _DWORD *v14; // r4
  _DWORD *v15; // r2
  int v16; // r0
  int v17; // r1
  int v18; // r3
  int v19; // r0
  int v20; // r3
  int v21; // r3
  bool v23; // zf

  v2 = a2;
  v3 = (unsigned __int8)*a2;
  if ( *a2 )
  {
    v5 = 5381;
    do
    {
      v6 = v3 + 32 * v5;
      v7 = (unsigned __int8)*++a2;
      v3 = v7;
      v5 += v6;
    }
    while ( v7 );
  }
  else
  {
    v5 = 5381;
  }
  sub_772CC(v5, dword_8A954[a1[2]]);
  v8 = a1[1];
  v9 = v2;
  v11 = v10;
  v12 = (int *)(v8 + 8 * v10);
  v13 = sub_6B7C4((int)a1, v12, v9, v5);
  v14 = (_DWORD *)v13;
  if ( !v13 )
    return -1;
  v15 = (_DWORD *)(v13 + 4);
  v16 = v12[1];
  v17 = v14[2];
  v18 = v14[1];
  if ( v14 + 1 == *(_DWORD **)(v8 + 8 * v11) )
  {
    v23 = v15 == (_DWORD *)v16;
    if ( v15 == (_DWORD *)v16 )
      v15 = a1 + 3;
    else
      *(_DWORD *)(v8 + 8 * v11) = v17;
    if ( v23 )
    {
      v12[1] = (int)v15;
      *(_DWORD *)(v8 + 8 * v11) = v15;
    }
  }
  else if ( v15 == (_DWORD *)v16 )
  {
    v12[1] = v18;
  }
  v19 = v14[3];
  *(_DWORD *)(v18 + 4) = v17;
  *(_DWORD *)v14[2] = v18;
  if ( v19 )
  {
    v20 = *(_DWORD *)(v19 + 4);
    if ( v20 != -1 )
    {
      v21 = v20 - 1;
      *(_DWORD *)(v19 + 4) = v21;
      if ( !v21 )
        sub_6E5DC(v19);
    }
  }
  sub_6D518(v14);
  --*a1;
  return 0;
}
