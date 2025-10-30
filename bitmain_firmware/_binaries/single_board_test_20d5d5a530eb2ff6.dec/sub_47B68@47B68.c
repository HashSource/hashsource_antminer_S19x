int __fastcall sub_47B68(int result, float *a2, int a3)
{
  int v4; // r5
  signed int v6; // r7
  float v7; // s15
  char v8[72]; // [sp+20h] [bp-48h] BYREF

  if ( result )
  {
    v4 = result;
    v6 = sub_3ED00(0, result, a3);
    v7 = (float)(a2[5] + 1.0) * (float)v6;
    a2[2] = (float)v6;
    a2[3] = v7;
    *(_DWORD *)a2 = (*(int (__fastcall **)(int))(v4 + 188))(v4);
    sub_1E938(v8, 0x30u);
    printf("%s ", v8);
    printf(
      "%s : from eeprom:reset freq range [%f,%f] eeprom_min_freq:%d, voltage:%d asics:%d\n",
      "reset_freq_range_from_eeprom",
      a2[2],
      a2[3],
      v6,
      *(_DWORD *)a2,
      a3);
    snprintf(
      byte_646CE4,
      0x100u,
      "from eeprom:reset freq range [%f,%f] eeprom_min_freq:%d, voltage:%d asics:%d",
      a2[2],
      a2[3],
      v6,
      *(_DWORD *)a2,
      a3);
    sub_3CC5C((int)byte_646CE4, v8);
    return 1;
  }
  return result;
}
