int __fastcall sub_16AB40(const char *a1, int a2, void *a3, int a4, int a5, _DWORD *a6)
{
  int v7; // r5
  int result; // r0
  void *v9; // [sp+4h] [bp-8h] BYREF

  v9 = a3;
  if ( a1 )
  {
    if ( strcmp(a1, "X509 CRL") )
      return 0;
    *a6 = 1;
  }
  v7 = d2i_X509_CRL(0, &v9, a4);
  if ( !v7 || (*a6 = 1, (result = sub_16C01C()) == 0) )
  {
    X509_CRL_free(v7);
    return 0;
  }
  return result;
}
