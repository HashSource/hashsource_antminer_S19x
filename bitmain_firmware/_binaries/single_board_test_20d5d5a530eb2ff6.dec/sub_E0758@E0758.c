void __fastcall sub_E0758(void *a1, size_t a2, size_t n)
{
  void *v3; // r4

  if ( a1 )
  {
    v3 = a1;
    if ( a2 )
    {
      sub_E07F8((int)a1, a2);
      a1 = v3;
    }
    CRYPTO_free(a1);
  }
}
