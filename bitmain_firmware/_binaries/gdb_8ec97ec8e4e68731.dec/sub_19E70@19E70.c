int __fastcall sub_19E70(int a1, int a2)
{
  int result; // r0

  result = sub_163E78();
  if ( result )
    return sub_2594B0(a2, "arm_dump_tdep: Lowest pc = 0x%lx", *(_DWORD *)(result + 36));
  return result;
}
