int __fastcall sub_C31D8(int a1, int a2)
{
  int v3; // r5
  int v4; // r5
  int v6; // r0

  if ( a2 && (v3 = sub_C59B8(a2)) != 0 )
  {
    if ( sub_B6E94(a1, 4, 128)
      && (v6 = sub_C6248(v3), sub_B550C(a1, "%s: (%d bit)\n", "ECDSA-Parameters", v6) > 0)
      && sub_C9A3C(a1, v3, 4) )
    {
      v4 = 1;
    }
    else
    {
      v4 = 0;
      sub_D0048(16, 221, 16, "crypto/ec/ec_ameth.c", 416);
    }
    sub_E0758(0, 0, (size_t)"crypto/ec/ec_ameth.c");
    CRYPTO_free(0, "crypto/ec/ec_ameth.c", 418);
    return v4;
  }
  else
  {
    sub_D0048(16, 221, 67, "crypto/ec/ec_ameth.c", 368);
    return 0;
  }
}
