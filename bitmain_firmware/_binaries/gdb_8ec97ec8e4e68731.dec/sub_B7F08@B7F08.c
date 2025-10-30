int __fastcall sub_B7F08(int a1, int a2)
{
  int v2; // r4

  v2 = a2;
  if ( a2 < 0 || a2 >= ((int (*)(void))loc_166E9C)() )
  {
    sub_94700(
      (int)"arch-utils.c",
      70,
      "%s: Assertion `%s' failed.",
      "int legacy_register_sim_regno(gdbarch*, int)",
      "regnum >= 0 && regnum < gdbarch_num_regs (gdbarch)");
    return 0;
  }
  else
  {
    if ( !((int (__fastcall *)(int, int))loc_1677C0)(a1, v2)
      || !*(_BYTE *)((int (__fastcall *)(int, int))loc_1677C0)(a1, v2) )
    {
      return -2;
    }
    return v2;
  }
}
