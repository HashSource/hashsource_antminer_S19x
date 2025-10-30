int __fastcall sub_118584(_DWORD *a1, char *a2, int a3, int a4)
{
  int v8; // r0
  _DWORD *v9; // r5
  _BOOL4 v10; // r3
  int v11; // r0
  size_t v12; // r6
  int v13; // r2
  int v14; // r4

  v8 = sub_11855C();
  if ( a3 < 0 )
    return 0;
  v9 = (_DWORD *)v8;
  v10 = a3 > 8 * a4;
  if ( !v8 )
    v10 = 1;
  if ( v10 )
    return 0;
  v11 = *(_DWORD *)(v8 + 4);
  *v9 = 0;
  if ( (v11 || (v11 = sub_B211C(), (v9[1] = v11) != 0)) && (v12 = (a3 + 7) >> 3, sub_125818(v11, a2, v12)) )
  {
    v13 = v9[1];
    v14 = a3 & 7;
    *(_DWORD *)(v13 + 12) = *(_DWORD *)(v13 + 12) & 0xFFFFFFF0 | 8;
    if ( v14 )
    {
      *(_BYTE *)(*(_DWORD *)(v13 + 8) + v12 - 1) &= ~(255 >> v14);
      *(_DWORD *)(v9[1] + 12) |= 8 - v14;
    }
    *a1 = v9;
    return 1;
  }
  else
  {
    sub_118570((int)v9);
    return 0;
  }
}
