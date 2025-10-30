int *__fastcall sub_1395B4(int *a1)
{
  char *v2; // r0
  int *v3; // r6
  int v4; // r4
  int *v5; // r7
  bool v6; // cc
  unsigned int v7; // r1
  _DWORD *v8; // r0
  _DWORD *v9; // r5
  int v10; // r9
  int *v11; // r0

  v2 = sub_EAC84(*a1);
  if ( v2 == (char *)22 )
  {
    v3 = (int *)(a1[1] + 12);
    if ( a1[1] != -12 )
      goto LABEL_4;
    return 0;
  }
  if ( v2 != (char *)23 )
  {
    sub_D0048(46, 128, 152, (int)"crypto/cms/cms_lib.c", 355);
    return 0;
  }
  v3 = *(int **)(a1[1] + 4);
  if ( !v3 )
    return 0;
LABEL_4:
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    do
    {
      v6 = v4 < sub_10C010(*v3);
      v7 = v4++;
      if ( !v6 )
        return v5;
      v8 = (_DWORD *)sub_10C01C((_DWORD *)*v3, v7);
      v9 = v8;
    }
    while ( *v8 );
    if ( !v5 )
      break;
    v10 = sub_10BD3C(v5, v8[1]);
    if ( !v10 )
      goto LABEL_15;
LABEL_10:
    sub_10FD18(v9[1]);
  }
  v11 = (int *)sub_10BFCC();
  v5 = v11;
  if ( !v11 )
    return 0;
  v10 = sub_10BD3C(v11, v9[1]);
  if ( v10 )
    goto LABEL_10;
LABEL_15:
  sub_10BFDC((int)v5, (void (__fastcall *)(int))X509_free);
  return (int *)v10;
}
