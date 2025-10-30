Elf32_Dyn **__fastcall sub_30958(Elf32_Dyn **result)
{
  int v1; // r2
  char v2; // r3
  int v3; // r1
  int v4; // r3
  Elf32_Dyn **v5; // [sp+4h] [bp-10h]

  if ( (Elf32_Dyn **)kern_enable != result )
  {
    v1 = pll_control;
    v2 = pll_control;
    if ( pll_control )
      v2 = 1;
    if ( result )
      v3 = 0;
    else
      v3 = v2 & 1;
    if ( v3 )
    {
      v5 = result;
      sub_2ED68();
      v1 = pll_control;
      result = v5;
      v2 = pll_control;
      if ( pll_control )
        v2 = 1;
    }
    if ( result )
      v4 = v2 & 1;
    else
      v4 = 0;
    kern_enable = (int)result;
    if ( v4 )
    {
      result = sub_2F49C();
      v1 = pll_control;
    }
    if ( v1 )
    {
      if ( dword_BBE74 )
        return (Elf32_Dyn **)sub_2F724();
    }
  }
  return result;
}
