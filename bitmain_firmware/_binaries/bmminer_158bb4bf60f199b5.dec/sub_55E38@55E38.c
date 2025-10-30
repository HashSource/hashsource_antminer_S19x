_DWORD *sub_55E38()
{
  _DWORD *v0; // r4
  char v2[2048]; // [sp+8h] [bp-800h] BYREF

  v0 = sub_496AC(1u, 0x1C0u, "cgminer.c", "make_work", 2269);
  if ( !v0 )
  {
    strcpy(v2, "Failed to calloc work in make_work");
    sub_47AB4(3, v2, 1);
    sub_54CCC(1, 1);
  }
  v0[85] = sub_55C64();
  return v0;
}
