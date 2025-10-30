int __fastcall sub_2DBCEC(int a1, char *a2, int *a3)
{
  char v4; // r3
  int v7; // r0
  int v8; // r3
  _DWORD *v9; // r4
  int i; // r10
  int v11; // r0
  int v12; // r2
  _DWORD *v13; // r3
  int result; // r0
  int v15; // [sp+4h] [bp-4h] BYREF

  v4 = *a2;
  v15 = 0;
  if ( (v4 & 1) != 0 || (v7 = *((_DWORD *)a2 + 7), (v8 = *(_DWORD *)(v7 + 52)) != 0) )
  {
    v9 = *(_DWORD **)(a1 + 100);
    v8 = *(_DWORD *)(a1 + 4);
    for ( i = *(_DWORD *)(v8 + 444); v9; v9 = (_DWORD *)v9[3] )
    {
      while ( 1 )
      {
        v8 = v9[5] & 0x8001;
        if ( v8 == 1 && !(*(int (__fastcall **)(int, char *, _DWORD *))(i + 112))(a1, a2, v9) )
          break;
        if ( a3 )
          v8 = v9[35];
        v9 = (_DWORD *)v9[3];
        if ( a3 )
          *(_DWORD *)(v8 + 96) = 0;
        if ( !v9 )
          goto LABEL_15;
      }
      v8 = ++v15;
      if ( a3 )
        *(_DWORD *)(v9[35] + 96) = v8;
    }
LABEL_15:
    v7 = *((_DWORD *)a2 + 7);
  }
  if ( a3 )
  {
    v8 = v15;
    *a3 = v15;
  }
  sub_2FCBD4(v7, sub_2DF340, &v15, v8);
  v11 = *((_DWORD *)a2 + 7);
  v12 = v15;
  v13 = *(_DWORD **)(v11 + 196);
  if ( v13 )
  {
    do
    {
      v13[3] = ++v12;
      v13 = (_DWORD *)*v13;
    }
    while ( v13 );
    v15 = v12;
  }
  *(_DWORD *)(v11 + 80) = v12;
  sub_2FCBD4(v11, sub_2DC5AC, &v15, v13);
  result = v15 + 1;
  *(_DWORD *)(*((_DWORD *)a2 + 7) + 76) = v15 + 1;
  return result;
}
