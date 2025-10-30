int __fastcall sub_1801C8(int a1)
{
  int result; // r0
  _DWORD *v3; // r4
  void *v4; // r5

  result = (int)sub_E0740((void *)0x40);
  v3 = (_DWORD *)result;
  if ( result )
  {
    v4 = CRYPTO_malloc((void *)0x14);
    v3[1] = v4;
    if ( v4 )
    {
      v3[6] = 0;
      v3[2] = 20;
      *v3 = 0;
      v3[7] = 4;
      sub_B66C4(a1, (int)v3);
      sub_B66CC(a1, 1);
      return 1;
    }
    else
    {
      sub_D0048(13, 113, 65, (int)"crypto/asn1/bio_asn1.c", 120);
      CRYPTO_free(v3);
      return 0;
    }
  }
  return result;
}
