int __fastcall sub_AE368(int *a1, int a2)
{
  int v2; // r2
  int result; // r0
  int v4; // [sp+Ch] [bp-8h] BYREF

  v2 = *a1;
  v4 = a1[2];
  result = sub_B0A18(0, &v4, v2, a2);
  if ( !result )
  {
    sub_D0048(13, 199, 110, "crypto/asn1/asn_pack.c", 60);
    return 0;
  }
  return result;
}
