void __fastcall sub_10EF50(_DWORD *a1)
{
  int v1; // r3
  void (*v3)(void); // r3

  if ( a1 )
  {
    v1 = a1[2];
    if ( v1 )
    {
      v3 = *(void (**)(void))(v1 + 8);
      if ( v3 )
        v3();
    }
    CRYPTO_free(a1);
  }
}
