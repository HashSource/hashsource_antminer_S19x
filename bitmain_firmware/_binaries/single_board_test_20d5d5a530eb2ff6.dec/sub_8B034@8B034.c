int __fastcall sub_8B034(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r3
  int v5; // r0
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r0
  int *v10; // r2
  int v11; // r3
  int v12; // r2
  int v13; // r3

  if ( *(_DWORD *)(a1 + 4) )
  {
    if ( sub_8E450() )
    {
      sub_8D6A4(*(_DWORD *)(a1 + 1140));
      *(_DWORD *)(a1 + 1140) = 0;
    }
    sub_8D6A4(*(_DWORD *)(a1 + 1144));
    *(_DWORD *)(a1 + 1144) = 0;
    CRYPTO_free(*(_DWORD *)(a1 + 1148), "ssl/ssl_lib.c", 590);
    v2 = *(_DWORD *)(a1 + 1516);
    *(_DWORD *)(a1 + 1148) = 0;
    *(_DWORD *)(a1 + 1152) = 0;
    *(_DWORD *)(a1 + 1100) = 0;
    *(_DWORD *)(a1 + 3952) = 0;
    *(_DWORD *)(a1 + 1208) = 0;
    *(_DWORD *)(a1 + 140) = 0;
    *(_DWORD *)(a1 + 40) = 0;
    if ( !v2 )
    {
      sub_95478(a1);
      v3 = *(_DWORD *)(a1 + 108);
      v4 = **(_DWORD **)(a1 + 4);
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)a1 = v4;
      *(_DWORD *)(a1 + 1284) = v4;
      sub_BAE3C(v3);
      *(_DWORD *)(a1 + 108) = 0;
      sub_8A7B4((_DWORD *)a1);
      sub_8B024((_DWORD *)(a1 + 992));
      sub_8B024((_DWORD *)(a1 + 1024));
      v5 = *(_DWORD *)(a1 + 1544);
      *(_DWORD *)(a1 + 1280) = 0;
      *(_DWORD *)(a1 + 1520) = -1;
      sub_D1504(v5);
      v6 = *(_DWORD *)(a1 + 164);
      *(_DWORD *)(a1 + 172) = -1;
      *(_DWORD *)(a1 + 176) = -1;
      *(_DWORD *)(a1 + 1544) = 0;
      X509_free(v6, v7, v8);
      v9 = *(_DWORD *)(a1 + 144);
      *(_DWORD *)(a1 + 164) = 0;
      *(_DWORD *)(a1 + 160) = 0;
      sub_1136F4(v9, 0);
      CRYPTO_free(*(_DWORD *)(a1 + 3976), "ssl/ssl_lib.c", 632);
      v10 = *(int **)(a1 + 1232);
      v11 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)(a1 + 3976) = 0;
      v12 = *v10;
      *(_DWORD *)(a1 + 3980) = 0;
      if ( v11 == v12 )
      {
        if ( !(*(int (__fastcall **)(int))(v11 + 16))(a1) )
          return v2;
      }
      else
      {
        (*(void (__fastcall **)(int))(v11 + 20))(a1);
        v13 = **(_DWORD **)(a1 + 1232);
        *(_DWORD *)(a1 + 4) = v13;
        if ( !(*(int (__fastcall **)(int))(v13 + 12))(a1) )
          return v2;
      }
      v2 = 1;
      sub_7D438((_DWORD *)(a1 + 1616));
      return v2;
    }
    sub_D0048(20, 164, 68, "ssl/ssl_lib.c", 601);
    return 0;
  }
  else
  {
    sub_D0048(20, 164, 188, "ssl/ssl_lib.c", 580);
    return 0;
  }
}
