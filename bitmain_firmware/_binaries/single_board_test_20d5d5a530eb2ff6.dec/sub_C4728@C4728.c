int __fastcall sub_C4728(int a1, _BYTE **a2, int a3)
{
  if ( a1 )
    return i2d_ECPKParameters(*(_DWORD **)(a1 + 12), a2, a3);
  sub_D0048(16, 190, 67, "crypto/ec/ec_asn1.c", 1161);
  return 0;
}
