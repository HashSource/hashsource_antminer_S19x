bool __fastcall sub_2B6484(_DWORD *a1)
{
  int v2; // r0
  int v4; // r0
  int v5; // r4

  v2 = sub_2EF5B0(*a1, 0, 9);
  if ( v2 )
    return v2 == 2;
  v4 = sub_2EF5B0(*a1, 0, 6);
  v5 = v4;
  if ( v4 > 17 )
  {
    sub_2A6BBC("elf32-arm.c", 3597);
  }
  else if ( (v4 & 0xFFFFFFFD) == 8 )
  {
    return 1;
  }
  if ( (unsigned int)(v5 - 13) <= 2 )
    return 1;
  return v5 == 17;
}
