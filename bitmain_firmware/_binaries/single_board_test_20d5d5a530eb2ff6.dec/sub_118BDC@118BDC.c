int __fastcall sub_118BDC(int *a1, int a2, _DWORD *a3, char *a4, int a5)
{
  int *v7; // r0
  _DWORD *v8; // r3
  int *v9; // r4
  void **v10; // r0
  int *v11; // r8
  _DWORD *v12; // r3
  int v13; // r4
  int v14; // r0
  _DWORD *v15; // r6
  _BOOL4 v16; // r3
  int v17; // r0
  int v19; // r2
  int v20; // r5

  v7 = sub_118844(a1, a2, a3);
  if ( !v7 )
    return 0;
  v8 = (_DWORD *)v7[1];
  v9 = v7;
  if ( !v8 )
    return 0;
  if ( *v8 )
  {
    if ( *v8 == 1 )
    {
      v11 = (int *)v8[1];
      if ( v11 )
        goto LABEL_11;
    }
  }
  else if ( v8[1] )
  {
    return 0;
  }
  v10 = sub_10BFCC();
  v11 = (int *)v10;
  if ( !v10 )
    return 0;
  if ( a2 == 1 )
  {
    sub_10B9F0((int)v10, (int)sub_117A78);
  }
  else if ( a2 == 2 )
  {
    sub_10B9F0((int)v10, (int)sub_117C04);
  }
  v12 = (_DWORD *)v9[1];
  *v12 = 1;
  v12[1] = v11;
LABEL_11:
  if ( a2 == 1 )
  {
    v13 = 32;
  }
  else if ( a2 == 2 )
  {
    v13 = 128;
  }
  else
  {
    v13 = 0;
  }
  v14 = sub_11855C();
  v15 = (_DWORD *)v14;
  if ( a5 < 0 )
    return 0;
  v16 = a5 > v13;
  if ( !v14 )
    v16 = 1;
  if ( v16 )
    return 0;
  v17 = *(_DWORD *)(v14 + 4);
  *v15 = 0;
  if ( !v17 && (v17 = sub_B211C(), (v15[1] = v17) == 0) || !sub_125818(v17, a4, (a5 + 7) >> 3) )
  {
    sub_118570((int)v15);
    return 0;
  }
  v19 = v15[1];
  v20 = a5 & 7;
  *(_DWORD *)(v19 + 12) = *(_DWORD *)(v19 + 12) & 0xFFFFFFF0 | 8;
  if ( (a5 & 7) != 0 )
  {
    *(_BYTE *)(*(_DWORD *)(v19 + 8) + ((a5 + 7) >> 3) - 1) &= ~(255 >> v20);
    *(_DWORD *)(v15[1] + 12) |= 8 - v20;
  }
  if ( sub_10BD3C(v11, (int)v15) )
    return 1;
  sub_118570((int)v15);
  return 0;
}
