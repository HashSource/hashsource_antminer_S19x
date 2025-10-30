int __fastcall sub_13B3F8(int a1, int a2, int a3)
{
  int result; // r0

  result = sub_1797A8();
  if ( !result )
  {
    if ( a1 )
    {
      sub_D0048(14, 109, 108, (int)"crypto/conf/conf_lib.c", 273);
      sub_D1240(4, "group=", a2, " name=", a3);
    }
    else
    {
      sub_D0048(14, 109, 106, (int)"crypto/conf/conf_lib.c", 270);
    }
    return 0;
  }
  return result;
}
