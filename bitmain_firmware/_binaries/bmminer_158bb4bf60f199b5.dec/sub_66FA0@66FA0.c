int __fastcall sub_66FA0(int a1, int a2)
{
  int v4; // r0
  size_t v5; // r2
  int v6; // r7
  bool v7; // zf
  const char *v8; // r4
  char s[64]; // [sp+8h] [bp-844h] BYREF
  char v11[2052]; // [sp+48h] [bp-804h] BYREF

  if ( pthread_mutex_lock(&stru_1B0E98) )
  {
    strcpy(v11, "failed to api lock\n");
    sub_47AB4(0, v11, 0);
    return -1;
  }
  else
  {
    snprintf(s, 0x40u, "/sys/class/gpio/gpio%d/direction", a1);
    v4 = open64(s, 1);
    v6 = v4;
    if ( v4 < 0 )
    {
      snprintf(v11, 0x800u, "Failed to open gpio %d direction for writing!\n", a1);
      sub_47AB4(0, v11, 0);
      pthread_mutex_unlock(&stru_1B0E98);
      return -2;
    }
    else
    {
      v7 = a2 == 0;
      if ( !a2 )
        v5 = 2;
      v8 = "out";
      if ( v7 )
        v8 = "in";
      else
        v5 = 3;
      if ( write(v4, v8, v5) < 0 )
      {
        snprintf(v11, 0x800u, "Failed to set gpio %d direction %s !\n", a1, v8);
        sub_47AB4(0, v11, 0);
        close(v6);
        pthread_mutex_unlock(&stru_1B0E98);
        return -3;
      }
      else
      {
        close(v6);
        pthread_mutex_unlock(&stru_1B0E98);
        return 0;
      }
    }
  }
}
