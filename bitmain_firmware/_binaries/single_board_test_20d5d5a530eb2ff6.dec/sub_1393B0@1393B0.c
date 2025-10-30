int __fastcall sub_1393B0(int *a1)
{
  char *v2; // r0
  int **v3; // r5
  int v4; // r4
  int v5; // r5
  int result; // r0
  void **v7; // r0

  v2 = sub_EAC84(*a1);
  if ( v2 != (char *)22 )
  {
    if ( v2 == (char *)23 )
    {
      v3 = *(int ***)(a1[1] + 4);
      if ( v3 )
        goto LABEL_4;
    }
    else
    {
      sub_D0048(46, 128, 152, (int)"crypto/cms/cms_lib.c", 355);
    }
    return 0;
  }
  v3 = (int **)(a1[1] + 12);
  if ( !v3 )
    return 0;
LABEL_4:
  if ( !*v3 )
  {
    v7 = sub_10BFCC();
    *v3 = (int *)v7;
    if ( !v7 )
      return 0;
  }
  v4 = sub_B2018((int)&CMS_CertificateChoices_it);
  if ( !v4 )
    return 0;
  v5 = sub_10BD3C(*v3, v4);
  result = v4;
  if ( !v5 )
  {
    sub_B17C4(v4, (int)&CMS_CertificateChoices_it);
    return 0;
  }
  return result;
}
