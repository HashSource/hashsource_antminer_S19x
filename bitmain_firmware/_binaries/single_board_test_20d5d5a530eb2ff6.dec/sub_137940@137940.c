int *__fastcall sub_137940(int a1)
{
  int *v2; // r0
  int *v3; // r4
  int v4; // r2
  _DWORD *v6; // r0
  char ***v7; // r5
  char **v8; // r0

  v2 = (int *)sub_138E84();
  v3 = v2;
  if ( !v2 )
    goto LABEL_8;
  if ( v2[1] )
  {
    v4 = sub_137864(v2);
  }
  else
  {
    v6 = (_DWORD *)sub_B2018((int)&CMS_EnvelopedData_it);
    v3[1] = (int)v6;
    if ( !v6 )
    {
      sub_D0048(46, 126, 65, (int)"crypto/cms/cms_env.c", 38);
      goto LABEL_8;
    }
    v7 = (char ***)v6[3];
    *v6 = 0;
    *v7 = sub_EAA20(0x15u);
    ASN1_OBJECT_free(*v3);
    v8 = sub_EAA20(0x17u);
    v4 = v3[1];
    *v3 = (int)v8;
  }
  if ( v4 && sub_1794B0(*(_DWORD *)(v4 + 12), a1, 0) )
    return v3;
LABEL_8:
  sub_138E98(v3);
  sub_D0048(46, 124, 65, (int)"crypto/cms/cms_env.c", 120);
  return 0;
}
