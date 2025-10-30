int *__fastcall sub_139674(int *a1)
{
  char *v2; // r0
  int v3; // r6
  int *v4; // r6
  int v5; // r4
  int *v6; // r7
  bool v7; // cc
  unsigned int v8; // r1
  _DWORD *v9; // r0
  _DWORD *v10; // r5
  int v11; // r9
  int *v12; // r0

  v2 = sub_EAC84(*a1);
  if ( v2 == (char *)22 )
  {
    v4 = (int *)(a1[1] + 16);
    if ( a1[1] != -16 )
      goto LABEL_5;
    return 0;
  }
  if ( v2 != (char *)23 )
  {
    sub_D0048(46, 132, 152, (int)"crypto/cms/cms_lib.c", 432);
    return 0;
  }
  v3 = *(_DWORD *)(a1[1] + 4);
  if ( !v3 )
    return 0;
  v4 = (int *)(v3 + 4);
LABEL_5:
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    do
    {
      v7 = v5 < sub_10C010(*v4);
      v8 = v5++;
      if ( !v7 )
        return v6;
      v9 = (_DWORD *)sub_10C01C((_DWORD *)*v4, v8);
      v10 = v9;
    }
    while ( *v9 );
    if ( !v6 )
      break;
    v11 = sub_10BD3C(v6, v9[1]);
    if ( !v11 )
      goto LABEL_16;
LABEL_11:
    sub_113B90(v10[1]);
  }
  v12 = (int *)sub_10BFCC();
  v6 = v12;
  if ( !v12 )
    return 0;
  v11 = sub_10BD3C(v12, v10[1]);
  if ( v11 )
    goto LABEL_11;
LABEL_16:
  sub_10BFDC((int)v6, (void (__fastcall *)(int))X509_CRL_free);
  return (int *)v11;
}
