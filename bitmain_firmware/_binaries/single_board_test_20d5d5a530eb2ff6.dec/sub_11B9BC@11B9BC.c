int __fastcall sub_11B9BC(int a1, _DWORD *a2, int a3, void ***a4)
{
  int v6; // r0
  _DWORD *v7; // r7
  signed int i; // r5
  void **v9; // r4
  int v10; // r0
  char ***v11; // r0
  int v12; // r6
  void **v13; // r4
  int j; // r1
  int v15; // r10
  int v16; // r11
  int v18; // [sp+0h] [bp-Ch]

  v6 = sub_13B390(a1, a3);
  if ( !v6 )
    return 0;
  v7 = (_DWORD *)v6;
  for ( i = 0; i < sub_10C010((int)v7); ++i )
  {
    v10 = sub_10C01C(v7, i);
    v11 = sub_11B710(a1, (int)a2, *(char **)(v10 + 4), *(char **)(v10 + 8));
    v12 = (int)v11;
    if ( !v11 )
      return 0;
    if ( *a2 == 2 )
    {
      v13 = *a4;
      v18 = sub_110544((int)v11);
      for ( j = v18; ; j = v18 )
      {
        v16 = sub_110238(v13, j, -1);
        if ( v16 < 0 )
          break;
        v15 = sub_1102F8(v13, v16);
        sub_110328((int *)v13, v16);
        X509_EXTENSION_free(v15);
      }
      v9 = sub_110358(a4, v12, 0xFFFFFFFF);
      if ( !v9 )
        goto LABEL_13;
    }
    else if ( a4 )
    {
      v9 = sub_110358(a4, (int)v11, 0xFFFFFFFF);
      if ( !v9 )
      {
LABEL_13:
        X509_EXTENSION_free(v12);
        return (int)v9;
      }
    }
    X509_EXTENSION_free(v12);
  }
  return 1;
}
