int sub_27EA0()
{
  char v1[52]; // [sp+40h] [bp-34h] BYREF

  sub_1E938(v1, 0x30u);
  printf("%s ", v1);
  printf("%s : algorithm_and_key_version:             0x%02x\n", "print_eeprom_data", (unsigned __int8)byte_6E3274);
  snprintf(&byte_60C4D0[256], 0x100u, "algorithm_and_key_version:             0x%02x", (unsigned __int8)byte_6E3274);
  sub_3CC5C(&byte_60C4D0[256], v1);
  sub_1E938(v1, 0x30u);
  printf("%s ", v1);
  printf("%s : zhiju_information_length:              %d\n", "print_eeprom_data", (unsigned __int8)byte_6E3275);
  snprintf(&byte_60C4D0[512], 0x100u, "zhiju_information_length:              %d", (unsigned __int8)byte_6E3275);
  sub_3CC5C(&byte_60C4D0[512], v1);
  sub_1E938(v1, 0x30u);
  printf("%s ", v1);
  printf("%s : zhiju_information_format_version:      %d\n", "print_eeprom_data", (unsigned __int8)byte_6E3276);
  snprintf(&byte_60C4D0[768], 0x100u, "zhiju_information_format_version:      %d", (unsigned __int8)byte_6E3276);
  sub_3CC5C(&byte_60C4D0[768], v1);
  sub_1E938(v1, 0x30u);
  printf("%s ", v1);
  printf(
    "%s : hashboard_sn:                          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
    "print_eeprom_data",
    (unsigned __int8)off_6E3277,
    BYTE1(off_6E3277),
    BYTE2(off_6E3277),
    HIBYTE(off_6E3277),
    (unsigned __int8)dword_6E327B,
    BYTE1(dword_6E327B),
    BYTE2(dword_6E327B),
    HIBYTE(dword_6E327B),
    (unsigned __int8)dword_6E327F,
    BYTE1(dword_6E327F),
    BYTE2(dword_6E327F),
    HIBYTE(dword_6E327F),
    (unsigned __int8)dword_6E3283,
    BYTE1(dword_6E3283),
    BYTE2(dword_6E3283),
    HIBYTE(dword_6E3283),
    (unsigned __int8)byte_6E3287);
  snprintf(
    &byte_60C4D0[1024],
    0x100u,
    "hashboard_sn:                          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
    (unsigned __int8)off_6E3277,
    BYTE1(off_6E3277),
    BYTE2(off_6E3277),
    HIBYTE(off_6E3277),
    (unsigned __int8)dword_6E327B,
    BYTE1(dword_6E327B),
    BYTE2(dword_6E327B),
    HIBYTE(dword_6E327B),
    (unsigned __int8)dword_6E327F,
    BYTE1(dword_6E327F),
    BYTE2(dword_6E327F),
    HIBYTE(dword_6E327F),
    (unsigned __int8)dword_6E3283,
    BYTE1(dword_6E3283),
    BYTE2(dword_6E3283),
    HIBYTE(dword_6E3283),
    (unsigned __int8)byte_6E3287);
  sub_3CC5C(&byte_60C4D0[1024], v1);
  sub_1E938(v1, 0x30u);
  printf("%s ", v1);
  printf(
    "%s : chip_die:                              %c%c\n",
    "print_eeprom_data",
    (unsigned __int8)word_6E3288,
    HIBYTE(word_6E3288));
  snprintf(
    &byte_60C4D0[1280],
    0x100u,
    "chip_die:                              %c%c",
    (unsigned __int8)word_6E3288,
    HIBYTE(word_6E3288));
  sub_3CC5C(&byte_60C4D0[1280], v1);
  sub_1E938(v1, 0x30u);
  printf("%s ", v1);
  printf(
    "%s : chip_marking:                          %c%c%c%c%c%c%c%c%c%c%c%c%c\n",
    "print_eeprom_data",
    (unsigned __int8)off_6E328A,
    BYTE1(off_6E328A),
    BYTE2(off_6E328A),
    HIBYTE(off_6E328A),
    (unsigned __int8)dword_6E328E,
    BYTE1(dword_6E328E),
    BYTE2(dword_6E328E),
    HIBYTE(dword_6E328E),
    (unsigned __int8)dword_6E3292,
    BYTE1(dword_6E3292),
    BYTE2(dword_6E3292),
    HIBYTE(dword_6E3292),
    (unsigned __int8)byte_6E3296);
  snprintf(
    &byte_60C4D0[1536],
    0x100u,
    "chip_marking:                          %c%c%c%c%c%c%c%c%c%c%c%c%c",
    (unsigned __int8)off_6E328A,
    BYTE1(off_6E328A),
    BYTE2(off_6E328A),
    HIBYTE(off_6E328A),
    (unsigned __int8)dword_6E328E,
    BYTE1(dword_6E328E),
    BYTE2(dword_6E328E),
    HIBYTE(dword_6E328E),
    (unsigned __int8)dword_6E3292,
    BYTE1(dword_6E3292),
    BYTE2(dword_6E3292),
    HIBYTE(dword_6E3292),
    (unsigned __int8)byte_6E3296);
  sub_3CC5C(&byte_60C4D0[1536], v1);
  sub_1E938(v1, 0x30u);
  printf("%s ", v1);
  printf("%s : chip_bin:                              %d\n", "print_eeprom_data", (unsigned __int8)byte_6E3297);
  snprintf(&byte_60C4D0[1792], 0x100u, "chip_bin:                              %d", (unsigned __int8)byte_6E3297);
  sub_3CC5C(&byte_60C4D0[1792], v1);
  sub_1E938(v1, 0x30u);
  printf("%s ", v1);
  printf(
    "%s : chip_ft_program_version:               %c%c%c%c%c%c%c%c%c\n",
    "print_eeprom_data",
    (unsigned __int8)off_6E3298,
    BYTE1(off_6E3298),
    BYTE2(off_6E3298),
    HIBYTE(off_6E3298),
    (unsigned __int8)dword_6E329C,
    BYTE1(dword_6E329C),
    BYTE2(dword_6E329C),
    HIBYTE(dword_6E329C),
    (unsigned __int8)byte_6E32A0);
  snprintf(
    &byte_60C4D0[2048],
    0x100u,
    "chip_ft_program_version:               %c%c%c%c%c%c%c%c%c",
    (unsigned __int8)off_6E3298,
    BYTE1(off_6E3298),
    BYTE2(off_6E3298),
    HIBYTE(off_6E3298),
    (unsigned __int8)dword_6E329C,
    BYTE1(dword_6E329C),
    BYTE2(dword_6E329C),
    HIBYTE(dword_6E329C),
    (unsigned __int8)byte_6E32A0);
  sub_3CC5C(&byte_60C4D0[2048], v1);
  sub_1E938(v1, 0x30u);
  printf("%s ", v1);
  printf("%s : asic_sensor:                           0x%02x\n", "print_eeprom_data", (unsigned __int8)byte_6E32A1);
  snprintf(&byte_60C4D0[2304], 0x100u, "asic_sensor:                           0x%02x", (unsigned __int8)byte_6E32A1);
  sub_3CC5C(&byte_60C4D0[2304], v1);
  sub_1E938(v1, 0x30u);
  printf("%s ", v1);
  printf(
    "%s : asic_sensor_addr:                      %d, %d, %d, %d\n",
    "print_eeprom_data",
    (unsigned __int8)byte_6E32A2,
    (unsigned __int8)byte_6E32A3,
    (unsigned __int8)byte_6E32A4,
    (unsigned __int8)byte_6E32A5);
  snprintf(
    &byte_60C4D0[2560],
    0x100u,
    "asic_sensor_addr:                      %d, %d, %d, %d",
    (unsigned __int8)byte_6E32A2,
    (unsigned __int8)byte_6E32A3,
    (unsigned __int8)byte_6E32A4,
    (unsigned __int8)byte_6E32A5);
  sub_3CC5C(&byte_60C4D0[2560], v1);
  sub_1E938(v1, 0x30u);
  printf("%s ", v1);
  printf("%s : pic_sensor:                            0x%02x\n", "print_eeprom_data", (unsigned __int8)byte_6E32A6);
  snprintf(&byte_60C4D0[2816], 0x100u, "pic_sensor:                            0x%02x", (unsigned __int8)byte_6E32A6);
  sub_3CC5C(&byte_60C4D0[2816], v1);
  sub_1E938(v1, 0x30u);
  printf("%s ", v1);
  printf("%s : pic_sensor_addr:                       0x%02x\n", "print_eeprom_data", (unsigned __int8)byte_6E32A7);
  snprintf(&byte_60C4D0[3072], 0x100u, "pic_sensor_addr:                       0x%02x", (unsigned __int8)byte_6E32A7);
  sub_3CC5C(&byte_60C4D0[3072], v1);
  sub_1E938(v1, 0x30u);
  printf("%s ", v1);
  printf("%s : pcb_version_v1:                        %d\n", "print_eeprom_data", (unsigned __int8)byte_6E32A8);
  snprintf(&byte_60C4D0[3328], 0x100u, "pcb_version_v1:                        %d", (unsigned __int8)byte_6E32A8);
  sub_3CC5C(&byte_60C4D0[3328], v1);
  sub_1E938(v1, 0x30u);
  printf("%s ", v1);
  printf("%s : pcb_version_v2:                        %d\n", "print_eeprom_data", (unsigned __int8)byte_6E32A9);
  snprintf(&byte_60C4D0[3584], 0x100u, "pcb_version_v2:                        %d", (unsigned __int8)byte_6E32A9);
  sub_3CC5C(&byte_60C4D0[3584], v1);
  sub_1E938(v1, 0x30u);
  printf("%s ", v1);
  printf("%s : bom_version_v1:                        %d\n", "print_eeprom_data", (unsigned __int8)byte_6E32AA);
  snprintf(&byte_60C4D0[3840], 0x100u, "bom_version_v1:                        %d", (unsigned __int8)byte_6E32AA);
  sub_3CC5C(&byte_60C4D0[3840], v1);
  sub_1E938(v1, 0x30u);
  printf("%s ", v1);
  printf("%s : bom_version_v2:                        %d\n", "print_eeprom_data", (unsigned __int8)byte_6E32AB);
  snprintf(&byte_60C4D0[4096], 0x100u, "bom_version_v2:                        %d", (unsigned __int8)byte_6E32AB);
  sub_3CC5C(&byte_60C4D0[4096], v1);
  sub_1E938(v1, 0x30u);
  printf("%s ", v1);
  printf(
    "%s : chip_technology:                       %c%c\n",
    "print_eeprom_data",
    (unsigned __int8)word_6E32AC,
    HIBYTE(word_6E32AC));
  snprintf(
    &byte_60C4D0[4352],
    0x100u,
    "chip_technology:                       %c%c",
    (unsigned __int8)word_6E32AC,
    HIBYTE(word_6E32AC));
  sub_3CC5C(&byte_60C4D0[4352], v1);
  sub_1E938(v1, 0x30u);
  printf("%s ", v1);
  printf(
    "%s : voltage:                               %d\n",
    "print_eeprom_data",
    (unsigned __int8)byte_6E32AF | ((unsigned __int8)byte_6E32AE << 8));
  snprintf(
    &byte_60C4D0[4608],
    0x100u,
    "voltage:                               %d",
    (unsigned __int8)byte_6E32AF | ((unsigned __int8)byte_6E32AE << 8));
  sub_3CC5C(&byte_60C4D0[4608], v1);
  sub_1E938(v1, 0x30u);
  printf("%s ", v1);
  printf(
    "%s : frequency:                             %d\n",
    "print_eeprom_data",
    (unsigned __int8)byte_6E32B1 | ((unsigned __int8)byte_6E32B0 << 8));
  snprintf(
    &byte_60C4D0[4864],
    0x100u,
    "frequency:                             %d",
    (unsigned __int8)byte_6E32B1 | ((unsigned __int8)byte_6E32B0 << 8));
  sub_3CC5C(&byte_60C4D0[4864], v1);
  sub_1E938(v1, 0x30u);
  printf("%s ", v1);
  printf(
    "%s : nonce_rate:                            %d\n",
    "print_eeprom_data",
    (unsigned __int8)byte_6E32B3 | ((unsigned __int8)byte_6E32B2 << 8));
  snprintf(
    byte_60D8D0,
    0x100u,
    "nonce_rate:                            %d",
    (unsigned __int8)byte_6E32B3 | ((unsigned __int8)byte_6E32B2 << 8));
  sub_3CC5C(byte_60D8D0, v1);
  sub_1E938(v1, 0x30u);
  printf("%s ", v1);
  printf("%s : pcb_temprature_in:                     %d\n", "print_eeprom_data", byte_6E32B4);
  snprintf(&byte_60D8D0[256], 0x100u, "pcb_temprature_in:                     %d", byte_6E32B4);
  sub_3CC5C(&byte_60D8D0[256], v1);
  sub_1E938(v1, 0x30u);
  printf("%s ", v1);
  printf("%s : pcb_temprature_out:                    %d\n", "print_eeprom_data", byte_6E32B5);
  snprintf(&byte_60D8D0[512], 0x100u, "pcb_temprature_out:                    %d", byte_6E32B5);
  sub_3CC5C(&byte_60D8D0[512], v1);
  sub_1E938(v1, 0x30u);
  printf("%s ", v1);
  printf("%s : test_version:                          %d\n", "print_eeprom_data", (unsigned __int8)byte_6E32B6);
  snprintf(&byte_60D8D0[768], 0x100u, "test_version:                          %d", (unsigned __int8)byte_6E32B6);
  sub_3CC5C(&byte_60D8D0[768], v1);
  sub_1E938(v1, 0x30u);
  printf("%s ", v1);
  printf("%s : test_standard:                         %d\n", "print_eeprom_data", (unsigned __int8)byte_6E32B7);
  snprintf(&byte_60D8D0[1024], 0x100u, "test_standard:                         %d", (unsigned __int8)byte_6E32B7);
  sub_3CC5C(&byte_60D8D0[1024], v1);
  sub_1E938(v1, 0x30u);
  printf("%s ", v1);
  printf("%s : zhiju_information_crc5:                0x%02x\n", "print_eeprom_data", (unsigned __int8)byte_6E32BA);
  snprintf(&byte_60D8D0[1280], 0x100u, "zhiju_information_crc5:                0x%02x", (unsigned __int8)byte_6E32BA);
  return sub_3CC5C(&byte_60D8D0[1280], v1);
}
