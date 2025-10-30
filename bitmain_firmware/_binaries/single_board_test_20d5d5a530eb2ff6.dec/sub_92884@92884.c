int __fastcall sub_92884(int a1, unsigned int a2, int a3, int a4, int a5, int a6, int a7)
{
  _DWORD *v11; // r4
  _DWORD *v12; // r0
  bool v13; // zf
  _DWORD *v14; // r5
  int v15; // r6
  int v17; // r0
  int v18; // r11
  int v19; // r3
  int v20; // r10
  _DWORD *v21; // r9
  int v22; // r3

  v11 = (_DWORD *)CRYPTO_malloc(12, "ssl/statem/extensions_cust.c", 417);
  v12 = (_DWORD *)CRYPTO_malloc(8, "ssl/statem/extensions_cust.c", 419);
  v13 = v12 == 0;
  if ( v12 )
    v13 = v11 == 0;
  v14 = v12;
  if ( v13 )
  {
    CRYPTO_free(v11, "ssl/statem/extensions_cust.c", 423);
    CRYPTO_free(v14, "ssl/statem/extensions_cust.c", 424);
    return 0;
  }
  v11[2] = a4;
  v15 = *(_DWORD *)(a1 + 192);
  *v11 = a5;
  v11[1] = a3;
  *v12 = a7;
  v12[1] = a6;
  if ( a2 == 18 )
  {
    if ( sub_8C280(a1) )
    {
LABEL_7:
      CRYPTO_free(v11, "ssl/statem/extensions_cust.c", 443);
      CRYPTO_free(v14, "ssl/statem/extensions_cust.c", 444);
      return 0;
    }
    sub_92744(0x12u);
  }
  else if ( sub_92744(a2) || a2 >= 0x10000 )
  {
    goto LABEL_7;
  }
  if ( sub_92300((unsigned __int16 **)(v15 + 240), 0, a2, 0) )
    goto LABEL_7;
  v17 = CRYPTO_realloc(*(_DWORD *)(v15 + 240), 36 * (*(_DWORD *)(v15 + 244) + 1), "ssl/statem/extensions_cust.c", 389);
  v18 = v17;
  if ( !v17 )
    goto LABEL_7;
  v19 = *(_DWORD *)(v15 + 244);
  *(_DWORD *)(v15 + 240) = v17;
  v20 = 36 * v19;
  v21 = (_DWORD *)(v17 + 36 * v19);
  memset(v21, 0, 0x24u);
  v22 = *(_DWORD *)(v15 + 244) + 1;
  v21[1] = 0;
  v21[2] = 464;
  v21[7] = sub_922E0;
  v21[4] = sub_922A8;
  v21[5] = sub_922C8;
  *(_WORD *)(v18 + v20) = a2;
  v21[6] = v11;
  v21[8] = v14;
  *(_DWORD *)(v15 + 244) = v22;
  return 1;
}
