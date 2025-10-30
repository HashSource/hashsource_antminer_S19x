void __fastcall sub_16F7B0(int a1, int a2)
{
  sub_10BFDC(*(_DWORD *)(a1 + 4), (void (__fastcall *)(int))ASN1_STRING_free);
  *(_DWORD *)(a1 + 4) = a2;
}
