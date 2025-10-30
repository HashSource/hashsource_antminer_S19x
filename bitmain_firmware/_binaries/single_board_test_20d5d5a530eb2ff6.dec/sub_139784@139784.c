int __fastcall sub_139784(int *a1, int a2)
{
  int *v4; // r4
  int v5; // r0
  int v7; // r0
  size_t *v8; // r6
  int *v9; // r0

  v4 = (int *)sub_B2018((int)&CMS_IssuerAndSerialNumber_it);
  if ( v4
    && (v5 = sub_10E65C(a2), sub_115E74(v4, v5))
    && (v7 = a2, v8 = (size_t *)v4[1], v9 = (int *)sub_10E664(v7), sub_AE140(v8, v9)) )
  {
    sub_B17C4(*a1, (int)&CMS_IssuerAndSerialNumber_it);
    *a1 = (int)v4;
    return 1;
  }
  else
  {
    sub_B17C4((int)v4, (int)&CMS_IssuerAndSerialNumber_it);
    sub_D0048(46, 176, 65, (int)"crypto/cms/cms_lib.c", 567);
    return 0;
  }
}
