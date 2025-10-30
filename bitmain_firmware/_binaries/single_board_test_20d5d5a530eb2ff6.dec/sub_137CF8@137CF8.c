int __fastcall sub_137CF8(_DWORD *a1, int a2, int a3)
{
  int v3; // r3

  if ( *a1 == 2 )
  {
    v3 = a1[1];
    *(_DWORD *)(v3 + 16) = a2;
    *(_DWORD *)(v3 + 20) = a3;
    return 1;
  }
  else
  {
    sub_D0048(46, 144, 123, (int)"crypto/cms/cms_env.c", 617);
    return 0;
  }
}
