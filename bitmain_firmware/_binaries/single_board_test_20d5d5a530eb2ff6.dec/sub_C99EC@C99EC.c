int __fastcall sub_C99EC(int a1, int a2)
{
  void *v4; // r0
  _DWORD *v5; // r0
  int v6; // r5
  int v7; // r4

  v4 = sub_B7820();
  v5 = sub_B655C((int)v4);
  v6 = (int)v5;
  if ( v5 )
  {
    sub_B6ECC((int)v5, 106, 0, a1);
    v7 = sub_C31D8(v6, a2);
    BIO_vfree_0(v6);
    return v7;
  }
  else
  {
    sub_D0048(16, 148, 32, "crypto/ec/eck_prn.c", 54);
    return 0;
  }
}
