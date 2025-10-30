_DWORD *__fastcall sub_B8AEC(_BYTE *a1, int a2, _DWORD *a3)
{
  _DWORD *v5; // r7
  int v6; // r10
  _BYTE *v7; // r3
  int v8; // r8
  int v10; // r5
  int v11; // r6
  _BYTE *v12; // r1
  int v13; // r3
  int v14; // t1

  v5 = a3;
  v6 = 0;
  if ( !a3 )
  {
    v5 = (_DWORD *)sub_B822C();
    v6 = (int)v5;
    if ( !v5 )
      return 0;
  }
  if ( a2 > 0 && !*a1 )
  {
    v7 = a1 + 1;
    do
    {
      --a2;
      a1 = v7++;
      if ( !a2 )
        goto LABEL_8;
    }
    while ( !*a1 );
  }
  if ( !a2 )
  {
LABEL_8:
    v8 = (int)v5;
    v5[1] = 0;
    return (_DWORD *)v8;
  }
  v10 = (a2 - 1) & 7;
  v11 = ((unsigned int)(a2 - 1) >> 3) + 1;
  v8 = sub_B89D8((int)v5, v11);
  if ( !v8 )
  {
    sub_B895C(v6);
    return (_DWORD *)v8;
  }
  v12 = &a1[a2];
  v13 = 0;
  v5[1] = v11;
  v5[3] = 0;
  do
  {
    while ( 1 )
    {
      v14 = (unsigned __int8)*a1++;
      v13 = v14 | (v13 << 8);
      if ( !v10 )
        break;
      --v10;
      if ( a1 == v12 )
        goto LABEL_15;
    }
    --v11;
    *(_DWORD *)(*v5 + 4 * v11) = v13;
    v13 = 0;
    v10 = 7;
  }
  while ( a1 != v12 );
LABEL_15:
  sub_B8ACC(v5);
  return v5;
}
