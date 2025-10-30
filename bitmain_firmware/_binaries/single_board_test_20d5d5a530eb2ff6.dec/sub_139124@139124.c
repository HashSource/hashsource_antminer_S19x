int __fastcall sub_139124(int *a1)
{
  char *v2; // r0
  int result; // r0
  int v4; // r3

  v2 = sub_EAC84(*a1);
  if ( v2 == (char *)25 )
    goto LABEL_13;
  if ( (int)v2 <= 25 )
  {
    if ( v2 != (char *)22 )
    {
      if ( v2 != (char *)23 )
        goto LABEL_6;
      goto LABEL_9;
    }
LABEL_13:
    v4 = *(_DWORD *)(a1[1] + 8);
    goto LABEL_10;
  }
  if ( v2 == (char *)205 )
  {
    v4 = *(_DWORD *)(a1[1] + 20);
    goto LABEL_10;
  }
  if ( v2 == (char *)786 )
  {
LABEL_9:
    v4 = *(_DWORD *)(a1[1] + 12);
    goto LABEL_10;
  }
  if ( v2 != (char *)26 )
  {
LABEL_6:
    sub_D0048(46, 130, 152, (int)"crypto/cms/cms_lib.c", 219);
    return 0;
  }
  v4 = *(_DWORD *)(a1[1] + 4);
LABEL_10:
  result = v4;
  if ( v4 )
    return *(_DWORD *)v4;
  return result;
}
