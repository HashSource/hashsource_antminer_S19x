int __fastcall sub_17A980(int a1, int a2, char **a3)
{
  int *v5; // r4
  int v6; // r5

  v5 = (int *)sub_B782C(a2, "rb");
  if ( v5 )
  {
    v6 = sub_179EE8(a1, v5, a3);
    BIO_vfree_0((int)v5);
    return v6;
  }
  else
  {
    if ( (sub_D065C() & 0xFFF) == 0x80 )
      sub_D0048(14, 120, 114, (int)"crypto/conf/conf_def.c", 168);
    else
      sub_D0048(14, 120, 2, (int)"crypto/conf/conf_def.c", 170);
    return 0;
  }
}
