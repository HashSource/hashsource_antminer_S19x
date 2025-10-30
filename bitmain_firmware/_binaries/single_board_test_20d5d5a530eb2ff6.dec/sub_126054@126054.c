int __fastcall sub_126054(unsigned __int8 *a1, size_t *a2)
{
  int v3; // r0
  int v4; // r4
  _BYTE *v6; // [sp+8h] [bp-8h] BYREF
  void *v7; // [sp+Ch] [bp-4h] BYREF

  v6 = 0;
  if ( !a2 )
    return 0;
  v3 = sub_B0FDC(a2, &v6, a1);
  if ( v6 )
  {
    v7 = v6;
    v4 = sub_B0A18(0, &v7, v3, (int)a1);
    CRYPTO_free(v6);
    return v4;
  }
  else
  {
    sub_D0048(13, 191, 65, (int)"crypto/asn1/a_dup.c", 61);
    return 0;
  }
}
