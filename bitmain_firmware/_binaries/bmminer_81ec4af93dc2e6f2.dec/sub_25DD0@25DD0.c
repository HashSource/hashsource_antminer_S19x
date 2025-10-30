int __fastcall sub_25DD0(int result)
{
  int v1; // r4
  float v2; // s15
  void *v3; // r3
  int v4; // r3
  int v5; // r3
  int v6; // r3
  int v7; // r3
  int v8; // r3
  int v9; // r3
  int v10; // r3
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v1 = result;
  if ( (unsigned int)(*(_DWORD *)(result + 144) - 1000) > 0x3E8 )
  {
    *(_DWORD *)(result + 144) = 1560;
    if ( (unsigned int)off_AFC24 > 3 )
    {
      snprintf(s, 0x800u, "set default open_core_high_voltage: %d\n", 1560);
      result = sub_3AF5C(3, s, 0, v7);
    }
  }
  if ( (unsigned int)(*(_DWORD *)(v1 + 148) - 1000) > 0x3E8 )
  {
    *(_DWORD *)(v1 + 148) = 1500;
    if ( (unsigned int)off_AFC24 > 3 )
    {
      snprintf(s, 0x800u, "set default inc_freq_voltage: %d\n", 1500);
      result = sub_3AF5C(3, s, 0, v8);
    }
  }
  v2 = *(float *)(v1 + 152);
  if ( v2 < 1.0 || v2 > 100.0 )
  {
    v3 = off_AFC24;
    *(_DWORD *)(v1 + 152) = 1086849024;
    if ( (unsigned int)v3 > 3 )
    {
      snprintf(s, 0x800u, "set default inc_freq_step: %f\n", 6.25);
      result = sub_3AF5C(3, s, 0, v4);
    }
  }
  if ( (unsigned int)(*(_DWORD *)(v1 + 156) - 100) > 0x384 )
  {
    *(_DWORD *)(v1 + 156) = 200;
    if ( (unsigned int)off_AFC24 > 3 )
    {
      snprintf(s, 0x800u, "set default inc_freq_delay: %d\n", 200);
      result = sub_3AF5C(3, s, 0, v9);
    }
  }
  if ( *(int *)(v1 + 160) < 0 )
  {
    *(_DWORD *)(v1 + 160) = 0;
    if ( (unsigned int)off_AFC24 > 3 )
    {
      snprintf(s, 0x800u, "set default poweron_with_reset_high: %d\n", 0);
      result = sub_3AF5C(3, s, 0, v5);
    }
  }
  if ( (unsigned int)(*(_DWORD *)(v1 + 164) - 1) > 0x4F )
  {
    *(_DWORD *)(v1 + 164) = 50;
    if ( (unsigned int)off_AFC24 > 3 )
    {
      snprintf(s, 0x800u, "set default pid_target_temp: %d\n", 50);
      result = sub_3AF5C(3, s, 0, v10);
    }
  }
  if ( (unsigned int)(*(_DWORD *)(v1 + 168) - 1) >= 0x1F4 )
  {
    *(_DWORD *)(v1 + 168) = 5;
    if ( (unsigned int)off_AFC24 > 3 )
    {
      snprintf(s, 0x800u, "set default voltage_adjust_setp: %d\n", 5);
      return sub_3AF5C(3, s, 0, v6);
    }
  }
  return result;
}
