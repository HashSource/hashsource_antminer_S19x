int __fastcall sub_ED694(int a1, int a2, int a3, int a4, int a5, char *a6)
{
  void *v10; // r0
  _DWORD *v11; // r0
  int v12; // r5
  int v13; // r4

  v10 = sub_B7820();
  v11 = sub_B655C((int)v10);
  v12 = (int)v11;
  if ( v11 )
  {
    sub_B6ECC((int)v11, 106, 0, a3);
    v13 = sub_EEC1C(a1, a2, v12, a4, a5, a6);
    BIO_vfree_0(v12);
    return v13;
  }
  else
  {
    sub_D0048(9, 102, 7, (int)"crypto/pem/pem_lib.c", 113);
    return 0;
  }
}
