int __fastcall sub_C2EC4(int a1, int a2, int a3)
{
  int v3; // r4
  int v6; // r7
  int v7; // r0
  int v8; // r5
  int v9; // r6
  int v10; // r5
  int v12; // r0
  int v13; // [sp+8h] [bp-Ch] BYREF
  int v14; // [sp+Ch] [bp-8h] BYREF

  v3 = *(_DWORD *)(a2 + 24);
  v13 = 0;
  v14 = 0;
  if ( v3 )
  {
    v6 = sub_C59B8(v3);
    if ( v6 )
    {
      if ( sub_C5A68(v3) )
      {
        v7 = sub_C5BA8(v3);
        v8 = sub_C5BFC(v3, v7, &v14, 0);
        if ( !v8 )
        {
LABEL_5:
          v9 = 0;
LABEL_6:
          v10 = 0;
          sub_D0048(16, 221, 16, "crypto/ec/ec_ameth.c", 416);
LABEL_7:
          sub_E0758(v13, v9, (size_t)"crypto/ec/ec_ameth.c");
          CRYPTO_free(v14, "crypto/ec/ec_ameth.c", 418);
          return v10;
        }
      }
      else
      {
        v8 = 0;
      }
      if ( sub_C59E4(v3) )
      {
        v9 = sub_C5DC0(v3, &v13);
        if ( !v9 )
          goto LABEL_5;
        if ( !sub_B6E94(a1, a3, 128) )
          goto LABEL_6;
      }
      else
      {
        v9 = 0;
        if ( !sub_B6E94(a1, a3, 128) )
          goto LABEL_6;
      }
      v12 = sub_C6248(v6);
      if ( sub_B550C(a1, "%s: (%d bit)\n", "Private-Key", v12) <= 0 )
        goto LABEL_6;
      if ( v9 )
      {
        if ( sub_B550C(a1, "%*spriv:\n", a3, &byte_1A4198) <= 0 || !sub_12D7A8(a1, v13, v9, a3 + 4) )
          goto LABEL_6;
        if ( !v8 )
          goto LABEL_17;
      }
      else if ( !v8 )
      {
        goto LABEL_17;
      }
      if ( sub_B550C(a1, "%*spub:\n", a3, &byte_1A4198) <= 0 || !sub_12D7A8(a1, v14, v8, a3 + 4) )
        goto LABEL_6;
LABEL_17:
      v10 = 1;
      if ( sub_C9A3C(a1, v6, a3) )
        goto LABEL_7;
      goto LABEL_6;
    }
  }
  sub_D0048(16, 221, 67, "crypto/ec/ec_ameth.c", 368);
  return 0;
}
