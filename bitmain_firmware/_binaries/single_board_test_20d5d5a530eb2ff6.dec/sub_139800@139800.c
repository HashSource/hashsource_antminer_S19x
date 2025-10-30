int __fastcall sub_139800(int *a1, int a2)
{
  int *v3; // r0
  int v4; // r4

  v3 = (int *)sub_120DE8(a2);
  if ( v3 )
  {
    v4 = sub_AE228(v3);
    if ( v4 )
    {
      j_ASN1_STRING_free(*a1);
      *a1 = v4;
      return 1;
    }
    else
    {
      sub_D0048(46, 177, 65, (int)"crypto/cms/cms_lib.c", 582);
      return 0;
    }
  }
  else
  {
    sub_D0048(46, 177, 160, (int)"crypto/cms/cms_lib.c", 577);
    return 0;
  }
}
