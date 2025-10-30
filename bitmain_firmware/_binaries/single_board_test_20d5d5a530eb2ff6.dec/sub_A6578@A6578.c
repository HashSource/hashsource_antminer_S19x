int __fastcall sub_A6578(int result)
{
  _DWORD *v1; // r4

  if ( result )
  {
    v1 = (_DWORD *)result;
    CRYPTO_free(*(_DWORD *)(result + 1564), "ssl/tls_srp.c", 45);
    CRYPTO_free(v1[400], "ssl/tls_srp.c", 46);
    sub_B895C(v1[392]);
    sub_B895C(v1[393]);
    sub_B895C(v1[394]);
    sub_B895C(v1[395]);
    sub_B895C(v1[396]);
    sub_B895C(v1[397]);
    sub_B895C(v1[398]);
    sub_B895C(v1[399]);
    memset(v1 + 387, 0, 0x40u);
    v1[401] = 1024;
    return 1;
  }
  return result;
}
