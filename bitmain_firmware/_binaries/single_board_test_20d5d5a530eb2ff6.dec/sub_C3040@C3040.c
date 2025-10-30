int __fastcall sub_C3040(int a1, int a2, int a3)
{
  int v6; // r0
  int v7; // r5
  int v8; // r7
  int v9; // r0
  int v10; // r6
  const char *v11; // r4
  int v12; // r6
  int v14; // r0
  int v15; // [sp+8h] [bp-Ch] BYREF
  int v16; // [sp+Ch] [bp-8h] BYREF

  v6 = sub_C59E4(a2);
  v15 = 0;
  v16 = 0;
  if ( a2 )
  {
    v7 = v6;
    v8 = sub_C59B8(a2);
    if ( v8 )
    {
      if ( sub_C5A68(a2) )
      {
        v9 = sub_C5BA8(a2);
        v10 = sub_C5BFC(a2, v9, &v16, 0);
        if ( !v10 )
          goto LABEL_9;
        if ( !v7 )
          goto LABEL_6;
      }
      else
      {
        v10 = 0;
        if ( !v7 )
        {
LABEL_6:
          v11 = "Public-Key";
          if ( !sub_B6E94(a1, a3, 128) )
          {
LABEL_7:
            v12 = 0;
            sub_D0048(16, 221, 16, "crypto/ec/ec_ameth.c", 416);
LABEL_8:
            sub_E0758(v15, v7, (size_t)"crypto/ec/ec_ameth.c");
            CRYPTO_free(v16, "crypto/ec/ec_ameth.c", 418);
            return v12;
          }
LABEL_14:
          v14 = sub_C6248(v8);
          if ( sub_B550C(a1, "%s: (%d bit)\n", v11, v14) <= 0 )
            goto LABEL_7;
          if ( v7 )
          {
            if ( sub_B550C(a1, "%*spriv:\n", a3, &byte_1A4198) <= 0 || !sub_12D7A8(a1, v15, v7, a3 + 4) )
              goto LABEL_7;
            if ( !v10 )
              goto LABEL_19;
          }
          else if ( !v10 )
          {
            goto LABEL_19;
          }
          if ( sub_B550C(a1, "%*spub:\n", a3, &byte_1A4198) <= 0 || !sub_12D7A8(a1, v16, v10, a3 + 4) )
            goto LABEL_7;
LABEL_19:
          v12 = 1;
          if ( sub_C9A3C(a1, v8, a3) )
            goto LABEL_8;
          goto LABEL_7;
        }
      }
      if ( !sub_C59E4(a2) )
      {
        v7 = 0;
LABEL_13:
        v11 = "Private-Key";
        if ( !sub_B6E94(a1, a3, 128) )
          goto LABEL_7;
        goto LABEL_14;
      }
      v7 = sub_C5DC0(a2, &v15);
      if ( v7 )
        goto LABEL_13;
LABEL_9:
      v7 = 0;
      goto LABEL_7;
    }
  }
  sub_D0048(16, 221, 67, "crypto/ec/ec_ameth.c", 368);
  return 0;
}
