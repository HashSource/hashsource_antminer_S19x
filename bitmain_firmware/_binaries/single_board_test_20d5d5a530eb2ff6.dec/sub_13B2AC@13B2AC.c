int __fastcall sub_13B2AC(int a1, int a2)
{
  int v3; // r4
  int v4; // r5

  v3 = sub_B782C(a2, "rb");
  if ( v3 )
  {
    v4 = sub_13B288(a1);
    BIO_vfree_0(v3);
    return v4;
  }
  else
  {
    sub_D0048(14, 100, 2, (int)"crypto/conf/conf_lib.c", 57);
    return 0;
  }
}
