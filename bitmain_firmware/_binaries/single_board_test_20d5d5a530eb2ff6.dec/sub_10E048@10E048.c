bool __fastcall sub_10E048(int a1, int a2, int a3, int a4)
{
  void *v8; // r0
  _DWORD *v9; // r0
  int v10; // r5
  _BOOL4 v11; // r4

  v8 = sub_B7820();
  v9 = sub_B655C((int)v8);
  v10 = (int)v9;
  if ( v9 )
  {
    sub_B6ECC((int)v9, 106, 0, a1);
    v11 = sub_10DBB8(v10, a2, a3, a4);
    BIO_vfree_0(v10);
    return v11;
  }
  else
  {
    sub_D0048(11, 118, 7, (int)"crypto/x509/t_x509.c", 32);
    return 0;
  }
}
