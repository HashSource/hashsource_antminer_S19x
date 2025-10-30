int __fastcall sub_15BFE8(int a1)
{
  _DWORD *v2; // r5
  int v3; // r4

  v2 = sub_E0740((void *)0x1140);
  if ( v2 )
  {
    v3 = sub_D7A5C();
    v2[5] = v3;
    if ( v3 )
    {
      v2[6] = v2 + 80;
      v2[7] = v2 + 80;
      v2[2] = 1;
      v2[4] = 1;
      sub_B66C4(a1, (int)v2);
      sub_B66CC(a1, 1);
      return 1;
    }
    else
    {
      CRYPTO_free(v2);
      return 0;
    }
  }
  else
  {
    sub_D0048(6, 199, 65, (int)"crypto/evp/bio_enc.c", 69);
    return 0;
  }
}
