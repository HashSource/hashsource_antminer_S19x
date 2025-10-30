void __fastcall sub_15B308(int a1)
{
  int (*v2)(void); // r2
  int v3; // r0

  if ( a1 )
  {
    sub_10BDB4(*(void ***)(a1 + 4));
    v3 = *(_DWORD *)(a1 + 8);
    if ( v3 )
      sub_CDCEC(v3, 0, v2);
    CRYPTO_free((void *)a1);
  }
}
