int __fastcall d2i_AutoPrivateKey(int *a1, int *a2, int a3)
{
  int v6; // r9
  int v7; // r4
  int v8; // r0
  int result; // r0
  __int64 v10; // r0
  int v11; // r4
  int v12; // r2
  int v13; // r1
  int v14; // r2
  int v15; // r9
  int v16; // r4
  int v17; // r0
  int v18; // [sp+Ch] [bp-8h] BYREF

  sub_D1260();
  v18 = *a2;
  v6 = d2i_PKCS8_PRIV_KEY_INFO(0, &v18, a3);
  if ( v6 )
  {
    v7 = sub_D8E18();
    if ( v7 )
    {
      v8 = sub_AE5FC(v6);
      *a2 = v18;
      sub_D1328(v8);
      result = v7;
      if ( a1 )
      {
        result = v7;
        *a1 = v7;
      }
    }
    else
    {
      v17 = sub_AE5FC(v6);
      sub_D1328(v17);
      sub_D0048(13, 207, 167, "crypto/asn1/d2i_pr.c", 123);
      return 0;
    }
  }
  else
  {
    v18 = *a2;
    v10 = sub_B2538(0, &v18, a3);
    v11 = v10;
    v18 = *a2;
    if ( sub_10C010(v10, HIDWORD(v10), v12) == 6 )
    {
      v15 = 116;
    }
    else if ( sub_10C010(v11, v13, v14) == 4 )
    {
      v15 = 408;
    }
    else
    {
      v15 = 6;
    }
    sub_10BFDC(v11, ASN1_TYPE_free);
    v16 = sub_AE3A8(v15, a1, a2, a3);
    if ( v16 )
    {
      sub_D128C();
      return v16;
    }
    else
    {
      ((void (*)(void))sub_D1328)();
      return 0;
    }
  }
  return result;
}
