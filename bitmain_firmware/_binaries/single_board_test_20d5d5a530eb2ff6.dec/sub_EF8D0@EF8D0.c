int __fastcall sub_EF8D0(int *a1, char *a2, int a3, int a4)
{
  int v5; // r0
  int i; // r4
  __int64 v10; // r0
  int v11; // r7
  int v12; // r0
  int v13; // r6
  int v14; // r4
  int v16; // r0

  v5 = *a1;
  if ( v5 )
  {
    for ( i = 0; i < sub_10C010(v5, a2, a3); ++i )
    {
      v10 = sub_10C01C(*a1, i);
      v11 = v10;
      v12 = sub_10E510(v10, HIDWORD(v10));
      if ( sub_EAC84(v12) == a2 )
      {
        X509_ATTRIBUTE_free(v11);
        v13 = sub_114E04(a2, a3, a4);
        if ( !v13 )
          return 0;
        v14 = sub_10C040(*a1, i, v13);
        if ( v14 )
          return 1;
        goto LABEL_13;
      }
      v5 = *a1;
    }
  }
  else
  {
    v16 = sub_10BFCC(0);
    *a1 = v16;
    if ( !v16 )
      return 0;
  }
  v13 = sub_114E04(a2, a3, a4);
  if ( !v13 )
    return 0;
  v14 = sub_10BD3C(*a1, v13);
  if ( v14 )
    return 1;
LABEL_13:
  X509_ATTRIBUTE_free(v13);
  return v14;
}
