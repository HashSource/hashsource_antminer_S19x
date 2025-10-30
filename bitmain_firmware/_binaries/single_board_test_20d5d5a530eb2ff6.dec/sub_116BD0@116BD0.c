void __fastcall sub_116BD0(_DWORD *a1)
{
  if ( a1 )
  {
    policy_data_free(*a1);
    sub_10BFDC(a1[1], (void (__fastcall *)(int))policy_data_free);
    CRYPTO_free(a1);
  }
}
