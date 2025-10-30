int __fastcall sub_1387E8(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  if ( *a1 == 1 )
  {
    if ( a2 )
      *a2 = *(_DWORD *)(a1[1] + 12);
    if ( a3 )
      *a3 = *(_DWORD *)(a1[1] + 8);
    return 1;
  }
  else
  {
    sub_D0048(46, 175, 181, (int)"crypto/cms/cms_kari.c", 28);
    return 0;
  }
}
