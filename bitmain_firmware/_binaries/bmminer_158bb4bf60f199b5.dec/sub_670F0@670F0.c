int __fastcall sub_670F0(int a1, _BYTE *a2)
{
  int v4; // r4
  int v5; // r0
  int v6; // r5
  int buf; // [sp+Ch] [bp-848h] BYREF
  char s[64]; // [sp+10h] [bp-844h] BYREF
  char v10[2052]; // [sp+50h] [bp-804h] BYREF

  buf = 0;
  v4 = pthread_mutex_lock(&stru_1B0E98);
  if ( v4 )
  {
    v4 = -1;
    strcpy(v10, "failed to api lock\n");
    sub_47AB4(0, v10, 0);
  }
  else
  {
    snprintf(s, 0x40u, "/sys/class/gpio/gpio%d/value", a1);
    v5 = open64(s, 0);
    v6 = v5;
    if ( v5 < 0 )
    {
      snprintf(v10, 0x800u, "Failed to open gpio %d value for reading!\n", a1);
      v4 = -2;
      sub_47AB4(0, v10, 0);
      pthread_mutex_unlock(&stru_1B0E98);
    }
    else if ( read(v5, &buf, 4u) < 0 )
    {
      strcpy(v10, "Failed to read value!\n");
      v4 = -3;
      sub_47AB4(0, v10, 0);
      close(v6);
      pthread_mutex_unlock(&stru_1B0E98);
    }
    else
    {
      close(v6);
      pthread_mutex_unlock(&stru_1B0E98);
      *a2 = strtol((const char *)&buf, 0, 10);
    }
  }
  return v4;
}
