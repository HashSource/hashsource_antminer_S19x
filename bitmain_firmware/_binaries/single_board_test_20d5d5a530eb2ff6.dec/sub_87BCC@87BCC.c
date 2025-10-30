int __fastcall sub_87BCC(int a1)
{
  int v3; // r7
  int v4; // r0
  bool v5; // zf
  int v6; // r8
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0

  if ( *(_DWORD *)(a1 + 512) )
    return 1;
  v3 = sub_E0740(12, "ssl/ssl_lib.c", 144);
  v4 = sub_E0740(3, "ssl/ssl_lib.c", 145);
  v5 = v3 == 0;
  if ( v3 )
    v5 = v4 == 0;
  v6 = v4;
  if ( v5 )
  {
    CRYPTO_free(v4, "ssl/ssl_lib.c", 148);
    CRYPTO_free(v3, "ssl/ssl_lib.c", 149);
    sub_D0048(20, 347, 65, "ssl/ssl_lib.c", 150);
    return 0;
  }
  else
  {
    v7 = sub_EAAB4(672);
    v8 = sub_D99DC(v7);
    if ( v8 )
    {
      *(_DWORD *)(v3 + 4) = v8;
      *(_BYTE *)(v6 + 1) = 1;
    }
    v9 = sub_EAAB4(674);
    v10 = sub_D99DC(v9);
    if ( v10 )
    {
      *(_DWORD *)(v3 + 8) = v10;
      *(_BYTE *)(v6 + 2) = 2;
    }
    *(_DWORD *)(a1 + 512) = v3;
    *(_DWORD *)(a1 + 516) = v6;
    *(_BYTE *)(a1 + 520) = 2;
    return 1;
  }
}
