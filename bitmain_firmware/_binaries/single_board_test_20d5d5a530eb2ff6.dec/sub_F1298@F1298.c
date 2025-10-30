int __fastcall sub_F1298(int a1, int a2)
{
  char *v4; // r0
  _DWORD *v5; // r6
  int v6; // r4
  int v7; // r1
  int v8; // r2

  v4 = sub_EAC84(*(_DWORD *)(a1 + 16));
  if ( v4 == (char *)22 || v4 == (char *)24 )
  {
    v5 = (_DWORD *)(*(_DWORD *)(a1 + 20) + 8);
    if ( !*v5 )
      *v5 = sub_10BFCC(v4);
    v6 = *v5;
    if ( !*v5 )
    {
      sub_D0048(33, 100, 65, (int)"crypto/pkcs7/pk7_lib.c", 259);
      return v6;
    }
    sub_10FD18(a2);
    if ( sub_10BD3C(*v5, a2) )
      return 1;
    X509_free(a2, v7, v8);
    return 0;
  }
  else
  {
    sub_D0048(33, 100, 113, (int)"crypto/pkcs7/pk7_lib.c", 252);
    return 0;
  }
}
