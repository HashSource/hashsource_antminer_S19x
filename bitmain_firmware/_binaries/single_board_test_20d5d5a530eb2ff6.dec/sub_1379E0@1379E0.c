int __fastcall sub_1379E0(_DWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v4; // r0

  if ( *a1 )
  {
    sub_D0048(46, 142, 124, (int)"crypto/cms/cms_env.c", 238);
    return 0;
  }
  else
  {
    v4 = (_DWORD *)a1[1];
    if ( a2 )
      *a2 = v4[5];
    if ( a3 )
      *a3 = v4[4];
    if ( a4 )
      *a4 = v4[2];
    return 1;
  }
}
