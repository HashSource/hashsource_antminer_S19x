int __fastcall sub_17D0DC(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r5
  void *v4; // r6

  v2 = sub_E0740((void *)0xA00);
  v3 = v2;
  if ( v2 )
  {
    v2[6] = 1;
    v2[5] = 1;
    v4 = sub_15DA78();
    v3[7] = v4;
    if ( v4 )
    {
      sub_B66C4(a1, (int)v3);
      sub_B66CC(a1, 1);
      return 1;
    }
    else
    {
      CRYPTO_free(v3);
      return 0;
    }
  }
  else
  {
    sub_D0048(6, 198, 65, (int)"crypto/evp/bio_b64.c", 74);
    return 0;
  }
}
