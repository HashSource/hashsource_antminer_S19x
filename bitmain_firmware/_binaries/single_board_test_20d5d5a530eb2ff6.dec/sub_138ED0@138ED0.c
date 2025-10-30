int __fastcall sub_138ED0(int *a1)
{
  char *v2; // r0
  _DWORD *v3; // r0

  v2 = sub_EAC84(*a1);
  if ( v2 == (char *)25 )
    return *(_DWORD *)(a1[1] + 8) + 4;
  if ( (int)v2 <= 25 )
  {
    if ( v2 != (char *)22 )
    {
      if ( v2 == (char *)23 )
        return *(_DWORD *)(a1[1] + 12) + 8;
      if ( v2 == (char *)21 )
        return (int)(a1 + 1);
      goto LABEL_6;
    }
    return *(_DWORD *)(a1[1] + 8) + 4;
  }
  if ( v2 == (char *)205 )
    return *(_DWORD *)(a1[1] + 20) + 4;
  if ( v2 == (char *)786 )
    return *(_DWORD *)(a1[1] + 12) + 4;
  if ( v2 == (char *)26 )
    return *(_DWORD *)(a1[1] + 4) + 8;
LABEL_6:
  v3 = (_DWORD *)a1[1];
  if ( *v3 == 4 )
    return (int)(v3 + 1);
  sub_D0048(46, 129, 152, (int)"crypto/cms/cms_lib.c", 185);
  return 0;
}
