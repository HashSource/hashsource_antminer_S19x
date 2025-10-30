int __fastcall sub_17D158(int a1, int a2)
{
  int v3; // r0
  _DWORD *v4; // r6
  int v5; // r4
  bool v6; // cc
  unsigned int v7; // r1
  int v8; // r5
  int v10; // [sp+Ch] [bp-4h] BYREF

  v3 = sub_BBDB4(a1);
  v4 = (_DWORD *)sub_13B390(a2, v3);
  if ( v4 )
  {
    v5 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = v5 < sub_10C010((int)v4);
        v7 = v5++;
        if ( !v6 )
          return 1;
        v8 = sub_10C01C(v4, v7);
        if ( !strcmp(*(const char **)(v8 + 4), "fips_mode") )
          break;
        sub_D0048(6, 177, 169, (int)"crypto/evp/evp_cnf.c", 44);
        sub_D1240(4, "name=", *(_DWORD *)(v8 + 4), ", value=", *(_DWORD *)(v8 + 8));
      }
      if ( !sub_1225E0(v8, &v10) )
        break;
      if ( v10 > 0 )
      {
        sub_D0048(6, 177, 167, (int)"crypto/evp/evp_cnf.c", 40);
        return 0;
      }
    }
    sub_D0048(6, 177, 168, (int)"crypto/evp/evp_cnf.c", 36);
    return 0;
  }
  else
  {
    sub_D0048(6, 177, 165, (int)"crypto/evp/evp_cnf.c", 28);
    return 0;
  }
}
