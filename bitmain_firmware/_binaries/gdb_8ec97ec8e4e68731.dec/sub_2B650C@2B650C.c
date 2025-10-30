bool __fastcall sub_2B650C(int a1)
{
  int v1; // r4
  _BOOL4 result; // r0

  v1 = sub_2EF5B0(a1, 0, 6);
  if ( v1 > 17 )
    sub_2A6BBC("elf32-arm.c", 3616);
  result = v1 > 9;
  if ( v1 == 8 )
    return 1;
  return result;
}
