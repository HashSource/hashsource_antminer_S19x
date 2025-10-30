int __fastcall sub_139860(_DWORD *a1, char *s, size_t a3)
{
  int v3; // r4
  size_t v4; // r3

  if ( *a1 == 3 )
  {
    v3 = a1[1];
    if ( s )
      v4 = a3 >> 31;
    else
      v4 = 0;
    *(_DWORD *)(v3 + 16) = s;
    if ( v4 )
      a3 = strlen(s);
    *(_DWORD *)(v3 + 20) = a3;
    return 1;
  }
  else
  {
    sub_D0048(46, 168, 177, (int)"crypto/cms/cms_pwri.c", 26);
    return 0;
  }
}
