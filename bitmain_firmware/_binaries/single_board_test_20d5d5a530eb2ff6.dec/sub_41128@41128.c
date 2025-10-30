int sub_41128()
{
  int v0; // r0
  char v2[48]; // [sp+8h] [bp-30h] BYREF

  sub_77D3C(*(unsigned __int8 *)dword_705300, *(unsigned __int8 *)(dword_705300 + 76));
  sub_1E938(v2, 0x30u);
  printf("%s ", v2);
  printf("%s : Set Diode_Vdd_Mux_Sel = 0x%03x\n", "set_register_stage_2", *(_DWORD *)(dword_705300 + 76));
  snprintf(byte_63C3D0, 0x100u, "Set Diode_Vdd_Mux_Sel = 0x%03x", *(_DWORD *)(dword_705300 + 76));
  sub_3CC5C((int)byte_63C3D0, v2);
  usleep(0x2710u);
  sub_1E938(v2, 0x30u);
  printf("%s ", v2);
  printf("%s : Set chain inactive\n", "set_register_stage_2");
  strcpy(byte_63C4D0, "Set chain inactive");
  sub_3CC5C((int)byte_63C4D0, v2);
  sub_7771C(*(unsigned __int8 *)dword_705300);
  usleep(0x2710u);
  sub_1E938(v2, 0x30u);
  printf("%s ", v2);
  printf("%s : Set asic address\n", "set_register_stage_2");
  strcpy(byte_63C5D0, "Set asic address");
  sub_3CC5C((int)byte_63C5D0, v2);
  sub_77720(*(unsigned __int8 *)dword_705300, *(_DWORD *)(dword_705300 + 40));
  usleep(0x2710u);
  sub_784E8(
    *(unsigned __int8 *)dword_705300,
    *(unsigned __int8 *)(dword_705300 + 60),
    *(unsigned __int8 *)(dword_705300 + 64));
  sub_1E938(v2, 0x30u);
  printf("%s ", v2);
  printf(
    "%s : Set pulse_mode = 0x%02x, clk_sel = 0x%02x\n",
    "set_register_stage_2",
    *(_DWORD *)(dword_705300 + 60),
    *(_DWORD *)(dword_705300 + 64));
  snprintf(
    byte_63C6D0,
    0x100u,
    "Set pulse_mode = 0x%02x, clk_sel = 0x%02x",
    *(_DWORD *)(dword_705300 + 60),
    *(_DWORD *)(dword_705300 + 64));
  sub_3CC5C((int)byte_63C6D0, v2);
  usleep(0x2710u);
  sub_78510(
    *(unsigned __int8 *)dword_705300,
    *(unsigned __int8 *)(dword_705300 + 52),
    *(unsigned __int8 *)(dword_705300 + 64),
    *(unsigned __int8 *)(dword_705300 + 56));
  sub_1E938(v2, 0x30u);
  printf("%s ", v2);
  printf(
    "%s : Set pwth_sel = 0x%02x, ccdly_sel = 0x%02x, swpf_mode = 0x%02x\n",
    "set_register_stage_2",
    *(_DWORD *)(dword_705300 + 52),
    *(_DWORD *)(dword_705300 + 64),
    *(_DWORD *)(dword_705300 + 56));
  snprintf(
    &byte_63C6D0[256],
    0x100u,
    "Set pwth_sel = 0x%02x, ccdly_sel = 0x%02x, swpf_mode = 0x%02x",
    *(_DWORD *)(dword_705300 + 52),
    *(_DWORD *)(dword_705300 + 64),
    *(_DWORD *)(dword_705300 + 56));
  sub_3CC5C((int)&byte_63C6D0[256], v2);
  usleep(0x2710u);
  sub_77D3C(*(unsigned __int8 *)dword_705300, 3);
  sub_787B4(*(unsigned __int8 *)dword_705300);
  v0 = sub_78740(*(unsigned __int8 *)dword_705300, 1);
  sub_7122C(v0);
  sub_40D3C(*(unsigned __int8 *)(dword_705300 + 40));
  usleep(0x2710u);
  return usleep(0xF4240u);
}
