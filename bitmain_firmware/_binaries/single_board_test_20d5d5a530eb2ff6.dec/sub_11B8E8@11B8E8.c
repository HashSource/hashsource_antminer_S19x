char ***__fastcall sub_11B8E8(unsigned int a1, int a2, size_t *a3)
{
  int v6; // r0
  int v7; // r4
  unsigned __int8 *v8; // r2
  void *v9; // r9
  _BYTE *v10; // r5
  _BYTE *v11; // r3
  char ***v12; // r4
  void (__fastcall *v14)(size_t *, _BYTE **); // r3
  _BYTE *v15; // [sp+8h] [bp-Ch] BYREF
  _BYTE *v16; // [sp+Ch] [bp-8h] BYREF

  v6 = sub_11DEC8(a1);
  v7 = v6;
  if ( !v6 )
  {
    sub_D0048(34, 136, 129, (int)"crypto/x509v3/v3_conf.c", 182);
    return 0;
  }
  v8 = *(unsigned __int8 **)(v6 + 8);
  v15 = 0;
  if ( v8 )
  {
    v9 = (void *)sub_B0FDC(a3, &v15, v8);
    if ( (int)v9 < 0 )
    {
LABEL_10:
      v10 = 0;
      goto LABEL_11;
    }
  }
  else
  {
    v9 = (void *)(*(int (__fastcall **)(size_t *, _DWORD))(v6 + 24))(a3, 0);
    v10 = CRYPTO_malloc(v9);
    v15 = v10;
    if ( !v10 )
      goto LABEL_11;
    v14 = *(void (__fastcall **)(size_t *, _BYTE **))(v7 + 24);
    v16 = v10;
    v14(a3, &v16);
  }
  v10 = (_BYTE *)sub_B2068();
  if ( !v10 )
    goto LABEL_10;
  v11 = v15;
  v15 = 0;
  *(_DWORD *)v10 = v9;
  *((_DWORD *)v10 + 2) = v11;
  v12 = sub_1104F8(0, a1, a2, (int)v10);
  if ( !v12 )
  {
LABEL_11:
    sub_D0048(34, 135, 65, (int)"crypto/x509v3/v3_conf.c", 168);
    CRYPTO_free(v15);
    j_ASN1_STRING_free(v10);
    return 0;
  }
  j_ASN1_STRING_free(v10);
  return v12;
}
