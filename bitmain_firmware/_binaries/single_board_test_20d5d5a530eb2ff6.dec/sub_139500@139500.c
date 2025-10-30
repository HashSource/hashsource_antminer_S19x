int __fastcall sub_139500(int *a1)
{
  char *v2; // r0
  int v3; // r5
  int **v4; // r5
  int v5; // r4
  int v6; // r5
  int result; // r0
  void **v8; // r0

  v2 = sub_EAC84(*a1);
  if ( v2 != (char *)22 )
  {
    if ( v2 == (char *)23 )
    {
      v3 = *(_DWORD *)(a1[1] + 4);
      if ( v3 )
      {
        v4 = (int **)(v3 + 4);
        goto LABEL_5;
      }
    }
    else
    {
      sub_D0048(46, 132, 152, (int)"crypto/cms/cms_lib.c", 432);
    }
    return 0;
  }
  v4 = (int **)(a1[1] + 16);
  if ( !v4 )
    return 0;
LABEL_5:
  if ( !*v4 )
  {
    v8 = sub_10BFCC();
    *v4 = (int *)v8;
    if ( !v8 )
      return 0;
  }
  v5 = sub_B2018((int)&CMS_RevocationInfoChoice_it);
  if ( !v5 )
    return 0;
  v6 = sub_10BD3C(*v4, v5);
  result = v5;
  if ( !v6 )
  {
    sub_B17C4(v5, (int)&CMS_RevocationInfoChoice_it);
    return 0;
  }
  return result;
}
