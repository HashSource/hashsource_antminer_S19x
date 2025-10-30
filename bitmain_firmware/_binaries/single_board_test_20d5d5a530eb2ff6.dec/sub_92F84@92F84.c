int __fastcall sub_92F84(int a1)
{
  int (*v1)(void); // r5

  v1 = *(int (**)(void))(a1 + 1412);
  if ( !v1 || v1() )
    return 1;
  sub_95494(a1, 80, 574, 68, "ssl/statem/extensions_srvr.c", 282);
  return 0;
}
