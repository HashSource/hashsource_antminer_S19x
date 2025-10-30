int sub_5B7C0()
{
  int result; // r0
  char v1[2048]; // [sp+Ch] [bp-810h] BYREF
  _BYTE v2[4]; // [sp+80Ch] [bp-10h] BYREF
  void *v3; // [sp+810h] [bp-Ch]
  _DWORD *v4; // [sp+814h] [bp-8h]

  v4 = calloc(1u, 0x188u);
  v3 = &unk_86508;
  if ( !v4 )
    _assert_fail("cgpu", "driver-btm-c5_socketa.c", 0x33u, "bitmain_c5_detect");
  v4[1] = v3;
  v4[8] = 0;
  v4[37] = 1;
  if ( sub_5B0E0() )
  {
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
    {
      strcpy(v1, "cgminer socket init failes.");
      sub_1DB6C(3, v1, 0);
    }
  }
  else if ( byte_90DC0 || byte_865D1 || dword_857E4 > 5 )
  {
    strcpy(v1, "cgminer socket init succeeds.");
    sub_1DB6C(6, v1, 0);
  }
  if ( dword_86914 )
    sub_4DC70();
  v2[0] = 0;
  sub_21CEC(2000);
  while ( 1 )
  {
    sub_57A3C((int)v2, 1);
    sub_21CEC(1000);
    sub_5B410(&stru_94330, "driver-btm-c5_socketa.c", "bitmain_c5_detect", 77);
    if ( dword_94350 )
      break;
    sub_5B548(&stru_94330, "driver-btm-c5_socketa.c", "bitmain_c5_detect", 83);
  }
  sub_5B548(&stru_94330, "driver-btm-c5_socketa.c", "bitmain_c5_detect", 79);
  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 4 )
  {
    strcpy(v1, "bmminer init done!!!");
    sub_1DB6C(5, v1, 0);
  }
  result = sub_4C07C(v4);
  if ( !result )
    _assert_fail("add_cgpu(cgpu)", "driver-btm-c5_socketa.c", 0x55u, "bitmain_c5_detect");
  return result;
}
