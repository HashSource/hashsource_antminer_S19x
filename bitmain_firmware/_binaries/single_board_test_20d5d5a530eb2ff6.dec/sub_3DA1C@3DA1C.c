int __fastcall sub_3DA1C(unsigned int a1)
{
  int v2; // r0
  int v3; // r0
  double v4; // d8
  int v5; // r0
  int v6; // r0
  char v8[52]; // [sp+8h] [bp-34h] BYREF

  sub_1E938(v8, 0x30u);
  printf("%s ", v8);
  printf("%s : %s\n", "pf_power_on", "pf_power_on");
  strcpy(byte_6355C8, "pf_power_on");
  v2 = sub_3CC5C((int)byte_6355C8, v8);
  sub_7495C(v2);
  v3 = sub_75570(0);
  v4 = (double)a1 / 100.0;
  v5 = sub_75B90(v3);
  if ( v5 < 0 )
  {
    if ( sub_75B90(v5) < 0 )
    {
      sub_1E938(v8, 0x30u);
      printf("%s ", v8);
      printf("%s : set voltage failed\n", "pf_power_on");
      strcpy(byte_6356C8, "set voltage failed");
      sub_3CC5C((int)byte_6356C8, v8);
      return 0;
    }
    sub_1E938(v8, 0x30u);
    printf("%s ", v8);
    printf("%s : APW set voltage ok, voltage is %02f\n", "pf_power_on", v4);
    snprintf(byte_6357C8, 0x100u, "APW set voltage ok, voltage is %02f", v4);
    v5 = sub_3CC5C((int)byte_6357C8, v8);
  }
  v6 = sub_6F464(v5);
  if ( v6 && sub_6F464(v6) )
  {
    sub_1E938(v8, 0x30u);
    printf("%s ", v8);
    printf("%s : APW power on fail\n", "pf_power_on");
    strcpy(byte_6358C8, "APW power on fail");
    sub_3CC5C((int)byte_6358C8, v8);
    return 0;
  }
  else
  {
    sub_1E938(v8, 0x30u);
    printf("%s ", v8);
    printf("%s : APW power on ok\n", "pf_power_on");
    strcpy(byte_6359C8, "APW power on ok");
    sub_3CC5C((int)byte_6359C8, v8);
    return 1;
  }
}
