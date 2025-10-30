int __fastcall sub_BB960(int result, int a2, int a3, int a4, int (__fastcall *a5)(_DWORD, int))
{
  int *v5; // r6
  int v6; // r10
  int v7; // r7
  int v8; // r4
  int v9; // r9
  int v10; // r5
  unsigned int v11; // r3
  int v12; // r3
  int v13; // r7
  bool v14; // cc
  _DWORD *v15; // r1
  int v17; // [sp+4h] [bp-10h]

  v6 = a2;
  v7 = (a3 - 1) / 2;
  v8 = result;
  v17 = a3 & 1;
  if ( a2 >= v7 )
  {
    if ( (a3 & 1) != 0 )
    {
      v5 = (int *)(result + 4 * a2);
      goto LABEL_17;
    }
    v10 = a2;
    goto LABEL_7;
  }
  v9 = a2;
  do
  {
    v10 = 2 * (v9 + 1) - 1;
    v5 = (int *)(v8 + 4 * v10);
    result = a5(*(_DWORD *)(v8 + 8 * (v9 + 1)), *v5);
    if ( !result )
    {
      v5 = (int *)(v8 + 8 * (v9 + 1));
      v10 = 2 * (v9 + 1);
    }
    *(_DWORD *)(v8 + 4 * v9) = *v5;
    v9 = v10;
  }
  while ( v10 < v7 );
  v6 = a2;
  if ( !v17 )
  {
LABEL_7:
    v11 = a3 - 2 + ((unsigned int)(a3 - 2) >> 31);
    if ( v10 == (a3 - 2) / 2 )
      v11 = 2 * v10;
    else
      v5 = (int *)(v8 + 4 * v10);
    if ( v10 == (a3 - 2) / 2 )
    {
      v12 = v11 + 1;
      v5 = (int *)(v8 + 4 * v12);
      *(_DWORD *)(v8 + 4 * v10) = *v5;
      v10 = v12;
    }
  }
  v13 = (v10 - 1) / 2;
  if ( v10 > v6 )
  {
    while ( 1 )
    {
      result = a5(*(_DWORD *)(v8 + 4 * v13), a4);
      v15 = (_DWORD *)(v8 + 4 * v13);
      v5 = (int *)(v8 + 4 * v10);
      if ( !result )
        break;
      v14 = v6 < v13;
      *(_DWORD *)(v8 + 4 * v10) = *(_DWORD *)(v8 + 4 * v13);
      v10 = v13;
      v13 = (v13 - 1) / 2;
      if ( !v14 )
      {
        *v15 = a4;
        return result;
      }
    }
  }
LABEL_17:
  *v5 = a4;
  return result;
}
