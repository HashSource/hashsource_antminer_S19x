int __fastcall sub_221C4(int a1)
{
  double v1; // d0
  unsigned int v2; // r0
  unsigned int v3; // r0
  int v4; // r4
  int result; // r0
  int v6; // r3
  int v7; // r3
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  v2 = sleep(1u);
  v3 = sub_65B38(v2);
  if ( v1 < 0.0 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      snprintf(s, 0x800u, "bitmain_get_sample_voltage:%lf < 0", v1);
      sub_3B6AC(3, s, 0, v7);
    }
    v3 = sub_458A0(11, "power voltage read failed, pls check!");
  }
  else if ( v1 * 100.0 > (double)a1 * 1.1 || v1 * 100.0 < (double)a1 * 0.9 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      snprintf(s, 0x800u, "bitmain_get_sample_voltage:%lf , but set voltage:%d", v1, a1);
      sub_3B6AC(3, s, 0, v6);
    }
    v3 = sub_458A0(11, "power voltage abnormity");
  }
  v4 = 0;
  while ( 1 )
  {
    result = sub_65C64(v3);
    ++v4;
    if ( !result )
      break;
    if ( v4 == 5 * (v4 / 5) && (unsigned int)dword_B308C > 3 )
    {
      strcpy(s, "bitmain_get_power_status failed!");
      sub_3B6AC(3, s, v4 % 5, *(_DWORD *)"led!");
      v3 = sleep(3u);
      if ( v4 == 20 )
        return -1;
    }
    else
    {
      v3 = sleep(3u);
      if ( v4 == 20 )
        return -1;
    }
  }
  return result;
}
