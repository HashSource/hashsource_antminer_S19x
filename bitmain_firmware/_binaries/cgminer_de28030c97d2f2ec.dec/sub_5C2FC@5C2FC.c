int sub_5C2FC()
{
  int result; // r0
  char v1[2048]; // [sp+Ch] [bp-810h] BYREF
  _BYTE v2[4]; // [sp+80Ch] [bp-10h] BYREF
  void *v3; // [sp+810h] [bp-Ch]
  _DWORD *v4; // [sp+814h] [bp-8h]

  v4 = calloc(1u, 0x188u);
  v3 = &unk_876A0;
  if ( !v4 )
    _assert_fail("cgpu", "driver-btm-c5_socketa.c", 0x33u, "bitmain_c5_detect");
  v4[1] = v3;
  v4[8] = 0;
  v4[37] = 1;
  if ( sub_5BC40() )
  {
    if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
    {
      strcpy(v1, "cgminer socket init failes.");
      sub_1E4EC(3, v1, 0);
    }
  }
  else if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
  {
    strcpy(v1, "cgminer socket init succeeds.");
    sub_1E4EC(6, v1, 0);
  }
  if ( dword_87AAC )
    sub_4E8F0();
  v2[0] = 0;
  sub_2251C(2000);
  while ( 1 )
  {
    sub_585B0((int)v2, 1);
    sub_2251C(1000);
    sub_5BF6C(&stru_954C8, "driver-btm-c5_socketa.c", "bitmain_c5_detect", 77);
    if ( dword_954E8 )
      break;
    sub_5C09C(&stru_954C8, "driver-btm-c5_socketa.c", "bitmain_c5_detect", 83);
  }
  sub_5C09C(&stru_954C8, "driver-btm-c5_socketa.c", "bitmain_c5_detect", 79);
  if ( byte_91F58 || byte_87769 || dword_8697C > 4 )
  {
    strcpy(v1, "bmminer init done!!!");
    sub_1E4EC(5, v1, 0);
  }
  result = sub_4CD44(v4);
  if ( !result )
    _assert_fail("add_cgpu(cgpu)", "driver-btm-c5_socketa.c", 0x55u, "bitmain_c5_detect");
  return result;
}
