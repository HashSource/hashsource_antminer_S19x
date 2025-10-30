bool __fastcall sub_AA1E8(_DWORD *a1, int a2)
{
  int v4; // r0
  int v5; // r3
  _DWORD *v6; // r2
  bool v7; // cc
  _DWORD *v9; // r4
  int v10; // r0

  if ( !a1[3] )
  {
    v5 = a1[4];
    if ( !v5 )
      return 1;
    goto LABEL_3;
  }
  v4 = sub_AC040();
  v5 = a1[4];
  if ( v5 )
  {
LABEL_3:
    v4 = sub_AC174(v5, a2);
    v6 = *(_DWORD **)(a1[4] + 1028);
    goto LABEL_4;
  }
  v6 = *(_DWORD **)(a1[3] + 192);
LABEL_4:
  v7 = (int)v6 <= 0;
  if ( v6 )
    v7 = v4 <= 0;
  if ( v7 )
    return v4 > 0;
  if ( (*a1 & 0x40) == 0 )
    return 1;
  v9 = &a1[214748365 * ((*v6 - (int)(v6 + 5)) >> 2)];
  CRYPTO_free(v9[6], "ssl/ssl_conf.c", 438);
  v10 = sub_E9E3C(a2, "ssl/ssl_conf.c", 439);
  v9[6] = v10;
  return v10 != 0;
}
