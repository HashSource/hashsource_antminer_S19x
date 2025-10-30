bool __fastcall sub_8CFAC(int a1, char *s2)
{
  int v4; // r7
  int v5; // r0
  int v6; // r5
  int v7; // r4
  int (*v8)(); // r2
  int (*v9)(); // r4
  int v10; // r1
  int v11; // r2
  unsigned int v12; // r4
  int v13; // r0
  _BOOL4 v14; // r4
  _DWORD v15[2]; // [sp+14h] [bp-14h] BYREF
  unsigned int v16; // [sp+1Ch] [bp-Ch] BYREF
  char *s; // [sp+20h] [bp-8h] BYREF
  int v18; // [sp+24h] [bp-4h] BYREF

  v15[0] = s2;
  if ( a1 )
  {
    if ( !sub_BC274(s2) )
    {
      sub_D0048(20, 391, 113, "ssl/ssl_mcnf.c", 41);
      sub_D1240(2, "name=", v15[0]);
LABEL_4:
      sub_AAE5C(0);
      return 0;
    }
    v4 = sub_BC250(v15[1], v15, &v16);
    v5 = sub_AABA0();
    v6 = v5;
    if ( !v5 )
      goto LABEL_4;
    v7 = *(_DWORD *)(a1 + 4);
    sub_AAF30(v5, a1);
    v8 = *(int (**)())(v7 + 24);
    v9 = *(int (**)())(v7 + 28);
    if ( v8 == ssl_undefined_function )
      v10 = 102;
    else
      v10 = 110;
    if ( v8 == ssl_undefined_function )
      v11 = 98;
    else
      v11 = 106;
    if ( v9 == ssl_undefined_function )
      v10 = v11;
    sub_AAEC0(v6, v10, v11);
    if ( v16 )
    {
      v12 = 0;
      while ( 1 )
      {
        sub_BC2BC(v4, v12++, &s, &v18);
        v13 = sub_AA8D4(v6, s);
        if ( v13 <= 0 )
          break;
        if ( v12 >= v16 )
          goto LABEL_22;
      }
      if ( v13 == -2 )
        sub_D0048(20, 391, 139, "ssl/ssl_mcnf.c", 72);
      else
        sub_D0048(20, 391, 384, "ssl/ssl_mcnf.c", 74);
      sub_D1240(6, "section=", v15[0]);
      sub_AAE5C(v6);
      return 0;
    }
    else
    {
LABEL_22:
      v14 = sub_AABB4(v6) > 0;
      sub_AAE5C(v6);
      return v14;
    }
  }
  else
  {
    sub_D0048(20, 391, 67, "ssl/ssl_mcnf.c", 33);
    sub_AAE5C(0);
    return 0;
  }
}
