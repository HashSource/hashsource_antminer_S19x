int sub_5F848()
{
  int v0; // r0
  char v2[52]; // [sp+8h] [bp-34h] BYREF

  sub_77D3C((unsigned __int8)dword_21B3A4, *(unsigned __int8 *)(dword_223680 + 612));
  sub_1E938(v2, 0x30u);
  printf("%s ", v2);
  printf("%s : Set Diode_Vdd_Mux_Sel = 0x%03x\n", "set_asic_register_stage_2", *(_DWORD *)(dword_223680 + 612));
  snprintf(byte_64C53C, 0x100u, "Set Diode_Vdd_Mux_Sel = 0x%03x", *(_DWORD *)(dword_223680 + 612));
  sub_3CC5C((int)byte_64C53C, v2);
  usleep(0x2710u);
  sub_1E938(v2, 0x30u);
  printf("%s ", v2);
  printf("%s : Set chain inactive\n", "set_asic_register_stage_2");
  strcpy(byte_64C63C, "Set chain inactive");
  sub_3CC5C((int)byte_64C63C, v2);
  sub_7771C((unsigned __int8)dword_21B3A4);
  usleep(0x2710u);
  sub_1E938(v2, 0x30u);
  printf("%s ", v2);
  printf("%s : Set asic address\n", "set_asic_register_stage_2");
  strcpy(byte_64C73C, "Set asic address");
  sub_3CC5C((int)byte_64C73C, v2);
  sub_77720((unsigned __int8)dword_21B3A4, dword_6084C8);
  usleep(0x2710u);
  sub_784E8(
    (unsigned __int8)dword_21B3A4,
    *(unsigned __int8 *)(dword_223680 + 596),
    *(unsigned __int8 *)(dword_223680 + 600));
  sub_1E938(v2, 0x30u);
  printf("%s ", v2);
  printf(
    "%s : Set pulse_mode = 0x%02x, clk_sel = 0x%02x\n",
    "set_asic_register_stage_2",
    *(_DWORD *)(dword_223680 + 596),
    *(_DWORD *)(dword_223680 + 600));
  snprintf(
    byte_64C83C,
    0x100u,
    "Set pulse_mode = 0x%02x, clk_sel = 0x%02x",
    *(_DWORD *)(dword_223680 + 596),
    *(_DWORD *)(dword_223680 + 600));
  sub_3CC5C((int)byte_64C83C, v2);
  usleep(0x2710u);
  sub_78510(
    (unsigned __int8)dword_21B3A4,
    *(unsigned __int8 *)(dword_223680 + 588),
    *(unsigned __int8 *)(dword_223680 + 584),
    *(unsigned __int8 *)(dword_223680 + 592));
  sub_1E938(v2, 0x30u);
  printf("%s ", v2);
  printf(
    "%s : Set pwth_sel = 0x%02x, ccdly_sel = 0x%02x, swpf_mode = 0x%02x\n",
    "set_asic_register_stage_2",
    *(_DWORD *)(dword_223680 + 588),
    *(_DWORD *)(dword_223680 + 584),
    *(_DWORD *)(dword_223680 + 592));
  snprintf(
    &byte_64C83C[256],
    0x100u,
    "Set pwth_sel = 0x%02x, ccdly_sel = 0x%02x, swpf_mode = 0x%02x",
    *(_DWORD *)(dword_223680 + 588),
    *(_DWORD *)(dword_223680 + 584),
    *(_DWORD *)(dword_223680 + 592));
  sub_3CC5C((int)&byte_64C83C[256], v2);
  usleep(0x2710u);
  sub_77D3C((unsigned __int8)dword_21B3A4, 3);
  sub_787B4((unsigned __int8)dword_21B3A4);
  v0 = sub_78740((unsigned __int8)dword_21B3A4, 1);
  sub_7122C(v0);
  sub_5F6A0((unsigned __int8)dword_6084C8);
  usleep(0x2710u);
  return usleep(0xF4240u);
}
