_DWORD *__fastcall sub_9949C(_DWORD *a1, int a2, int a3)
{
  _DWORD *v3; // r8
  _BYTE *v7; // r6
  _BYTE *v8; // r10
  int v9; // r3
  _DWORD *v10; // r3
  int v11; // r11
  unsigned int v12; // r5
  char v13; // r5
  unsigned int v14; // r7
  unsigned int v15; // r2
  int v16; // r3
  unsigned int v17; // t1
  _DWORD *v18; // r3
  int v19; // r11
  unsigned int v20; // r5
  unsigned int v21; // r7
  char v22; // r5
  unsigned int v23; // r2

  v3 = a1 + 2;
  *a1 = a1 + 2;
  a1[1] = 0;
  *((_BYTE *)a1 + 8) = 0;
  sub_33B7B0(a1);
  if ( a3 > 0 )
  {
    v7 = (_BYTE *)(a2 - 1);
    v8 = &v7[a3];
    do
    {
      v17 = (unsigned __int8)*++v7;
      v18 = (_DWORD *)*a1;
      v19 = a1[1];
      v20 = v17 >> 4;
      v21 = v19 + 1;
      if ( v17 >> 4 > 9 )
        v22 = v20 + 87;
      else
        v22 = v20 + 48;
      if ( v3 == v18 )
        v23 = 15;
      else
        v23 = a1[2];
      if ( v21 > v23 )
      {
        sub_33B4F8(a1, v19, 0);
        v18 = (_DWORD *)*a1;
      }
      *((_BYTE *)v18 + v19) = v22;
      v9 = *a1;
      a1[1] = v21;
      *(_BYTE *)(v9 + v21) = 0;
      v10 = (_DWORD *)*a1;
      v11 = a1[1];
      v12 = *v7 & 0xF;
      if ( v12 > 9 )
        v13 = v12 + 87;
      else
        v13 = v12 + 48;
      v14 = v11 + 1;
      if ( v3 == v10 )
        v15 = 15;
      else
        v15 = a1[2];
      if ( v14 > v15 )
      {
        sub_33B4F8(a1, v11, 0);
        v10 = (_DWORD *)*a1;
      }
      *((_BYTE *)v10 + v11) = v13;
      v16 = *a1;
      a1[1] = v14;
      *(_BYTE *)(v16 + v14) = 0;
    }
    while ( v8 != v7 );
  }
  return a1;
}
