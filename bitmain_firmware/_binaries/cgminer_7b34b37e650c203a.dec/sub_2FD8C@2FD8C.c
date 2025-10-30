_DWORD *sub_2FD8C()
{
  _DWORD *v0; // r4
  char v2[2048]; // [sp+8h] [bp-800h] BYREF

  v0 = sub_22A44(1u, 0x1C0u, "cgminer.c", "make_work", 2274);
  if ( !v0 )
  {
    strcpy(v2, "Failed to calloc work in make_work");
    sub_20F58(3, v2, 1);
    sub_2E6B0(1, 1);
  }
  v0[85] = sub_2FBB8();
  return v0;
}
