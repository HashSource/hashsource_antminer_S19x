int __fastcall sub_30533C(_DWORD *a1, void *a2, size_t *a3)
{
  int v6; // r7
  _DWORD *v7; // r2
  int v8; // r1
  size_t v9; // r4
  size_t v10; // r3
  bool v11; // zf

  if ( !a1 )
    return -2;
  if ( !a1[8] )
    return -2;
  if ( !a1[9] )
    return -2;
  v6 = sub_305068((int)a1);
  if ( v6 )
    return -2;
  v7 = (_DWORD *)a1[7];
  v8 = v7[29];
  v9 = v7[11];
  v10 = v7[27] + v8;
  if ( v10 < v9 )
    v9 = v7[27] + v8;
  v11 = a2 == 0;
  if ( a2 )
    v11 = v9 == 0;
  if ( !v11 )
    memcpy(a2, (const void *)(v7[14] + v10 - v9), v9);
  if ( a3 )
    *a3 = v9;
  return v6;
}
