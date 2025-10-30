int __fastcall sub_EF048(
        int a1,
        int a2,
        _DWORD *a3,
        char *a4,
        int a5,
        int (__fastcall *a6)(char *, int, int, char *),
        char *a7)
{
  int v10; // r0
  int v11; // r5
  int v12; // r4

  v10 = sub_B78F4(a1, 0);
  v11 = v10;
  if ( v10 )
  {
    v12 = sub_EEEAC(v10, a2, a3, a4, a5, a6, a7);
    BIO_vfree_0(v11);
    return v12;
  }
  else
  {
    sub_D0048(9, 139, 7, (int)"crypto/pem/pem_pkey.c", 196);
    return 0;
  }
}
