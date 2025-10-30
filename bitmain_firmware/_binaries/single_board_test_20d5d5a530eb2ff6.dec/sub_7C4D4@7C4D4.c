void *__fastcall sub_7C4D4(int a1)
{
  _DWORD *v1; // r5
  int v2; // r0
  int v3; // r4
  int v4; // r0
  int v5; // r4
  int v6; // r0
  int v7; // r4
  int v8; // r7
  int v9; // r6
  int v10; // r4
  void *result; // r0

  v1 = *(_DWORD **)(a1 + 2280);
  while ( 1 )
  {
    v2 = sub_A874C(v1[8]);
    v3 = v2;
    if ( !v2 )
      break;
    CRYPTO_free(*(_DWORD *)(*(_DWORD *)(v2 + 8) + 8), "ssl/record/rec_layer_d1.c", 73);
    CRYPTO_free(*(_DWORD *)(v3 + 8), "ssl/record/rec_layer_d1.c", 74);
    sub_A86B0(v3);
  }
  while ( 1 )
  {
    v4 = sub_A874C(v1[10]);
    v5 = v4;
    if ( !v4 )
      break;
    CRYPTO_free(*(_DWORD *)(*(_DWORD *)(v4 + 8) + 8), "ssl/record/rec_layer_d1.c", 80);
    CRYPTO_free(*(_DWORD *)(v5 + 8), "ssl/record/rec_layer_d1.c", 81);
    sub_A86B0(v5);
  }
  while ( 1 )
  {
    v6 = sub_A874C(v1[12]);
    v7 = v6;
    if ( !v6 )
      break;
    CRYPTO_free(*(_DWORD *)(*(_DWORD *)(v6 + 8) + 8), "ssl/record/rec_layer_d1.c", 87);
    CRYPTO_free(*(_DWORD *)(v7 + 8), "ssl/record/rec_layer_d1.c", 88);
    sub_A86B0(v7);
  }
  v8 = v1[8];
  v9 = v1[10];
  v10 = v1[12];
  result = memset(v1, 0, 0x44u);
  v1[8] = v8;
  v1[10] = v9;
  v1[12] = v10;
  return result;
}
