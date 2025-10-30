int __fastcall sub_C2CF0(int a1, int a2, int a3)
{
  int v5; // r5
  int v6; // r5
  int v8; // r0

  if ( *(_DWORD *)(a2 + 24) && (v5 = sub_C59B8(*(_DWORD *)(a2 + 24))) != 0 )
  {
    if ( sub_B6E94(a1, a3, 128)
      && (v8 = sub_C6248(v5), sub_B550C(a1, "%s: (%d bit)\n", "ECDSA-Parameters", v8) > 0)
      && sub_C9A3C(a1, v5, a3) )
    {
      v6 = 1;
    }
    else
    {
      v6 = 0;
      sub_D0048(16, 221, 16, "crypto/ec/ec_ameth.c", 416);
    }
    sub_E0758(0, 0, (size_t)"crypto/ec/ec_ameth.c");
    CRYPTO_free(0, "crypto/ec/ec_ameth.c", 418);
    return v6;
  }
  else
  {
    sub_D0048(16, 221, 67, "crypto/ec/ec_ameth.c", 368);
    return 0;
  }
}
