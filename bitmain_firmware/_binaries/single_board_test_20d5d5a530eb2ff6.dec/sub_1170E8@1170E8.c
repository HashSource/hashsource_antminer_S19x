void __fastcall sub_1170E8(void **a1)
{
  _DWORD *v2; // r4
  int v3; // r5
  int v4; // r0

  if ( a1 )
  {
    sub_10BDB4((void **)a1[3]);
    sub_10BFDC((int)a1[4], (void (__fastcall *)(int))sub_1170CC);
    if ( (int)a1[1] > 0 )
    {
      v2 = (char *)*a1 + 84;
      v3 = 0;
      do
      {
        ++v3;
        X509_free(*(v2 - 21));
        v4 = *(v2 - 20);
        __pld(v2);
        v2 += 4;
        sub_10BFDC(v4, (void (__fastcall *)(int))policy_node_free);
        policy_node_free(*(v2 - 23));
      }
      while ( (int)a1[1] > v3 );
    }
    sub_10BFDC((int)a1[2], (void (__fastcall *)(int))policy_data_free);
    CRYPTO_free(*a1);
    CRYPTO_free(a1);
  }
}
