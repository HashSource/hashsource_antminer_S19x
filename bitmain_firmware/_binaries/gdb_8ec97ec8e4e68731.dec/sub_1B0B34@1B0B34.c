unsigned int __fastcall sub_1B0B34(unsigned int result, int a2, int a3, unsigned int a4, unsigned int a5)
{
  unsigned int *v5; // r4
  unsigned int *v6; // r5
  unsigned int v8; // lr
  int v9; // r8
  int v10; // r10
  int v11; // r12
  unsigned int v12; // r1
  unsigned int v13; // r2
  int v14; // kr00_4
  unsigned int v15; // r1
  int v16; // r2
  int v17; // r8
  unsigned int *i; // r1
  unsigned int v19; // r1
  unsigned int *v20; // r12
  bool v21; // cc

  v8 = result;
  v9 = (a3 - 1) / 2;
  if ( a2 >= v9 )
  {
    if ( (a3 & 1) != 0 )
    {
      v6 = (unsigned int *)(result + 8 * a2);
      goto LABEL_17;
    }
    v11 = a2;
  }
  else
  {
    v10 = a2;
    do
    {
      v5 = (unsigned int *)(v8 + 8 * v10);
      v11 = 2 * (v10 + 1) - 1;
      v6 = (unsigned int *)(v8 + 8 * v11);
      if ( *v6 <= *(_DWORD *)(v8 + 16 * (v10 + 1)) )
      {
        v6 = (unsigned int *)(v8 + 16 * (v10 + 1));
        v11 = 2 * (v10 + 1);
      }
      result = *v6;
      v12 = v6[1];
      v10 = v11;
      *v5 = *v6;
      v5[1] = v12;
    }
    while ( v11 < v9 );
    if ( (a3 & 1) != 0 )
      goto LABEL_12;
  }
  v14 = a3 - 2;
  v13 = a3 - 2 + ((unsigned int)(a3 - 2) >> 31);
  if ( v11 == v14 / 2 )
  {
    v13 = 2 * v11;
    v5 = (unsigned int *)(v8 + 8 * v11);
  }
  else
  {
    v6 = (unsigned int *)(v8 + 8 * v11);
  }
  if ( v11 == v14 / 2 )
  {
    v11 = v13 + 1;
    v6 = (unsigned int *)(v8 + 8 * (v13 + 1));
    result = *v6;
    v15 = v6[1];
    *v5 = *v6;
    v5[1] = v15;
  }
LABEL_12:
  v16 = (v11 - 1) / 2;
  if ( v11 > a2 )
  {
    result = *(_DWORD *)(v8 + 8 * v16);
    v17 = 8 * v16;
    for ( i = (unsigned int *)(v8 + 8 * v16); result < a4; i = (unsigned int *)(v8 + 8 * v16) )
    {
      result = *i;
      v19 = i[1];
      v20 = (unsigned int *)(v8 + 8 * v11);
      v21 = a2 < v16;
      v6 = (unsigned int *)(v8 + v17);
      *v20 = result;
      v20[1] = v19;
      v11 = v16;
      v16 = (v16 - 1) / 2;
      if ( !v21 )
        break;
      result = *(_DWORD *)(v8 + 8 * v16);
      v17 = 8 * v16;
    }
  }
LABEL_17:
  *v6 = a4;
  v6[1] = a5;
  return result;
}
