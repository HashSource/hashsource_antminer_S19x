int __fastcall sub_C9E70(int a1, _DWORD *a2, int a3)
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
    sub_B6ECC((int)v7, 106, 0, a1);
    v9 = sub_C9A3C(v8, a2, a3);
    BIO_vfree_0(v8);
    return v9;
  }
  else
  {
    sub_D0048(16, 150, 7, "crypto/ec/eck_prn.c", 24);
    return 0;
  }
}
