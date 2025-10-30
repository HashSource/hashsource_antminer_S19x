int __fastcall sub_AE194(int a1)
{
  int v2; // r0
  int v3; // r4

  v2 = sub_E0740(16, "crypto/asn1/asn1_lib.c", 341);
  v3 = v2;
  if ( v2 )
    *(_DWORD *)(v2 + 4) = a1;
  else
    sub_D0048(13, 130, 65, "crypto/asn1/asn1_lib.c", 343);
  return v3;
}
