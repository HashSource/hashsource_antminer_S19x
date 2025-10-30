int __fastcall sub_139FE8(_DWORD *a1, int a2, int a3)
{
  if ( a3 )
  {
    if ( a3 != 1 )
    {
      sub_D0048(46, 146, 150, (int)"crypto/cms/cms_sd.c", 186);
      return 0;
    }
    if ( !sub_139800(a1 + 1, a2) )
      return 0;
  }
  else if ( !sub_139784(a1 + 1, a2) )
  {
    return 0;
  }
  *a1 = a3;
  return 1;
}
