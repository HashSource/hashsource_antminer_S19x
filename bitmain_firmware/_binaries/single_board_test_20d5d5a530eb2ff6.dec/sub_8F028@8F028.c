int __fastcall sub_8F028(_DWORD *a1)
{
  if ( a1[7] )
  {
    a1[371] = 0;
    CRYPTO_free(a1[334], "ssl/statem/extensions.c", 921);
    a1[334] = 0;
  }
  return 1;
}
