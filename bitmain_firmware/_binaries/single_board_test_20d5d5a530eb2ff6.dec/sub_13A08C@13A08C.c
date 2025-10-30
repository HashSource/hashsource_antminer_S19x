int __fastcall sub_13A08C(int *a1)
{
  int v2; // r3
  int result; // r0

  if ( sub_EAC84(*a1) == (char *)22 )
  {
    v2 = a1[1];
    result = v2;
    if ( v2 )
      return *(_DWORD *)(v2 + 20);
  }
  else
  {
    sub_D0048(46, 133, 108, (int)"crypto/cms/cms_sd.c", 26);
    return 0;
  }
  return result;
}
