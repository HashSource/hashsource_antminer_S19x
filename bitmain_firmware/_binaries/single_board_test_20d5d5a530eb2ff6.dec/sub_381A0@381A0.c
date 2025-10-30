int __fastcall sub_381A0(_BYTE *a1)
{
  char v2; // r3
  char v3; // r3
  char v5; // [sp+4h] [bp-34h] BYREF
  char v6; // [sp+5h] [bp-33h]
  char v7; // [sp+6h] [bp-32h]
  char v8[52]; // [sp+8h] [bp-30h] BYREF

  v5 = a1[120];
  v6 = 0;
  v7 = 0;
  byte_6E32A8 = strtol(&v5, 0, 10);
  sub_1E938(v8, 0x30u);
  printf("%s ", v8);
  printf("%s : pcb_version_v1 = %d\n", "get_hardware_infor", (unsigned __int8)byte_6E32A8);
  snprintf(&byte_62A868[2048], 0x100u, "pcb_version_v1 = %d", (unsigned __int8)byte_6E32A8);
  sub_3CC5C(&byte_62A868[2048], v8);
  v2 = a1[122];
  v5 = a1[121];
  v6 = v2;
  byte_6E32A9 = strtol(&v5, 0, 10);
  sub_1E938(v8, 0x30u);
  printf("%s ", v8);
  printf("%s : pcb_version_v2 = %02d\n", "get_hardware_infor", (unsigned __int8)byte_6E32A9);
  snprintf(&byte_62A868[2304], 0x100u, "pcb_version_v2 = %02d", (unsigned __int8)byte_6E32A9);
  sub_3CC5C(&byte_62A868[2304], v8);
  v3 = a1[123];
  v6 = 0;
  v5 = v3;
  byte_6E32AA = strtol(&v5, 0, 10);
  sub_1E938(v8, 0x30u);
  printf("%s ", v8);
  printf("%s : bom_version_v1 = %d\n", "get_hardware_infor", (unsigned __int8)byte_6E32AA);
  snprintf(&byte_62A868[2560], 0x100u, "bom_version_v1 = %d", (unsigned __int8)byte_6E32AA);
  sub_3CC5C(&byte_62A868[2560], v8);
  v5 = a1[124];
  byte_6E32AB = strtol(&v5, 0, 10);
  sub_1E938(v8, 0x30u);
  printf("%s ", v8);
  printf("%s : bom_version_v2 = %d\n", "get_hardware_infor", (unsigned __int8)byte_6E32AB);
  snprintf(&byte_62A868[2816], 0x100u, "bom_version_v2 = %d", (unsigned __int8)byte_6E32AB);
  return sub_3CC5C(&byte_62A868[2816], v8);
}
