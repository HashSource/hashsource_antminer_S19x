int __fastcall sub_417F4(float *a1, int a2)
{
  float v2; // s0
  char v6[52]; // [sp+48h] [bp-34h] BYREF

  sub_3DFBC(a1, a2);
  sub_1E938(v6, 0x30u);
  printf("%s ", v6);
  printf("%s : get all chain min freq %f\n", "inc_freq_with_matrix", v2);
  snprintf(&byte_63CBD0[256], 0x100u, "get all chain min freq %f", v2);
  sub_3CC5C((int)&byte_63CBD0[256], v6);
  sub_3E000(a1, a2);
  sub_1E938(v6, 0x30u);
  printf("%s ", v6);
  printf("%s : set freq from %.2f to %.2f by matrix\n", "inc_freq_with_matrix", v2, v2);
  snprintf(&byte_63CBD0[512], 0x100u, "set freq from %.2f to %.2f by matrix", v2, v2);
  sub_3CC5C((int)&byte_63CBD0[512], v6);
  sub_1E938(v6, 0x30u);
  printf("%s ", v6);
  printf("%s : set freq by matrix over\n", "inc_freq_with_matrix");
  strcpy(byte_63CFD4, "set freq by matrix over");
  return sub_3CC5C((int)byte_63CFD4, v6);
}
