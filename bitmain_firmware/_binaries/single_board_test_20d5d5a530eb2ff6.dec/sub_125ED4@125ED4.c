int __fastcall sub_125ED4(int (__fastcall *a1)(int, void **), _DWORD *a2, int a3, int a4, _DWORD *a5)
{
  void *v9; // r0
  int v10; // r8
  void *v11; // r4
  int v12; // r5
  void *v14; // [sp+Ch] [bp-4h] BYREF

  v9 = (void *)a1(a3, 0);
  v10 = (int)v9;
  if ( (int)v9 <= 0 )
  {
    sub_D0048(13, 184, 68, (int)"crypto/asn1/a_digest.c", 31);
    return 0;
  }
  else
  {
    v11 = CRYPTO_malloc(v9);
    if ( !v11 )
    {
      v12 = 0;
      sub_D0048(13, 184, 65, (int)"crypto/asn1/a_digest.c", 35);
      return v12;
    }
    v14 = v11;
    a1(a3, &v14);
    if ( sub_D18F0((int)v11, v10, a4, a5, a2, 0) )
    {
      v12 = 1;
      CRYPTO_free(v11);
      return v12;
    }
    CRYPTO_free(v11);
    return 0;
  }
}
