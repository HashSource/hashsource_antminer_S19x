int __fastcall sub_139F54(int *a1)
{
  int v2; // r3
  int result; // r0
  _DWORD *v4; // r0
  char ***v5; // r6
  int v6; // r0
  char **v7; // r0

  if ( a1[1] )
  {
    if ( sub_EAC84(*a1) == (char *)22 )
    {
      v2 = a1[1];
      goto LABEL_5;
    }
    sub_D0048(46, 133, 108, (int)"crypto/cms/cms_sd.c", 26);
    return 0;
  }
  v4 = (_DWORD *)sub_B2018((int)&CMS_SignedData_it);
  a1[1] = (int)v4;
  if ( !v4 )
  {
    sub_D0048(46, 149, 65, (int)"crypto/cms/cms_sd.c", 37);
    return 0;
  }
  v5 = (char ***)v4[2];
  *v4 = 1;
  *v5 = sub_EAA20(0x15u);
  v6 = *a1;
  *(_DWORD *)(*(_DWORD *)(a1[1] + 8) + 8) = 1;
  ASN1_OBJECT_free(v6);
  v7 = sub_EAA20(0x16u);
  v2 = a1[1];
  *a1 = (int)v7;
LABEL_5:
  result = v2;
  if ( v2 )
    return 1;
  return result;
}
