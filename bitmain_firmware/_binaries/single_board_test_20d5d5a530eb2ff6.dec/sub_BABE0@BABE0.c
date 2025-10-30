int __fastcall sub_BABE0(void **a1, int a2)
{
  int result; // r0
  _BOOL4 v5; // r0
  char v6; // r8
  int v7; // r3
  int v8; // r7
  char *v9; // r2
  int v10; // r4
  int v11; // r5
  unsigned int v12; // r3
  int v13; // r9
  int v14; // r0

  if ( !a2 )
    return -1;
  if ( !a1[1] )
    return 0;
  v5 = sub_B8208(a2);
  v6 = 64 - v5;
  if ( !sub_BA5F8(a1, (int *)a1, 64 - v5) )
    return -1;
  v7 = (int)a1[1];
  v8 = v7 - 1;
  if ( v7 - 1 < 0 )
  {
    result = 0;
  }
  else
  {
    v9 = (char *)*a1;
    v10 = a2 << v6;
    v11 = 4 * v8;
    v12 = 0;
    do
    {
      v13 = *(_DWORD *)&v9[v11];
      --v8;
      v14 = sub_12F9FC(v12, v13, v10);
      v9 = (char *)*a1;
      v12 = v13 - v14 * v10;
      *(_DWORD *)((char *)*a1 + v11) = v14;
      v11 -= 4;
    }
    while ( v8 != -1 );
    result = v12 >> v6;
    v7 = (int)a1[1];
  }
  if ( v7 > 0 )
  {
    if ( *((_DWORD *)*a1 + v7 + 0x3FFFFFFF) )
      return result;
    a1[1] = (void *)--v7;
  }
  if ( !v7 )
    a1[3] = 0;
  return result;
}
