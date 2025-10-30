void *__fastcall sub_13D64(_DWORD *a1, int a2, int a3)
{
  unsigned int v5; // r3
  void *v6; // r5
  unsigned int v8; // r2
  unsigned int v9; // r3
  unsigned int v10; // r7
  void *v11; // r0

  v5 = a1[2];
  if ( a2 + a1[3] <= v5 )
    return (void *)a1[4];
  v8 = 2 * v5;
  v9 = a2 + v5;
  v6 = (void *)a1[4];
  if ( v9 < v8 )
    v10 = v8;
  else
    v10 = v9;
  v11 = sub_13828((void *)(4 * v10));
  if ( !v11 )
    return 0;
  a1[2] = v10;
  a1[4] = v11;
  if ( a3 )
  {
    memcpy(v11, v6, 4 * a1[3]);
    sub_1383C(v6);
    return (void *)a1[4];
  }
  return v6;
}
