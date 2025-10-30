int __fastcall sub_7C644(_DWORD *a1, int a2, int a3)
{
  _DWORD *v7; // r5
  int v8; // r0
  bool v9; // zf
  void *v10; // r8
  int v11; // r3
  int v12; // lr
  int v13; // r1
  int v14; // r12
  int *v15; // r3
  _DWORD *v16; // r1
  int v17; // r10
  int v18; // r9
  int v19; // lr
  int v20; // r2

  if ( (unsigned int)sub_A879C(*(_DWORD *)(a2 + 4)) > 0x63 )
    return 0;
  v7 = (_DWORD *)CRYPTO_malloc(76, "ssl/record/rec_layer_d1.c", 151);
  v8 = sub_A8668(a3, v7);
  v9 = v8 == 0;
  if ( v8 )
    v9 = v7 == 0;
  v10 = (void *)v8;
  if ( v9 )
  {
    CRYPTO_free(v7, "ssl/record/rec_layer_d1.c", 154);
    sub_A86B0(v10);
    sub_95494(a1, 80, 247, 68, "ssl/record/rec_layer_d1.c", 157);
    return -1;
  }
  else
  {
    v11 = a1[959];
    *v7 = a1[958];
    v7[1] = v11;
    v12 = a1[409];
    v13 = a1[411];
    v14 = a1[412];
    v7[3] = a1[410];
    v15 = a1 + 574;
    v7[4] = v13;
    v16 = v7 + 7;
    v7[5] = v14;
    v7[2] = v12;
    v7[6] = a1[413];
    do
    {
      v17 = *v15;
      v15 += 4;
      v18 = *(v15 - 3);
      v16 += 4;
      v19 = *(v15 - 2);
      v20 = *(v15 - 1);
      *(v16 - 4) = v17;
      *(v16 - 3) = v18;
      *(v16 - 2) = v19;
      *(v16 - 1) = v20;
    }
    while ( v15 != a1 + 586 );
    *(_DWORD *)(v8 + 8) = v7;
    a1[958] = 0;
    a1[959] = 0;
    a1[409] = 0;
    a1[410] = 0;
    a1[411] = 0;
    a1[412] = 0;
    a1[413] = 0;
    memset(a1 + 574, 0, 0x600u);
    if ( sub_7F140(a1) )
    {
      if ( !sub_A8708(*(_DWORD *)(a2 + 4), v10) )
      {
        CRYPTO_free(v7[2], "ssl/record/rec_layer_d1.c", 193);
        CRYPTO_free(v7, "ssl/record/rec_layer_d1.c", 194);
        sub_A86B0(v10);
      }
      return 1;
    }
    else
    {
      CRYPTO_free(v7[2], "ssl/record/rec_layer_d1.c", 185);
      CRYPTO_free(v7, "ssl/record/rec_layer_d1.c", 186);
      sub_A86B0(v10);
      return -1;
    }
  }
}
