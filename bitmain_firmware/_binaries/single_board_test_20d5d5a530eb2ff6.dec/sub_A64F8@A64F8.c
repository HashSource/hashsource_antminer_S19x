int __fastcall sub_A64F8(int result)
{
  _DWORD *v1; // r4

  if ( result )
  {
    v1 = (_DWORD *)result;
    CRYPTO_free(*(_DWORD *)(result + 464), "ssl/tls_srp.c", 26);
    CRYPTO_free(v1[125], "ssl/tls_srp.c", 27);
    sub_B895C(v1[117]);
    sub_B895C(v1[118]);
    sub_B895C(v1[119]);
    sub_B895C(v1[120]);
    sub_B895C(v1[121]);
    sub_B895C(v1[122]);
    sub_B895C(v1[123]);
    sub_B895C(v1[124]);
    memset(v1 + 112, 0, 0x40u);
    v1[126] = 1024;
    return 1;
  }
  return result;
}
