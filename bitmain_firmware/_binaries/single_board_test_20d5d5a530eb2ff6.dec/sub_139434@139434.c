int __fastcall sub_139434(int *a1, int a2)
{
  char *v4; // r0
  int *v5; // r5
  int v6; // r4
  bool v7; // cc
  unsigned int v8; // r1
  _DWORD *v9; // r0
  _DWORD *v11; // r0

  v4 = sub_EAC84(*a1);
  if ( v4 == (char *)22 )
  {
    v5 = (int *)(a1[1] + 12);
    if ( a1[1] != -12 )
      goto LABEL_4;
    return 0;
  }
  if ( v4 != (char *)23 )
  {
    sub_D0048(46, 128, 152, (int)"crypto/cms/cms_lib.c", 355);
    return 0;
  }
  v5 = *(int **)(a1[1] + 4);
  if ( !v5 )
    return 0;
LABEL_4:
  v6 = 0;
  while ( 1 )
  {
    v7 = v6 < sub_10C010(*v5);
    v8 = v6++;
    if ( !v7 )
      break;
    v9 = (_DWORD *)sub_10C01C((_DWORD *)*v5, v8);
    if ( !*v9 && !sub_10E66C(v9[1], a2) )
    {
      sub_D0048(46, 164, 175, (int)"crypto/cms/cms_lib.c", 395);
      return 0;
    }
  }
  v11 = (_DWORD *)sub_1393B0(a1);
  if ( !v11 )
    return 0;
  *v11 = 0;
  v11[1] = a2;
  return 1;
}
