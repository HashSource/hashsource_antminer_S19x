int __fastcall sub_6E690(int a1, _BYTE *a2)
{
  int v4; // r4
  int v5; // r0
  int v6; // r5
  char nptr[4]; // [sp+4h] [bp-848h] BYREF
  char s[64]; // [sp+8h] [bp-844h] BYREF
  char v10[2052]; // [sp+48h] [bp-804h] BYREF

  *(_DWORD *)nptr = 0;
  if ( pthread_mutex_lock(&stru_65DFA8) )
  {
    v4 = -1;
    strcpy(v10, "failed to api lock\n");
    nullsub_8();
  }
  else
  {
    v4 = 0;
    snprintf(s, 0x40u, "/sys/class/gpio/gpio%d/value", a1);
    v5 = open(s, 0);
    v6 = v5;
    if ( v5 < 0 )
    {
      snprintf(v10, 0x800u, "Failed to open gpio %d value for reading!\n", a1);
      v4 = -2;
      nullsub_8();
      pthread_mutex_unlock(&stru_65DFA8);
    }
    else if ( read(v5, nptr, 4u) < 0 )
    {
      strcpy(v10, "Failed to read value!\n");
      v4 = -3;
      nullsub_8();
      close(v6);
      pthread_mutex_unlock(&stru_65DFA8);
    }
    else
    {
      close(v6);
      pthread_mutex_unlock(&stru_65DFA8);
      *a2 = strtol(nptr, 0, 10);
    }
  }
  return v4;
}
