bool __fastcall sub_EE020(
        int (__fastcall *a1)(int, char **),
        const char *a2,
        int a3,
        int a4,
        _DWORD *a5,
        char *a6,
        int a7,
        int (__fastcall *a8)(char *, int, int, char *),
        char *a9)
{
  void *v13; // r0
  _DWORD *v14; // r0
  int v15; // r5
  _BOOL4 v16; // r4

  v13 = sub_B7820();
  v14 = sub_B655C((int)v13);
  v15 = (int)v14;
  if ( v14 )
  {
    sub_B6ECC((int)v14, 106, 0, a3);
    v16 = sub_EDD48(a1, a2, v15, a4, a5, a6, a7, a8, a9);
    BIO_vfree_0(v15);
    return v16;
  }
  else
  {
    sub_D0048(9, 104, 7, (int)"crypto/pem/pem_lib.c", 298);
    return 0;
  }
}
