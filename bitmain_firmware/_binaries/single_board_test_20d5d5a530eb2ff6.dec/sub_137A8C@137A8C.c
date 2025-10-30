int __fastcall sub_137A8C(_DWORD *a1, int a2)
{
  if ( *a1 )
  {
    sub_D0048(46, 145, 124, (int)"crypto/cms/cms_env.c", 282);
    return 0;
  }
  else
  {
    sub_DA240(*(_DWORD *)(a1[1] + 20));
    *(_DWORD *)(a1[1] + 20) = a2;
    return 1;
  }
}
