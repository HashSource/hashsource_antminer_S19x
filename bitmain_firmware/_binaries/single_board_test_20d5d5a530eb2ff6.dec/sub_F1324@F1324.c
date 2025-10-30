int __fastcall sub_F1324(int a1, int a2)
{
  char *v4; // r0
  _DWORD *v5; // r6
  int v6; // r4

  v4 = sub_EAC84(*(_DWORD *)(a1 + 16));
  if ( v4 == (char *)22 || v4 == (char *)24 )
  {
    v5 = (_DWORD *)(*(_DWORD *)(a1 + 20) + 12);
    if ( !*v5 )
      *v5 = sub_10BFCC(v4);
    v6 = *v5;
    if ( !*v5 )
    {
      sub_D0048(33, 101, 65, (int)"crypto/pkcs7/pk7_lib.c", 291);
      return v6;
    }
    sub_113B90(a2);
    if ( sub_10BD3C(*v5, a2) )
      return 1;
    X509_CRL_free(a2);
    return 0;
  }
  else
  {
    sub_D0048(33, 101, 113, (int)"crypto/pkcs7/pk7_lib.c", 284);
    return 0;
  }
}
