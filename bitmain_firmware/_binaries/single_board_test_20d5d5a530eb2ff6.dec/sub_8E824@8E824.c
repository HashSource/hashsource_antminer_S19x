int __fastcall sub_8E824(int a1)
{
  int v2; // r2
  _DWORD *v3; // r3
  int v4; // r3

  CRYPTO_free(*(_DWORD *)(*(_DWORD *)(a1 + 124) + 832), "ssl/statem/extensions.c", 1117);
  v2 = *(_DWORD *)(a1 + 28);
  v3 = *(_DWORD **)(a1 + 124);
  v3[208] = 0;
  v3[209] = 0;
  if ( v2 )
  {
    CRYPTO_free(v3[210], "ssl/statem/extensions.c", 1121);
    v4 = *(_DWORD *)(a1 + 124);
    *(_DWORD *)(v4 + 840) = 0;
    *(_DWORD *)(v4 + 844) = 0;
  }
  return 1;
}
