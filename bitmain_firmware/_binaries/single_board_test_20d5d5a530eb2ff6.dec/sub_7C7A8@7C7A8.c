int __fastcall sub_7C7A8(int a1, int a2)
{
  int result; // r0
  int v4; // r6
  _DWORD *v5; // r5
  int v6; // r1
  int *v7; // r3
  int v8; // r0
  int v9; // r12
  int v10; // lr
  int v11; // r1
  int v12; // lr
  int v13; // r7
  int v14; // r0
  int v15; // r2
  int v16; // r3

  result = sub_A874C(*(_DWORD *)(a2 + 4));
  v4 = result;
  if ( result )
  {
    v5 = *(_DWORD **)(result + 8);
    sub_7EFB8(a1 + 1636);
    v6 = v5[1];
    v7 = v5 + 7;
    *(_DWORD *)(a1 + 3832) = *v5;
    *(_DWORD *)(a1 + 3836) = v6;
    v8 = v5[2];
    v9 = v5[4];
    v10 = v5[5];
    *(_DWORD *)(a1 + 1640) = v5[3];
    v11 = a1 + 2296;
    *(_DWORD *)(a1 + 1636) = v8;
    *(_DWORD *)(a1 + 1644) = v9;
    *(_DWORD *)(a1 + 1648) = v10;
    *(_DWORD *)(a1 + 1652) = v5[6];
    do
    {
      v12 = *v7;
      v7 += 4;
      v13 = *(v7 - 3);
      v11 += 16;
      v14 = *(v7 - 2);
      v15 = *(v7 - 1);
      *(_DWORD *)(v11 - 16) = v12;
      *(_DWORD *)(v11 - 12) = v13;
      *(_DWORD *)(v11 - 8) = v14;
      *(_DWORD *)(v11 - 4) = v15;
    }
    while ( v7 != v5 + 19 );
    v16 = *v5 + 5;
    *(_DWORD *)(a1 + 3874) = *(_DWORD *)v16;
    *(_WORD *)(a1 + 3878) = *(_WORD *)(v16 + 4);
    CRYPTO_free(*(_DWORD *)(v4 + 8), "ssl/record/rec_layer_d1.c", 209);
    sub_A86B0(v4);
    return 1;
  }
  return result;
}
