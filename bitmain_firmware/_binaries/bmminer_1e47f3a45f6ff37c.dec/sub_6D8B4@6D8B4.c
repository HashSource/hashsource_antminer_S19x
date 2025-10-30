int sub_6D8B4()
{
  char v2[2048]; // [sp+Ch] [bp-808h] BYREF
  int v3; // [sp+80Ch] [bp-8h]

  v3 = 0;
  strcpy(v2, "i2c_sim_init start\n");
  sub_3B6AC(3, v2, 0, (int)v2);
  if ( access("/sys/class/gpio/gpio461/", 0) == -1 )
  {
    v3 = system("echo 461 > /sys/class/gpio/export");
    if ( v3 )
    {
      snprintf(v2, 0x800u, "[i2c_sim] echo %s > %s failed\n", "461", "/sys/class/gpio/export");
      sub_3B6AC(0, v2, 0, (int)v2);
      return v3;
    }
    strcpy(v2, "init gpio461\n");
    sub_3B6AC(3, v2, 0, (int)v2);
  }
  if ( access("/sys/class/gpio/gpio459/", 0) == -1 )
  {
    v3 = system("echo 459 > /sys/class/gpio/export");
    if ( v3 )
    {
      snprintf(v2, 0x800u, "[i2c_sim] echo %s > %s failed\n", "459", "/sys/class/gpio/export");
      sub_3B6AC(0, v2, 0, (int)v2);
      return v3;
    }
    strcpy(v2, "init gpio459\n");
    sub_3B6AC(3, v2, 0, (int)v2);
  }
  v3 = system("echo high > /sys/class/gpio/gpio461/direction");
  if ( v3 )
  {
    snprintf(v2, 0x800u, "[i2c_sim] echo high > %s failed\n", "/sys/class/gpio/gpio461/direction");
    sub_3B6AC(0, v2, 0, (int)v2);
    return v3;
  }
  else
  {
    v3 = system("echo high > /sys/class/gpio/gpio459/direction");
    if ( v3 )
    {
      snprintf(v2, 0x800u, "[i2c_sim] echo high > %s failed\n", "/sys/class/gpio/gpio459/direction");
      sub_3B6AC(0, v2, 0, (int)v2);
      return v3;
    }
    else
    {
      dword_536964 = 1;
      if ( dword_B3988 > 0 )
        close(dword_B3988);
      dword_B3988 = open("/sys/class/gpio/gpio459/value", 1);
      if ( dword_B3988 >= 0 )
      {
        if ( dword_B398C > 0 )
          close(dword_B398C);
        dword_B398C = open("/sys/class/gpio/gpio461/value", 1);
        if ( dword_B398C >= 0 )
        {
          if ( dword_B3990 > 0 )
            close(dword_B3990);
          dword_B3990 = open("/sys/class/gpio/gpio461/direction", 1);
          if ( dword_B3990 >= 0 )
          {
            snprintf(v2, 0x800u, "power i2c device:%s addr:0x%02x fd:%d\n", "sim_dev", 16, 255);
            sub_3B6AC(3, v2, 0, (int)v2);
            strcpy(v2, "i2c_sim_init end\n");
            sub_3B6AC(3, v2, 0, (int)v2);
            return 255;
          }
          else
          {
            strcpy(v2, "open gpio461 direction failed\n");
            sub_3B6AC(3, v2, 0, (int)v2);
            strcpy(v2, "open gpio461 direction failed\n");
            sub_3B6AC(0, v2, 0, (int)v2);
            return dword_B3990;
          }
        }
        else
        {
          strcpy(v2, "open gpio461 failed\n");
          sub_3B6AC(0, v2, 0, (int)v2);
          return dword_B398C;
        }
      }
      else
      {
        strcpy(v2, "open gpio459 failed\n");
        sub_3B6AC(0, v2, 0, (int)v2);
        return dword_B3988;
      }
    }
  }
}
