int __fastcall sub_EE094(int a1, const char *a2, const char *a3, int a4, int a5)
{
  void *v9; // r0
  _DWORD *v10; // r0
  int v11; // r5
  int v12; // r4

  v9 = sub_B7820();
  v10 = sub_B655C((int)v9);
  v11 = (int)v10;
  if ( v10 )
  {
    sub_B6ECC((int)v10, 106, 0, a1);
    v12 = sub_EDB94(v11, a2, a3, a4, a5);
    BIO_vfree_0(v11);
    return v12;
  }
  else
  {
    sub_D0048(9, 113, 7, (int)"crypto/pem/pem_lib.c", 592);
    return 0;
  }
}
