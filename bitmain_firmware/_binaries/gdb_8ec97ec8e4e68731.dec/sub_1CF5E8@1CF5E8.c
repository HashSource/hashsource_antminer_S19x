int __fastcall sub_1CF5E8(int result, int a2, int a3, int a4)
{
  int v4; // r6
  int v5; // r8
  int v6; // r7
  int v7; // r9
  _DWORD *v8; // r4
  int v9; // r11
  int v10; // r0
  int v11; // r8
  bool v12; // cc
  _DWORD *v13; // r5
  int v14; // r11
  int v15; // r0
  int v16; // [sp+4h] [bp-18h]
  int v19; // [sp+10h] [bp-Ch]

  v4 = result;
  v19 = a3 & 1;
  v16 = (a3 - 1) / 2;
  if ( a2 >= v16 )
  {
    v8 = (_DWORD *)(result + 4 * a2);
    if ( (a3 & 1) != 0 )
      goto LABEL_14;
    v6 = a2;
    goto LABEL_7;
  }
  v5 = a2;
  do
  {
    v6 = 2 * (v5 + 1) - 1;
    v7 = *(_DWORD *)(v4 + 4 * v6);
    v8 = (_DWORD *)(v4 + 4 * v6);
    v9 = sub_21B7DC(*(_DWORD *)(v4 + 8 * (v5 + 1)));
    v10 = sub_21B7DC(v7);
    result = sub_25A8B8(v9, v10);
    if ( result >= 0 )
    {
      v8 = (_DWORD *)(v4 + 8 * (v5 + 1));
      v6 = 2 * (v5 + 1);
    }
    *(_DWORD *)(v4 + 4 * v5) = *v8;
    v5 = v6;
  }
  while ( v6 < v16 );
  if ( !v19 )
  {
LABEL_7:
    if ( v6 == (a3 - 2) / 2 )
    {
      v6 = 2 * v6 + 1;
      *v8 = *(_DWORD *)(v4 + 4 * v6);
      v8 = (_DWORD *)(v4 + 4 * v6);
    }
  }
  v11 = (v6 - 1) / 2;
  if ( v6 > a2 )
  {
    while ( 1 )
    {
      v13 = (_DWORD *)(v4 + 4 * v11);
      v8 = (_DWORD *)(v4 + 4 * v6);
      v14 = sub_21B7DC(*v13);
      v15 = sub_21B7DC(a4);
      result = sub_25A8B8(v14, v15);
      if ( result >= 0 )
        break;
      v12 = a2 < v11;
      *(_DWORD *)(v4 + 4 * v6) = *(_DWORD *)(v4 + 4 * v11);
      v6 = v11;
      v11 = (v11 - 1) / 2;
      if ( !v12 )
      {
        *v13 = a4;
        return result;
      }
    }
  }
LABEL_14:
  *v8 = a4;
  return result;
}
