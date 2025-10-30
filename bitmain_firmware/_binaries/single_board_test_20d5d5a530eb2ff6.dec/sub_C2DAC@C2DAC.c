int __fastcall sub_C2DAC(int a1, int a2, int a3)
{
  int v3; // r4
  int v6; // r6
  int v7; // r0
  int v8; // r4
  int v9; // r5
  int v11; // r0
  int v12; // [sp+Ch] [bp-4h] BYREF

  v3 = *(_DWORD *)(a2 + 24);
  v12 = 0;
  if ( v3 )
  {
    v6 = sub_C59B8(v3);
    if ( v6 )
    {
      if ( sub_C5A68(v3) )
      {
        v7 = sub_C5BA8(v3);
        v8 = sub_C5BFC(v3, v7, &v12, 0);
        if ( !v8 )
        {
LABEL_5:
          v9 = 0;
          sub_D0048(16, 221, 16, "crypto/ec/ec_ameth.c", 416);
LABEL_6:
          sub_E0758(0, 0, (size_t)"crypto/ec/ec_ameth.c");
          CRYPTO_free(v12, "crypto/ec/ec_ameth.c", 418);
          return v9;
        }
      }
      else
      {
        v8 = 0;
      }
      if ( sub_B6E94(a1, a3, 128) )
      {
        v11 = sub_C6248(v6);
        if ( sub_B550C(a1, "%s: (%d bit)\n", "Public-Key", v11) > 0
          && (!v8 || sub_B550C(a1, "%*spub:\n", a3, &byte_1A4198) > 0 && sub_12D7A8(a1, v12, v8, a3 + 4)) )
        {
          v9 = 1;
          if ( sub_C9A3C(a1, v6, a3) )
            goto LABEL_6;
        }
      }
      goto LABEL_5;
    }
  }
  sub_D0048(16, 221, 67, "crypto/ec/ec_ameth.c", 368);
  return 0;
}
