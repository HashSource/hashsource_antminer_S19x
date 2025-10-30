int __fastcall sub_161F80(int *a1, int a2, const char *a3, size_t a4, int a5, int a6)
{
  int v7; // r4
  int v9; // [sp+14h] [bp-10h] BYREF
  int v10; // [sp+18h] [bp-Ch] BYREF
  size_t n[2]; // [sp+1Ch] [bp-8h] BYREF

  if ( sub_161E68(a1, a3, a4, *(char **)(a5 + 8), *(_DWORD *)a5, &v9, n, 0) )
  {
    v10 = v9;
    v7 = sub_B0A18(0, (void **)&v10, n[0], a2);
    if ( a6 )
      sub_E07F8((void *)v9, n[0]);
    if ( !v7 )
      sub_D0048(35, 106, 101, (int)"crypto/pkcs12/p12_decr.c", 114);
    CRYPTO_free((void *)v9);
    return v7;
  }
  else
  {
    sub_D0048(35, 106, 117, (int)"crypto/pkcs12/p12_decr.c", 94);
    return 0;
  }
}
