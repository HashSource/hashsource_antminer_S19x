int sub_42A18()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r4
  int result; // r0
  char v3[2048]; // [sp+0h] [bp-800h] BYREF

  v0 = calloc(1u, 0x188u);
  v1 = v0;
  if ( !v0 )
    _assert_fail("cgpu", "driver-btm-c5_socketa.c", 0x28u, "bitmain_c5_detect");
  v0[1] = &unk_689C8;
  v0[8] = 0;
  v0[37] = 1;
  if ( sub_4279C() )
  {
    if ( byte_74500 || byte_68BD4 || dword_67DB4 > 2 )
    {
      strcpy(v3, "cgminer socket init failes.");
      sub_20F58(3, v3, 0);
    }
  }
  else if ( byte_74500 || byte_68BD4 || dword_67DB4 > 5 )
  {
    strcpy(v3, "cgminer socket init succeeds.");
    sub_20F58(6, v3, 0);
  }
  if ( dword_68DE8 )
    sub_3FB54();
  result = sub_3EFD4(v1);
  if ( !result )
    _assert_fail("add_cgpu(cgpu)", "driver-btm-c5_socketa.c", 0x3Cu, "bitmain_c5_detect");
  return result;
}
