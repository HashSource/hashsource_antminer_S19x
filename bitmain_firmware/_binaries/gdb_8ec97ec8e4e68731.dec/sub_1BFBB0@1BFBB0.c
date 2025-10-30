const char *sub_1BFBB0()
{
  int v1[3]; // [sp+0h] [bp-Ch] BYREF

  sub_1B141C(v1, "_p_initialize", 0, 0);
  if ( !v1[0] )
    return 0;
  sub_1B141C(v1, "_p__M0_main_program", 0, 0);
  if ( v1[0] )
    return "_p__M0_main_program";
  sub_1B141C(v1, "pascal_main_program", 0, 0);
  if ( v1[0] )
    return "pascal_main_program";
  else
    return 0;
}
