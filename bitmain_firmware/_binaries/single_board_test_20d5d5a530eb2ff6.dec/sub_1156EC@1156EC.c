int __fastcall sub_1156EC(void ****a1)
{
  void ***v2; // r4
  void **v3; // r0
  int v4; // r0

  v2 = (void ***)sub_E0740((void *)0x14);
  if ( v2 )
  {
    v3 = sub_10BFCC();
    *v2 = v3;
    if ( v3 && (v4 = sub_BADF8(), (v2[2] = (void **)v4) != 0) )
    {
      v2[1] = (void **)1;
      *a1 = v2;
      return 1;
    }
    else
    {
      sub_D0048(13, 171, 65, (int)"crypto/x509/x_name.c", 105);
      sub_10BDB4(*v2);
      CRYPTO_free(v2);
      return 0;
    }
  }
  else
  {
    sub_D0048(13, 171, 65, (int)"crypto/x509/x_name.c", 105);
    return 0;
  }
}
