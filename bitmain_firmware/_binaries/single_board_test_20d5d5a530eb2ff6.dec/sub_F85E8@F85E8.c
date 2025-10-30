int __fastcall sub_F85E8(int a1, int a2, int a3)
{
  int v5; // r0
  int v6; // r9
  int v7; // r10
  char *v8; // r5
  int v9; // r8
  int v10; // r4
  int v11; // r3
  int v12; // r1
  _DWORD *v13; // r0
  int v14; // r1
  _DWORD *v15; // r5
  _DWORD *v16; // r0

  v5 = sub_F85D8(a1, a2, a3);
  v6 = v5;
  if ( !v5 )
    return 0;
  if ( v5 > 0 )
  {
    v7 = v5 - 7;
    if ( v5 <= 8 )
    {
      v10 = 0;
    }
    else
    {
      v8 = (char *)(a2 + 40);
      v9 = 1;
      v10 = 0;
      do
      {
        v11 = *(_DWORD *)sub_10C01C(*(_DWORD *)(a1 + 48), v10);
        v12 = v9;
        __pld(v8);
        v9 += 8;
        v8 += 32;
        *((_DWORD *)v8 - 18) = v11;
        *((_DWORD *)v8 - 17) = *(_DWORD *)sub_10C01C(*(_DWORD *)(a1 + 48), v12);
        *((_DWORD *)v8 - 16) = *(_DWORD *)sub_10C01C(*(_DWORD *)(a1 + 48), v10 + 2);
        *((_DWORD *)v8 - 15) = *(_DWORD *)sub_10C01C(*(_DWORD *)(a1 + 48), v10 + 3);
        *((_DWORD *)v8 - 14) = *(_DWORD *)sub_10C01C(*(_DWORD *)(a1 + 48), v10 + 4);
        *((_DWORD *)v8 - 13) = *(_DWORD *)sub_10C01C(*(_DWORD *)(a1 + 48), v10 + 5);
        v13 = (_DWORD *)sub_10C01C(*(_DWORD *)(a1 + 48), v10 + 6);
        v14 = v10 + 7;
        v10 += 8;
        *((_DWORD *)v8 - 12) = *v13;
        *((_DWORD *)v8 - 11) = *(_DWORD *)sub_10C01C(*(_DWORD *)(a1 + 48), v14);
      }
      while ( v7 > v9 );
    }
    v15 = (_DWORD *)(a2 + 4 * v10);
    do
    {
      v16 = (_DWORD *)sub_10C01C(*(_DWORD *)(a1 + 48), v10++);
      *v15++ = *v16;
    }
    while ( v6 > v10 );
  }
  return 1;
}
