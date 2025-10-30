int __fastcall sub_1CF0C8(int result, int a2, int a3, unsigned int a4, unsigned int a5)
{
  int v5; // r9
  int v6; // r7
  int v7; // r6
  int v8; // r4
  unsigned int v9; // lr
  unsigned int *v10; // r12
  unsigned int v11; // r10
  bool v12; // cf
  int v13; // lr
  unsigned int v14; // r6
  int v15; // r7
  int i; // r5
  int v17; // r8
  int v18; // r2
  unsigned int v19; // lr

  v5 = (a3 - 1) / 2;
  if ( a2 >= v5 )
  {
    v10 = (unsigned int *)(result + 8 * a2);
    if ( (a3 & 1) != 0 )
      goto LABEL_14;
    v8 = a2;
  }
  else
  {
    v6 = a2;
    do
    {
      v7 = result + 8 * v6;
      v8 = 2 * (v6 + 1);
      v9 = *(_DWORD *)(result + 16 * (v6 + 1));
      v10 = (unsigned int *)(result + 16 * (v6 + 1));
      v11 = *(_DWORD *)(result + 8 * (v8 - 1));
      v12 = v9 >= v11;
      if ( v9 < v11 )
      {
        v9 = *(_DWORD *)(result + 8 * (v8 - 1));
        v10 = (unsigned int *)(result + 8 * (v8 - 1));
      }
      *(_DWORD *)(result + 8 * v6) = v9;
      if ( !v12 )
        --v8;
      v6 = v8;
      *(_DWORD *)(v7 + 4) = v10[1];
    }
    while ( v8 < v5 );
    if ( (a3 & 1) != 0 )
      goto LABEL_9;
  }
  if ( v8 == (a3 - 2) / 2 )
  {
    v8 = 2 * v8 + 1;
    v19 = *(_DWORD *)(result + 8 * v8 + 4);
    *v10 = *(_DWORD *)(result + 8 * v8);
    v10[1] = v19;
    v10 = (unsigned int *)(result + 8 * v8);
  }
LABEL_9:
  v13 = (v8 - 1) / 2;
  if ( v8 > a2 )
  {
    v14 = *(_DWORD *)(result + 8 * v13);
    v15 = 8 * v13;
    for ( i = result + 8 * v13; v14 < a4; i = result + 8 * v18 )
    {
      v17 = *(_DWORD *)(i + 4);
      *(_DWORD *)(result + 8 * v8) = v14;
      v10 = (unsigned int *)(result + v15);
      *(_DWORD *)(result + 8 * v8 + 4) = v17;
      v18 = (v13 - 1) / 2;
      if ( a2 >= v13 )
        break;
      v14 = *(_DWORD *)(result + 8 * v18);
      v8 = v13;
      v15 = 8 * v18;
      v13 = (v13 - 1) / 2;
    }
  }
LABEL_14:
  *v10 = a4;
  v10[1] = a5;
  return result;
}
