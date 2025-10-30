int __fastcall sub_1261E4(int (__fastcall *a1)(int, void **), int a2, int a3)
{
  void *v6; // r0
  _DWORD *v7; // r0
  int v8; // r5
  int v9; // r4

  v6 = sub_B7820();
  v7 = sub_B655C((int)v6);
  v8 = (int)v7;
  if ( v7 )
  {
    sub_B6ECC((int)v7, 106, 0, a2);
    v9 = sub_12615C(a1, v8, a3);
    BIO_vfree_0(v8);
    return v9;
  }
  else
  {
    sub_D0048(13, 117, 7, (int)"crypto/asn1/a_i2d_fp.c", 24);
    return 0;
  }
}
