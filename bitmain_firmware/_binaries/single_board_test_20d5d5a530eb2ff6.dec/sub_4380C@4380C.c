int __fastcall sub_4380C(float *a1)
{
  float v1; // s0
  double v3; // d0
  double v4; // d0
  double v5; // d0
  char v7[52]; // [sp+20h] [bp-34h] BYREF

  sub_1E938(v7, 0x30u);
  printf("%s ", v7);
  printf(
    "%s : online_case_time[%lld], end_case_time[%lld], validate_case_time[%lld]\n",
    "show_sweep_summary",
    qword_7050E0 - qword_7050D8,
    *(_QWORD *)&dword_7050E8 - qword_7050D8,
    *(_QWORD *)&dword_7050E8 - qword_7050E0);
  snprintf(
    byte_6406D8,
    0x100u,
    "online_case_time[%lld], end_case_time[%lld], validate_case_time[%lld]",
    qword_7050E0 - qword_7050D8,
    *(_QWORD *)&dword_7050E8 - qword_7050D8,
    *(_QWORD *)&dword_7050E8 - qword_7050E0);
  sub_3CC5C((int)byte_6406D8, v7);
  sub_1E938(v7, 0x30u);
  printf("%s ", v7);
  printf("%s : matrix online freq min[%f]\n", "show_sweep_summary", flt_7050C4);
  snprintf(&byte_6406D8[256], 0x100u, "matrix online freq min[%f]", flt_7050C4);
  sub_3CC5C((int)&byte_6406D8[256], v7);
  sub_1E938(v7, 0x30u);
  printf("%s ", v7);
  printf("%s : matrix online freq max[%f]\n", "show_sweep_summary", flt_7050C8);
  snprintf(byte_6408D8, 0x100u, "matrix online freq max[%f]", flt_7050C8);
  sub_3CC5C((int)byte_6408D8, v7);
  sub_1E938(v7, 0x30u);
  printf("%s ", v7);
  printf("%s : matrix online freq avg[%f]\n", "show_sweep_summary", flt_7050CC);
  snprintf(&byte_6408D8[256], 0x100u, "matrix online freq avg[%f]", flt_7050CC);
  sub_3CC5C((int)&byte_6408D8[256], v7);
  sub_1E938(v7, 0x30u);
  printf("%s ", v7);
  printf("%s : matrix online freq var[%f]\n", "show_sweep_summary", flt_7050D0);
  snprintf(&byte_6408D8[512], 0x100u, "matrix online freq var[%f]", flt_7050D0);
  sub_3CC5C((int)&byte_6408D8[512], v7);
  sub_1E938(v7, 0x30u);
  printf("%s ", v7);
  printf("%s : matrix online sweep to max freq board nonce rate [%f]\n", "show_sweep_summary", *(float *)&dword_7050D4);
  snprintf(&byte_6408D8[768], 0x100u, "matrix online sweep to max freq board nonce rate [%f]", *(float *)&dword_7050D4);
  sub_3CC5C((int)&byte_6408D8[768], v7);
  sub_1E938(v7, 0x30u);
  printf("%s ", v7);
  sub_3DFBC(a1, *(_DWORD *)(dword_705300 + 4));
  printf("%s : matrix freq min[%f]\n", "show_sweep_summary", v1);
  sub_3DFBC(a1, *(_DWORD *)(dword_705300 + 4));
  v3 = v1;
  snprintf(&byte_6408D8[1024], 0x100u, "matrix freq min[%f]", v3);
  sub_3CC5C((int)&byte_6408D8[1024], v7);
  sub_1E938(v7, 0x30u);
  printf("%s ", v7);
  sub_3E000(a1, *(_DWORD *)(dword_705300 + 4));
  printf("%s : matrix freq max[%f]\n", "show_sweep_summary", *(float *)&v3);
  sub_3E000(a1, *(_DWORD *)(dword_705300 + 4));
  v4 = *(float *)&v3;
  snprintf(&byte_6408D8[1280], 0x100u, "matrix freq max[%f]", v4);
  sub_3CC5C((int)&byte_6408D8[1280], v7);
  sub_1E938(v7, 0x30u);
  printf("%s ", v7);
  sub_3E040(a1, *(_DWORD *)(dword_705300 + 4));
  printf("%s : matrix freq avg[%f]\n", "show_sweep_summary", *(float *)&v4);
  sub_3E040(a1, *(_DWORD *)(dword_705300 + 4));
  v5 = *(float *)&v4;
  snprintf(&byte_6408D8[1536], 0x100u, "matrix freq avg[%f]", v5);
  sub_3CC5C((int)&byte_6408D8[1536], v7);
  sub_1E938(v7, 0x30u);
  printf("%s ", v7);
  sub_3EBD8(a1, *(_DWORD *)(dword_705300 + 4));
  printf("%s : matrix freq var[%f]\n", "show_sweep_summary", *(float *)&v5);
  sub_3EBD8(a1, *(_DWORD *)(dword_705300 + 4));
  snprintf(&byte_6408D8[1792], 0x100u, "matrix freq var[%f]", *(float *)&v5);
  sub_3CC5C((int)&byte_6408D8[1792], v7);
  sub_1E938(v7, 0x30u);
  printf("%s ", v7);
  printf("%s : matrix sweep to max freq board nonce rate [%f]\n", "show_sweep_summary", flt_70534C);
  snprintf(&byte_6408D8[2048], 0x100u, "matrix sweep to max freq board nonce rate [%f]", flt_70534C);
  return sub_3CC5C((int)&byte_6408D8[2048], v7);
}
