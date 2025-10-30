void __fastcall sub_EA6FC(_DWORD *a1, int a2, int a3)
{
  int v4; // r0
  int v5; // r3

  v4 = a1[1];
  v5 = *(_DWORD *)(v4 + 8) - 1;
  *(_DWORD *)(v4 + 8) = v5;
  if ( !v5 )
    ASN1_OBJECT_free(v4, a2, a3, 0);
  CRYPTO_free(a1);
}
