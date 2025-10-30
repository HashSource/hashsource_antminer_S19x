void __noreturn sub_20F90()
{
  int v0; // r0
  time_t v1; // r5
  unsigned int v2; // r0
  time_t v3; // r0
  unsigned int v4; // r4
  unsigned int v5; // r11
  int v6; // r0

  v0 = prctl(15, "chk_sys", 0);
  sub_2F7DC(v0);
  v1 = sub_20A08();
  while ( 1 )
  {
    if ( sub_226B0() == 1 )
    {
      v2 = sub_20A08() - v1;
      if ( qword_241D50 || v2 > 0x708 )
        break;
    }
    sub_4A804(10);
  }
  dword_A06D0 = sub_20A08();
  v3 = sub_20B28();
LABEL_7:
  v4 = 1;
  while ( 1 )
  {
    if ( v4 == 5 * (v4 / 5) )
    {
      v3 = sub_20EC8();
      if ( v3 )
        goto LABEL_7;
    }
    v5 = v4 % 0x3C;
    if ( v4 == 60 * (v4 / 0x3C) )
    {
LABEL_19:
      v5 = 0;
      sub_23590(v3);
    }
    if ( v4 == 1800 * (v4 / 0x708) )
    {
      sub_20A38();
      sub_14BF4();
      v3 = sub_20B48();
      if ( v3 )
        goto LABEL_7;
    }
    if ( v4 == 21600 * (v4 / 0x5460) )
      sub_20E60();
    if ( !v5 )
    {
      v6 = sub_2F354();
      sub_2F5AC(v6);
    }
    if ( v4 == 10 * (v4 / 0xA) )
      sub_2F984();
    ++v4;
    v3 = sub_4A804(1000);
    if ( v4 == 120 )
    {
      byte_A06B8 = 1;
      v3 = sub_20EC8();
      if ( v3 )
        goto LABEL_7;
      goto LABEL_19;
    }
  }
}
