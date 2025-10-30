bool __fastcall sub_2B640C(_DWORD *a1)
{
  int v2; // r0
  int v4; // r4
  unsigned int v5; // r0
  unsigned int v6; // r4
  bool v7; // cc

  v2 = sub_2EF5B0(*a1, 0, 7);
  if ( v2 )
    return v2 == 77;
  v4 = sub_2EF5B0(*a1, 0, 6);
  if ( v4 > 17 )
    sub_2A6BBC("elf32-arm.c", 3570);
  v5 = v4 - 11;
  v6 = v4 - 16;
  v7 = v6 > 1;
  if ( v6 > 1 )
    v7 = v5 > 2;
  return !v7;
}
