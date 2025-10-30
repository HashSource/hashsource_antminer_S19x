int __fastcall sub_8C28C(_DWORD *a1, int a2, int a3)
{
  int v3; // r3
  int v4; // r5
  bool v5; // zf
  int v7; // r1
  int v8; // r2
  unsigned __int8 *v9; // r3
  int v10; // r6
  int v11; // r7
  int v12; // r0
  __int64 v13; // r0
  int v14; // r5
  int v15; // r5

  v3 = a1[285];
  if ( !v3 )
    return 1;
  v4 = *(_DWORD *)(v3 + 412);
  v5 = v4 == 0;
  if ( v4 )
    v5 = a1[372] == 0;
  if ( v5 )
    return 1;
  if ( a1[310] )
    return 1;
  if ( !a1[309] )
    return 1;
  if ( sub_10C010(a1[309], a2, a3) <= 1 )
    return 1;
  if ( sub_10C010(a1[38], v7, v8) > 0 )
  {
    v9 = (unsigned __int8 *)a1[40];
    if ( v9 )
    {
      if ( (unsigned int)*v9 - 2 <= 1 )
        return 1;
    }
  }
  v10 = sub_BCED8();
  if ( v10 )
  {
    v11 = sub_10C01C(a1[309], 1);
    sub_BCF48(v10, v4);
    sub_BCF5C(v10, v11);
    sub_BCF70(v10, *(_DWORD *)(a1[308] + 264));
    v12 = sub_8D444(a1);
    v13 = sub_8E1B8(v12);
    sub_BCF74(v10, HIDWORD(v13), 1000 * v13, (unsigned __int64)(1000LL * (int)v13) >> 32);
    v14 = sub_8B8C8(a1);
    if ( sub_BD498(v14, v10) < 0 )
    {
      sub_95494(a1, 40, 400, 208, "ssl/ssl_lib.c", 5044);
    }
    else
    {
      v15 = ((int (__fastcall *)(int, int, _DWORD))a1[372])(v10, v14, a1[373]);
      if ( v15 > 0 )
      {
        sub_BCF20(v10);
        return v15;
      }
      sub_95494(a1, 40, 400, 234, "ssl/ssl_lib.c", 5053);
    }
  }
  else
  {
    sub_95494(a1, 80, 400, 65, "ssl/ssl_lib.c", 5015);
  }
  sub_BCF20(v10);
  a1[310] = 71;
  return 0;
}
