void __fastcall policy_data_free(_DWORD *a1, int a2, int a3, int a4)
{
  if ( a1 )
  {
    ASN1_OBJECT_free(a1[1], a2, a3, a4);
    if ( (*a1 & 4) == 0 )
      sub_10BFDC(a1[2], (void (__fastcall *)(int))POLICYQUALINFO_free);
    sub_10BFDC(a1[3], (void (__fastcall *)(int))ASN1_OBJECT_free);
    CRYPTO_free(a1);
  }
}
