int __fastcall sub_F1170(int a1, unsigned int a2)
{
  int v4; // r0
  int v5; // r4

  v4 = sub_EF414();
  v5 = v4;
  if ( v4 && sub_F1060(v4, a2) && sub_F1008(a1, v5) )
    return 1;
  PKCS7_free(v5);
  return 0;
}
