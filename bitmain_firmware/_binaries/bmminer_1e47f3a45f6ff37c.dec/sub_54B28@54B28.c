int __fastcall sub_54B28(int a1, unsigned int a2)
{
  int v3; // r3
  unsigned int v5; // [sp+0h] [bp-894h]
  char v6[2048]; // [sp+Ch] [bp-888h] BYREF
  char s[128]; // [sp+80Ch] [bp-88h] BYREF
  int v8; // [sp+88Ch] [bp-8h]

  v8 = -5;
  if ( a1 - 1 <= 1 )
  {
    if ( a1 == 1 )
    {
      v3 = a2;
      if ( a2 >= 0x64 )
        v3 = 100;
      dword_535ECC = v3;
      v5 = 100000 * v3 / 0x64u;
      sprintf(s, "echo 0 > %s/enable", "/sys/class/pwm/pwmchip8/pwm0");
      system(s);
      sprintf(s, "echo %u > %s/period", 100000, "/sys/class/pwm/pwmchip8/pwm0");
      system(s);
      sprintf(s, "echo %u > %s/duty_cycle", v5, "/sys/class/pwm/pwmchip8/pwm0");
      system(s);
      sprintf(s, "echo 1 > %s/enable", "/sys/class/pwm/pwmchip8/pwm0");
      system(s);
      sprintf(s, "echo 0 > %s/enable", "/sys/class/pwm/pwmchip8/pwm1");
      system(s);
      sprintf(s, "echo %u > %s/period", 100000, "/sys/class/pwm/pwmchip8/pwm1");
      system(s);
      sprintf(s, "echo %u > %s/duty_cycle", v5, "/sys/class/pwm/pwmchip8/pwm1");
      system(s);
      sprintf(s, "echo 1 > %s/enable", "/sys/class/pwm/pwmchip8/pwm1");
      system(s);
      return 0;
    }
    else
    {
      snprintf(v6, 0x800u, "pwm type %d not supported\n", a1 - 1);
      sub_3B6AC(0, v6, 0, (int)v6);
    }
    return v8;
  }
  else
  {
    strcpy(v6, "bad param\n");
    sub_3B6AC(0, v6, 0, (int)v6);
    return -3;
  }
}
