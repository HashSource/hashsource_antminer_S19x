int __fastcall sub_7C448(int a1)
{
  int v2; // r0
  _DWORD *v3; // r4
  int v4; // r0
  int v5; // r3
  bool v6; // zf

  v2 = CRYPTO_malloc(68, "ssl/record/rec_layer_d1.c", 23);
  v3 = (_DWORD *)v2;
  if ( v2 )
  {
    *(_DWORD *)(a1 + 2280) = v2;
    *(_DWORD *)(v2 + 32) = sub_A86C0();
    v3[10] = sub_A86C0();
    v4 = sub_A86C0();
    v5 = v3[8];
    v3[12] = v4;
    if ( !v5 )
      goto LABEL_7;
    v6 = v4 == 0;
    if ( v4 )
      v6 = v3[10] == 0;
    if ( v6 )
    {
LABEL_7:
      sub_A86F8(v5);
      sub_A86F8(v3[10]);
      sub_A86F8(v3[12]);
      CRYPTO_free(v3, "ssl/record/rec_layer_d1.c", 39);
      *(_DWORD *)(a1 + 2280) = 0;
      return 0;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    sub_D0048(20, 635, 65, "ssl/record/rec_layer_d1.c", 24);
    return 0;
  }
}
