int __fastcall sub_F81CC(int result, int a2, int a3, int a4, int (__fastcall *a5)(_DWORD, int))
{
  int v6; // r9
  int v8; // r4
  int v9; // r10
  int v10; // r5
  _DWORD *v11; // r11
  int v12; // r3
  int v13; // r9
  bool v14; // cc
  _DWORD *v15; // r1
  int v16; // [sp+0h] [bp-Ch]

  v6 = (a3 - 1) / 2;
  v8 = result;
  v16 = a3 & 1;
  if ( a2 >= v6 )
  {
    if ( (a3 & 1) != 0 )
    {
      v11 = (_DWORD *)(result + 4 * a2);
      goto LABEL_15;
    }
    v10 = a2;
    goto LABEL_7;
  }
  v9 = a2;
  do
  {
    v10 = 2 * (v9 + 1);
    v11 = (_DWORD *)(v8 + 8 * (v9 + 1));
    result = a5(*v11, *(_DWORD *)(v8 + 4 * (v10 + 0x3FFFFFFF)));
    if ( result )
    {
      --v10;
      v11 = (_DWORD *)(v8 + 4 * v10);
    }
    *(_DWORD *)(v8 + 4 * v9) = *v11;
    v9 = v10;
  }
  while ( v10 < v6 );
  if ( !v16 )
  {
LABEL_7:
    if ( v10 == (a3 - 2) / 2 )
    {
      v12 = 2 * (v10 + 1);
      *(_DWORD *)(v8 + 4 * v10) = *(_DWORD *)(v8 + 4 * (v12 + 0x3FFFFFFF));
      v10 = v12 - 1;
    }
    v11 = (_DWORD *)(v8 + 4 * v10);
  }
  v13 = (v10 - 1) / 2;
  if ( v10 > a2 )
  {
    while ( 1 )
    {
      result = a5(*(_DWORD *)(v8 + 4 * v13), a4);
      v15 = (_DWORD *)(v8 + 4 * v13);
      v11 = (_DWORD *)(v8 + 4 * v10);
      if ( !result )
        break;
      v14 = a2 < v13;
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
LABEL_15:
  *v11 = a4;
  return result;
}
