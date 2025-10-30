int sub_19E90()
{
  unsigned __int16 v0; // r0
  int v1; // r5
  char v3[2048]; // [sp+0h] [bp-800h] BYREF

  v0 = sub_731E4();
  v1 = v0;
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(v3, 0x800u, "power type version: 0x%04x\n", v0);
    sub_47AB4(3, v3, 0);
    if ( v1 == 66 )
    {
      dword_A061C = 2000;
      dword_A0624 = 1850;
      byte_A0614 = 0;
      dword_A0618 = 0;
      dword_A0620 = 1800;
      dword_A0628 = 1800;
      if ( (unsigned int)dword_9E31C > 3 )
      {
        strcpy(v3, "Power init:\n");
        sub_47AB4(3, v3, 0);
        if ( (unsigned int)dword_9E31C > 3 )
        {
          snprintf(v3, 0x800u, "current_voltage_raw     = %d\n", dword_A0618);
          sub_47AB4(3, v3, 0);
          if ( (unsigned int)dword_9E31C <= 3 )
            return 0;
          snprintf(v3, 0x800u, "highest_voltage_raw     = %d\n", dword_A061C);
          sub_47AB4(3, v3, 0);
          if ( (unsigned int)dword_9E31C <= 3 )
            return 0;
          snprintf(v3, 0x800u, "working_voltage_raw     = %d\n", dword_A0620);
          sub_47AB4(3, v3, 0);
          if ( (unsigned int)dword_9E31C <= 3 )
            return 0;
          snprintf(v3, 0x800u, "higher_voltage_raw      = %d\n", dword_A0624);
          sub_47AB4(3, v3, 0);
        }
        if ( (unsigned int)dword_9E31C > 3 )
        {
          snprintf(v3, 0x800u, "check_asic_voltage_raw  = %d\n", dword_A0628);
          sub_47AB4(3, v3, 0);
        }
      }
      return 0;
    }
    if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy(v3, "power type version error\n");
      sub_47AB4(3, v3, 0);
    }
  }
  else if ( v0 == 66 )
  {
    dword_A061C = 2000;
    dword_A0624 = 1850;
    byte_A0614 = 0;
    dword_A0618 = 0;
    dword_A0620 = 1800;
    dword_A0628 = 1800;
    return 0;
  }
  sub_31794(12, 0);
  sub_226C0(8, "get power type version failed!");
  return -1;
}
