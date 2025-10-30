int __fastcall sub_2B68BC(int result, int a2, int a3)
{
  int v5; // r4
  int v6; // r2

  if ( *(_DWORD *)(result + 44) != 4 )
    __und(0);
  v5 = result;
  if ( !*(_DWORD *)(result + 48) )
    result = sub_2A6BBC("elf32-arm.c", 9128);
  if ( !a2 )
    sub_2A6BF0((int)"elf32-arm.c", 9130, (int)"elf32_arm_allocate_dynrelocs");
  if ( *(_DWORD *)(v5 + 432) )
    v6 = 8;
  else
    v6 = 12;
  *(_DWORD *)(a2 + 36) += a3 * v6;
  return result;
}
