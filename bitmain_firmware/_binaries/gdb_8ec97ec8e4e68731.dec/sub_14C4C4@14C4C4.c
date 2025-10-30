int __fastcall sub_14C4C4(int result, int a2, int a3, unsigned int a4)
{
  unsigned int *v4; // r12
  int v5; // r8
  int v6; // r5
  int v7; // lr
  unsigned int v8; // r4
  unsigned int v9; // r7
  unsigned int *v10; // r10
  int v11; // r2
  bool v12; // cc
  unsigned int v13; // r5
  unsigned int v14; // r2
  int v15; // kr00_4
  int v16; // r2

  v5 = (a3 - 1) / 2;
  if ( a2 >= v5 )
  {
    if ( (a3 & 1) != 0 )
    {
      v4 = (unsigned int *)(result + 4 * a2);
      goto LABEL_12;
    }
    v7 = a2;
  }
  else
  {
    v6 = a2;
    do
    {
      v7 = 2 * (v6 + 1);
      v8 = *(_DWORD *)(result + 8 * (v6 + 1));
      v4 = (unsigned int *)(result + 8 * (v6 + 1));
      v9 = *(_DWORD *)(result + 4 * (v7 - 1));
      v10 = (unsigned int *)(result + 4 * (v7 - 1));
      if ( v9 > v8 )
      {
        --v7;
        v8 = v9;
        v4 = v10;
      }
      *(_DWORD *)(result + 4 * v6) = v8;
      v6 = v7;
    }
    while ( v7 < v5 );
    if ( (a3 & 1) != 0 )
      goto LABEL_7;
  }
  v15 = a3 - 2;
  v14 = a3 - 2 + ((unsigned int)(a3 - 2) >> 31);
  if ( v7 == v15 / 2 )
    v14 = 2 * v7;
  else
    v4 = (unsigned int *)(result + 4 * v7);
  if ( v7 == v15 / 2 )
  {
    v16 = v14 + 1;
    v4 = (unsigned int *)(result + 4 * v16);
    *(_DWORD *)(result + 4 * v7) = *v4;
    v7 = v16;
  }
LABEL_7:
  v11 = (v7 - 1) / 2;
  if ( v7 > a2 )
  {
    do
    {
      v13 = *(_DWORD *)(result + 4 * v11);
      if ( a4 <= v13 )
        break;
      v12 = a2 < v11;
      *(_DWORD *)(result + 4 * v7) = v13;
      v4 = (unsigned int *)(result + 4 * v11);
      v7 = v11;
      v11 = (v11 - 1) / 2;
    }
    while ( v12 );
  }
LABEL_12:
  *v4 = a4;
  return result;
}
