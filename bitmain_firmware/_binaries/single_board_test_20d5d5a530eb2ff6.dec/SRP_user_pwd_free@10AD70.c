void __fastcall SRP_user_pwd_free(int a1)
{
  if ( a1 )
  {
    sub_B895C(*(_DWORD *)(a1 + 4));
    sub_B87C8(*(int **)(a1 + 8));
    CRYPTO_free(*(void **)a1);
    CRYPTO_free(*(void **)(a1 + 20));
    CRYPTO_free((void *)a1);
  }
}
