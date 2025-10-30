int __fastcall sub_84300(int result, int a2)
{
  Elf32_Dyn **v2; // r2
  int *v3; // r4
  int *v4; // r6
  int v5; // r0
  int v6; // r0
  int v7; // r0

  v2 = &GLOBAL_OFFSET_TABLE_;
  if ( result )
  {
    v3 = (int *)(result + 20);
    v4 = (int *)(result + 200);
    do
    {
      v5 = *v3;
      v3 += 5;
      X509_free(v5, a2, v2);
      v6 = *(v3 - 4);
      *(v3 - 5) = 0;
      sub_DA240(v6);
      v7 = *(v3 - 3);
      *(v3 - 4) = 0;
      sub_10BFDC(v7, X509_free);
      *(v3 - 3) = 0;
      result = CRYPTO_free(*(v3 - 2), "ssl/ssl_cert.c", 216);
      *(v3 - 2) = 0;
      *(v3 - 1) = 0;
    }
    while ( v3 != v4 );
  }
  return result;
}
