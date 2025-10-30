int __fastcall sub_BD08C(_DWORD *a1, int a2, int a3)
{
  _BOOL4 v3; // r5

  v3 = *a1 == 0;
  if ( a3 == 32 )
    v3 = 0;
  if ( v3 )
  {
    sub_D0048(50, 101, 100, "crypto/ct/ct_sct.c", 83);
    return 0;
  }
  else
  {
    CRYPTO_free(a1[3], "crypto/ct/ct_sct.c", 87);
    a1[3] = a2;
    a1[4] = a3;
    a1[15] = 0;
    return 1;
  }
}
