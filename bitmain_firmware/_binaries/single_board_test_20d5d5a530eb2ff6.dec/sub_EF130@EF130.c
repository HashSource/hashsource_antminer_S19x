int __fastcall sub_EF130(int a1, int *a2, int (__fastcall *a3)(_BYTE *, int, _DWORD, char *), char *a4)
{
  void *v8; // r0
  _DWORD *v9; // r0
  _DWORD *v10; // r5
  int v11; // r4

  v8 = sub_B7820();
  v9 = sub_B655C((int)v8);
  v10 = v9;
  if ( v9 )
  {
    sub_B6ECC((int)v9, 106, 0, a1);
    v11 = sub_EF09C(v10, a2, a3, a4);
    BIO_vfree_0((int)v10);
    return v11;
  }
  else
  {
    sub_D0048(9, 142, 7, (int)"crypto/pem/pem_pkey.c", 241);
    return 0;
  }
}
