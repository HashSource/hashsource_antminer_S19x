int __fastcall sub_179510(int *a1, char **a2, const void *a3, void *a4)
{
  bool v5; // zf
  int v6; // r8
  int v10; // r0
  char **v11; // r0
  int v12; // lr

  v5 = a4 == 0;
  if ( a4 )
    v5 = a3 == 0;
  v6 = v5;
  if ( v5 )
  {
    sub_D0048(46, 123, 130, (int)"crypto/cms/cms_enc.c", 188);
  }
  else if ( a2 )
  {
    v10 = sub_B2018((int)&CMS_EncryptedData_it);
    a1[1] = v10;
    if ( v10 )
    {
      v11 = sub_EAA20(0x1Au);
      v12 = a1[1];
      *a1 = (int)v11;
      *(_DWORD *)v12 = v6;
      return sub_1794B0(*(char ****)(v12 + 4), a2, a3, a4);
    }
    sub_D0048(46, 123, 65, (int)"crypto/cms/cms_enc.c", 194);
  }
  else
  {
    if ( sub_EAC84(*a1) == (char *)26 )
    {
      v12 = a1[1];
      return sub_1794B0(*(char ****)(v12 + 4), a2, a3, a4);
    }
    sub_D0048(46, 123, 122, (int)"crypto/cms/cms_enc.c", 200);
  }
  return 0;
}
