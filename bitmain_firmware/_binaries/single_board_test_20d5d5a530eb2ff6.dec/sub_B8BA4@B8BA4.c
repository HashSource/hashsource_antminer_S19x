_DWORD *__fastcall sub_B8BA4(int a1, int a2, _DWORD *a3)
{
  _DWORD *v5; // r7
  int v6; // r10
  int v7; // r4
  int v8; // r3
  int v10; // r5
  int v11; // r6
  int v12; // r8
  int v13; // r1
  int v14; // r3
  int v15; // t1

  v5 = a3;
  v6 = 0;
  if ( !a3 )
  {
    v6 = sub_B822C();
    v5 = (_DWORD *)v6;
    if ( !v6 )
      return 0;
  }
  v7 = a1 + a2;
  if ( a2 > 0 && !*(_BYTE *)(v7 - 1) )
  {
    v8 = v7 - 1;
    while ( 1 )
    {
      --a2;
      v7 = v8;
      if ( !a2 )
        goto LABEL_14;
      if ( *(unsigned __int8 *)--v8 )
        goto LABEL_7;
    }
  }
  if ( !a2 )
  {
LABEL_14:
    v12 = (int)v5;
    v5[1] = 0;
    return (_DWORD *)v12;
  }
LABEL_7:
  v10 = (a2 - 1) & 7;
  v11 = ((unsigned int)(a2 - 1) >> 3) + 1;
  v12 = sub_B89D8((int)v5, v11);
  if ( !v12 )
  {
    sub_B895C(v6);
    return (_DWORD *)v12;
  }
  v13 = v7 - a2;
  v14 = 0;
  v5[1] = v11;
  v5[3] = 0;
  do
  {
    while ( 1 )
    {
      v15 = *(unsigned __int8 *)--v7;
      v14 = v15 | (v14 << 8);
      if ( !v10 )
        break;
      --v10;
      if ( v7 == v13 )
        goto LABEL_12;
    }
    --v11;
    *(_DWORD *)(*v5 + 4 * v11) = v14;
    v14 = 0;
    v10 = 7;
  }
  while ( v7 != v13 );
LABEL_12:
  sub_B8ACC(v5);
  return v5;
}
