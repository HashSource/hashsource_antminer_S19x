int __fastcall sub_2D4E6C(int a1, int a2)
{
  _DWORD *v2; // r2
  int v3; // r3
  int v4; // r12
  int v5; // lr
  int v6; // r3
  int v7; // r5
  int v8; // r0
  int v9; // r3
  int v10; // r3
  bool v11; // zf
  int v12; // r5
  int v14; // r0
  int v15; // r4

  v2 = *(_DWORD **)(a1 + 100);
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = v2[35];
      if ( *(_DWORD *)(v3 + 4) != 17 )
        goto LABEL_3;
      v4 = *(_DWORD *)(v3 + 124);
      if ( !v4 )
        goto LABEL_3;
      v5 = v2[15];
      v6 = *(_DWORD *)(v3 + 124);
      v7 = 0;
      while ( 1 )
      {
        v8 = *(_DWORD *)(v6 + 60);
        if ( v8 != a2 )
          break;
        v9 = *(_DWORD *)(v6 + 140);
        if ( v5 != a2 )
          v7 += 4;
        v6 = *(_DWORD *)(v9 + 124);
        if ( v4 == v6 )
          goto LABEL_15;
LABEL_10:
        if ( !v6 )
          goto LABEL_15;
      }
      if ( v5 == a2 )
      {
        v14 = *(_DWORD *)(v8 + 140);
        v15 = *(_DWORD *)(v14 + 8);
        *(_DWORD *)(v14 + 116) = 0;
        *(_DWORD *)(v14 + 8) = v15 & 0xFFFFFDFF;
      }
      v6 = *(_DWORD *)(*(_DWORD *)(v6 + 140) + 124);
      if ( v4 != v6 )
        goto LABEL_10;
LABEL_15:
      if ( v7 )
      {
        if ( !a2 )
        {
          *(_DWORD *)(v5 + 36) -= v7;
          goto LABEL_3;
        }
        v10 = v2[10];
        v11 = v10 == 0;
        if ( !v10 )
          v10 = v2[9];
        v12 = v10 - v7;
        if ( v11 )
          v2[10] = v10;
        v2[9] = v12;
        v2 = (_DWORD *)v2[3];
        if ( !v2 )
          return 1;
      }
      else
      {
LABEL_3:
        v2 = (_DWORD *)v2[3];
        if ( !v2 )
          return 1;
      }
    }
  }
  return 1;
}
