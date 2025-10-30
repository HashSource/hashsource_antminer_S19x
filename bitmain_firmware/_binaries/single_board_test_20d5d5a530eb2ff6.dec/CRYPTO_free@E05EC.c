void __fastcall CRYPTO_free(void *a1)
{
  bool v1; // zf

  v1 = (char *)off_21FB34 == (char *)CRYPTO_free;
  if ( (char *)off_21FB34 != (char *)CRYPTO_free )
    v1 = off_21FB34 == 0;
  if ( v1 )
    j_free(a1);
  else
    off_21FB34();
}
