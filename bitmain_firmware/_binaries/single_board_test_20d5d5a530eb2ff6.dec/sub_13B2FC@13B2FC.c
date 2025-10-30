int __fastcall sub_13B2FC(int a1, int a2)
{
  int v3; // r4
  int v4; // r5

  v3 = sub_B78F4(a2, 0);
  if ( v3 )
  {
    v4 = sub_13B288(a1);
    BIO_vfree_0(v3);
    return v4;
  }
  else
  {
    sub_D0048(14, 103, 7, (int)"crypto/conf/conf_lib.c", 74);
    return 0;
  }
}
