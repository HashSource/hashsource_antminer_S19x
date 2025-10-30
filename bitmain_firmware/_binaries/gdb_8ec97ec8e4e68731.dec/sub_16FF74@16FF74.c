_DWORD *__fastcall sub_16FF74(_DWORD *a1, _DWORD **a2)
{
  _DWORD *v4; // r4
  int v5; // r6
  int v6; // r3
  char v7; // r2
  int v8; // r0
  int v9; // r0
  _BYTE *v10; // r3
  char v11; // r2
  int v12; // r0
  _DWORD *v13; // r3
  _DWORD *v15; // r0
  _DWORD *v16; // r0

  if ( a2 )
  {
    v4 = *a2;
    if ( *a2 )
    {
      v5 = v4[3];
      sub_16F708((int)v4);
      v4[3] = v5;
    }
    else
    {
      sub_16FF58((int)a1);
      v4 = v15;
      *a2 = v15;
    }
  }
  else
  {
    sub_16FF58((int)a1);
    v4 = v16;
  }
  v6 = a1[6];
  *(_DWORD *)(v4[6] + 20) = a1;
  v7 = *(_BYTE *)(v6 + 2);
  v8 = *(_DWORD *)(v6 + 16);
  *a1 = v4;
  if ( (v7 & 0x10) != 0 )
    sub_1B7250(v8);
  v9 = ((int (*)(void))loc_1665F4)();
  v10 = (_BYTE *)v4[6];
  v11 = v10[1];
  v12 = v9 / 8;
  v4[5] = v12;
  *v10 = 1;
  v10[1] = v11 | 1;
  v13 = (_DWORD *)v4[3];
  if ( v4 != v13 )
  {
    while ( 1 )
    {
      v13[5] = v12;
      v13 = (_DWORD *)v13[3];
      if ( v4 == v13 )
        break;
      v12 = v4[5];
    }
  }
  return v4;
}
