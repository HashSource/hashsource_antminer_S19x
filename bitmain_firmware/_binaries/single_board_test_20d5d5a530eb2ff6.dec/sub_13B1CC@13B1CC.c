int __fastcall sub_13B1CC(int a1)
{
  int v1; // r4

  if ( !a1 )
    a1 = sub_17A9F8();
  v1 = (*(int (**)(void))(a1 + 4))();
  if ( !v1 )
    sub_D0048(14, 111, 65, (int)"crypto/conf/conf_lib.c", 186);
  return v1;
}
